/*This file is part of FFB Arcade Plugin GUI.
FFB Arcade Plugin GUI is free software : you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
FFB Arcade Plugin GUI is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with FFB Arcade Plugin GUI.If not, see < https://www.gnu.org/licenses/>.
*/

#pragma once
#include <Windows.h>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <vector>
#include "SDL.h"

static bool inputSelectDone = true;
static std::vector<std::string> inputSelectParamList2;

static DWORD WINAPI InputSelectButtonThread(LPVOID lpParam)
{
	inputSelectDone = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (inputSelectDone))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button >= 0)
				{
					std::string param = *static_cast<std::string*>(lpParam);
					System::String^ sparam = gcnew System::String(param.c_str());
					msclr::interop::marshal_context context;
					LPCSTR pparam = context.marshal_as<const CHAR*>(sparam);

					char buff[100];
					sprintf_s(buff, "%d", e1.jbutton.button);
					WritePrivateProfileStringA("Settings", pparam, buff, ".\\FFBPlugin.ini");

					inputSelectDone = false;
				}
			}
		}
	}
	return 0;
}

static DWORD WINAPI InputSelectAxisThread(LPVOID lpParam)
{
	inputSelectDone = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (inputSelectDone))
		{
			if (e1.jaxis.value < -SETUP_DEAD_ZONE || e1.jaxis.value > SETUP_DEAD_ZONE)
			{
				std::string param = *static_cast<std::string*>(lpParam);
				System::String^ sparam = gcnew System::String(param.c_str());
				msclr::interop::marshal_context context;
				LPCSTR pparam = context.marshal_as<const CHAR*>(sparam);

				char buff[100];
				sprintf_s(buff, "%d", e1.jaxis.axis);
				WritePrivateProfileStringA("Settings", pparam, buff, ".\\FFBPlugin.ini");

				inputSelectDone = false;
			}
		}
	}
	return 0;
}

namespace FFBPluginGUI {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace MetroFramework::Controls;

	public ref class Helper : MetroFramework::Forms::MetroForm
	{
	protected:
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Timer^ inputSelectTimer = gcnew System::Windows::Forms::Timer();
		MetroForm^ obj;
		MetroLink^ backLink = gcnew MetroLink();
		MetroFramework::Components::MetroToolTip^ toolTip = gcnew MetroFramework::Components::MetroToolTip();
		MetroComboBox^ device1SelectorComboBox = gcnew MetroComboBox();
		MetroComboBox^ device2SelectorComboBox = gcnew MetroComboBox();
		MetroComboBox^ device3SelectorComboBox = gcnew MetroComboBox();
		MetroComboBox^ device4SelectorComboBox = gcnew MetroComboBox();
		List<MetroTrackBar^>^ trackBarList = gcnew List<MetroTrackBar^>();
		List<String^>^ trackBarParamList = gcnew List<String^>();
		List<MetroLabel^>^ trackBarLabelList = gcnew List<MetroLabel^>();
		List<MetroCheckBox^>^ checkBoxList = gcnew List<MetroCheckBox^>();
		List<String^>^ checkBoxParamList = gcnew List<String^>();
		List<MetroComboBox^>^ comboBoxList = gcnew List<MetroComboBox^>();
		List<String^>^ comboBoxParamList = gcnew List<String^>();
		List<String^>^ comboBoxValueList = gcnew List<String^>();
		List<MetroLink^>^ inputSelectLinkList = gcnew List<MetroLink^>();
		List<MetroLabel^>^ inputSelectLabelList = gcnew List<MetroLabel^>();
		List<String^>^ inputSelectParamList = gcnew List<String^>();
		List<String^>^ inputSelectTypeList = gcnew List<String^>();
		const int page1ColWidth = 165;
		const int page2ColsWidth = 320;
		bool is1ColPage = false;
		int wIndowsWidth = this->page2ColsWidth;
		const int margin = 10;
		const int minPosY = 37;
		int maxPosY = 0;
		int leftColX = this->margin;
		int rightColX = 165;
		const int shortWidth = 145;
		const int longWidth = 300;
		const int textBoxHeight = 20;
		const int textBoxOuterHeight = 26;
		const int trackBarHeight = 20;
		const int trackBarOuterHeight = 20;
		const int trackBarLabelOuterHeight = 26;
		const int checkBoxHeight = 15;
		const int checkBoxOuterHeight = 21;
		const int comboBoxHeight = 29;
		const int comboBoxOuterHeight = 37;
		const int inputSelectOuterHeight = 29;
		int leftColPosY = this->minPosY;
		int rightColPosY = this->minPosY;
		bool nextItemOnRightCol = false;
		String^ lastItemType = "";
		int tabIndex = 0;

	public:
		Helper(void)
		{
		}

	protected:
		~Helper()
		{
			if (components)
			{
				delete components;
			}
		}

		void Init(void)
		{
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Helper::Form_FormClosing);

			this->backLink->Location = System::Drawing::Point((this->wIndowsWidth - 173) / 2, 8);
			this->backLink->Name = L"";
			this->backLink->Size = System::Drawing::Size(173, 23);
			this->backLink->TabStop = false;
			this->backLink->Text = L"Go Back To Previous Menu";
			this->backLink->UseSelectable = false;
			this->backLink->Click += gcnew System::EventHandler(this, &Helper::BackLink_Click);
			this->Controls->Add(this->backLink);

			this->toolTip->Style = MetroFramework::MetroColorStyle::Blue;
			this->toolTip->StyleManager = nullptr;
			this->toolTip->Theme = MetroFramework::MetroThemeStyle::Light;

			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(this->wIndowsWidth, this->leftColPosY > this->maxPosY ? this->leftColPosY : this->maxPosY);
			this->MaximizeBox = false;
			this->ShowIcon = false;
			this->Name = L"Settings";
			this->Padding = System::Windows::Forms::Padding(0, 60, 0, 0);
			this->Resizable = false;
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		Void Form_FormClosing(Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
		{
			if (e->CloseReason == System::Windows::Forms::CloseReason::UserClosing)
			{
				SDL_Quit();
				System::Windows::Forms::Application::Exit();
			}
		}
		   
		Void BackLink_Click(Object^ sender, EventArgs^ e)
		{
			this->Hide();
			this->obj->Show();
		}

		String^ GetIniValue(String^ param)
		{
			msclr::interop::marshal_context context;
			LPCSTR pparam = context.marshal_as<const CHAR*>(param);

			char buff[300];
			GetPrivateProfileStringA("Settings", pparam, "", buff, _countof(buff), ".\\FFBPlugin.ini");
			return gcnew String(buff);
		}

		int GetIniValueInt(String^ param)
		{
			msclr::interop::marshal_context context;
			LPCSTR pparam = context.marshal_as<const CHAR*>(param);

			return GetPrivateProfileIntA("Settings", pparam, 0, ".\\FFBPlugin.ini");
		}

		Void SetIniValue(String^ param, String^ value)
		{
			msclr::interop::marshal_context context;
			LPCSTR pparam = context.marshal_as<const CHAR*>(param);
			LPCSTR pvalue = context.marshal_as<const CHAR*>(value);

			WritePrivateProfileStringA("Settings", pparam, pvalue, ".\\FFBPlugin.ini");
		}

		Void New1ColPage()
		{
			if (this->leftColPosY > this->maxPosY)
			{
				this->maxPosY = this->leftColPosY;
			}
			this->leftColPosY = this->minPosY;
			this->rightColPosY = this->minPosY;
			this->leftColX += this->is1ColPage ? this->page1ColWidth : this->page2ColsWidth;
			this->rightColX += this->is1ColPage ? this->page1ColWidth : this->page2ColsWidth;
			this->wIndowsWidth += this->page1ColWidth;
			this->lastItemType = "";
			this->is1ColPage = true;
		}

		Void New2ColsPage()
		{
			if (this->leftColPosY > this->maxPosY)
			{
				this->maxPosY = this->leftColPosY;
			}
			this->leftColPosY = this->minPosY;
			this->rightColPosY = this->minPosY;
			this->leftColX += this->is1ColPage ? this->page1ColWidth : this->page2ColsWidth;
			this->rightColX += this->is1ColPage ? this->page1ColWidth : this->page2ColsWidth;
			this->wIndowsWidth += this->page2ColsWidth;
			this->lastItemType = "";
			this->is1ColPage = false;
		}

		Void AddSpace()
		{
			this->leftColPosY += 12;
		}

		Void AutoAddComponent(String^ component)
		{
			if (component == "FeedbackLength")
			{
				this->AutoAddLongTrackBarBlock("FeedbackLength", L"Feedback Length", 16, 1000, L"Length of a feedback command");
			}
			else if (component == "OptionsHeader")
			{
				this->AutoAddLongTextBox(L"Options", L"");
			}
			else if (component == "FFBorRumble")
			{
				this->AutoAddLongComboBoxBlock("FFBorRumble","",L"Force Feedback or Rumble",L"Force Feedback|Rumble",L"Use Force Feedback for wheel or Rumble for controller");
			}
			else if (component == "ReverseRumble")
			{
				this->AutoAddShortCheckBox("ReverseRumble", L"Reverse Rumble", L"Reverse the rumble motors if rumble enabled");
			}
			else if (component == "Logging")
			{
				this->AutoAddShortCheckBox("Logging", L"Enable Logging", L"Enable or disable FFBlog.txt to collect log data");
			}
			else if (component == "BeepWhenHook")
			{
				this->AutoAddShortCheckBox("BeepWhenHook", L"Beep When Hook", L"Beep will occur when FFBPlugin hooks application");
			}
			else if (component == "ForceShowDeviceGUIDMessageBox")
			{
				this->AutoAddShortCheckBox("ForceShowDeviceGUIDMessageBox", L"GUID MessageBox", L"Messagebox will appear when launching application to show guid number");
			}
			else if (component == "AlternativeFFB")
			{
				this->AutoAddShortCheckBox("AlternativeFFB", L"Alternative FFB", L"Use if wheel rotates incorrectly");
			}
			else if (component == "FFBMode")
			{
				this->AutoAddShortCheckBox("FFBMode", L"FFB Mode", L"Enable to raise strength of low effects");
			}
			else if (component == "CommonOptions")
			{
				this->AutoAddComponent("OptionsHeader");
				this->AutoAddComponent("FFBorRumble");
				this->AutoAddComponent("ReverseRumble");
				this->AutoAddComponent("Logging");
				this->AutoAddComponent("BeepWhenHook");
				this->AutoAddComponent("ForceShowDeviceGUIDMessageBox");
			}
			else if (component == "GlobalForceHeader")
			{
				this->AutoAddLongTextBox(L"Global Force", L"Global FFB force which affects all effects");
			}
			else if (component == "MinForce")
			{
				this->AutoAddShortTrackBarBlock("MinForce", L"Min Force", 0, 100, L"Minimum overrall force strength that will be applied to device");
			}
			else if (component == "MaxForce")
			{
				this->AutoAddShortTrackBarBlock("MaxForce", L"Max Force", 0, 100, L"Maximum overrall force strength that will be applied to device");
			}
			else if (component == "GlobalForce")
			{
				this->AutoAddComponent("GlobalForceHeader");
				this->AutoAddComponent("MinForce");
				this->AutoAddComponent("MaxForce");
			}
			else if (component == "AltGlobalForceHeader")
			{
				this->AutoAddLongTextBox(L"Global Force For Alternative FFB", L"Global FFB force if using Alternative FFB");
			}
			else if (component == "AlternativeMinForceLeft")
			{
				this->AutoAddShortTrackBarBlock("AlternativeMinForceLeft", L"Min Force Left", -100, 100, L"Minimum overrall left force strength that will be applied to device");
			}
			else if (component == "AlternativeMaxForceLeft")
			{
				this->AutoAddShortTrackBarBlock("AlternativeMaxForceLeft", L"Max Force Left", -100, 100, L"Maximum overrall left force strength that will be applied to device");
			}
			else if (component == "AlternativeMinForceRight")
			{
				this->AutoAddShortTrackBarBlock("AlternativeMinForceRight", L"Min Force Right", -100, 100, L"Minimum overrall right force strength that will be applied to device");
			}
			else if (component == "AlternativeMaxForceRight")
			{
				this->AutoAddShortTrackBarBlock("AlternativeMaxForceRight", L"Max Force Right", -100, 100, L"Maximum overrall right force strength that will be applied to device");
			}
			else if (component == "AltGlobalForce")
			{
				this->AutoAddComponent("AltGlobalForceHeader");
				this->AutoAddComponent("AlternativeMinForceLeft");
				this->AutoAddComponent("AlternativeMaxForceLeft");
				this->AutoAddComponent("AlternativeMinForceRight");
				this->AutoAddComponent("AlternativeMaxForceRight");
			}
		}

		Void AddDeviceSelector(int device, String^ param, String^ text, String^ tooltîp, MetroComboBox^ comboBox, int locY)
		{
			this->AddTextBox(text, this->leftColX, locY, this->longWidth, this->textBoxHeight, tooltîp);
			locY += this->textBoxOuterHeight;
			for (int i = 0; i < SDL_NumJoysticks(); i++)
			{
				SDL_Joystick* js1 = SDL_JoystickOpen(i);
				String^ bah1 = gcnew String(SDL_JoystickName(js1));
				comboBox->Text = this->GetIniValue(param);
				comboBox->Items->Add(bah1);
			}
			if (SDL_NumJoysticks() == 0)
			{
				comboBox->Text = "SDL2 Cannot Detect Any Joystick";
			}
			comboBox->FormattingEnabled = true;
			comboBox->ItemHeight = 23;
			comboBox->Location = System::Drawing::Point(this->leftColX, locY);
			comboBox->Name = L"";
			comboBox->Items->Add("Select no device");
			comboBox->Size = System::Drawing::Size(this->longWidth, 29);
			comboBox->TabIndex = this->tabIndex++;
			comboBox->TabStop = false;
			comboBox->UseSelectable = false;

			switch (device)
			{
				case 1: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::Device1Selector_SelectedIndexChanged); break;
				case 2: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::Device2Selector_SelectedIndexChanged); break;
				case 3: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::Device3Selector_SelectedIndexChanged); break;
				case 4: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::Device4Selector_SelectedIndexChanged); break;
			}

			this->Controls->Add(comboBox);

			this->leftColPosY = this->rightColPosY = locY + 35;
		}
		Void AddDevice1Selector(int locY)
		{
			this->AddDeviceSelector(1, "DeviceGUID", L"Device GUID", L"Device GUID FFBPlugin will use to apply forces to device 1", this->device1SelectorComboBox, locY);
		}
		Void AddDevice2Selector(int locY)
		{
			this->AddDeviceSelector(2, "Device2GUID", L"Device 2 GUID", L"Device GUID FFBPlugin will use to apply forces to device 2", this->device2SelectorComboBox, locY);
		}
		Void AddDevice3Selector(int locY)
		{
			this->AddDeviceSelector(3, "Device3GUID", L"Device 3 GUID", L"Device GUID FFBPlugin will use to apply forces to device 3", this->device3SelectorComboBox, locY);
		}
		Void AddDevice4Selector(int locY)
		{
			this->AddDeviceSelector(4, "Device4GUID", L"Device 4 GUID", L"Device GUID FFBPlugin will use to apply forces to device 4", this->device4SelectorComboBox, locY);
		}
		Void AutoAddDevice1Selector()
		{
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddDevice1Selector(locY);
		}
		Void AutoAddDevice2Selector()
		{
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddDevice2Selector(locY);
		}
		Void AutoAddDevice3Selector()
		{
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddDevice3Selector(locY);
		}
		Void AutoAddDevice4Selector()
		{
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddDevice4Selector(locY);
		}

		Void DeviceSelector_SelectedIndexChanged(Object^ sender, EventArgs^ e, String^ param, MetroComboBox^ comboBox)
		{
			if (comboBox->SelectedItem == "Select no device")
			{
				this->SetIniValue(param, "");
				comboBox->Text = "";
			}
			else
			{
				SDL_Joystick* js = SDL_JoystickOpen(comboBox->SelectedIndex);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				comboBox->Text = str;
				{
					this->SetIniValue(param, str);
				}
			}
		}
		Void Device1Selector_SelectedIndexChanged(Object^ sender, EventArgs^ e)
		{
			this->DeviceSelector_SelectedIndexChanged(sender, e, "DeviceGUID", this->device1SelectorComboBox);
		}
		Void Device2Selector_SelectedIndexChanged(Object^ sender, EventArgs^ e)
		{
			this->DeviceSelector_SelectedIndexChanged(sender, e, "Device2GUID", this->device2SelectorComboBox);
		}
		Void Device3Selector_SelectedIndexChanged(Object^ sender, EventArgs^ e)
		{
			this->DeviceSelector_SelectedIndexChanged(sender, e, "Device3GUID", this->device3SelectorComboBox);
		}
		Void Device4Selector_SelectedIndexChanged(Object^ sender, EventArgs^ e)
		{
			this->DeviceSelector_SelectedIndexChanged(sender, e, "Device4GUID", this->device4SelectorComboBox);
		}

		Void AddTextBox(String^ text, int locX, int locY, int width, int height, /*int buttonLocX, int buttonLocY, int buttonWidth, int buttonHeight,*/ String^ tooltip)
		{
			MetroTextBox^ textBox = gcnew MetroTextBox();
			// Doesn't seem useful
			/*textBox->CustomButton->Image = nullptr;
			textBox->CustomButton->Location = System::Drawing::Point(buttonLocX, buttonLocY);
			textBox->CustomButton->Name = L"";
			textBox->CustomButton->Size = System::Drawing::Size(buttonWidth, buttonHeight);
			textBox->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			textBox->CustomButton->TabIndex = 1;
			textBox->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			textBox->CustomButton->UseSelectable = false;
			textBox->CustomButton->Visible = false;*/
			textBox->Lines = gcnew cli::array< String^  >(1) { text };
			textBox->Location = System::Drawing::Point(locX, locY);
			textBox->MaxLength = 32767;
			textBox->Name = L"";
			textBox->PasswordChar = '\0';
			textBox->ReadOnly = true;
			textBox->ScrollBars = System::Windows::Forms::ScrollBars::None;
			textBox->SelectedText = L"";
			textBox->SelectionLength = 0;
			textBox->SelectionStart = 0;
			textBox->ShortcutsEnabled = true;
			textBox->Size = System::Drawing::Size(width, height);
			//textBox->TabIndex = 15;
			textBox->TabStop = false;
			textBox->Text = text;
			textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			textBox->UseSelectable = false;
			textBox->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			textBox->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));

			this->Controls->Add(textBox);

			if (tooltip != "")
			{
				this->toolTip->SetToolTip(textBox, tooltip);
			}

			this->lastItemType = "TextBox";
			this->nextItemOnRightCol = false;
		}
		Void AddLongTextBox(String^ text, int locY, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AddShortTextBoxOnLeftCol(text, locY, tooltip);
			}

			this->AddTextBox(text, this->leftColX, locY, this->longWidth, this->textBoxHeight, tooltip);

			this->leftColPosY = this->rightColPosY = locY + this->textBoxOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AddShortTextBoxOnLeftCol(String^ text, int locY, String^ tooltip)
		{
			this->AddTextBox(text, this->leftColX, locY, this->shortWidth, this->textBoxHeight, tooltip);

			this->rightColPosY = locY;
			this->leftColPosY = locY + this->textBoxOuterHeight;
			this->nextItemOnRightCol = true;
		}
		Void AddShortTextBoxOnRightCol(String^ text, int locY, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AddShortTextBoxOnLeftCol(text, locY, tooltip);
			}

			this->AddTextBox(text, this->rightColX, locY, this->shortWidth, this->textBoxHeight, tooltip);

			this->rightColPosY = locY + this->textBoxOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AutoAddLongTextBox(String^ text, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AutoAddShortTextBoxOnLeftCol(text, tooltip);
			}

			if (this->lastItemType != "" && this->lastItemType != "TextBox" && this->lastItemType != "ComboBox")
			{
				this->leftColPosY += 12;
			}
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddLongTextBox(text, locY, tooltip);
		}
		Void AutoAddShortTextBoxOnLeftCol(String^ text, String^ tooltip)
		{
			if (this->lastItemType != "" && this->lastItemType != "TextBox" && this->lastItemType != "ComboBox")
			{
				this->leftColPosY += 12;
			}
			this->AddShortTextBoxOnLeftCol(text, this->leftColPosY, tooltip);
		}
		Void AutoAddShortTextBoxOnRightCol(String^ text, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AutoAddShortTextBoxOnLeftCol(text, tooltip);
			}

			this->AddShortTextBoxOnRightCol(text, this->rightColPosY, tooltip);
		}
		Void AutoAddShortTextBox(String^ text, String^ tooltip)
		{
			if (this->nextItemOnRightCol && this->lastItemType == "TextBox")
			{
				this->AutoAddShortTextBoxOnRightCol(text, tooltip);
			}
			else
			{
				this->AutoAddShortTextBoxOnLeftCol(text, tooltip);
			}
		}

		Void AddTrackBar(String^ param, int locX, int locY, int width, int height, int min, int max)
		{
			MetroTrackBar^ trackBar = gcnew MetroTrackBar();

			int value = this->GetIniValueInt(param);
			if (!(value >= min && value <= max))
			{
				value = min;
			}
			trackBar->BackColor = System::Drawing::Color::Transparent;
			trackBar->Location = System::Drawing::Point(locX, locY);
			trackBar->Name = L"";
			trackBar->Size = System::Drawing::Size(width, height);
			trackBar->Maximum = max;
			trackBar->Minimum = min;
			trackBar->LargeChange = 10;
			//trackBar->MouseWheelBarPartitions = 10;
			trackBar->TabIndex = this->tabIndex++;
			trackBar->TabStop = false;
			trackBar->Text = L"";
			trackBar->Value = value;

			this->trackBarList->Add(trackBar);
			this->trackBarParamList->Add(param);
			this->trackBarLabelList->Add(gcnew MetroLabel());

			int i = this->trackBarList->Count - 1;

			// It's ugly but I don't know how to make dynamic calls to member functions
			switch (i)
			{
				case 0: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar0_ValueChanged); break;
				case 1: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar1_ValueChanged); break;
				case 2: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar2_ValueChanged); break;
				case 3: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar3_ValueChanged); break;
				case 4: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar4_ValueChanged); break;
				case 5: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar5_ValueChanged); break;
				case 6: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar6_ValueChanged); break;
				case 7: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar7_ValueChanged); break;
				case 8: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar8_ValueChanged); break;
				case 9: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar9_ValueChanged); break;
				case 10: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar10_ValueChanged); break;
				case 11: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar11_ValueChanged); break;
				case 12: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar12_ValueChanged); break;
				case 13: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar13_ValueChanged); break;
				case 14: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar14_ValueChanged); break;
				case 15: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar15_ValueChanged); break;
				case 16: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar16_ValueChanged); break;
				case 17: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar17_ValueChanged); break;
				case 18: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar18_ValueChanged); break;
				case 19: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar19_ValueChanged); break;
				case 20: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar20_ValueChanged); break;
				case 21: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar21_ValueChanged); break;
				case 22: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar22_ValueChanged); break;
				case 23: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar23_ValueChanged); break;
				case 24: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar24_ValueChanged); break;
				case 25: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar25_ValueChanged); break;
				case 26: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar26_ValueChanged); break;
				case 27: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar27_ValueChanged); break;
				case 28: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar28_ValueChanged); break;
				case 29: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::TrackBar29_ValueChanged); break;
			}

			this->Controls->Add(trackBar);

			this->lastItemType = "TrackBar";
			this->nextItemOnRightCol = false;
		}

		Void AddTrackBarLabel(String^ param, int locX, int locY, int width, int height)
		{
			int i = this->trackBarList->Count - 1;

			MetroLabel^ label = this->trackBarLabelList[i];

			int value = this->GetIniValueInt(param);
			label->AutoSize = false;
			label->Location = System::Drawing::Point(locX, locY);
			label->Name = L"";
			label->Size = System::Drawing::Size(width, height);
			//label->TabIndex = 42;
			label->TabStop = false;
			label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			label->Text = System::Convert::ToString(value);

			this->trackBarLabelList[i] = label;
			this->Controls->Add(label);
		}

		Void AddTrackBarWithLabel(String^ param, int locX, int locY, int width, int height, int min, int max)
		{
			this->AddTrackBar(param, locX, locY, width, height, min, max);
			this->AddTrackBarLabel(param, locX, locY + this->trackBarOuterHeight, width, 19);
		}
		Void AddTrackBarBlock(String^ param, String^ text, int locX, int locY, int width, int min, int max, String^ tooltip)
		{
			this->AddTextBox(text, locX, locY, width, this->textBoxHeight, tooltip);
			this->AddTrackBarWithLabel(param, locX, locY + this->textBoxOuterHeight, width, this->trackBarHeight, min, max);
		}
		Void AddLongTrackBarBlock(String^ param, String^ text, int locY, int min, int max, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AddShortTrackBarBlockOnLeftCol(param, text, locY, min, max, tooltip);
			}

			this->AddTrackBarBlock(param, text, this->leftColX, locY, this->longWidth, min, max, tooltip);

			this->leftColPosY = this->rightColPosY = locY + this->textBoxOuterHeight + this->trackBarOuterHeight + this->trackBarLabelOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AddShortTrackBarBlockOnLeftCol(String^ param, String^ text, int locY, int min, int max, String^ tooltip)
		{
			this->AddTrackBarBlock(param, text, this->leftColX, locY, this->shortWidth, min, max, tooltip);

			this->rightColPosY = locY;
			this->leftColPosY = locY + this->textBoxOuterHeight + this->trackBarOuterHeight + this->trackBarLabelOuterHeight;
			this->nextItemOnRightCol = true;
		}
		Void AddShortTrackBarBlockOnRightCol(String^ param, String^ text, int locY, int min, int max, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AddShortTrackBarBlockOnLeftCol(param, text, locY, min, max, tooltip);
			}

			this->AddTrackBarBlock(param, text, this->rightColX, locY, this->shortWidth, min, max, tooltip);

			this->rightColPosY = locY + this->textBoxOuterHeight + this->trackBarOuterHeight + this->trackBarLabelOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AutoAddLongTrackBarBlock(String^ param, String^ text, int min, int max, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AutoAddShortTrackBarBlockOnLeftCol(param, text, min, max, tooltip);
			}

			if (this->lastItemType != "" && this->lastItemType != "TrackBar" && this->lastItemType != "ComboBox" && this->lastItemType != "TextBox")
			{
				this->leftColPosY += 12;
			}
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddLongTrackBarBlock(param, text, locY, min, max, tooltip);
		}
		Void AutoAddShortTrackBarBlockOnLeftCol(String^ param, String^ text, int min, int max, String^ tooltip)
		{
			if (this->lastItemType != "" && this->lastItemType != "TrackBar" && this->lastItemType != "ComboBox" && this->lastItemType != "TextBox")
			{
				this->leftColPosY += 12;
			}
			this->AddShortTrackBarBlockOnLeftCol(param, text, this->leftColPosY, min, max, tooltip);
		}
		Void AutoAddShortTrackBarBlockOnRightCol(String^ param, String^ text, int min, int max, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AutoAddShortTrackBarBlockOnLeftCol(param, text, min, max, tooltip);
			}

			this->AddShortTrackBarBlockOnRightCol(param, text, this->rightColPosY, min, max, tooltip);
		}
		Void AutoAddShortTrackBarBlock(String^ param, String^ text, int min, int max, String^ tooltip)
		{
			if (this->nextItemOnRightCol && this->lastItemType == "TrackBar")
			{
				this->AutoAddShortTrackBarBlockOnRightCol(param, text, min, max, tooltip);
			}
			else
			{
				this->AutoAddShortTrackBarBlockOnLeftCol(param, text, min, max, tooltip);
			}
		}

		Void TrackBar_ValueChanged(Object^ sender, EventArgs^ e, int index)
		{
			int value = this->trackBarList[index]->Value;
			this->trackBarLabelList[index]->Text = System::Convert::ToString(value);
			{
				this->SetIniValue(this->trackBarParamList[index], System::Convert::ToString(value));
			}
		}
		Void TrackBar0_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 0); }
		Void TrackBar1_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 1); }
		Void TrackBar2_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 2); }
		Void TrackBar3_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 3); }
		Void TrackBar4_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 4); }
		Void TrackBar5_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 5); }
		Void TrackBar6_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 6); }
		Void TrackBar7_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 7); }
		Void TrackBar8_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 8); }
		Void TrackBar9_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 9); }
		Void TrackBar10_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 10); }
		Void TrackBar11_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 11); }
		Void TrackBar12_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 12); }
		Void TrackBar13_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 13); }
		Void TrackBar14_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 14); }
		Void TrackBar15_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 15); }
		Void TrackBar16_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 16); }
		Void TrackBar17_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 17); }
		Void TrackBar18_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 18); }
		Void TrackBar19_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 19); }
		Void TrackBar20_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 20); }
		Void TrackBar21_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 21); }
		Void TrackBar22_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 22); }
		Void TrackBar23_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 23); }
		Void TrackBar24_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 24); }
		Void TrackBar25_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 25); }
		Void TrackBar26_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 26); }
		Void TrackBar27_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 27); }
		Void TrackBar28_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 28); }
		Void TrackBar29_ValueChanged(Object^ sender, EventArgs^ e) { this->TrackBar_ValueChanged(sender, e, 29); }

		Void AddCheckBox(String^ param, String^ text, int locX, int locY, int width, int height, String^ tooltip)
		{
			MetroCheckBox^ checkBox = gcnew MetroCheckBox();

			int value = this->GetIniValueInt(param);
			checkBox->AutoSize = true;
			checkBox->Location = System::Drawing::Point(locX, locY);
			checkBox->Name = "";
			checkBox->Size = System::Drawing::Size(width, height);
			checkBox->TabIndex = this->tabIndex++;
			checkBox->TabStop = false;
			checkBox->Text = text;
			checkBox->UseSelectable = false;
			checkBox->Checked = value;

			this->checkBoxList->Add(checkBox);
			this->checkBoxParamList->Add(param);

			int i = this->checkBoxList->Count - 1;

			// It's ugly but I don't know how to make dynamic calls to member functions
			switch (i)
			{
				case 0: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox0_CheckedChanged); break;
				case 1: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox1_CheckedChanged); break;
				case 2: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox2_CheckedChanged); break;
				case 3: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox3_CheckedChanged); break;
				case 4: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox4_CheckedChanged); break;
				case 5: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox5_CheckedChanged); break;
				case 6: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox6_CheckedChanged); break;
				case 7: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox7_CheckedChanged); break;
				case 8: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox8_CheckedChanged); break;
				case 9: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox9_CheckedChanged); break;
				case 10: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox10_CheckedChanged); break;
				case 11: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox11_CheckedChanged); break;
				case 12: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox12_CheckedChanged); break;
				case 13: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox13_CheckedChanged); break;
				case 14: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox14_CheckedChanged); break;
				case 15: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox15_CheckedChanged); break;
				case 16: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox16_CheckedChanged); break;
				case 17: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox17_CheckedChanged); break;
				case 18: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox18_CheckedChanged); break;
				case 19: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox19_CheckedChanged); break;
				case 20: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox20_CheckedChanged); break;
				case 21: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox21_CheckedChanged); break;
				case 22: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox22_CheckedChanged); break;
				case 23: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox23_CheckedChanged); break;
				case 24: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox24_CheckedChanged); break;
				case 25: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox25_CheckedChanged); break;
				case 26: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox26_CheckedChanged); break;
				case 27: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox27_CheckedChanged); break;
				case 28: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox28_CheckedChanged); break;
				case 29: checkBox->CheckedChanged += gcnew System::EventHandler(this, &Helper::CheckBox29_CheckedChanged); break;
			}

			this->Controls->Add(checkBox);

			if (tooltip != "")
			{
				this->toolTip->SetToolTip(checkBox, tooltip);
			}

			this->lastItemType = "CheckBox";
			this->nextItemOnRightCol = false;
		}
		Void AddLongCheckBox(String^ param, String^ text, int locY, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AddShortCheckBoxOnLeftCol(param, text, locY, tooltip);
			}

			this->AddCheckBox(param, text, this->leftColX, locY, this->longWidth, this->checkBoxHeight, tooltip);

			this->leftColPosY = this->rightColPosY = locY + this->checkBoxOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AddShortCheckBoxOnLeftCol(String^ param, String^ text, int locY, String^ tooltip)
		{
			this->AddCheckBox(param, text, this->leftColX, locY, this->shortWidth, this->checkBoxHeight, tooltip);

			this->rightColPosY = locY;
			this->leftColPosY = locY + this->checkBoxOuterHeight;
			this->nextItemOnRightCol = true;
		}
		Void AddShortCheckBoxOnRightCol(String^ param, String^ text, int locY, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AddShortCheckBoxOnLeftCol(param, text, locY, tooltip);
			}

			this->AddCheckBox(param, text, this->rightColX, locY, this->shortWidth, this->checkBoxHeight, tooltip);

			this->rightColPosY = locY + this->checkBoxOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AutoAddLongCheckBox(String^ param, String^ text, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AutoAddShortCheckBoxOnLeftCol(param, text, tooltip);
			}

			if (this->lastItemType != "" && this->lastItemType != "CheckBox" && this->lastItemType != "TextBox")
			{
				this->leftColPosY += 12;
			}
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddLongCheckBox(param, text, locY, tooltip);
		}
		Void AutoAddShortCheckBoxOnLeftCol(String^ param, String^ text, String^ tooltip)
		{
			if (this->lastItemType != "" && this->lastItemType != "CheckBox" && this->lastItemType != "TextBox")
			{
				this->leftColPosY += 12;
			}
			this->AddShortCheckBoxOnLeftCol(param, text, this->leftColPosY, tooltip);
		}
		Void AutoAddShortCheckBoxOnRightCol(String^ param, String^ text, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AutoAddShortCheckBoxOnLeftCol(param, text, tooltip);
			}

			this->AddShortCheckBoxOnRightCol(param, text, this->rightColPosY, tooltip);
		}
		Void AutoAddShortCheckBox(String^ param, String^ text, String^ tooltip)
		{
			if (this->nextItemOnRightCol && this->lastItemType == "CheckBox")
			{
				this->AutoAddShortCheckBoxOnRightCol(param, text, tooltip);
			}
			else
			{
				this->AutoAddShortCheckBoxOnLeftCol(param, text, tooltip);
			}
		}

		Void CheckBox_CheckedChanged(Object^ sender, EventArgs^ e, int index)
		{
			this->SetIniValue(this->checkBoxParamList[index], this->checkBoxList[index]->Checked ? "1" : "0");
		}
		Void CheckBox0_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 0); }
		Void CheckBox1_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 1); }
		Void CheckBox2_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 2); }
		Void CheckBox3_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 3); }
		Void CheckBox4_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 4); }
		Void CheckBox5_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 5); }
		Void CheckBox6_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 6); }
		Void CheckBox7_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 7); }
		Void CheckBox8_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 8); }
		Void CheckBox9_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 9); }
		Void CheckBox10_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 10); }
		Void CheckBox11_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 11); }
		Void CheckBox12_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 12); }
		Void CheckBox13_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 13); }
		Void CheckBox14_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 14); }
		Void CheckBox15_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 15); }
		Void CheckBox16_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 16); }
		Void CheckBox17_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 17); }
		Void CheckBox18_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 18); }
		Void CheckBox19_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 19); }
		Void CheckBox20_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 20); }
		Void CheckBox21_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 21); }
		Void CheckBox22_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 22); }
		Void CheckBox23_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 23); }
		Void CheckBox24_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 24); }
		Void CheckBox25_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 25); }
		Void CheckBox26_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 26); }
		Void CheckBox27_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 27); }
		Void CheckBox28_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 28); }
		Void CheckBox29_CheckedChanged(Object^ sender, EventArgs^ e) { this->CheckBox_CheckedChanged(sender, e, 29); }

		/*
			"params" can contain one param, or a list of params separated by "|", in which case selected param will be set to 1 and other ones to 0
			"values" contains the values saved separated by "|", each value can be empty
			If "values" is empty, the index of the selected choice will be saved
			"choices" contains the list of choices separated by "|"
		*/
		Void AddComboBox(String^ params, String^ values, String^ choices, int locX, int locY, int width, int height)
		{
			MetroComboBox^ comboBox = gcnew MetroComboBox();
			   
			comboBox->FormattingEnabled = true;
			comboBox->ItemHeight = height * 0.8;
			comboBox->Location = System::Drawing::Point(locX, locY);
			comboBox->Name = L"";
			comboBox->Size = System::Drawing::Size(width, height);
			comboBox->TabIndex = this->tabIndex++;
			comboBox->TabStop = false;
			comboBox->UseSelectable = false;

			array<String^>^ choicesArray = choices->Split('|');
			for each (String ^ choice in choicesArray)
			{
				comboBox->Items->Add(choice);
			}

			array<String^>^ paramsArray = params->Split('|');
			if (paramsArray->Length > 1)
			{
				for (int i = 0; i < paramsArray->Length; i++)
				{
					if (this->GetIniValueInt(paramsArray[i]) == 1)
					{
						comboBox->Text = choicesArray[i];
					}
				}
			}
			else
			{
				if (values != "")
				{
					array<String^>^ valuesArray = values->Split('|');
					String^ value = this->GetIniValue(params);
					for (int i = 0; i < valuesArray->Length; i++)
					{
						if (valuesArray[i] == value)
						{
							comboBox->Text = choicesArray[i];
						}
					}
				}
				else
				{
					int value = this->GetIniValueInt(params);
					if (value >= 0)
					{
						comboBox->Text = choicesArray[value];
					}
				}
			}

			this->comboBoxList->Add(comboBox);
			this->comboBoxParamList->Add(params);
			this->comboBoxValueList->Add(values);

			int i = this->comboBoxList->Count - 1;

			// It's ugly but I don't know how to make dynamic calls to member functions
			switch (i)
			{
				case 0: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox0_SelectedIndexChanged); break;
				case 1: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox1_SelectedIndexChanged); break;
				case 2: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox2_SelectedIndexChanged); break;
				case 3: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox3_SelectedIndexChanged); break;
				case 4: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox4_SelectedIndexChanged); break;
				case 5: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox5_SelectedIndexChanged); break;
				case 6: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox6_SelectedIndexChanged); break;
				case 7: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox7_SelectedIndexChanged); break;
				case 8: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox8_SelectedIndexChanged); break;
				case 9: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox9_SelectedIndexChanged); break;
				case 10: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox10_SelectedIndexChanged); break;
				case 11: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox11_SelectedIndexChanged); break;
				case 12: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox12_SelectedIndexChanged); break;
				case 13: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox13_SelectedIndexChanged); break;
				case 14: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox14_SelectedIndexChanged); break;
				case 15: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox15_SelectedIndexChanged); break;
				case 16: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox16_SelectedIndexChanged); break;
				case 17: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox17_SelectedIndexChanged); break;
				case 18: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox18_SelectedIndexChanged); break;
				case 19: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox19_SelectedIndexChanged); break;
				case 20: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox20_SelectedIndexChanged); break;
				case 21: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox21_SelectedIndexChanged); break;
				case 22: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox22_SelectedIndexChanged); break;
				case 23: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox23_SelectedIndexChanged); break;
				case 24: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox24_SelectedIndexChanged); break;
				case 25: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox25_SelectedIndexChanged); break;
				case 26: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox26_SelectedIndexChanged); break;
				case 27: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox27_SelectedIndexChanged); break;
				case 28: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox28_SelectedIndexChanged); break;
				case 29: comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::ComboBox29_SelectedIndexChanged); break;
			}

			this->Controls->Add(comboBox);

			this->lastItemType = "ComboBox";
		}
		Void AddComboBoxBlock(String^ params, String^ values, String^ text, String^ choices, int locX, int locY, int width, String^ tooltip)
		{
			this->AddTextBox(text, locX, locY, width, this->textBoxHeight, tooltip);
			this->AddComboBox(params, values, choices, locX, locY + this->textBoxOuterHeight, width, this->comboBoxHeight);
		}
		Void AddLongComboBoxBlock(String^ params, String^ values, String^ text, String^ choices, int locY, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AddShortComboBoxBlockOnLeftCol(params, values, text, choices, locY, tooltip);
			}

			this->AddComboBoxBlock(params, values, text, choices, this->leftColX, locY, this->longWidth, tooltip);

			this->leftColPosY = this->rightColPosY = locY + this->textBoxOuterHeight + this->comboBoxOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AddShortComboBoxBlockOnLeftCol(String^ params, String^ values, String^ text, String^ choices, int locY, String^ tooltip)
		{
			this->AddComboBoxBlock(params, values, text, choices, this->leftColX, locY, this->shortWidth, tooltip);

			this->rightColPosY = locY;
			this->leftColPosY = locY + this->textBoxOuterHeight + this->comboBoxOuterHeight;
			this->nextItemOnRightCol = true;
		}
		Void AddShortComboBoxBlockOnRightCol(String^ params, String^ values, String^ text, String^ choices, int locY, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AddShortComboBoxBlockOnLeftCol(params, values, text, choices, locY, tooltip);
			}

			this->AddComboBoxBlock(params, values, text, choices, this->rightColX, locY, this->shortWidth, tooltip);

			this->rightColPosY = locY + this->textBoxOuterHeight + this->comboBoxOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AutoAddLongComboBoxBlock(String^ params, String^ values, String^ text, String^ choices, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AutoAddShortComboBoxBlockOnLeftCol(params, values, text, choices, tooltip);
			}

			if (this->lastItemType != "" && this->lastItemType != "ComboBox" && this->lastItemType != "TextBox")
			{
				this->leftColPosY += 12;
			}
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddLongComboBoxBlock(params, values, text, choices, locY, tooltip);
		}
		Void AutoAddShortComboBoxBlockOnLeftCol(String^ params, String^ values, String^ text, String^ choices, String^ tooltip)
		{
			if (this->lastItemType != "" && this->lastItemType != "ComboBox" && this->lastItemType != "TextBox")
			{
				this->leftColPosY += 12;
			}
			this->AddShortComboBoxBlockOnLeftCol(params, values, text, choices, this->leftColPosY, tooltip);
		}
		Void AutoAddShortComboBoxBlockOnRightCol(String^ params, String^ values, String^ text, String^ choices, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AutoAddShortComboBoxBlockOnLeftCol(params, values, text, choices, tooltip);
			}

			this->AddShortComboBoxBlockOnRightCol(params, values, text, choices, this->rightColPosY, tooltip);
		}
		Void AutoAddShortComboBoxBlock(String^ params, String^ values, String^ text, String^ choices, String^ tooltip)
		{
			if (this->nextItemOnRightCol && this->lastItemType == "ComboBox")
			{
				this->AutoAddShortComboBoxBlockOnRightCol(params, values, text, choices, tooltip);
			}
			else
			{
				this->AutoAddShortComboBoxBlockOnLeftCol(params, values, text, choices, tooltip);
			}
		}

		Void ComboBox_SelectedIndexChanged(Object^ sender, EventArgs^ e, int index)
		{
			int value = this->comboBoxList[index]->SelectedIndex;
			array<String^>^ paramsArray = this->comboBoxParamList[index]->Split('|');
			if (paramsArray->Length > 1)
			{
				for (int i = 0; i < paramsArray->Length; i++)
				{
					this->SetIniValue(paramsArray[i], value == i ? "1" : "0");
				}
			}
			else
			{
				if (this->comboBoxValueList[index] != "")
				{
					array<String^>^ valuesArray = this->comboBoxValueList[index]->Split('|');
					this->SetIniValue(this->comboBoxParamList[index], valuesArray[this->comboBoxList[index]->SelectedIndex]);
				}
				else
				{
					this->SetIniValue(this->comboBoxParamList[index], System::Convert::ToString(value));
				}
			}
		}
		Void ComboBox0_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 0); }
		Void ComboBox1_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 1); }
		Void ComboBox2_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 2); }
		Void ComboBox3_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 3); }
		Void ComboBox4_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 4); }
		Void ComboBox5_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 5); }
		Void ComboBox6_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 6); }
		Void ComboBox7_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 7); }
		Void ComboBox8_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 8); }
		Void ComboBox9_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 9); }
		Void ComboBox10_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 10); }
		Void ComboBox11_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 11); }
		Void ComboBox12_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 12); }
		Void ComboBox13_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 13); }
		Void ComboBox14_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 14); }
		Void ComboBox15_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 15); }
		Void ComboBox16_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 16); }
		Void ComboBox17_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 17); }
		Void ComboBox18_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 18); }
		Void ComboBox19_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 19); }
		Void ComboBox20_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 20); }
		Void ComboBox21_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 21); }
		Void ComboBox22_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 22); }
		Void ComboBox23_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 23); }
		Void ComboBox24_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 24); }
		Void ComboBox25_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 25); }
		Void ComboBox26_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 26); }
		Void ComboBox27_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 27); }
		Void ComboBox28_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 28); }
		Void ComboBox29_SelectedIndexChanged(Object^ sender, EventArgs^ e) { this->ComboBox_SelectedIndexChanged(sender, e, 29); }

		Void StartInputSelectTimer()
		{
			if (!this->inputSelectTimer->Enabled)
			{
				this->inputSelectTimer->Interval = 100;
				this->inputSelectTimer->Start();
			}
		}
		Void AddInputSelect(String^ type, String^ param, String^ text, int locX, int locY)
		{
			MetroLink^ link = gcnew MetroLink();
			MetroLabel^ label = gcnew MetroLabel();

			int value = this->GetIniValueInt(param);

			link->Location = System::Drawing::Point(locX, locY);
			link->Name = L"";
			link->Size = System::Drawing::Size(this->shortWidth, 23);
			//link->TabIndex = 7;
			link->TabStop = false;
			link->Text = text;
			link->UseSelectable = false;

			label->AutoSize = false;
			label->Location = System::Drawing::Point(locX + this->rightColX - this->leftColX, locY);
			label->Name = L"";
			label->Size = System::Drawing::Size(this->shortWidth, 19);
			label->Text = value == 99 ? "Not Defined" : System::Convert::ToString(value);
			//label->TabIndex = 13;
			label->TabStop = false;
			label->TextAlign = System::Drawing::ContentAlignment::TopCenter;

			this->inputSelectLinkList->Add(link);
			this->inputSelectLabelList->Add(label);
			this->inputSelectParamList->Add(param);
			this->inputSelectTypeList->Add(type == "Axis" ? "Axis" : "Button");

			msclr::interop::marshal_context context;
			std::string pparam = context.marshal_as<std::string>(param);
			inputSelectParamList2.push_back(pparam);

			this->StartInputSelectTimer();

			int i = this->inputSelectLinkList->Count - 1;

			// It's ugly but I don't know how to make dynamic calls to member functions
			switch (i)
			{
				case 0:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink0_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel0_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer0_Tick);
					break;
				case 1:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink1_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel1_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer1_Tick);
					break;
				case 2:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink2_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel2_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer2_Tick);
					break;
				case 3:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink3_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel3_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer3_Tick);
					break;
				case 4:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink4_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel4_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer4_Tick);
					break;
				case 5:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink5_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel5_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer5_Tick);
					break;
				case 6:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink6_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel6_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer6_Tick);
					break;
				case 7:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink7_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel7_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer7_Tick);
					break;
				case 8:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink8_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel8_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer8_Tick);
					break;
				case 9:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink9_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel9_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer9_Tick);
					break;
				case 10:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink10_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel10_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer10_Tick);
					break;
				case 11:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink11_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel11_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer11_Tick);
					break;
				case 12:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink12_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel12_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer12_Tick);
					break;
				case 13:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink13_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel13_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer13_Tick);
					break;
				case 14:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink14_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel14_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer14_Tick);
					break;
				case 15:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink15_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel15_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer15_Tick);
					break;
				case 16:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink16_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel16_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer16_Tick);
					break;
				case 17:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink17_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel17_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer17_Tick);
					break;
				case 18:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink18_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel18_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer18_Tick);
					break;
				case 19:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink19_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel19_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer19_Tick);
					break;
				case 20:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink20_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel20_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer20_Tick);
					break;
				case 21:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink21_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel21_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer21_Tick);
					break;
				case 22:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink22_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel22_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer22_Tick);
					break;
				case 23:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink23_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel23_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer23_Tick);
					break;
				case 24:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink24_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel24_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer24_Tick);
					break;
				case 25:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink25_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel25_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer25_Tick);
					break;
				case 26:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink26_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel26_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer26_Tick);
					break;
				case 27:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink27_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel27_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer27_Tick);
					break;
				case 28:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink28_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel28_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer28_Tick);
					break;
				case 29:
					link->Click += gcnew System::EventHandler(this, &Helper::InputSelectLink29_Click);
					label->Click += gcnew System::EventHandler(this, &Helper::InputSelectLabel29_Click);
					this->inputSelectTimer->Tick += gcnew System::EventHandler(this, &Helper::InputSelectTimer29_Tick);
					break;
			}

			this->Controls->Add(link);
			this->Controls->Add(label);

			this->lastItemType = "InputSelect";
			this->nextItemOnRightCol = false;
		}
		Void AddLongInputSelect(String^ type, String^ param, String^ text, int locY)
		{
			this->AddInputSelect(type, param, text, this->leftColX, locY);

			this->leftColPosY = this->rightColPosY = locY + this->inputSelectOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AutoAddLongInputSelect(String^ type, String^ param, String^ text)
		{
			if (this->lastItemType != "" && this->lastItemType != "InputSelect" && this->lastItemType != "TextBox")
			{
				this->leftColPosY += 12;
			}
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddLongInputSelect(type, param, text, locY);
		}

		Void InputSelectLink_Click(Object^ sender, EventArgs^ e, int index)
		{
			if (this->inputSelectTypeList[index] == "Axis")
			{
				this->inputSelectLabelList[index]->Text = L"Move Axis";
				CreateThread(NULL, 0, InputSelectAxisThread, &inputSelectParamList2[index], 0, NULL);
			}
			else
			{
				this->inputSelectLabelList[index]->Text = L"Press Button";
				CreateThread(NULL, 0, InputSelectButtonThread, &inputSelectParamList2[index], 0, NULL);
			}
		}
		Void InputSelectLink0_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 0); }
		Void InputSelectLink1_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 1); }
		Void InputSelectLink2_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 2); }
		Void InputSelectLink3_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 3); }
		Void InputSelectLink4_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 4); }
		Void InputSelectLink5_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 5); }
		Void InputSelectLink6_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 6); }
		Void InputSelectLink7_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 7); }
		Void InputSelectLink8_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 8); }
		Void InputSelectLink9_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 9); }
		Void InputSelectLink10_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 10); }
		Void InputSelectLink11_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 11); }
		Void InputSelectLink12_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 12); }
		Void InputSelectLink13_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 13); }
		Void InputSelectLink14_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 14); }
		Void InputSelectLink15_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 15); }
		Void InputSelectLink16_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 16); }
		Void InputSelectLink17_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 17); }
		Void InputSelectLink18_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 18); }
		Void InputSelectLink19_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 19); }
		Void InputSelectLink20_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 20); }
		Void InputSelectLink21_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 21); }
		Void InputSelectLink22_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 22); }
		Void InputSelectLink23_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 23); }
		Void InputSelectLink24_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 24); }
		Void InputSelectLink25_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 25); }
		Void InputSelectLink26_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 26); }
		Void InputSelectLink27_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 27); }
		Void InputSelectLink28_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 28); }
		Void InputSelectLink29_Click(Object^ sender, EventArgs^ e) { this->InputSelectLink_Click(sender, e, 29); }

		Void InputSelectLabel_Click(Object^ sender, EventArgs^ e, int index)
		{
			this->SetIniValue(this->inputSelectParamList[index], "99");
			inputSelectDone = false;
		}
		Void InputSelectLabel0_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 0); }
		Void InputSelectLabel1_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 1); }
		Void InputSelectLabel2_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 2); }
		Void InputSelectLabel3_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 3); }
		Void InputSelectLabel4_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 4); }
		Void InputSelectLabel5_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 5); }
		Void InputSelectLabel6_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 6); }
		Void InputSelectLabel7_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 7); }
		Void InputSelectLabel8_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 8); }
		Void InputSelectLabel9_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 9); }
		Void InputSelectLabel10_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 10); }
		Void InputSelectLabel11_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 11); }
		Void InputSelectLabel12_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 12); }
		Void InputSelectLabel13_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 13); }
		Void InputSelectLabel14_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 14); }
		Void InputSelectLabel15_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 15); }
		Void InputSelectLabel16_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 16); }
		Void InputSelectLabel17_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 17); }
		Void InputSelectLabel18_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 18); }
		Void InputSelectLabel19_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 19); }
		Void InputSelectLabel20_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 20); }
		Void InputSelectLabel21_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 21); }
		Void InputSelectLabel22_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 22); }
		Void InputSelectLabel23_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 23); }
		Void InputSelectLabel24_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 24); }
		Void InputSelectLabel25_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 25); }
		Void InputSelectLabel26_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 26); }
		Void InputSelectLabel27_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 27); }
		Void InputSelectLabel28_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 28); }
		Void InputSelectLabel29_Click(Object^ sender, EventArgs^ e) { this->InputSelectLabel_Click(sender, e, 29); }

		Void InputSelectTimer_Tick(Object^ sender, EventArgs^ e, int index)
		{
			int value = this->GetIniValueInt(this->inputSelectParamList[index]);
			if (!inputSelectDone)
			{
				this->inputSelectLabelList[index]->Text = value == 99 ? "Not Defined" : System::Convert::ToString(value);
			}
		}
		Void InputSelectTimer0_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 0); }
		Void InputSelectTimer1_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 1); }
		Void InputSelectTimer2_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 2); }
		Void InputSelectTimer3_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 3); }
		Void InputSelectTimer4_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 4); }
		Void InputSelectTimer5_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 5); }
		Void InputSelectTimer6_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 6); }
		Void InputSelectTimer7_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 7); }
		Void InputSelectTimer8_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 8); }
		Void InputSelectTimer9_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 9); }
		Void InputSelectTimer10_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 10); }
		Void InputSelectTimer11_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 11); }
		Void InputSelectTimer12_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 12); }
		Void InputSelectTimer13_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 13); }
		Void InputSelectTimer14_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 14); }
		Void InputSelectTimer15_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 15); }
		Void InputSelectTimer16_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 16); }
		Void InputSelectTimer17_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 17); }
		Void InputSelectTimer18_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 18); }
		Void InputSelectTimer19_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 19); }
		Void InputSelectTimer20_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 20); }
		Void InputSelectTimer21_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 21); }
		Void InputSelectTimer22_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 22); }
		Void InputSelectTimer23_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 23); }
		Void InputSelectTimer24_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 24); }
		Void InputSelectTimer25_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 25); }
		Void InputSelectTimer26_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 26); }
		Void InputSelectTimer27_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 27); }
		Void InputSelectTimer28_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 28); }
		Void InputSelectTimer29_Tick(Object^ sender, EventArgs^ e) { this->InputSelectTimer_Tick(sender, e, 29); }
	};
}