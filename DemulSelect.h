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

#include <Windows.h>
#include <string>
#include "SDL.h"
#include "Helper.h"

#include "NascarRacing.h"
#include "InitialDDemul.h"
#include "SmashingDrive.h"
#include "MaximumSpeed.h"
#include "FasterThanSpeed.h"
#include "ATVTrack.h"

namespace FFBPluginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DemulSelect
	/// </summary>
	public ref class DemulSelect : public MetroFramework::Forms::MetroForm
	{
	public:
		DemulSelect(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox2;
	private: MetroFramework::Controls::MetroComboBox^ metroComboBox1;
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox3;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox2;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox3;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox4;
	private: MetroFramework::Controls::MetroButton^ metroButton4;
	private: MetroFramework::Controls::MetroButton^ metroButton5;
	private: MetroFramework::Controls::MetroButton^ metroButton6;

	public:

		MetroForm^ obj;
		DemulSelect(MetroForm^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DemulSelect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroButton^ metroButton1;
	public:
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox1;
	private: MetroFramework::Controls::MetroButton^ metroButton2;
	private: MetroFramework::Controls::MetroButton^ metroButton3;
	private: MetroFramework::Controls::MetroLink^ metroLink1;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroCheckBox1 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox2 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox3 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox4 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton5 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton6 = (gcnew MetroFramework::Controls::MetroButton());
			this->SuspendLayout();
			// 
			// metroButton1
			// 
			this->metroButton1->Location = System::Drawing::Point(23, 228);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(216, 23);
			this->metroButton1->TabIndex = 0;
			this->metroButton1->TabStop = false;
			this->metroButton1->Text = L"Initial D Arcade Stage Games";
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &DemulSelect::metroButton1_Click);
			// 
			// metroTextBox1
			// 
			// 
			// 
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(425, 1);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox1->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox1->CustomButton->TabIndex = 1;
			this->metroTextBox1->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox1->CustomButton->UseSelectable = true;
			this->metroTextBox1->CustomButton->Visible = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"Press Button to load individual game settings" };
			this->metroTextBox1->Location = System::Drawing::Point(23, 170);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ReadOnly = true;
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->SelectionLength = 0;
			this->metroTextBox1->SelectionStart = 0;
			this->metroTextBox1->ShortcutsEnabled = true;
			this->metroTextBox1->Size = System::Drawing::Size(447, 23);
			this->metroTextBox1->TabIndex = 1;
			this->metroTextBox1->TabStop = false;
			this->metroTextBox1->Text = L"Press Button to load individual game settings";
			this->metroTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox1->UseSelectable = true;
			this->metroTextBox1->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox1->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			this->metroTextBox1->Click += gcnew System::EventHandler(this, &DemulSelect::metroTextBox1_Click);
			// 
			// metroButton2
			// 
			this->metroButton2->Location = System::Drawing::Point(23, 257);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(216, 23);
			this->metroButton2->TabIndex = 4;
			this->metroButton2->TabStop = false;
			this->metroButton2->Text = L"Nascar Racing";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &DemulSelect::metroButton2_Click);
			// 
			// metroButton3
			// 
			this->metroButton3->Location = System::Drawing::Point(254, 257);
			this->metroButton3->Name = L"metroButton3";
			this->metroButton3->Size = System::Drawing::Size(216, 23);
			this->metroButton3->TabIndex = 5;
			this->metroButton3->TabStop = false;
			this->metroButton3->Text = L"Smashing Drive";
			this->metroButton3->UseSelectable = true;
			this->metroButton3->Click += gcnew System::EventHandler(this, &DemulSelect::metroButton3_Click);
			// 
			// metroLink1
			// 
			this->metroLink1->Location = System::Drawing::Point(160, 6);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(182, 23);
			this->metroLink1->TabIndex = 11;
			this->metroLink1->TabStop = false;
			this->metroLink1->Text = L"Go Back To Previous Menu";
			this->metroLink1->UseSelectable = true;
			this->metroLink1->Click += gcnew System::EventHandler(this, &DemulSelect::metroLink1_Click);
			// 
			// metroTextBox2
			// 
			// 
			// 
			// 
			this->metroTextBox2->CustomButton->Image = nullptr;
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(425, 1);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox2->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox2->CustomButton->TabIndex = 1;
			this->metroTextBox2->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox2->CustomButton->UseSelectable = true;
			this->metroTextBox2->CustomButton->Visible = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"Device GUID" };
			this->metroTextBox2->Location = System::Drawing::Point(23, 35);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ReadOnly = true;
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->SelectionLength = 0;
			this->metroTextBox2->SelectionStart = 0;
			this->metroTextBox2->ShortcutsEnabled = true;
			this->metroTextBox2->Size = System::Drawing::Size(447, 23);
			this->metroTextBox2->TabIndex = 39;
			this->metroTextBox2->TabStop = false;
			this->metroTextBox2->Text = L"Device GUID";
			this->metroTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox2->UseSelectable = true;
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroComboBox1
			// 
			for (int i = 0; i < SDL_NumJoysticks(); i++)
			{
				SDL_Joystick* js1 = SDL_JoystickOpen(i);
				char buff[300];
				GetPrivateProfileStringA("Settings", "DeviceGUID", "No FFBPlugin.ini found", buff, _countof(buff), ".\\FFBPlugin.ini");
				String^ str = gcnew String(buff);
				String^ bah1 = gcnew String(SDL_JoystickName(js1));
				this->metroComboBox1->Text = str;
				this->metroComboBox1->Items->Add(bah1);
			}
			if (SDL_NumJoysticks() == 0)
			{
				this->metroComboBox1->Text = "SDL2 Cannot Detect Any Joystick";
			}
			this->metroComboBox1->Items->Add("Select no device");
			this->metroComboBox1->FormattingEnabled = true;
			this->metroComboBox1->ItemHeight = 23;
			this->metroComboBox1->Location = System::Drawing::Point(23, 64);
			this->metroComboBox1->Name = L"metroComboBox1";
			this->metroComboBox1->Size = System::Drawing::Size(447, 29);
			this->metroComboBox1->TabIndex = 3;
			this->metroComboBox1->TabStop = false;
			this->metroComboBox1->UseSelectable = true;
			this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DemulSelect::metroComboBox1_SelectedIndexChanged);
			// 
			// metroTextBox3
			// 
			// 
			// 
			// 
			this->metroTextBox3->CustomButton->Image = nullptr;
			this->metroTextBox3->CustomButton->Location = System::Drawing::Point(425, 1);
			this->metroTextBox3->CustomButton->Name = L"";
			this->metroTextBox3->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox3->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox3->CustomButton->TabIndex = 1;
			this->metroTextBox3->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox3->CustomButton->UseSelectable = true;
			this->metroTextBox3->CustomButton->Visible = false;
			this->metroTextBox3->Lines = gcnew cli::array< System::String^  >(1) { L"Options" };
			this->metroTextBox3->Location = System::Drawing::Point(23, 99);
			this->metroTextBox3->MaxLength = 32767;
			this->metroTextBox3->Name = L"metroTextBox3";
			this->metroTextBox3->PasswordChar = '\0';
			this->metroTextBox3->ReadOnly = true;
			this->metroTextBox3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox3->SelectedText = L"";
			this->metroTextBox3->SelectionLength = 0;
			this->metroTextBox3->SelectionStart = 0;
			this->metroTextBox3->ShortcutsEnabled = true;
			this->metroTextBox3->Size = System::Drawing::Size(447, 23);
			this->metroTextBox3->TabIndex = 40;
			this->metroTextBox3->TabStop = false;
			this->metroTextBox3->Text = L"Options";
			this->metroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox3->UseSelectable = true;
			this->metroTextBox3->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox3->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroCheckBox1
			// 
			int EnableRumbleA = GetPrivateProfileInt(TEXT("Settings"), TEXT("EnableRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox1->AutoSize = true;
			this->metroCheckBox1->Location = System::Drawing::Point(23, 128);
			this->metroCheckBox1->Name = L"metroCheckBox1";
			this->metroCheckBox1->Size = System::Drawing::Size(102, 15);
			this->metroCheckBox1->TabIndex = 6;
			this->metroCheckBox1->TabStop = false;
			this->metroCheckBox1->Checked = EnableRumbleA;
			this->metroCheckBox1->Text = L"Enable Rumble";
			this->metroCheckBox1->UseSelectable = true;
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &DemulSelect::metroCheckBox1_CheckedChanged);
			// 
			// metroCheckBox2
			// 
			int ReverseRumbleA = GetPrivateProfileInt(TEXT("Settings"), TEXT("ReverseRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox2->AutoSize = true;
			this->metroCheckBox2->Location = System::Drawing::Point(193, 128);
			this->metroCheckBox2->Name = L"metroCheckBox2";
			this->metroCheckBox2->Size = System::Drawing::Size(107, 15);
			this->metroCheckBox2->TabIndex = 41;
			this->metroCheckBox2->TabStop = false;
			this->metroCheckBox2->Checked = ReverseRumbleA;
			this->metroCheckBox2->Text = L"Reverse Rumble";
			this->metroCheckBox2->UseSelectable = true;
			this->metroCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &DemulSelect::metroCheckBox2_CheckedChanged);
			// 
			// metroCheckBox3
			// 
			int AlternativeFFBA = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeFFB"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox3->AutoSize = true;
			this->metroCheckBox3->Location = System::Drawing::Point(368, 128);
			this->metroCheckBox3->Name = L"metroCheckBox3";
			this->metroCheckBox3->Size = System::Drawing::Size(102, 15);
			this->metroCheckBox3->TabIndex = 42;
			this->metroCheckBox3->TabStop = false;
			this->metroCheckBox3->Checked = AlternativeFFBA;
			this->metroCheckBox3->Text = L"Alternative FFB";
			this->metroCheckBox3->UseSelectable = true;
			this->metroCheckBox3->CheckedChanged += gcnew System::EventHandler(this, &DemulSelect::metroCheckBox3_CheckedChanged);
			// 
			// metroCheckBox4
			// 
			int LoggingA = GetPrivateProfileInt(TEXT("Settings"), TEXT("Logging"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox4->AutoSize = true;
			this->metroCheckBox4->Location = System::Drawing::Point(23, 149);
			this->metroCheckBox4->Name = L"metroCheckBox4";
			this->metroCheckBox4->Size = System::Drawing::Size(105, 15);
			this->metroCheckBox4->TabIndex = 43;
			this->metroCheckBox4->TabStop = false;
			this->metroCheckBox4->Checked = LoggingA;
			this->metroCheckBox4->Text = L"Enable Logging";
			this->metroCheckBox4->UseSelectable = true;
			this->metroCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &DemulSelect::metroCheckBox4_CheckedChanged);
			// 
			// metroButton4
			// 
			this->metroButton4->Location = System::Drawing::Point(254, 228);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(216, 23);
			this->metroButton4->TabIndex = 44;
			this->metroButton4->TabStop = false;
			this->metroButton4->Text = L"Maximum Speed";
			this->metroButton4->UseSelectable = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &DemulSelect::metroButton4_Click);
			// 
			// metroButton5
			// 
			this->metroButton5->Location = System::Drawing::Point(254, 199);
			this->metroButton5->Name = L"metroButton5";
			this->metroButton5->Size = System::Drawing::Size(216, 23);
			this->metroButton5->TabIndex = 45;
			this->metroButton5->TabStop = false;
			this->metroButton5->Text = L"Faster Than Speed";
			this->metroButton5->UseSelectable = true;
			this->metroButton5->Click += gcnew System::EventHandler(this, &DemulSelect::metroButton5_Click);
			// 
			// metroButton6
			// 
			this->metroButton6->Location = System::Drawing::Point(23, 199);
			this->metroButton6->Name = L"metroButton6";
			this->metroButton6->Size = System::Drawing::Size(216, 23);
			this->metroButton6->TabIndex = 46;
			this->metroButton6->TabStop = false;
			this->metroButton6->Text = L"ATV Track";
			this->metroButton6->UseSelectable = true;
			this->metroButton6->Click += gcnew System::EventHandler(this, &DemulSelect::metroButton6_Click);
			// 
			// DemulSelect
			// 
			this->ClientSize = System::Drawing::Size(493, 291);
			this->Controls->Add(this->metroButton6);
			this->Controls->Add(this->metroButton5);
			this->Controls->Add(this->metroButton4);
			this->Controls->Add(this->metroCheckBox4);
			this->Controls->Add(this->metroCheckBox3);
			this->Controls->Add(this->metroCheckBox2);
			this->Controls->Add(this->metroTextBox3);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroButton3);
			this->Controls->Add(this->metroButton2);
			this->Controls->Add(this->metroTextBox1);
			this->Controls->Add(this->metroButton1);
			this->Controls->Add(this->metroComboBox1);
			this->Controls->Add(this->metroCheckBox1);
			this->MaximizeBox = false;
			this->Name = L"DemulSelect";
			this->Resizable = false;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DemulSelect::Form1_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		if (e->CloseReason == CloseReason::UserClosing)
		{
			SDL_Quit();
			Application::Exit();
		}
	}
	private: System::Void metroCheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) //Enable Rumble
	{
		if (metroCheckBox1->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("EnableRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("EnableRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)//Reverse Rumble
	{
		if (metroCheckBox2->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ReverseRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ReverseRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)//Alternative FFB
	{
		if (metroCheckBox3->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("AlternativeFFB"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("AlternativeFFB"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)//Enable Logging
	{
		if (metroCheckBox4->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("Logging"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("Logging"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (metroComboBox1->SelectedIndex == 0)
		{
			SDL_Joystick* js = SDL_JoystickOpen(0);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 1)
		{
			SDL_Joystick* js = SDL_JoystickOpen(1);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 2)
		{
			SDL_Joystick* js = SDL_JoystickOpen(2);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 3)
		{
			SDL_Joystick* js = SDL_JoystickOpen(3);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 4)
		{
			SDL_Joystick* js = SDL_JoystickOpen(4);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 5)
		{
			SDL_Joystick* js = SDL_JoystickOpen(5);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 6)
		{
			SDL_Joystick* js = SDL_JoystickOpen(6);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 7)
		{
			SDL_Joystick* js = SDL_JoystickOpen(7);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 8)
		{
			SDL_Joystick* js = SDL_JoystickOpen(8);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 9)
		{
			SDL_Joystick* js = SDL_JoystickOpen(9);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 10)
		{
			SDL_Joystick* js = SDL_JoystickOpen(10);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 11)
		{
			SDL_Joystick* js = SDL_JoystickOpen(11);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 12)
		{
			SDL_Joystick* js = SDL_JoystickOpen(12);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 13)
		{
			SDL_Joystick* js = SDL_JoystickOpen(13);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 14)
		{
			SDL_Joystick* js = SDL_JoystickOpen(14);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 15)
		{
			SDL_Joystick* js = SDL_JoystickOpen(15);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox1->SelectedIndex == 16)
		{
			SDL_Joystick* js = SDL_JoystickOpen(16);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox1->Text = str;
			{
				WritePrivateProfileStringA("Settings", "DeviceGUID", text, ".\\FFBPlugin.ini");
			}
		}
	}
	private: System::Void metroLink1_Click(System::Object^ sender, System::EventArgs^ e) //Go Back To Previous Menu
	{
		this->Hide();
		obj->Show();
	}
	private: System::Void metroTextBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void metroButton1_Click(System::Object^ sender, System::EventArgs^ e) //Initial D Games
	{
		this->Hide();
		InitialDDemul^ obj1 = gcnew InitialDDemul(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton2_Click(System::Object^ sender, System::EventArgs^ e) //Nascar Racing
	{
		this->Hide();
		NascarRacing^ obj1 = gcnew NascarRacing(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton3_Click(System::Object^ sender, System::EventArgs^ e) //Smashing Drive
	{
		this->Hide();
		SmashingDrive^ obj1 = gcnew SmashingDrive(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton4_Click(System::Object^ sender, System::EventArgs^ e) //Maximum Speed
	{
		this->Hide();
		MaximumSpeed^ obj1 = gcnew MaximumSpeed(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton5_Click(System::Object^ sender, System::EventArgs^ e) //Faster Than Speed
	{
		this->Hide();
		FasterThanSpeed^ obj1 = gcnew FasterThanSpeed(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton6_Click(System::Object^ sender, System::EventArgs^ e) //ATV Track
	{
		this->Hide();
		ATVTrack^ obj1 = gcnew ATVTrack(this);
		obj1->ShowDialog();
	}
};
}
