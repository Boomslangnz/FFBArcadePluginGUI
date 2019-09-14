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
#include "SDL.h"

namespace FFBPluginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SegaRally3
	/// </summary>
	public ref class SegaRally3 : MetroFramework::Forms::MetroForm
	{
	public:
		SegaRally3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MetroForm ^obj;
		SegaRally3(MetroForm ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SegaRally3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Components::MetroToolTip^  metroToolTip1;
	private: MetroFramework::Controls::MetroLink^  metroLink1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar1;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar2;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox3;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox4;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox1;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox2;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox3;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox4;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox5;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox6;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox7;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox5;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox6;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox7;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar3;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar4;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox8;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox9;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar5;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel3;
	private: MetroFramework::Controls::MetroLabel^  metroLabel4;
	private: MetroFramework::Controls::MetroLabel^  metroLabel5;
	private: MetroFramework::Controls::MetroLabel^  metroLabel6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->metroToolTip1 = (gcnew MetroFramework::Components::MetroToolTip());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar1 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar2 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox4 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroCheckBox1 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox2 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox3 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox4 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox5 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox6 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox7 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroTextBox5 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox6 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox7 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar3 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar4 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTextBox8 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox9 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar5 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar6 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SegaRally3::Form1_FormClosing);
			// 
			// metroToolTip1
			// 
			this->metroToolTip1->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroToolTip1->StyleManager = nullptr;
			this->metroToolTip1->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroToolTip1->SetToolTip(this->metroCheckBox1, L"Enable or disable rumble");
			this->metroToolTip1->SetToolTip(this->metroCheckBox2, L"Reverse the rumble if works incorrectly to liking");
			this->metroToolTip1->SetToolTip(this->metroCheckBox3, L"Enable or disable FFBlog.txt to collect log data");
			this->metroToolTip1->SetToolTip(this->metroCheckBox4, L" When a command contradicts a prior command, clear the prior command ");
			this->metroToolTip1->SetToolTip(this->metroCheckBox5, L"Beep will occur when FFBPlugin hooks application");
			this->metroToolTip1->SetToolTip(this->metroCheckBox6, L" Messagebox will appear when launching application to show guid number ");
			this->metroToolTip1->SetToolTip(this->metroCheckBox7, L"Use if wheel rotates incorrectly");
			this->metroToolTip1->SetToolTip(this->metroTextBox1, L" Minimum overrall force strength that will be applied to device ");
			this->metroToolTip1->SetToolTip(this->metroTextBox2, L" Maximum overrall force strength that will be applied to device ");
			this->metroToolTip1->SetToolTip(this->metroTextBox3, L" Device GUID FFBPlugin will use to apply forces to device ");
			this->metroToolTip1->SetToolTip(this->metroTextBox4, L"Length of a feedback command");
			this->metroToolTip1->SetToolTip(this->metroTextBox5, L"Configuration if using Alternative FFB");
			this->metroToolTip1->SetToolTip(this->metroTextBox6, L" Minimum overrall left force strength that will be applied to device ");
			this->metroToolTip1->SetToolTip(this->metroTextBox7, L" Maximum overrall left force strength that will be applied to device ");
			this->metroToolTip1->SetToolTip(this->metroTextBox8, L" Minimum overrall right force strength that will be applied to device ");
			this->metroToolTip1->SetToolTip(this->metroTextBox9, L" Maximum overrall right force strength that will be applied to device ");
			// 
			// metroTextBox1
			// 
			// 
			// 
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(100, 2);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox1->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox1->CustomButton->TabIndex = 1;
			this->metroTextBox1->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox1->CustomButton->UseSelectable = false;
			this->metroTextBox1->CustomButton->Visible = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"Min Force" };
			this->metroTextBox1->Location = System::Drawing::Point(20, 37);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ReadOnly = true;
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->SelectionLength = 0;
			this->metroTextBox1->SelectionStart = 0;
			this->metroTextBox1->ShortcutsEnabled = true;
			this->metroTextBox1->Size = System::Drawing::Size(118, 20);
			this->metroTextBox1->TabIndex = 0;
			this->metroTextBox1->TabStop = false;
			this->metroTextBox1->Text = L"Min Force";
			this->metroTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox1->UseSelectable = false;
			this->metroTextBox1->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox1->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox2
			// 
			// 
			// 
			// 
			this->metroTextBox2->CustomButton->Image = nullptr;
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(100, 2);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox2->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox2->CustomButton->TabIndex = 1;
			this->metroTextBox2->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox2->CustomButton->UseSelectable = false;
			this->metroTextBox2->CustomButton->Visible = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"Max Force" };
			this->metroTextBox2->Location = System::Drawing::Point(163, 37);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ReadOnly = true;
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->SelectionLength = 0;
			this->metroTextBox2->SelectionStart = 0;
			this->metroTextBox2->ShortcutsEnabled = true;
			this->metroTextBox2->Size = System::Drawing::Size(118, 20);
			this->metroTextBox2->TabIndex = 1;
			this->metroTextBox2->TabStop = false;
			this->metroTextBox2->Text = L"Max Force";
			this->metroTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox2->UseSelectable = false;
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLink1
			// 
			this->metroLink1->Location = System::Drawing::Point(67, 8);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(173, 23);
			this->metroLink1->TabIndex = 30;
			this->metroLink1->TabStop = false;
			this->metroLink1->Text = L"Go Back To Previous Menu";
			this->metroLink1->UseSelectable = false;
			this->metroLink1->Click += gcnew System::EventHandler(this, &SegaRally3::metroLink1_Click);
			// 
			// metroTrackBar1
			// 
			int configMinForce = GetPrivateProfileInt(TEXT("Settings"), TEXT("MinForce"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar1->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar1->Location = System::Drawing::Point(20, 63);
			this->metroTrackBar1->Name = L"metroTrackBar1";
			this->metroTrackBar1->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar1->Maximum = 100;
			this->metroTrackBar1->Minimum = -100;
			this->metroTrackBar1->TabIndex = 2;
			this->metroTrackBar1->TabStop = false;
			this->metroTrackBar1->Text = L"metroTrackBar1";
			this->metroTrackBar1->Value = configMinForce;
			this->metroTrackBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &SegaRally3::metroTrackBar1_Scroll);
			// 
			// metroTrackBar2
			// 
			int configMaxForce = GetPrivateProfileInt(TEXT("Settings"), TEXT("MaxForce"), 100, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar2->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar2->Location = System::Drawing::Point(163, 63);
			this->metroTrackBar2->Name = L"metroTrackBar2";
			this->metroTrackBar2->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar2->TabIndex = 3;
			this->metroTrackBar2->TabStop = false;
			this->metroTrackBar2->Maximum = 100;
			this->metroTrackBar2->Minimum = -100;
			this->metroTrackBar2->Text = L"metroTrackBar2";
			this->metroTrackBar2->Value = configMaxForce;
			this->metroTrackBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &SegaRally3::metroTrackBar2_Scroll);
			// 
			// metroTextBox3
			// 
			// 
			// 
			// 
			this->metroTextBox3->CustomButton->Image = nullptr;
			this->metroTextBox3->CustomButton->Location = System::Drawing::Point(243, 2);
			this->metroTextBox3->CustomButton->Name = L"";
			this->metroTextBox3->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox3->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox3->CustomButton->TabIndex = 1;
			this->metroTextBox3->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox3->CustomButton->UseSelectable = false;
			this->metroTextBox3->CustomButton->Visible = false;
			this->metroTextBox3->Lines = gcnew cli::array< System::String^  >(1) { L"Device GUID" };
			this->metroTextBox3->Location = System::Drawing::Point(20, 139);
			this->metroTextBox3->MaxLength = 32767;
			this->metroTextBox3->Name = L"metroTextBox3";
			this->metroTextBox3->PasswordChar = '\0';
			this->metroTextBox3->ReadOnly = true;
			this->metroTextBox3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox3->SelectedText = L"";
			this->metroTextBox3->SelectionLength = 0;
			this->metroTextBox3->SelectionStart = 0;
			this->metroTextBox3->ShortcutsEnabled = true;
			this->metroTextBox3->Size = System::Drawing::Size(261, 20);
			this->metroTextBox3->TabIndex = 4;
			this->metroTextBox3->TabStop = false;
			this->metroTextBox3->Text = L"Device GUID";
			this->metroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox3->UseSelectable = false;
			this->metroTextBox3->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox3->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
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
				this->metroComboBox1->FormattingEnabled = true;
				this->metroComboBox1->ItemHeight = 23;
				this->metroComboBox1->Location = System::Drawing::Point(20, 165);
				this->metroComboBox1->Name = L"metroComboBox1";
				this->metroComboBox1->Items->Add("Select no device");
				this->metroComboBox1->Size = System::Drawing::Size(261, 29);
				this->metroComboBox1->TabIndex = 5;
				this->metroComboBox1->TabStop = false;
				this->metroComboBox1->UseSelectable = false;

			this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SegaRally3::metroComboBox1_SelectedIndexChanged);
			// 
			// metroTextBox4
			// 
			// 
			// 
			// 
			this->metroTextBox4->CustomButton->Image = nullptr;
			this->metroTextBox4->CustomButton->Location = System::Drawing::Point(239, 1);
			this->metroTextBox4->CustomButton->Name = L"";
			this->metroTextBox4->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox4->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox4->CustomButton->TabIndex = 1;
			this->metroTextBox4->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox4->CustomButton->UseSelectable = false;
			this->metroTextBox4->CustomButton->Visible = false;
			this->metroTextBox4->Lines = gcnew cli::array< System::String^  >(1) { L"Feedback Length" };
			this->metroTextBox4->Location = System::Drawing::Point(20, 200);
			this->metroTextBox4->MaxLength = 32767;
			this->metroTextBox4->Name = L"metroTextBox4";
			this->metroTextBox4->PasswordChar = '\0';
			this->metroTextBox4->ReadOnly = true;
			this->metroTextBox4->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox4->SelectedText = L"";
			this->metroTextBox4->SelectionLength = 0;
			this->metroTextBox4->SelectionStart = 0;
			this->metroTextBox4->ShortcutsEnabled = true;
			this->metroTextBox4->Size = System::Drawing::Size(261, 23);
			this->metroTextBox4->TabIndex = 6;
			this->metroTextBox4->TabStop = false;
			this->metroTextBox4->Text = L"Feedback Length";
			this->metroTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox4->UseSelectable = false;
			this->metroTextBox4->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox4->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroCheckBox1
			// 
			int EnableRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("EnableRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox1->AutoSize = true;
			this->metroCheckBox1->Location = System::Drawing::Point(20, 279);
			this->metroCheckBox1->Name = L"metroCheckBox1";
			this->metroCheckBox1->Size = System::Drawing::Size(102, 15);
			this->metroCheckBox1->TabIndex = 7;
			this->metroCheckBox1->TabStop = false;
			this->metroCheckBox1->Text = L"Enable Rumble";
			this->metroCheckBox1->UseSelectable = false;
			this->metroCheckBox1->Checked = EnableRumble;
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &SegaRally3::metroCheckBox1_CheckedChanged);
			// 
			// metroCheckBox2
			// 
			int ReverseRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("ReverseRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox2->AutoSize = true;
			this->metroCheckBox2->Location = System::Drawing::Point(163, 279);
			this->metroCheckBox2->Name = L"metroCheckBox2";
			this->metroCheckBox2->Size = System::Drawing::Size(107, 15);
			this->metroCheckBox2->TabIndex = 8;
			this->metroCheckBox2->TabStop = false;
			this->metroCheckBox2->Text = L"Reverse Rumble";
			this->metroCheckBox2->UseSelectable = false;
			this->metroCheckBox2->Checked = ReverseRumble;
			this->metroCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &SegaRally3::metroCheckBox2_CheckedChanged);
			// 
			// metroCheckBox3
			// 
			int EnableLogging = GetPrivateProfileInt(TEXT("Settings"), TEXT("Logging"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox3->AutoSize = true;
			this->metroCheckBox3->Location = System::Drawing::Point(20, 300);
			this->metroCheckBox3->Name = L"metroCheckBox3";
			this->metroCheckBox3->Size = System::Drawing::Size(105, 15);
			this->metroCheckBox3->TabIndex = 9;
			this->metroCheckBox3->TabStop = false;
			this->metroCheckBox3->Text = L"Enable Logging";
			this->metroCheckBox3->UseSelectable = false;
			this->metroCheckBox3->Checked = EnableLogging;
			this->metroCheckBox3->CheckedChanged += gcnew System::EventHandler(this, &SegaRally3::metroCheckBox3_CheckedChanged);
			// 
			// metroCheckBox4
			// 
			int ResetFB = GetPrivateProfileInt(TEXT("Settings"), TEXT("ResetFeedback"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox4->AutoSize = true;
			this->metroCheckBox4->Location = System::Drawing::Point(163, 300);
			this->metroCheckBox4->Name = L"metroCheckBox4";
			this->metroCheckBox4->Size = System::Drawing::Size(104, 15);
			this->metroCheckBox4->TabIndex = 10;
			this->metroCheckBox4->TabStop = false;
			this->metroCheckBox4->Text = L"Reset Feedback";
			this->metroCheckBox4->UseSelectable = false;
			this->metroCheckBox4->Checked = ResetFB;
			this->metroCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &SegaRally3::metroCheckBox4_CheckedChanged);
			// 
			// metroCheckBox5
			// 
			int BeepWhen = GetPrivateProfileInt(TEXT("Settings"), TEXT("BeepWhenHook"), 120, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox5->AutoSize = true;
			this->metroCheckBox5->Location = System::Drawing::Point(20, 321);
			this->metroCheckBox5->Name = L"metroCheckBox5";
			this->metroCheckBox5->Size = System::Drawing::Size(115, 15);
			this->metroCheckBox5->TabIndex = 11;
			this->metroCheckBox5->TabStop = false;
			this->metroCheckBox5->Text = L"Beep When Hook";
			this->metroCheckBox5->UseSelectable = false;
			this->metroCheckBox5->Checked = BeepWhen;
			this->metroCheckBox5->CheckedChanged += gcnew System::EventHandler(this, &SegaRally3::metroCheckBox5_CheckedChanged);
			// 
			// metroCheckBox6
			// 
			int GUIDMessage = GetPrivateProfileInt(TEXT("Settings"), TEXT("ForceShowDeviceGUIDMessageBox"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox6->AutoSize = true;
			this->metroCheckBox6->Location = System::Drawing::Point(163, 321);
			this->metroCheckBox6->Name = L"metroCheckBox6";
			this->metroCheckBox6->Size = System::Drawing::Size(118, 15);
			this->metroCheckBox6->TabIndex = 12;
			this->metroCheckBox6->TabStop = false;
			this->metroCheckBox6->Text = L"GUID MessageBox";
			this->metroCheckBox6->UseSelectable = false;
			this->metroCheckBox6->Checked = GUIDMessage;
			this->metroCheckBox6->CheckedChanged += gcnew System::EventHandler(this, &SegaRally3::metroCheckBox6_CheckedChanged);
			// 
			// metroCheckBox7
			// 
			int AlternativeFFB = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeFFB"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox7->AutoSize = true;
			this->metroCheckBox7->Location = System::Drawing::Point(20, 342);
			this->metroCheckBox7->Name = L"metroCheckBox7";
			this->metroCheckBox7->Size = System::Drawing::Size(102, 15);
			this->metroCheckBox7->TabIndex = 13;
			this->metroCheckBox7->TabStop = false;
			this->metroCheckBox7->Text = L"Alternative FFB";
			this->metroCheckBox7->UseSelectable = false;
			this->metroCheckBox7->Checked = AlternativeFFB;
			this->metroCheckBox7->CheckedChanged += gcnew System::EventHandler(this, &SegaRally3::metroCheckBox7_CheckedChanged);
			// 
			// metroTextBox5
			// 
			// 
			// 
			// 
			this->metroTextBox5->CustomButton->Image = nullptr;
			this->metroTextBox5->CustomButton->Location = System::Drawing::Point(243, 2);
			this->metroTextBox5->CustomButton->Name = L"";
			this->metroTextBox5->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox5->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox5->CustomButton->TabIndex = 1;
			this->metroTextBox5->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox5->CustomButton->UseSelectable = false;
			this->metroTextBox5->CustomButton->Visible = false;
			this->metroTextBox5->Lines = gcnew cli::array< System::String^  >(1) { L"Alternative FFB Config" };
			this->metroTextBox5->Location = System::Drawing::Point(20, 375);
			this->metroTextBox5->MaxLength = 32767;
			this->metroTextBox5->Name = L"metroTextBox5";
			this->metroTextBox5->PasswordChar = '\0';
			this->metroTextBox5->ReadOnly = true;
			this->metroTextBox5->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox5->SelectedText = L"";
			this->metroTextBox5->SelectionLength = 0;
			this->metroTextBox5->SelectionStart = 0;
			this->metroTextBox5->ShortcutsEnabled = true;
			this->metroTextBox5->Size = System::Drawing::Size(261, 20);
			this->metroTextBox5->TabIndex = 14;
			this->metroTextBox5->TabStop = false;
			this->metroTextBox5->Text = L"Alternative FFB Config";
			this->metroTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox5->UseSelectable = false;
			this->metroTextBox5->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox5->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox6
			// 
			// 
			// 
			// 
			this->metroTextBox6->CustomButton->Image = nullptr;
			this->metroTextBox6->CustomButton->Location = System::Drawing::Point(100, 2);
			this->metroTextBox6->CustomButton->Name = L"";
			this->metroTextBox6->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox6->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox6->CustomButton->TabIndex = 1;
			this->metroTextBox6->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox6->CustomButton->UseSelectable = false;
			this->metroTextBox6->CustomButton->Visible = false;
			this->metroTextBox6->Lines = gcnew cli::array< System::String^  >(1) { L"Min Force Left" };
			this->metroTextBox6->Location = System::Drawing::Point(20, 401);
			this->metroTextBox6->MaxLength = 32767;
			this->metroTextBox6->Name = L"metroTextBox6";
			this->metroTextBox6->PasswordChar = '\0';
			this->metroTextBox6->ReadOnly = true;
			this->metroTextBox6->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox6->SelectedText = L"";
			this->metroTextBox6->SelectionLength = 0;
			this->metroTextBox6->SelectionStart = 0;
			this->metroTextBox6->ShortcutsEnabled = true;
			this->metroTextBox6->Size = System::Drawing::Size(118, 20);
			this->metroTextBox6->TabIndex = 15;
			this->metroTextBox6->TabStop = false;
			this->metroTextBox6->Text = L"Min Force Left";
			this->metroTextBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox6->UseSelectable = false;
			this->metroTextBox6->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox6->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox7
			// 
			// 
			// 
			// 
			this->metroTextBox7->CustomButton->Image = nullptr;
			this->metroTextBox7->CustomButton->Location = System::Drawing::Point(100, 2);
			this->metroTextBox7->CustomButton->Name = L"";
			this->metroTextBox7->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox7->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox7->CustomButton->TabIndex = 1;
			this->metroTextBox7->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox7->CustomButton->UseSelectable = false;
			this->metroTextBox7->CustomButton->Visible = false;
			this->metroTextBox7->Lines = gcnew cli::array< System::String^  >(1) { L"Max Force Left" };
			this->metroTextBox7->Location = System::Drawing::Point(163, 401);
			this->metroTextBox7->MaxLength = 32767;
			this->metroTextBox7->Name = L"metroTextBox7";
			this->metroTextBox7->PasswordChar = '\0';
			this->metroTextBox7->ReadOnly = true;
			this->metroTextBox7->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox7->SelectedText = L"";
			this->metroTextBox7->SelectionLength = 0;
			this->metroTextBox7->SelectionStart = 0;
			this->metroTextBox7->ShortcutsEnabled = true;
			this->metroTextBox7->Size = System::Drawing::Size(118, 20);
			this->metroTextBox7->TabIndex = 16;
			this->metroTextBox7->TabStop = false;
			this->metroTextBox7->Text = L"Max Force Left";
			this->metroTextBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox7->UseSelectable = false;
			this->metroTextBox7->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox7->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar3
			// 
			int AlternativeMinForceLeft = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMinForceLeft"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar3->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar3->Location = System::Drawing::Point(20, 427);
			this->metroTrackBar3->Name = L"metroTrackBar3";
			this->metroTrackBar3->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar3->TabIndex = 17;
			this->metroTrackBar3->TabStop = false;
			this->metroTrackBar3->Maximum = 100;
			this->metroTrackBar3->Minimum = -100;
			this->metroTrackBar3->Text = L"metroTrackBar3";
			this->metroTrackBar3->Value = AlternativeMinForceLeft;
			this->metroTrackBar3->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &SegaRally3::metroTrackBar3_Scroll);
			// 
			// metroTrackBar4
			// 
			int AlternativeMaxForceLeft = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMaxForceLeft"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar4->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar4->Location = System::Drawing::Point(163, 427);
			this->metroTrackBar4->Name = L"metroTrackBar4";
			this->metroTrackBar4->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar4->TabIndex = 18;
			this->metroTrackBar4->TabStop = false;
			this->metroTrackBar4->Maximum = 100;
			this->metroTrackBar4->Minimum = -100;
			this->metroTrackBar4->Text = L"metroTrackBar4";
			this->metroTrackBar4->Value = AlternativeMaxForceLeft;
			this->metroTrackBar4->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &SegaRally3::metroTrackBar4_Scroll);
			// 
			// metroTextBox8
			// 
			// 
			// 
			// 
			this->metroTextBox8->CustomButton->Image = nullptr;
			this->metroTextBox8->CustomButton->Location = System::Drawing::Point(100, 2);
			this->metroTextBox8->CustomButton->Name = L"";
			this->metroTextBox8->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox8->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox8->CustomButton->TabIndex = 1;
			this->metroTextBox8->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox8->CustomButton->UseSelectable = false;
			this->metroTextBox8->CustomButton->Visible = false;
			this->metroTextBox8->Lines = gcnew cli::array< System::String^  >(1) { L"Min Force Right" };
			this->metroTextBox8->Location = System::Drawing::Point(20, 491);
			this->metroTextBox8->MaxLength = 32767;
			this->metroTextBox8->Name = L"metroTextBox8";
			this->metroTextBox8->PasswordChar = '\0';
			this->metroTextBox8->ReadOnly = true;
			this->metroTextBox8->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox8->SelectedText = L"";
			this->metroTextBox8->SelectionLength = 0;
			this->metroTextBox8->SelectionStart = 0;
			this->metroTextBox8->ShortcutsEnabled = true;
			this->metroTextBox8->Size = System::Drawing::Size(118, 20);
			this->metroTextBox8->TabIndex = 19;
			this->metroTextBox8->TabStop = false;
			this->metroTextBox8->Text = L"Min Force Right";
			this->metroTextBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox8->UseSelectable = false;
			this->metroTextBox8->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox8->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox9
			// 
			// 
			// 
			// 
			this->metroTextBox9->CustomButton->Image = nullptr;
			this->metroTextBox9->CustomButton->Location = System::Drawing::Point(100, 2);
			this->metroTextBox9->CustomButton->Name = L"";
			this->metroTextBox9->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox9->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox9->CustomButton->TabIndex = 1;
			this->metroTextBox9->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox9->CustomButton->UseSelectable = false;
			this->metroTextBox9->CustomButton->Visible = false;
			this->metroTextBox9->Lines = gcnew cli::array< System::String^  >(1) { L"Max Force Right" };
			this->metroTextBox9->Location = System::Drawing::Point(163, 491);
			this->metroTextBox9->MaxLength = 32767;
			this->metroTextBox9->Name = L"metroTextBox9";
			this->metroTextBox9->PasswordChar = '\0';
			this->metroTextBox9->ReadOnly = true;
			this->metroTextBox9->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox9->SelectedText = L"";
			this->metroTextBox9->SelectionLength = 0;
			this->metroTextBox9->SelectionStart = 0;
			this->metroTextBox9->ShortcutsEnabled = true;
			this->metroTextBox9->Size = System::Drawing::Size(118, 20);
			this->metroTextBox9->TabIndex = 20;
			this->metroTextBox9->TabStop = false;
			this->metroTextBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox9->Text = L"Max Force Right";
			this->metroTextBox9->UseSelectable = false;
			this->metroTextBox9->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox9->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar5
			// 
			int AlternativeMinForceRight = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMinForceRight"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar5->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar5->Location = System::Drawing::Point(20, 516);
			this->metroTrackBar5->Name = L"metroTrackBar5";
			this->metroTrackBar5->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar5->TabIndex = 21;
			this->metroTrackBar5->TabStop = false;
			this->metroTrackBar5->Maximum = 100;
			this->metroTrackBar5->Minimum = -100;
			this->metroTrackBar5->Text = L"metroTrackBar5";
			this->metroTrackBar5->Value = AlternativeMinForceRight;
			this->metroTrackBar5->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &SegaRally3::metroTrackBar5_Scroll);
			// 
			// metroTrackBar6
			// 
			int AlternativeMaxForceRight = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMaxForceRight"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar6->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar6->Location = System::Drawing::Point(163, 516);
			this->metroTrackBar6->Name = L"metroTrackBar6";
			this->metroTrackBar6->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar6->TabIndex = 22;
			this->metroTrackBar6->TabStop = false;
			this->metroTrackBar6->Maximum = 100;
			this->metroTrackBar6->Minimum = -100;
			this->metroTrackBar6->Text = L"metroTrackBar6";
			this->metroTrackBar6->Value = AlternativeMaxForceRight;
			this->metroTrackBar6->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &SegaRally3::metroTrackBar6_Scroll);
			// 
			// metroLabel1
			// 
			int configMinForce1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("MinForce"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(70, 89);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(16, 19);
			this->metroLabel1->TabIndex = 23;
			this->metroLabel1->TabStop = false;
			this->metroLabel1->Text = System::Convert::ToString(configMinForce1);
			this->metroLabel1->Click += gcnew System::EventHandler(this, &SegaRally3::metroLabel1_Click);
			// 
			// metroLabel2
			// 
			int configMaxForce1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("MaxForce"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(213, 89);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(16, 19);
			this->metroLabel2->TabIndex = 24;
			this->metroLabel2->TabStop = false;
			this->metroLabel2->Text = System::Convert::ToString(configMaxForce1);
			this->metroLabel2->Click += gcnew System::EventHandler(this, &SegaRally3::metroLabel2_Click);
			// 
			// metroLabel3
			// 
			int AlternativeMinForceLeft1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMinForceLeft"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->Location = System::Drawing::Point(70, 453);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(16, 19);
			this->metroLabel3->TabIndex = 25;
			this->metroLabel3->TabStop = false;
			this->metroLabel3->Text = System::Convert::ToString(AlternativeMinForceLeft1);
			this->metroLabel3->Click += gcnew System::EventHandler(this, &SegaRally3::metroLabel3_Click);
			// 
			// metroLabel4
			// 
			int AlternativeMaxForceLeft1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMaxForceLeft"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->Location = System::Drawing::Point(213, 453);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(16, 19);
			this->metroLabel4->TabIndex = 26;
			this->metroLabel4->TabStop = false;
			this->metroLabel4->Text = System::Convert::ToString(AlternativeMaxForceLeft1);
			this->metroLabel4->Click += gcnew System::EventHandler(this, &SegaRally3::metroLabel4_Click);
			// 
			// metroLabel5
			// 
			int AlternativeMinForceRight1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMinForceRight"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->Location = System::Drawing::Point(70, 542);
			this->metroLabel5->Name = L"metroLabel5";
			this->metroLabel5->Size = System::Drawing::Size(16, 19);
			this->metroLabel5->TabIndex = 27;
			this->metroLabel5->TabStop = false;
			this->metroLabel5->Text = System::Convert::ToString(AlternativeMinForceRight1);
			this->metroLabel5->Click += gcnew System::EventHandler(this, &SegaRally3::metroLabel5_Click);
			// 
			// metroLabel6
			// 
			int AlternativeMaxForceRight1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMaxForceRight"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel6->AutoSize = true;
			this->metroLabel6->Location = System::Drawing::Point(213, 542);
			this->metroLabel6->Name = L"metroLabel6";
			this->metroLabel6->Size = System::Drawing::Size(16, 19);
			this->metroLabel6->TabIndex = 28;
			this->metroLabel6->TabStop = false;
			this->metroLabel6->Text = System::Convert::ToString(AlternativeMaxForceRight1);
			this->metroLabel6->Click += gcnew System::EventHandler(this, &SegaRally3::metroLabel6_Click);
			// 
			// numericUpDown1
			// 
			int configFeedbackLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("FeedbackLength"), 120, TEXT(".\\FFBPlugin.ini"));
			this->numericUpDown1->Location = System::Drawing::Point(20, 229);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999999999999, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(261, 20);
			this->numericUpDown1->TabIndex = 29;
			this->numericUpDown1->TabStop = false;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = configFeedbackLength1;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &SegaRally3::numericUpDown1_ValueChanged);
			// 
			// SegaRally3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 576);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->metroLabel6);
			this->Controls->Add(this->metroLabel5);
			this->Controls->Add(this->metroLabel4);
			this->Controls->Add(this->metroLabel3);
			this->Controls->Add(this->metroLabel2);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroTrackBar6);
			this->Controls->Add(this->metroTrackBar5);
			this->Controls->Add(this->metroTextBox9);
			this->Controls->Add(this->metroTextBox8);
			this->Controls->Add(this->metroTrackBar4);
			this->Controls->Add(this->metroTrackBar3);
			this->Controls->Add(this->metroTextBox7);
			this->Controls->Add(this->metroTextBox6);
			this->Controls->Add(this->metroTextBox5);
			this->Controls->Add(this->metroCheckBox7);
			this->Controls->Add(this->metroCheckBox6);
			this->Controls->Add(this->metroCheckBox5);
			this->Controls->Add(this->metroCheckBox4);
			this->Controls->Add(this->metroCheckBox3);
			this->Controls->Add(this->metroCheckBox2);
			this->Controls->Add(this->metroCheckBox1);
			this->Controls->Add(this->metroTextBox4);
			this->Controls->Add(this->metroComboBox1);
			this->Controls->Add(this->metroTextBox3);
			this->Controls->Add(this->metroTrackBar2);
			this->Controls->Add(this->metroTrackBar1);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroTextBox1);
			this->MaximizeBox = false;
			this->ShowIcon = false;
			this->Name = L"SegaRally3";
			this->Padding = System::Windows::Forms::Padding(0, 60, 0, 0);
			this->Resizable = false;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		if (e->CloseReason == CloseReason::UserClosing)
		{
			SDL_Quit();
			Application::Exit();
		}
	}
	private: System::Void metroTrackBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) // Min Force
	{
		metroLabel1->Text = metroTrackBar1->Value.ToString();
		Decimal value = metroTrackBar1->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "MinForce", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar2_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Max Force
	{
		metroLabel2->Text = metroTrackBar2->Value.ToString();
		Decimal value = metroTrackBar2->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "MaxForce", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Device GUID
	{
		if (metroComboBox1->SelectedItem == "Select no device")
		{
			WritePrivateProfileStringA("Settings", "DeviceGUID", "", ".\\FFBPlugin.ini");
			this->metroComboBox1->Text = "";
		}
		if (metroComboBox1->SelectedItem != "Select no device")
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
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) //Feedback Length
	{
		Decimal value = numericUpDown1->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "FeedbackLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroCheckBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Enable Rumble
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
	private: System::Void metroCheckBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Reverse Rumble
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
	private: System::Void metroCheckBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Enable Logging
	{
		if (metroCheckBox3->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("Logging"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("Logging"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Reset Feedback
	{
		if (metroCheckBox4->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ResetFeedback"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ResetFeedback"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Beep When Hook
	{
		if (metroCheckBox5->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("BeepWhenHook"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("BeepWhenHook"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //GUID MessageBox
	{
		if (metroCheckBox6->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ForceShowDeviceGUIDMessageBox"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ForceShowDeviceGUIDMessageBox"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Alternative FFB
	{
		{
			if (metroCheckBox7->Checked)
			{
				WritePrivateProfileString(TEXT("Settings"), TEXT("AlternativeFFB"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
			}
			else
			{
				WritePrivateProfileString(TEXT("Settings"), TEXT("AlternativeFFB"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
			}
		}
	}
	private: System::Void metroTrackBar3_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Min Force Left
	{
		metroLabel3->Text = metroTrackBar3->Value.ToString();
		Decimal value = metroTrackBar3->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "AlternativeMinForceLeft", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar4_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Max Force Left
	{
		metroLabel4->Text = metroTrackBar4->Value.ToString();
		Decimal value = metroTrackBar4->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "AlternativeMaxForceLeft", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar5_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Min Force Right
	{
		metroLabel5->Text = metroTrackBar5->Value.ToString();
		Decimal value = metroTrackBar5->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "AlternativeMinForceRight", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar6_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Max Force Right
	{
		metroLabel6->Text = metroTrackBar6->Value.ToString();
		Decimal value = metroTrackBar6->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "AlternativeMaxForceRight", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroLabel1_Click(System::Object^  sender, System::EventArgs^  e) //Min Force Number Change
	{

	}
	private: System::Void metroLabel2_Click(System::Object^  sender, System::EventArgs^  e) //Max Force Number Change
	{

	}
	private: System::Void metroLabel3_Click(System::Object^  sender, System::EventArgs^  e) //Min Force Left Number Change
	{

	}
	private: System::Void metroLabel4_Click(System::Object^  sender, System::EventArgs^  e) //Max Force Left Number Change
	{

	}
	private: System::Void metroLabel5_Click(System::Object^  sender, System::EventArgs^  e) //Min Force Right Number Change
	{

	}
	private: System::Void metroLabel6_Click(System::Object^  sender, System::EventArgs^  e) //Max Force Right Number Change
	{

	}
	private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) //Go Back
	{
		this->Hide();
		obj->Show();
	}
	};
}