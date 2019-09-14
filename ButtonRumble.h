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
	/// Summary for ButtonRumble
	/// </summary>
	public ref class ButtonRumble : MetroFramework::Forms::MetroForm
	{
	public:
		ButtonRumble(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MetroForm ^obj;
		ButtonRumble(MetroForm ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ButtonRumble()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	protected:
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox3;
	private: MetroFramework::Components::MetroToolTip^  metroToolTip1;
	private: MetroFramework::Components::MetroStyleExtender^  metroStyleExtender1;
	private: MetroFramework::Components::MetroStyleExtender^  metroStyleExtender2;
	private: MetroFramework::Components::MetroStyleManager^  metroStyleManager1;
	private: MetroFramework::Components::MetroToolTip^  metroToolTip2;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox1;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox2;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox3;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox4;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox5;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox6;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox5;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar1;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar2;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar3;	
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox8;	
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox9;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox2;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox3;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox10;
	private: MetroFramework::Controls::MetroLabel^  metroLabel7;
	private: MetroFramework::Controls::MetroLabel^  metroLabel10;
	private: MetroFramework::Controls::MetroLink^  metroLink1;





	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroToolTip1 = (gcnew MetroFramework::Components::MetroToolTip());
			this->metroStyleExtender1 = (gcnew MetroFramework::Components::MetroStyleExtender(this->components));
			this->metroStyleExtender2 = (gcnew MetroFramework::Components::MetroStyleExtender(this->components));
			this->metroStyleManager1 = (gcnew MetroFramework::Components::MetroStyleManager(this->components));
			this->metroToolTip2 = (gcnew MetroFramework::Components::MetroToolTip());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox4 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroCheckBox1 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox2 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox3 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox4 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox5 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox6 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroTextBox5 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar1 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar2 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar3 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTextBox8 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar6 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox9 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox2 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroComboBox3 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox10 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel7 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel10 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroStyleManager1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ButtonRumble::Form1_FormClosing);
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
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"MinForce" };
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
			this->metroTextBox1->Text = L"MinForce";
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
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"MaxForce" };
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
			this->metroTextBox2->Text = L"MaxForce";
			this->metroTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox2->UseSelectable = false;
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
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
			this->metroToolTip1->SetToolTip(this->metroTextBox1, L" Minimum overrall force strength that will be applied to device ");
			this->metroToolTip1->SetToolTip(this->metroTextBox2, L" Maximum overrall force strength that will be applied to device ");
			this->metroToolTip1->SetToolTip(this->metroTextBox3, L" Device GUID FFBPlugin will use to apply forces to device ");
			this->metroToolTip1->SetToolTip(this->metroTextBox9, L" Device GUID FFBPlugin will use to apply forces to device 2 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox4, L"Length of a feedback command");
			this->metroToolTip1->SetToolTip(this->metroTextBox10, L" Use both rumble motors, only left motor or only right motor ");
			this->metroToolTip1->SetToolTip(this->metroTextBox5, L" Strength of rumble effect when button pressed ");
			this->metroToolTip1->SetToolTip(this->metroTextBox8, L" Length of rumble effect when button pressed. 0 is to rumble forever until button released ");

			// 
			// metroStyleManager1
			// 
			this->metroStyleManager1->Owner = nullptr;
			// 
			// metroToolTip2
			// 
			this->metroToolTip2->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroToolTip2->StyleManager = nullptr;
			this->metroToolTip2->Theme = MetroFramework::MetroThemeStyle::Light;
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
				this->metroComboBox1->Size = System::Drawing::Size(261, 29);
				this->metroComboBox1->TabIndex = 5;
				this->metroComboBox1->Items->Add("Select no device");
				this->metroComboBox1->TabStop = false;
				this->metroComboBox1->UseSelectable = false;
				this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ButtonRumble::metroComboBox1_SelectedIndexChanged);
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
			this->metroTextBox4->Location = System::Drawing::Point(20, 264);
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
			// metroLink1
			// 
			this->metroLink1->Location = System::Drawing::Point(67, 8);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(173, 23);
			this->metroLink1->TabIndex = 42;
			this->metroLink1->TabStop = false;
			this->metroLink1->Text = L"Go Back To Previous Menu";
			this->metroLink1->UseSelectable = false;
			this->metroLink1->Click += gcnew System::EventHandler(this, &ButtonRumble::metroLink1_Click);

			// 
			// numericUpDown3
			// 
			int configFeedbackLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("FeedbackLength"), 120, TEXT(".\\FFBPlugin.ini"));
			this->numericUpDown3->Location = System::Drawing::Point(20, 293);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999999999999, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(261, 20);
			this->numericUpDown3->TabIndex = 7;
			this->numericUpDown3->TabStop = false;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown3->Value = configFeedbackLength;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &ButtonRumble::numericUpDown3_ValueChanged_1);
			// 
			// metroCheckBox1
			// 
			int EnableRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("EnableRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox1->AutoSize = true;
			this->metroCheckBox1->Location = System::Drawing::Point(20, 357);
			this->metroCheckBox1->Name = L"metroCheckBox1";
			this->metroCheckBox1->Size = System::Drawing::Size(102, 15);
			this->metroCheckBox1->TabIndex = 8;
			this->metroCheckBox1->TabStop = false;
			this->metroCheckBox1->Text = L"Enable Rumble";
			this->metroCheckBox1->UseSelectable = false;
			this->metroCheckBox1->Checked = EnableRumble;
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &ButtonRumble::metroCheckBox1_CheckedChanged);
			// 
			// metroCheckBox2
			// 
			int ReverseRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("ReverseRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox2->AutoSize = true;
			this->metroCheckBox2->Location = System::Drawing::Point(163, 357);
			this->metroCheckBox2->Name = L"metroCheckBox2";
			this->metroCheckBox2->Size = System::Drawing::Size(107, 15);
			this->metroCheckBox2->TabIndex = 9;
			this->metroCheckBox2->TabStop = false;
			this->metroCheckBox2->Text = L"Reverse Rumble";
			this->metroCheckBox2->UseSelectable = false;
			this->metroCheckBox2->Checked = ReverseRumble;
			this->metroCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &ButtonRumble::metroCheckBox2_CheckedChanged);
			// 
			// metroCheckBox3
			// 
			int EnableLogging = GetPrivateProfileInt(TEXT("Settings"), TEXT("Logging"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox3->AutoSize = true;
			this->metroCheckBox3->Location = System::Drawing::Point(20, 378);
			this->metroCheckBox3->Name = L"metroCheckBox3";
			this->metroCheckBox3->Size = System::Drawing::Size(105, 15);
			this->metroCheckBox3->TabIndex = 10;
			this->metroCheckBox3->TabStop = false;
			this->metroCheckBox3->Text = L"Enable Logging";
			this->metroCheckBox3->UseSelectable = false;
			this->metroCheckBox3->Checked = EnableLogging;
			this->metroCheckBox3->CheckedChanged += gcnew System::EventHandler(this, &ButtonRumble::metroCheckBox3_CheckedChanged);
			// 
			// metroCheckBox4
			// 
			int ResetFB = GetPrivateProfileInt(TEXT("Settings"), TEXT("ResetFeedback"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox4->AutoSize = true;
			this->metroCheckBox4->Location = System::Drawing::Point(163, 378);
			this->metroCheckBox4->Name = L"metroCheckBox4";
			this->metroCheckBox4->Size = System::Drawing::Size(104, 15);
			this->metroCheckBox4->TabIndex = 11;
			this->metroCheckBox4->TabStop = false;
			this->metroCheckBox4->Text = L"Reset Feedback";
			this->metroCheckBox4->UseSelectable = false;
			this->metroCheckBox4->Checked = ResetFB;
			this->metroCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &ButtonRumble::metroCheckBox4_CheckedChanged);
			// 
			// metroCheckBox5
			// 
			int BeepWhen = GetPrivateProfileInt(TEXT("Settings"), TEXT("BeepWhenHook"), 120, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox5->AutoSize = true;
			this->metroCheckBox5->Location = System::Drawing::Point(20, 399);
			this->metroCheckBox5->Name = L"metroCheckBox5";
			this->metroCheckBox5->Size = System::Drawing::Size(115, 15);
			this->metroCheckBox5->TabIndex = 12;
			this->metroCheckBox5->TabStop = false;
			this->metroCheckBox5->Text = L"Beep When Hook";
			this->metroCheckBox5->UseSelectable = false;
			this->metroCheckBox5->Checked = BeepWhen;
			this->metroCheckBox5->CheckedChanged += gcnew System::EventHandler(this, &ButtonRumble::metroCheckBox5_CheckedChanged);
			// 
			// metroCheckBox6
			// 
			int GUIDMessage = GetPrivateProfileInt(TEXT("Settings"), TEXT("ForceShowDeviceGUIDMessageBox"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox6->AutoSize = true;
			this->metroCheckBox6->Location = System::Drawing::Point(163, 399);
			this->metroCheckBox6->Name = L"metroCheckBox6";
			this->metroCheckBox6->Size = System::Drawing::Size(118, 15);
			this->metroCheckBox6->TabIndex = 13;
			this->metroCheckBox6->TabStop = false;
			this->metroCheckBox6->Text = L"GUID MessageBox";
			this->metroCheckBox6->UseSelectable = false;
			this->metroCheckBox6->Checked = GUIDMessage;
			this->metroCheckBox6->CheckedChanged += gcnew System::EventHandler(this, &ButtonRumble::metroCheckBox6_CheckedChanged);
			// 
			// metroTextBox5
			// 
			// 
			// 
			// 
			this->metroTextBox5->CustomButton->Image = nullptr;
			this->metroTextBox5->CustomButton->Location = System::Drawing::Point(100, 2);
			this->metroTextBox5->CustomButton->Name = L"";
			this->metroTextBox5->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox5->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox5->CustomButton->TabIndex = 1;
			this->metroTextBox5->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox5->CustomButton->UseSelectable = false;
			this->metroTextBox5->CustomButton->Visible = false;
			this->metroTextBox5->Lines = gcnew cli::array< System::String^  >(1) { L"Rumble Strength" };
			this->metroTextBox5->Location = System::Drawing::Point(20, 504);
			this->metroTextBox5->MaxLength = 32767;
			this->metroTextBox5->Name = L"Rumble Strength";
			this->metroTextBox5->PasswordChar = '\0';
			this->metroTextBox5->ReadOnly = true;
			this->metroTextBox5->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox5->SelectedText = L"";
			this->metroTextBox5->SelectionLength = 0;
			this->metroTextBox5->SelectionStart = 0;
			this->metroTextBox5->ShortcutsEnabled = true;
			this->metroTextBox5->Size = System::Drawing::Size(118, 20);
			this->metroTextBox5->TabIndex = 14;
			this->metroTextBox5->TabStop = false;
			this->metroTextBox5->Text = L"Rumble Strength";
			this->metroTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox5->UseSelectable = false;
			this->metroTextBox5->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox5->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar1
			// 
			int configMinForce = GetPrivateProfileInt(TEXT("Settings"), TEXT("MinForce"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar1->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar1->DisplayFocus = true;
			this->metroTrackBar1->Location = System::Drawing::Point(20, 63);
			this->metroTrackBar1->MouseWheelBarPartitions = 1;
			this->metroTrackBar1->Name = L"metroTrackBar1";
			this->metroTrackBar1->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar1->TabIndex = 15;
			this->metroTrackBar1->TabStop = false;
			this->metroTrackBar1->Text = L"metroTrackBar1";
			this->metroTrackBar1->Value = configMinForce;
			this->metroTrackBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &ButtonRumble::metroTrackBar1_Scroll);
			// 
			// metroTrackBar2
			// 
			int RumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar2->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar2->Location = System::Drawing::Point(20, 530);
			this->metroTrackBar2->Name = L"metroTrackBar2";
			this->metroTrackBar2->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar2->TabIndex = 16;
			this->metroTrackBar2->TabStop = false;
			this->metroTrackBar2->Text = L"metroTrackBar2";
			this->metroTrackBar2->Value = RumbleStrength;
			this->metroTrackBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &ButtonRumble::metroTrackBar2_Scroll);
			// 
			// metroTrackBar3
			// 
			int configMaxForce = GetPrivateProfileInt(TEXT("Settings"), TEXT("MaxForce"), 100, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar3->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar3->Location = System::Drawing::Point(163, 63);
			this->metroTrackBar3->Name = L"metroTrackBar3";
			this->metroTrackBar3->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar3->TabIndex = 17;
			this->metroTrackBar3->TabStop = false;
			this->metroTrackBar3->Text = L"metroTrackBar3";
			this->metroTrackBar3->Value = configMaxForce;
			this->metroTrackBar3->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &ButtonRumble::metroTrackBar3_Scroll);
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
			this->metroTextBox8->Lines = gcnew cli::array< System::String^  >(1) { L"Rumble Length" };
			this->metroTextBox8->Location = System::Drawing::Point(163, 504);
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
			this->metroTextBox8->TabIndex = 21;
			this->metroTextBox8->TabStop = false;
			this->metroTextBox8->Text = L"Rumble Length";
			this->metroTextBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox8->UseSelectable = false;
			this->metroTextBox8->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox8->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar6
			// 
			int RumbleLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar6->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar6->Location = System::Drawing::Point(163, 530);
			this->metroTrackBar6->Maximum = 9999;
			this->metroTrackBar6->Name = L"metroTrackBar6";
			this->metroTrackBar6->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar6->TabIndex = 23;
			this->metroTrackBar6->TabStop = false;
			this->metroTrackBar6->Text = L"metroTrackBar6";
			this->metroTrackBar6->Value = RumbleLength;
			this->metroTrackBar6->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &ButtonRumble::metroTrackBar6_Scroll);
			// 
			// metroLabel1
			// 
			int configMinForce1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("MinForce"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(67, 89);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(0, 0);
			this->metroLabel1->TabIndex = 24;
			this->metroLabel1->TabStop = false;
			this->metroLabel1->Text = System::Convert::ToString(configMinForce1);
			this->metroLabel1->Click += gcnew System::EventHandler(this, &ButtonRumble::metroLabel1_Click);
			// 
			// metroLabel2
			// 
			int configMaxForce1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("MaxForce"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(213, 89);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(0, 0);
			this->metroLabel2->TabIndex = 25;
			this->metroLabel2->TabStop = false;
			this->metroLabel2->Text = System::Convert::ToString(configMaxForce1);
			this->metroLabel2->Click += gcnew System::EventHandler(this, &ButtonRumble::metroLabel2_Click);
			// 
			// metroTextBox9
			// 
			// 
			// 
			// 
			this->metroTextBox9->CustomButton->Image = nullptr;
			this->metroTextBox9->CustomButton->Location = System::Drawing::Point(239, 1);
			this->metroTextBox9->CustomButton->Name = L"";
			this->metroTextBox9->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox9->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox9->CustomButton->TabIndex = 1;
			this->metroTextBox9->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox9->CustomButton->UseSelectable = false;
			this->metroTextBox9->CustomButton->Visible = false;
			this->metroTextBox9->Lines = gcnew cli::array< System::String^  >(1) { L"Device 2 GUID" };
			this->metroTextBox9->Location = System::Drawing::Point(20, 200);
			this->metroTextBox9->MaxLength = 32767;
			this->metroTextBox9->Name = L"metroTextBox9";
			this->metroTextBox9->PasswordChar = '\0';
			this->metroTextBox9->ReadOnly = true;
			this->metroTextBox9->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox9->SelectedText = L"";
			this->metroTextBox9->SelectionLength = 0;
			this->metroTextBox9->SelectionStart = 0;
			this->metroTextBox9->ShortcutsEnabled = true;
			this->metroTextBox9->Size = System::Drawing::Size(261, 23);
			this->metroTextBox9->TabIndex = 30;
			this->metroTextBox9->TabStop = false;
			this->metroTextBox9->Text = L"Device 2 GUID";
			this->metroTextBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox9->UseSelectable = false;
			this->metroTextBox9->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox9->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroComboBox2
			// 
			for (int i = 0; i < SDL_NumJoysticks(); i++)
			{
				SDL_Joystick* js1 = SDL_JoystickOpen(i);
				char buff[300];
				GetPrivateProfileStringA("Settings", "Device2GUID", "No FFBPlugin.ini found", buff, _countof(buff), ".\\FFBPlugin.ini");
				String^ str = gcnew String(buff);
				String^ bah1 = gcnew String(SDL_JoystickName(js1));
				this->metroComboBox2->Text = str;
				this->metroComboBox2->Items->Add(bah1);
			}
			if (SDL_NumJoysticks() == 0)
			{
				this->metroComboBox2->Text = "SDL2 Cannot Detect Any Joystick";
			}
				this->metroComboBox2->FormattingEnabled = true;
				this->metroComboBox2->ItemHeight = 23;
				this->metroComboBox2->Location = System::Drawing::Point(20, 229);
				this->metroComboBox2->Name = L"metroComboBox2";
				this->metroComboBox2->Size = System::Drawing::Size(261, 29);
				this->metroComboBox2->TabIndex = 31;
				this->metroComboBox2->Items->Add("Select no device");
				this->metroComboBox2->TabStop = false;
				this->metroComboBox2->UseSelectable = false;
				this->metroComboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &ButtonRumble::metroComboBox2_SelectedIndexChanged);
			// 
			// metroComboBox3
			// 
			int HowtoRumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("BothRumbleMotor"), 0, TEXT(".\\FFBPlugin.ini"));
			int HowtoRumble2 = GetPrivateProfileInt(TEXT("Settings"), TEXT("LeftRumbleMotor"), 0, TEXT(".\\FFBPlugin.ini"));
			int HowtoRumble3 = GetPrivateProfileInt(TEXT("Settings"), TEXT("RightRumbleMotor"), 0, TEXT(".\\FFBPlugin.ini"));	
			if (HowtoRumble1 == 1)
			{
				this->metroComboBox3->Text = "Both Rumble Motors";
			}
			else if (HowtoRumble2 == 1)
			{
				this->metroComboBox3->Text = "Left Rumble Motor";
			}
			else if (HowtoRumble3 == 1)
			{
				this->metroComboBox3->Text = "Right Rumble Motor";
			}
			this->metroComboBox3->FormattingEnabled = true;
			this->metroComboBox3->ItemHeight = 23;
			this->metroComboBox3->Location = System::Drawing::Point(20, 469);
			this->metroComboBox3->Name = L"metroComboBox3";
			this->metroComboBox3->Size = System::Drawing::Size(261, 29);
			this->metroComboBox3->TabIndex = 32;
			this->metroComboBox3->TabStop = false;
			this->metroComboBox3->UseSelectable = false;
			this->metroComboBox3->Items->Add("Both Rumble Motors");
			this->metroComboBox3->Items->Add("Left Rumble Motor");
			this->metroComboBox3->Items->Add("Right Rumble Motor");
			this->metroComboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &ButtonRumble::metroComboBox3_SelectedIndexChanged);
			// 
			// metroTextBox10
			// 
			// 
			// 
			// 
			this->metroTextBox10->CustomButton->Image = nullptr;
			this->metroTextBox10->CustomButton->Location = System::Drawing::Point(239, 1);
			this->metroTextBox10->CustomButton->Name = L"";
			this->metroTextBox10->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox10->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox10->CustomButton->TabIndex = 1;
			this->metroTextBox10->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox10->CustomButton->UseSelectable = false;
			this->metroTextBox10->CustomButton->Visible = false;
			this->metroTextBox10->Lines = gcnew cli::array< System::String^  >(1) { L"Which rumble motor when button pressed\?" };
			this->metroTextBox10->Location = System::Drawing::Point(20, 440);
			this->metroTextBox10->MaxLength = 32767;
			this->metroTextBox10->Name = L"metroTextBox10";
			this->metroTextBox10->PasswordChar = '\0';
			this->metroTextBox10->ReadOnly = true;
			this->metroTextBox10->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox10->SelectedText = L"";
			this->metroTextBox10->SelectionLength = 0;
			this->metroTextBox10->SelectionStart = 0;
			this->metroTextBox10->ShortcutsEnabled = true;
			this->metroTextBox10->Size = System::Drawing::Size(261, 23);
			this->metroTextBox10->TabIndex = 33;
			this->metroTextBox10->TabStop = false;
			this->metroTextBox10->Text = L"Which rumble motor when button pressed\?";
			this->metroTextBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox10->UseSelectable = false;
			this->metroTextBox10->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox10->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLabel7
			// 
			int RumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel7->AutoSize = true;
			this->metroLabel7->Location = System::Drawing::Point(67, 556);
			this->metroLabel7->Name = L"metroLabel7";
			this->metroLabel7->Size = System::Drawing::Size(16, 19);
			this->metroLabel7->TabIndex = 38;
			this->metroLabel7->TabStop = false;
			this->metroLabel7->Text = System::Convert::ToString(RumbleStrength1);
			this->metroLabel7->Click += gcnew System::EventHandler(this, &ButtonRumble::metroLabel7_Click);
			// 
			// metroLabel10
			// 
			int RumbleLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel10->AutoSize = true;
			this->metroLabel10->Location = System::Drawing::Point(213, 556);
			this->metroLabel10->Name = L"metroLabel10";
			this->metroLabel10->Size = System::Drawing::Size(16, 19);
			this->metroLabel10->TabIndex = 41;
			this->metroLabel10->TabStop = false;
			this->metroLabel10->Text = System::Convert::ToString(RumbleLength1);
			this->metroLabel10->Click += gcnew System::EventHandler(this, &ButtonRumble::metroLabel10_Click);
			// 
			// ButtonRumble
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 599);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroLabel10);
			this->Controls->Add(this->metroLabel7);
			this->Controls->Add(this->metroTextBox10);
			this->Controls->Add(this->metroComboBox3);
			this->Controls->Add(this->metroComboBox2);
			this->Controls->Add(this->metroTextBox9);
			this->Controls->Add(this->metroLabel2);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroTrackBar6);
			this->Controls->Add(this->metroTextBox8);
			this->Controls->Add(this->metroTrackBar3);
			this->Controls->Add(this->metroTrackBar2);
			this->Controls->Add(this->metroTrackBar1);
			this->Controls->Add(this->metroTextBox5);
			this->Controls->Add(this->metroCheckBox6);
			this->Controls->Add(this->metroCheckBox5);
			this->Controls->Add(this->metroCheckBox4);
			this->Controls->Add(this->metroCheckBox3);
			this->Controls->Add(this->metroCheckBox2);
			this->Controls->Add(this->metroCheckBox1);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->metroTextBox4);
			this->Controls->Add(this->metroComboBox1);
			this->Controls->Add(this->metroTextBox3);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroTextBox1);
			this->MaximizeBox = false;
			this->ShowIcon = false;
			this->Name = L"ButtonRumble";
			this->Padding = System::Windows::Forms::Padding(0, 60, 0, 0);
			this->Resizable = false;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroStyleManager1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
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
	private: System::Void metroTrackBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e)//MinForce
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
	private: System::Void metroTrackBar3_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //MaxForce
	{
		metroLabel2->Text = metroTrackBar3->Value.ToString();
		Decimal value = metroTrackBar3->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "MaxForce", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroLabel1_Click(System::Object^  sender, System::EventArgs^  e) //MinForce Number Change
	{

	}
	private: System::Void metroLabel2_Click(System::Object^  sender, System::EventArgs^  e) //MaxForce Number Change
	{

	}

	private: System::Void metroTrackBar2_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Rumble Strength
	{
		metroLabel7->Text = metroTrackBar2->Value.ToString();
		Decimal value = metroTrackBar2->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "RumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar6_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Rumble Length
	{
		metroLabel10->Text = metroTrackBar6->Value.ToString();
		Decimal value = metroTrackBar6->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "RumbleLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) //Feedback Length
	{
		Decimal value = numericUpDown3->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "FeedbackLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //DeviceGUID
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
	private: System::Void numericUpDown3_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) //Feedback length
	{
		Decimal value = numericUpDown3->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "FeedbackLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Device 2 GUID
	{
		if (metroComboBox2->SelectedItem == "Select no device")
		{
			WritePrivateProfileStringA("Settings", "Device2GUID", "", ".\\FFBPlugin.ini");
			this->metroComboBox2->Text = "";
		}
		if (metroComboBox2->SelectedItem != "Select no device")
		{
			if (metroComboBox2->SelectedIndex == 0)
			{
				SDL_Joystick* js = SDL_JoystickOpen(0);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 1)
			{
				SDL_Joystick* js = SDL_JoystickOpen(1);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 2)
			{
				SDL_Joystick* js = SDL_JoystickOpen(2);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 3)
			{
				SDL_Joystick* js = SDL_JoystickOpen(3);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 4)
			{
				SDL_Joystick* js = SDL_JoystickOpen(4);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 5)
			{
				SDL_Joystick* js = SDL_JoystickOpen(5);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 6)
			{
				SDL_Joystick* js = SDL_JoystickOpen(6);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 7)
			{
				SDL_Joystick* js = SDL_JoystickOpen(7);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 8)
			{
				SDL_Joystick* js = SDL_JoystickOpen(8);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 9)
			{
				SDL_Joystick* js = SDL_JoystickOpen(9);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 10)
			{
				SDL_Joystick* js = SDL_JoystickOpen(10);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 11)
			{
				SDL_Joystick* js = SDL_JoystickOpen(11);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 12)
			{
				SDL_Joystick* js = SDL_JoystickOpen(12);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 13)
			{
				SDL_Joystick* js = SDL_JoystickOpen(13);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 14)
			{
				SDL_Joystick* js = SDL_JoystickOpen(14);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 15)
			{
				SDL_Joystick* js = SDL_JoystickOpen(15);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
			else if (metroComboBox2->SelectedIndex == 16)
			{
				SDL_Joystick* js = SDL_JoystickOpen(16);
				SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
				char text[256];
				SDL_JoystickGetGUIDString(guid, text, 256);
				String^ str = gcnew String(text);
				this->metroComboBox2->Text = str;
				{
					WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroComboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Which motor for rumble effect?
	{
		if (metroComboBox3->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "BothRumbleMotor", "1", ".\\FFBPlugin.ini");
			WritePrivateProfileStringA("Settings", "LeftRumbleMotor", "0", ".\\FFBPlugin.ini");
			WritePrivateProfileStringA("Settings", "RightRumbleMotor", "0", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "BothRumbleMotor", "0", ".\\FFBPlugin.ini");
			WritePrivateProfileStringA("Settings", "LeftRumbleMotor", "1", ".\\FFBPlugin.ini");
			WritePrivateProfileStringA("Settings", "RightRumbleMotor", "0", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "BothRumbleMotor", "0", ".\\FFBPlugin.ini");
			WritePrivateProfileStringA("Settings", "LeftRumbleMotor", "0", ".\\FFBPlugin.ini");
			WritePrivateProfileStringA("Settings", "RightRumbleMotor", "1", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroLabel7_Click(System::Object^  sender, System::EventArgs^  e) //Rumble Strength
	{

	}
	private: System::Void metroLabel10_Click(System::Object^  sender, System::EventArgs^  e) //Rumble Length
	{

	}
	private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) //Go Back
	{
		this->Hide();
		obj->Show();
	}
	};
}