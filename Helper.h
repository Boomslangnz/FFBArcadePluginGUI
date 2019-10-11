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
		MetroComboBox^ deviceSelectorComboBox = gcnew MetroComboBox();
		List<MetroTrackBar^>^ TrackBarList = gcnew List<MetroTrackBar^>();
		List<String^>^ TrackBarParamList = gcnew List<String^>();
		List<MetroLabel^>^ TrackBarLabelList = gcnew List<MetroLabel^>();
		List<MetroCheckBox^>^ CheckBoxList = gcnew List<MetroCheckBox^>();
		List<String^>^ CheckBoxParamList = gcnew List<String^>();
		const int Page1ColWidth = 160;
		const int Page2ColsWidth = 300;
		bool is1ColPage = false;
		int WIndowsWidth = this->Page2ColsWidth;
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
		const int checkBoxOuterHeight = 21;
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

			this->backLink->Location = System::Drawing::Point((this->WIndowsWidth - 173) / 2, 8);
			this->backLink->Name = L"metroLink1";
			this->backLink->Size = System::Drawing::Size(173, 23);
			this->backLink->TabStop = false;
			this->backLink->Text = L"Go Back To Previous Menu";
			this->backLink->UseSelectable = false;
			this->backLink->Click += gcnew System::EventHandler(this, &Helper::backLink_Click);
			this->Controls->Add(this->backLink);

			this->toolTip->Style = MetroFramework::MetroColorStyle::Blue;
			this->toolTip->StyleManager = nullptr;
			this->toolTip->Theme = MetroFramework::MetroThemeStyle::Light;

			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(this->WIndowsWidth, this->leftColPosY > this->maxPosY ? this->leftColPosY : this->maxPosY);
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
		   
		Void backLink_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Hide();
			this->obj->Show();
		}

		Void New1ColPage()
		{
			if (this->leftColPosY > this->maxPosY)
			{
				this->maxPosY = this->leftColPosY;
			}
			this->leftColPosY = this->minPosY;
			this->rightColPosY = this->minPosY;
			this->leftColX += this->is1ColPage ? this->Page1ColWidth : this->Page2ColsWidth;
			this->rightColX += this->is1ColPage ? this->Page1ColWidth : this->Page2ColsWidth;
			this->WIndowsWidth += this->Page1ColWidth;
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
			this->leftColX += this->is1ColPage ? this->Page1ColWidth : this->Page2ColsWidth;
			this->rightColX += this->is1ColPage ? this->Page1ColWidth : this->Page2ColsWidth;
			this->WIndowsWidth += this->Page2ColsWidth;
			this->lastItemType = "";
			this->is1ColPage = false;
		}

		Void AddDeviceSelector(int locY)
		{
			this->AddTextBox("Device GUID", this->leftColX, locY, this->longWidth, this->textBoxHeight, L" Device GUID FFBPlugin will use to apply forces to device ");
			locY += this->textBoxOuterHeight;
			for (int i = 0; i < SDL_NumJoysticks(); i++)
			{
				SDL_Joystick* js1 = SDL_JoystickOpen(i);
				char buff[300];
				GetPrivateProfileStringA("Settings", "DeviceGUID", "No FFBPlugin.ini found", buff, _countof(buff), ".\\FFBPlugin.ini");
				String^ str = gcnew String(buff);
				String^ bah1 = gcnew String(SDL_JoystickName(js1));
				this->deviceSelectorComboBox->Text = str;
				this->deviceSelectorComboBox->Items->Add(bah1);
			}
			if (SDL_NumJoysticks() == 0)
			{
				this->deviceSelectorComboBox->Text = "SDL2 Cannot Detect Any Joystick";
			}
			this->deviceSelectorComboBox->FormattingEnabled = true;
			this->deviceSelectorComboBox->ItemHeight = 23;
			this->deviceSelectorComboBox->Location = System::Drawing::Point(this->leftColX, locY);
			this->deviceSelectorComboBox->Name = L"metroComboBox1";
			this->deviceSelectorComboBox->Items->Add("Select no device");
			this->deviceSelectorComboBox->Size = System::Drawing::Size(this->longWidth, 29);
			this->deviceSelectorComboBox->TabIndex = this->tabIndex++;
			this->deviceSelectorComboBox->TabStop = false;
			this->deviceSelectorComboBox->UseSelectable = false;

			this->deviceSelectorComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Helper::deviceSelector_SelectedIndexChanged);

			this->Controls->Add(this->deviceSelectorComboBox);

			this->leftColPosY = this->rightColPosY = locY + 35;
		}
		Void AutoAddDeviceSelector()
		{
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddDeviceSelector(locY);
		}

		Void deviceSelector_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
		{
			if (this->deviceSelectorComboBox->SelectedItem == "Select no device")
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", "", ".\\FFBPlugin.ini");
				this->deviceSelectorComboBox->Text = "";
			}
			else
			{
				SDL_Joystick* js = SDL_JoystickOpen(this->deviceSelectorComboBox->SelectedIndex);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->deviceSelectorComboBox->Text = str;
				{
					WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
				}
			}
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
			textBox->Lines = gcnew cli::array< System::String^  >(1) { text };
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

			if (this->lastItemType != "" && this->lastItemType != "TextBox")
			{
				this->leftColPosY += 12;
			}
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddLongTextBox(text, locY, tooltip);
		}
		Void AutoAddShortTextBoxOnLeftCol(String^ text, String^ tooltip)
		{
			if (this->lastItemType != "" && this->lastItemType != "TextBox")
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
			msclr::interop::marshal_context context;
			LPCTSTR pparam = context.marshal_as<const TCHAR*>(param);

			MetroTrackBar^ trackBar = gcnew MetroTrackBar();

			int config = GetPrivateProfileInt(TEXT("Settings"), pparam, 0, TEXT(".\\FFBPlugin.ini"));
			if (!(config >= min && config <= max))
			{
				config = min;
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
			trackBar->Value = config;

			this->TrackBarList->Add(trackBar);
			this->TrackBarParamList->Add(param);
			this->TrackBarLabelList->Add(gcnew MetroLabel());

			int i = this->TrackBarList->Count - 1;

			// It's ugly but I don't know how to make dynamic calls to member functions
			switch (i)
			{
				case 0: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar0_ValueChanged); break;
				case 1: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar1_ValueChanged); break;
				case 2: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar2_ValueChanged); break;
				case 3: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar3_ValueChanged); break;
				case 4: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar4_ValueChanged); break;
				case 5: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar5_ValueChanged); break;
				case 6: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar6_ValueChanged); break;
				case 7: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar7_ValueChanged); break;
				case 8: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar8_ValueChanged); break;
				case 9: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar9_ValueChanged); break;
				case 10: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar10_ValueChanged); break;
				case 11: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar11_ValueChanged); break;
				case 12: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar12_ValueChanged); break;
				case 13: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar13_ValueChanged); break;
				case 14: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar14_ValueChanged); break;
				case 15: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar15_ValueChanged); break;
				case 16: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar16_ValueChanged); break;
				case 17: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar17_ValueChanged); break;
				case 18: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar18_ValueChanged); break;
				case 19: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar19_ValueChanged); break;
				case 20: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar20_ValueChanged); break;
				case 21: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar21_ValueChanged); break;
				case 22: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar22_ValueChanged); break;
				case 23: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar23_ValueChanged); break;
				case 24: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar24_ValueChanged); break;
				case 25: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar25_ValueChanged); break;
				case 26: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar26_ValueChanged); break;
				case 27: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar27_ValueChanged); break;
				case 28: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar28_ValueChanged); break;
				case 29: trackBar->ValueChanged += gcnew System::EventHandler(this, &Helper::trackBar29_ValueChanged); break;
				default: break;
			}

			this->Controls->Add(trackBar);

			this->lastItemType = "TrackBar";
		}

		Void AddTrackBarLabel(String^ param, int locX, int locY, int width, int height)
		{
			msclr::interop::marshal_context context;
			LPCTSTR pparam = context.marshal_as<const TCHAR*>(param);

			int i = this->TrackBarList->Count - 1;

			MetroLabel^ label = this->TrackBarLabelList[i];

			int config = GetPrivateProfileInt(TEXT("Settings"), pparam, 0, TEXT(".\\FFBPlugin.ini"));
			label->AutoSize = true;
			label->Location = System::Drawing::Point(locX, locY);
			label->Name = L"";
			label->Size = System::Drawing::Size(width, height);
			//label->TabIndex = 42;
			label->TabStop = false;
			label->Text = System::Convert::ToString(config);

			this->TrackBarLabelList[i] = label;
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

			if (this->lastItemType != "" && this->lastItemType != "TrackBar" && this->lastItemType != "TextBox")
			{
				this->leftColPosY += 12;
			}
			int locY = this->leftColPosY > this->rightColPosY ? this->leftColPosY : this->rightColPosY;

			this->AddLongTrackBarBlock(param, text, locY, min, max, tooltip);
		}
		Void AutoAddShortTrackBarBlockOnLeftCol(String^ param, String^ text, int min, int max, String^ tooltip)
		{
			if (this->lastItemType != "" && this->lastItemType != "TrackBar" && this->lastItemType != "TextBox")
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

		Void trackBar_ValueChanged(Object^ sender, EventArgs^ e, int index)
		{
			msclr::interop::marshal_context context;
			LPCSTR pparam = context.marshal_as<const CHAR*>(this->TrackBarParamList[index]);

			int value = this->TrackBarList[index]->Value;
			this->TrackBarLabelList[index]->Text = System::Convert::ToString(value);
			char Result[16];
			sprintf_s(Result, "%d", value);
			{
				WritePrivateProfileStringA("Settings", pparam, Result, ".\\FFBPlugin.ini");
			}
		}
		Void trackBar0_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 0); }
		Void trackBar1_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 1); }
		Void trackBar2_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 2); }
		Void trackBar3_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 3); }
		Void trackBar4_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 4); }
		Void trackBar5_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 5); }
		Void trackBar6_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 6); }
		Void trackBar7_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 7); }
		Void trackBar8_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 8); }
		Void trackBar9_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 9); }
		Void trackBar10_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 10); }
		Void trackBar11_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 11); }
		Void trackBar12_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 12); }
		Void trackBar13_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 13); }
		Void trackBar14_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 14); }
		Void trackBar15_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 15); }
		Void trackBar16_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 16); }
		Void trackBar17_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 17); }
		Void trackBar18_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 18); }
		Void trackBar19_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 19); }
		Void trackBar20_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 20); }
		Void trackBar21_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 21); }
		Void trackBar22_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 22); }
		Void trackBar23_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 23); }
		Void trackBar24_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 24); }
		Void trackBar25_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 25); }
		Void trackBar26_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 26); }
		Void trackBar27_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 27); }
		Void trackBar28_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 28); }
		Void trackBar29_ValueChanged(Object^ sender, EventArgs^ e) { this->trackBar_ValueChanged(sender, e, 29); }

		Void AddCheckBox(String^ param, String^ text, int locX, int locY, int width, int height, String^ tooltip)
		{
			msclr::interop::marshal_context context;
			LPCTSTR pparam = context.marshal_as<const TCHAR*>(param);

			MetroCheckBox^ checkBox = gcnew MetroCheckBox();

			int ResetFB = GetPrivateProfileInt(TEXT("Settings"), pparam, 0, TEXT(".\\FFBPlugin.ini"));
			checkBox->AutoSize = true;
			checkBox->Location = System::Drawing::Point(locX, locY);
			checkBox->Name = "";
			checkBox->Size = System::Drawing::Size(width, height);
			checkBox->TabIndex = this->tabIndex++;
			checkBox->TabStop = false;
			checkBox->Text = text;
			checkBox->UseSelectable = false;
			checkBox->Checked = ResetFB;

			this->CheckBoxList->Add(checkBox);
			this->CheckBoxParamList->Add(param);

			int i = this->CheckBoxList->Count - 1;

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
		}
		Void AddLongCheckBox(String^ param, String^ text, int locY, String^ tooltip)
		{
			if (this->is1ColPage)
			{
				return this->AddShortCheckBoxOnLeftCol(param, text, locY, tooltip);
			}

			this->AddCheckBox(param, text, this->leftColX, locY, this->longWidth, 15, tooltip);

			this->leftColPosY = this->rightColPosY = locY + this->checkBoxOuterHeight;
			this->nextItemOnRightCol = false;
		}
		Void AddShortCheckBoxOnLeftCol(String^ param, String^ text, int locY, String^ tooltip)
		{
			this->AddCheckBox(param, text, this->leftColX, locY, this->shortWidth, 15, tooltip);

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

			this->AddCheckBox(param, text, this->rightColX, locY, this->shortWidth, 15, tooltip);

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
			msclr::interop::marshal_context context;
			LPCSTR pparam = context.marshal_as<const CHAR*>(this->CheckBoxParamList[index]);

			WritePrivateProfileStringA("Settings", pparam, this->CheckBoxList[index]->Checked ? "1" : "0", ".\\FFBPlugin.ini");
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
	};
}