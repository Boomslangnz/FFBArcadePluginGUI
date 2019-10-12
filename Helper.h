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
#include "SDL.h"

namespace FFBPluginGUI {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace MetroFramework::Controls;

	public ref class Helper : MetroFramework::Forms::MetroForm
	{
	protected:
		System::ComponentModel::Container^ components;
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
		const int page1ColWidth = 160;
		const int page2ColsWidth = 300;
		bool is1ColPage = false;
		int wIndowsWidth = this->page2ColsWidth;
		const int minPosY = 37;
		int maxPosY = 0;
		int leftColX = 20;
		int rightColX = 163;
		const int shortWidth = 118;
		const int longWidth = 261;
		const int textBoxHeight = 20;
		const int textBoxOuterHeight = 26;
		const int trackBarHeight = 20;
		const int trackBarOuterHeight = 20;
		const int trackBarLabelOuterHeight = 26;
		const int checkBoxHeight = 15;
		const int checkBoxOuterHeight = 21;
		const int comboBoxHeight = 29;
		const int comboBoxOuterHeight = 35;
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

		int GetIniValue(String^ param)
		{
			msclr::interop::marshal_context context;
			LPCTSTR pparam = context.marshal_as<const TCHAR*>(param);

			return GetPrivateProfileInt(TEXT("Settings"), pparam, 0, TEXT(".\\FFBPlugin.ini"));
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
			else if (component == "EnableRumble")
			{
				this->AutoAddShortCheckBox("EnableRumble", L"Enable Rumble", L"Enable or disable rumble");
			}
			else if (component == "ReverseRumble")
			{
				this->AutoAddShortCheckBox("ReverseRumble", L"Reverse Rumble", L"Reverse the rumble if works incorrectly to liking");
			}
			else if (component == "Logging")
			{
				this->AutoAddShortCheckBox("Logging", L"Enable Logging", L"Enable or disable FFBlog.txt to collect log data");
			}
			else if (component == "ResetFeedback")
			{
				this->AutoAddShortCheckBox("ResetFeedback", L"Reset Feedback", L"When a command contradicts a prior command, clear the prior command");
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
		}

		Void AddDeviceSelector(int device, LPCSTR param, String^ text, String^ tooltîp, MetroComboBox^ comboBox, int locY)
		{
			this->AddTextBox(text, this->leftColX, locY, this->longWidth, this->textBoxHeight, tooltîp);
			locY += this->textBoxOuterHeight;
			for (int i = 0; i < SDL_NumJoysticks(); i++)
			{
				SDL_Joystick* js1 = SDL_JoystickOpen(i);
				char buff[300];
				GetPrivateProfileStringA("Settings", param, "No FFBPlugin.ini found", buff, _countof(buff), ".\\FFBPlugin.ini");
				String^ str = gcnew String(buff);
				String^ bah1 = gcnew String(SDL_JoystickName(js1));
				comboBox->Text = str;
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
				default: break;
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

			int value = this->GetIniValue(param);
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
				default: break;
			}

			this->Controls->Add(trackBar);

			this->lastItemType = "TrackBar";
			this->nextItemOnRightCol = false;
		}

		Void AddTrackBarLabel(String^ param, int locX, int locY, int width, int height)
		{
			msclr::interop::marshal_context context;
			LPCTSTR pparam = context.marshal_as<const TCHAR*>(param);

			int i = this->trackBarList->Count - 1;

			MetroLabel^ label = this->trackBarLabelList[i];

			int config = GetPrivateProfileInt(TEXT("Settings"), pparam, 0, TEXT(".\\FFBPlugin.ini"));
			label->AutoSize = true;
			label->Location = System::Drawing::Point(locX, locY);
			label->Name = L"";
			label->Size = System::Drawing::Size(width, height);
			//label->TabIndex = 42;
			label->TabStop = false;
			label->Text = System::Convert::ToString(config);

			this->trackBarLabelList[i] = label;
			this->Controls->Add(label);
		}

		Void AddTrackBarWithLabel(String^ param, int locX, int locY, int width, int height, int min, int max)
		{
			this->AddTrackBar(param, locX, locY, width, height, min, max);
			this->AddTrackBarLabel(param, locX + ((width - 20) / 2), locY + this->trackBarOuterHeight, 20, 19);
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

			int value = this->GetIniValue(param);
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
				default: break;
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

		Void AddComboBox(String^ params, String^ choices, int locX, int locY, int width, int height)
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
					if (this->GetIniValue(paramsArray[i]) == 1)
					{
						comboBox->Text = choicesArray[i];
					}
				}
			}
			else
			{
				int value = this->GetIniValue(params);
				if (value >= 0)
				{
					comboBox->Text = choicesArray[value];
				}
			}

			this->comboBoxList->Add(comboBox);
			this->comboBoxParamList->Add(params);

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
				default: break;
			}

			this->Controls->Add(comboBox);

			this->lastItemType = "ComboBox";
		}
		Void AddComboBoxBlock(String^ params, String^ text, String^ choices, int locX, int locY, int width, String^ tooltip)
		{
			this->AddTextBox(text, locX, locY, width, this->textBoxHeight, tooltip);
			this->AddComboBox(params, choices, locX, locY + this->textBoxOuterHeight, width, this->comboBoxHeight);
		}
		Void AddLongComboBoxBlock(String^ params, String^ text, String^ choices, int locY, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AddShortComboBoxBlockOnLeftCol(params, text, choices, locY, tooltip);
			}

			this->AddComboBoxBlock(params, text, choices, this->leftColX, locY, this->longWidth, tooltip);

			this->leftColPosY = this->rightColPosY = locY + this->textBoxOuterHeight + this->comboBoxOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AddShortComboBoxBlockOnLeftCol(String^ params, String^ text, String^ choices, int locY, String^ tooltip)
		{
			this->AddComboBoxBlock(params, text, choices, this->leftColX, locY, this->shortWidth, tooltip);

			this->rightColPosY = locY;
			this->leftColPosY = locY + this->textBoxOuterHeight + this->comboBoxOuterHeight;
			this->nextItemOnRightCol = true;
		}
		Void AddShortComboBoxBlockOnRightCol(String^ params, String^ text, String^ choices, int locY, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AddShortComboBoxBlockOnLeftCol(params, text, choices, locY, tooltip);
			}

			this->AddComboBoxBlock(params, text, choices, this->rightColX, locY, this->shortWidth, tooltip);

			this->rightColPosY = locY + this->textBoxOuterHeight + this->comboBoxOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AutoAddLongComboBoxBlock(String^ params, String^ text, String^ choices, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AutoAddShortComboBoxBlockOnLeftCol(params, text, choices, tooltip);
			}

			if (this->lastItemType != "" && this->lastItemType != "ComboBox" && this->lastItemType != "TextBox")
			{
				this->leftColPosY += 12;
			}
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddLongComboBoxBlock(params, text, choices, locY, tooltip);
		}
		Void AutoAddShortComboBoxBlockOnLeftCol(String^ params, String^ text, String^ choices, String^ tooltip)
		{
			if (this->lastItemType != "" && this->lastItemType != "ComboBox" && this->lastItemType != "TextBox")
			{
				this->leftColPosY += 12;
			}
			this->AddShortComboBoxBlockOnLeftCol(params, text, choices, this->leftColPosY, tooltip);
		}
		Void AutoAddShortComboBoxBlockOnRightCol(String^ params, String^ text, String^ choices, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AutoAddShortComboBoxBlockOnLeftCol(params, text, choices, tooltip);
			}

			this->AddShortComboBoxBlockOnRightCol(params, text, choices, this->rightColPosY, tooltip);
		}
		Void AutoAddShortComboBoxBlock(String^ params, String^ text, String^ choices, String^ tooltip)
		{
			if (this->nextItemOnRightCol && this->lastItemType == "ComboBox")
			{
				this->AutoAddShortComboBoxBlockOnRightCol(params, text, choices, tooltip);
			}
			else
			{
				this->AutoAddShortComboBoxBlockOnLeftCol(params, text, choices, tooltip);
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
				this->SetIniValue(this->comboBoxParamList[index], System::Convert::ToString(value));
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
	};
}