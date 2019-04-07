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
	/// Summary for LGI
	/// </summary>
	public ref class LGI : MetroFramework::Forms::MetroForm
	{
	public:
		LGI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MetroForm ^obj;
		LGI(MetroForm ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LGI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	protected:
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;

	private: MetroFramework::Controls::MetroLink^  metroLink1;
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
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox6;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar4;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox7;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox8;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar5;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox9;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox2;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox3;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox10;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox11;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox4;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox12;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox5;
	private: MetroFramework::Controls::MetroLabel^  metroLabel7;
	private: MetroFramework::Controls::MetroLabel^  metroLabel8;
	private: MetroFramework::Controls::MetroLabel^  metroLabel9;
	private: MetroFramework::Controls::MetroLabel^  metroLabel10;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox13;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar7;
	private: MetroFramework::Controls::MetroLabel^  metroLabel11;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox14;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar8;
	private: MetroFramework::Controls::MetroLabel^  metroLabel12;





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
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
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
			this->metroTextBox6 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar4 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTextBox7 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox8 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar5 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar6 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox9 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox2 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroComboBox3 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox10 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox11 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox4 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox12 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox5 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroLabel7 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel8 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel9 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel10 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox13 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar7 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel11 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox14 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar8 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel12 = (gcnew MetroFramework::Controls::MetroLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroStyleManager1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LGI::Form1_FormClosing);
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
			// metroLink1
			// 
			this->metroLink1->Location = System::Drawing::Point(67, 8);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(173, 23);
			this->metroLink1->TabIndex = 48;
			this->metroLink1->TabStop = false;
			this->metroLink1->Text = L"Go Back To Previous Menu";
			this->metroLink1->UseSelectable = false;
			this->metroLink1->Click += gcnew System::EventHandler(this, &LGI::metroLink1_Click);
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
			this->metroToolTip1->SetToolTip(this->metroTextBox3, L" Device GUID FFBPlugin will use to apply forces to device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox9, L" Device GUID FFBPlugin will use to apply forces to device 2 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox4, L"Length of a feedback command");
			this->metroToolTip1->SetToolTip(this->metroTextBox10, L" Rumble motor to use for Knock Effect ");
			this->metroToolTip1->SetToolTip(this->metroTextBox11, L" Rumble motor to use for Motor Effect ");
			this->metroToolTip1->SetToolTip(this->metroTextBox12, L" Rumble motor to use for Health Effect ");
			this->metroToolTip1->SetToolTip(this->metroTextBox5, L" Strength of knock effect on device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox8, L" Strength of knock effect on device 2 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox7, L" Strength of motor effect on device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox13, L" Strength of motor effect on device 2 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox6, L" Strength of health effect on device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox14, L" Strength of health effect on device 2 ");
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
				this->metroComboBox1->TabStop = false;
				this->metroComboBox1->UseSelectable = false;
				this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &LGI::metroComboBox1_SelectedIndexChanged);
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
			// numericUpDown3
			// 
			int configFeedbackLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("FeedbackLength"), 120, TEXT(".\\FFBPlugin.ini"));
			this->numericUpDown3->Location = System::Drawing::Point(20, 293);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(261, 20);
			this->numericUpDown3->TabIndex = 7;
			this->numericUpDown3->TabStop = false;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown3->Value = configFeedbackLength;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &LGI::numericUpDown3_ValueChanged_1);
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
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &LGI::metroCheckBox1_CheckedChanged);
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
			this->metroCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &LGI::metroCheckBox2_CheckedChanged);
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
			this->metroCheckBox3->CheckedChanged += gcnew System::EventHandler(this, &LGI::metroCheckBox3_CheckedChanged);
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
			this->metroCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &LGI::metroCheckBox4_CheckedChanged);
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
			this->metroCheckBox5->CheckedChanged += gcnew System::EventHandler(this, &LGI::metroCheckBox5_CheckedChanged);
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
			this->metroCheckBox6->CheckedChanged += gcnew System::EventHandler(this, &LGI::metroCheckBox6_CheckedChanged);
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
			this->metroTextBox5->Lines = gcnew cli::array< System::String^  >(1) { L"1p Knock Strength" };
			this->metroTextBox5->Location = System::Drawing::Point(20, 651);
			this->metroTextBox5->MaxLength = 32767;
			this->metroTextBox5->Name = L"metroTextBox5";
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
			this->metroTextBox5->Text = L"1p Knock Strength";
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
			this->metroTrackBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &LGI::metroTrackBar1_Scroll);
			// 
			// metroTrackBar2
			// 
			int Knock1pStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Knock1pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar2->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar2->Location = System::Drawing::Point(20, 677);
			this->metroTrackBar2->Name = L"metroTrackBar2";
			this->metroTrackBar2->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar2->TabIndex = 16;
			this->metroTrackBar2->TabStop = false;
			this->metroTrackBar2->Text = L"metroTrackBar2";
			this->metroTrackBar2->Value = Knock1pStrength;
			this->metroTrackBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &LGI::metroTrackBar2_Scroll);
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
			this->metroTrackBar3->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &LGI::metroTrackBar3_Scroll);
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
			this->metroTextBox6->Lines = gcnew cli::array< System::String^  >(1) { L"1p Health Strength" };
			this->metroTextBox6->Location = System::Drawing::Point(20, 799);
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
			this->metroTextBox6->TabIndex = 18;
			this->metroTextBox6->TabStop = false;
			this->metroTextBox6->Text = L"1p Health Strength";
			this->metroTextBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox6->UseSelectable = false;
			this->metroTextBox6->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox6->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar4
			// 
			int Health1pStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Health1pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar4->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar4->Location = System::Drawing::Point(20, 825);
			this->metroTrackBar4->Name = L"metroTrackBar4";
			this->metroTrackBar4->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar4->TabIndex = 19;
			this->metroTrackBar4->TabStop = false;
			this->metroTrackBar4->Text = L"metroTrackBar4";
			this->metroTrackBar4->Value = Health1pStrength;
			this->metroTrackBar4->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &LGI::metroTrackBar4_Scroll);
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
			this->metroTextBox7->Lines = gcnew cli::array< System::String^  >(1) { L"1p Motor Strength" };
			this->metroTextBox7->Location = System::Drawing::Point(20, 725);
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
			this->metroTextBox7->TabIndex = 20;
			this->metroTextBox7->TabStop = false;
			this->metroTextBox7->Text = L"1p Motor Strength";
			this->metroTextBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox7->UseSelectable = false;
			this->metroTextBox7->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox7->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
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
			this->metroTextBox8->Lines = gcnew cli::array< System::String^  >(1) { L"2p Knock Strength" };
			this->metroTextBox8->Location = System::Drawing::Point(163, 651);
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
			this->metroTextBox8->Text = L"2p Knock Strength";
			this->metroTextBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox8->UseSelectable = false;
			this->metroTextBox8->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox8->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar5
			// 
			int Motor1pStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Motor1pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar5->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar5->Location = System::Drawing::Point(20, 751);
			this->metroTrackBar5->Maximum = 5000;
			this->metroTrackBar5->Name = L"metroTrackBar5";
			this->metroTrackBar5->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar5->TabIndex = 22;
			this->metroTrackBar5->TabStop = false;
			this->metroTrackBar5->Text = L"metroTrackBar5";
			this->metroTrackBar5->Value = Motor1pStrength;
			this->metroTrackBar5->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &LGI::metroTrackBar5_Scroll);
			// 
			// metroTrackBar6
			// 
			int Knock2pStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Knock2pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar6->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar6->Location = System::Drawing::Point(163, 677);
			this->metroTrackBar6->Maximum = 5000;
			this->metroTrackBar6->Name = L"metroTrackBar6";
			this->metroTrackBar6->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar6->TabIndex = 23;
			this->metroTrackBar6->TabStop = false;
			this->metroTrackBar6->Text = L"metroTrackBar6";
			this->metroTrackBar6->Value = Knock2pStrength;
			this->metroTrackBar6->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &LGI::metroTrackBar6_Scroll);
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
			this->metroLabel1->Click += gcnew System::EventHandler(this, &LGI::metroLabel1_Click);
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
			this->metroLabel2->Click += gcnew System::EventHandler(this, &LGI::metroLabel2_Click);
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
				GetPrivateProfileStringA("Settings", "DeviceGUID", "No FFBPlugin.ini found", buff, _countof(buff), ".\\FFBPlugin.ini");
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
				this->metroComboBox2->TabStop = false;
				this->metroComboBox2->UseSelectable = false;
				this->metroComboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &LGI::metroComboBox2_SelectedIndexChanged);
			// 
			// metroComboBox3
			// 
			int HowtoRumbleKnockEffect = GetPrivateProfileInt(TEXT("Settings"), TEXT("HowtoRumbleKnockEffect"), 0, TEXT(".\\FFBPlugin.ini"));
			if (HowtoRumbleKnockEffect == 0)
			{
				this->metroComboBox3->Text = "Both Rumble Motors";
			}
			else if (HowtoRumbleKnockEffect == 1)
			{
				this->metroComboBox3->Text = "Left Rumble Motor";
			}
			else if (HowtoRumbleKnockEffect == 2)
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
			this->metroComboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &LGI::metroComboBox3_SelectedIndexChanged);
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
			this->metroTextBox10->Lines = gcnew cli::array< System::String^  >(1) { L"Which rumble motor for Knock Effect\?" };
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
			this->metroTextBox10->Text = L"Which rumble motor for Knock Effect\?";
			this->metroTextBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox10->UseSelectable = false;
			this->metroTextBox10->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox10->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox11
			// 
			// 
			// 
			// 
			this->metroTextBox11->CustomButton->Image = nullptr;
			this->metroTextBox11->CustomButton->Location = System::Drawing::Point(239, 1);
			this->metroTextBox11->CustomButton->Name = L"";
			this->metroTextBox11->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox11->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox11->CustomButton->TabIndex = 1;
			this->metroTextBox11->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox11->CustomButton->UseSelectable = false;
			this->metroTextBox11->CustomButton->Visible = false;
			this->metroTextBox11->Lines = gcnew cli::array< System::String^  >(1) { L"Which rumble motor for Motor Effect\?" };
			this->metroTextBox11->Location = System::Drawing::Point(20, 504);
			this->metroTextBox11->MaxLength = 32767;
			this->metroTextBox11->Name = L"metroTextBox11";
			this->metroTextBox11->PasswordChar = '\0';
			this->metroTextBox11->ReadOnly = true;
			this->metroTextBox11->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox11->SelectedText = L"";
			this->metroTextBox11->SelectionLength = 0;
			this->metroTextBox11->SelectionStart = 0;
			this->metroTextBox11->ShortcutsEnabled = true;
			this->metroTextBox11->Size = System::Drawing::Size(261, 23);
			this->metroTextBox11->TabIndex = 34;
			this->metroTextBox11->TabStop = false;
			this->metroTextBox11->Text = L"Which rumble motor for Motor Effect\?";
			this->metroTextBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox11->UseSelectable = false;
			this->metroTextBox11->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox11->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroComboBox4
			// 
			int HowtoRumbleMotorEffect = GetPrivateProfileInt(TEXT("Settings"), TEXT("HowtoRumbleMotorEffect"), 0, TEXT(".\\FFBPlugin.ini"));
			if (HowtoRumbleMotorEffect == 0)
			{
				this->metroComboBox4->Text = "Both Rumble Motors";
			}
			else if (HowtoRumbleMotorEffect == 1)
			{
				this->metroComboBox4->Text = "Left Rumble Motor";
			}
			else if (HowtoRumbleMotorEffect == 2)
			{
				this->metroComboBox4->Text = "Right Rumble Motor";
			}
			this->metroComboBox4->FormattingEnabled = true;
			this->metroComboBox4->ItemHeight = 23;
			this->metroComboBox4->Location = System::Drawing::Point(20, 533);
			this->metroComboBox4->Name = L"metroComboBox4";
			this->metroComboBox4->Size = System::Drawing::Size(261, 29);
			this->metroComboBox4->TabIndex = 35;
			this->metroComboBox4->TabStop = false;
			this->metroComboBox4->UseSelectable = false;
			this->metroComboBox4->Items->Add("Both Rumble Motors");
			this->metroComboBox4->Items->Add("Left Rumble Motor");
			this->metroComboBox4->Items->Add("Right Rumble Motor");
			this->metroComboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &LGI::metroComboBox4_SelectedIndexChanged);
			// 
			// metroTextBox12
			// 
			// 
			// 
			// 
			this->metroTextBox12->CustomButton->Image = nullptr;
			this->metroTextBox12->CustomButton->Location = System::Drawing::Point(239, 1);
			this->metroTextBox12->CustomButton->Name = L"";
			this->metroTextBox12->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox12->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox12->CustomButton->TabIndex = 1;
			this->metroTextBox12->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox12->CustomButton->UseSelectable = false;
			this->metroTextBox12->CustomButton->Visible = false;
			this->metroTextBox12->Lines = gcnew cli::array< System::String^  >(1) { L"Which rumble motor for Health Effect\?" };
			this->metroTextBox12->Location = System::Drawing::Point(20, 568);
			this->metroTextBox12->MaxLength = 32767;
			this->metroTextBox12->Name = L"metroTextBox12";
			this->metroTextBox12->PasswordChar = '\0';
			this->metroTextBox12->ReadOnly = true;
			this->metroTextBox12->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox12->SelectedText = L"";
			this->metroTextBox12->SelectionLength = 0;
			this->metroTextBox12->SelectionStart = 0;
			this->metroTextBox12->ShortcutsEnabled = true;
			this->metroTextBox12->Size = System::Drawing::Size(261, 23);
			this->metroTextBox12->TabIndex = 36;
			this->metroTextBox12->TabStop = false;
			this->metroTextBox12->Text = L"Which rumble motor for Health Effect\?";
			this->metroTextBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox12->UseSelectable = false;
			this->metroTextBox12->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox12->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroComboBox5
			//
			int HowtoRumbleHealthEffect = GetPrivateProfileInt(TEXT("Settings"), TEXT("HowtoRumbleHealthEffect"), 0, TEXT(".\\FFBPlugin.ini"));
			if (HowtoRumbleHealthEffect == 0)
			{
				this->metroComboBox5->Text = "Both Rumble Motors";
			}
			else if (HowtoRumbleHealthEffect == 1)
			{
				this->metroComboBox5->Text = "Left Rumble Motor";
			}
			else if (HowtoRumbleHealthEffect == 2)
			{
				this->metroComboBox5->Text = "Right Rumble Motor";
			}
			this->metroComboBox5->FormattingEnabled = true;
			this->metroComboBox5->ItemHeight = 23;
			this->metroComboBox5->Location = System::Drawing::Point(20, 597);
			this->metroComboBox5->Name = L"metroComboBox5";
			this->metroComboBox5->Size = System::Drawing::Size(261, 29);
			this->metroComboBox5->TabIndex = 37;
			this->metroComboBox5->TabStop = false;
			this->metroComboBox5->UseSelectable = false;
			this->metroComboBox5->Items->Add("Both Rumble Motors");
			this->metroComboBox5->Items->Add("Left Rumble Motor");
			this->metroComboBox5->Items->Add("Right Rumble Motor");
			this->metroComboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &LGI::metroComboBox5_SelectedIndexChanged);
			// 
			// metroLabel7
			// 
			int Knock1pStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Knock1pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel7->AutoSize = true;
			this->metroLabel7->Location = System::Drawing::Point(67, 703);
			this->metroLabel7->Name = L"metroLabel7";
			this->metroLabel7->Size = System::Drawing::Size(16, 19);
			this->metroLabel7->TabIndex = 38;
			this->metroLabel7->TabStop = false;
			this->metroLabel7->Text = System::Convert::ToString(Knock1pStrength1);
			this->metroLabel7->Click += gcnew System::EventHandler(this, &LGI::metroLabel7_Click);
			// 
			// metroLabel8
			// 
			int Motor1pStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Motor1pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel8->AutoSize = true;
			this->metroLabel8->Location = System::Drawing::Point(67, 777);
			this->metroLabel8->Name = L"metroLabel8";
			this->metroLabel8->Size = System::Drawing::Size(16, 19);
			this->metroLabel8->TabIndex = 39;
			this->metroLabel8->TabStop = false;
			this->metroLabel8->Text = System::Convert::ToString(Motor1pStrength1);
			this->metroLabel8->Click += gcnew System::EventHandler(this, &LGI::metroLabel8_Click);
			// 
			// metroLabel9
			// 
			int Health1pStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Health1pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel9->AutoSize = true;
			this->metroLabel9->Location = System::Drawing::Point(67, 851);
			this->metroLabel9->Name = L"metroLabel9";
			this->metroLabel9->Size = System::Drawing::Size(16, 19);
			this->metroLabel9->TabIndex = 40;
			this->metroLabel9->TabStop = false;
			this->metroLabel9->Text = System::Convert::ToString(Health1pStrength1);
			this->metroLabel9->Click += gcnew System::EventHandler(this, &LGI::metroLabel9_Click);
			// 
			// metroLabel10
			// 
			int Knock2pStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Knock2pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel10->AutoSize = true;
			this->metroLabel10->Location = System::Drawing::Point(213, 703);
			this->metroLabel10->Name = L"metroLabel10";
			this->metroLabel10->Size = System::Drawing::Size(16, 19);
			this->metroLabel10->TabIndex = 41;
			this->metroLabel10->TabStop = false;
			this->metroLabel10->Text = System::Convert::ToString(Knock2pStrength1);
			this->metroLabel10->Click += gcnew System::EventHandler(this, &LGI::metroLabel10_Click);
			// 
			// metroTextBox13
			// 
			// 
			// 
			// 
			this->metroTextBox13->CustomButton->Image = nullptr;
			this->metroTextBox13->CustomButton->Location = System::Drawing::Point(100, 2);
			this->metroTextBox13->CustomButton->Name = L"";
			this->metroTextBox13->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox13->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox13->CustomButton->TabIndex = 1;
			this->metroTextBox13->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox13->CustomButton->UseSelectable = false;
			this->metroTextBox13->CustomButton->Visible = false;
			this->metroTextBox13->Lines = gcnew cli::array< System::String^  >(1) { L"2p Motor Strength" };
			this->metroTextBox13->Location = System::Drawing::Point(163, 725);
			this->metroTextBox13->MaxLength = 32767;
			this->metroTextBox13->Name = L"metroTextBox13";
			this->metroTextBox13->PasswordChar = '\0';
			this->metroTextBox13->ReadOnly = true;
			this->metroTextBox13->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox13->SelectedText = L"";
			this->metroTextBox13->SelectionLength = 0;
			this->metroTextBox13->SelectionStart = 0;
			this->metroTextBox13->ShortcutsEnabled = true;
			this->metroTextBox13->Size = System::Drawing::Size(118, 20);
			this->metroTextBox13->TabIndex = 42;
			this->metroTextBox13->TabStop = false;
			this->metroTextBox13->Text = L"2p Motor Strength";
			this->metroTextBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox13->UseSelectable = false;
			this->metroTextBox13->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox13->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar7
			// 
			int Motor2pStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Motor2pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar7->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar7->Location = System::Drawing::Point(163, 751);
			this->metroTrackBar7->Name = L"metroTrackBar7";
			this->metroTrackBar7->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar7->TabIndex = 43;
			this->metroTrackBar7->TabStop = false;
			this->metroTrackBar7->Text = L"metroTrackBar7";
			this->metroTrackBar7->Value = Motor2pStrength;
			this->metroTrackBar7->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &LGI::metroTrackBar7_Scroll);
			// 
			// metroLabel11
			// 
			int Motor2pStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Motor2pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel11->AutoSize = true;
			this->metroLabel11->Location = System::Drawing::Point(213, 777);
			this->metroLabel11->Name = L"metroLabel11";
			this->metroLabel11->Size = System::Drawing::Size(16, 19);
			this->metroLabel11->TabIndex = 44;
			this->metroLabel11->TabStop = false;
			this->metroLabel11->Text = System::Convert::ToString(Motor2pStrength1);
			this->metroLabel11->Click += gcnew System::EventHandler(this, &LGI::metroLabel11_Click);
			// 
			// metroTextBox14
			// 
			// 
			// 
			// 
			this->metroTextBox14->CustomButton->Image = nullptr;
			this->metroTextBox14->CustomButton->Location = System::Drawing::Point(100, 2);
			this->metroTextBox14->CustomButton->Name = L"";
			this->metroTextBox14->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox14->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox14->CustomButton->TabIndex = 1;
			this->metroTextBox14->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox14->CustomButton->UseSelectable = false;
			this->metroTextBox14->CustomButton->Visible = false;
			this->metroTextBox14->Lines = gcnew cli::array< System::String^  >(1) { L"2p Health Strength" };
			this->metroTextBox14->Location = System::Drawing::Point(163, 799);
			this->metroTextBox14->MaxLength = 32767;
			this->metroTextBox14->Name = L"metroTextBox14";
			this->metroTextBox14->PasswordChar = '\0';
			this->metroTextBox14->ReadOnly = true;
			this->metroTextBox14->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox14->SelectedText = L"";
			this->metroTextBox14->SelectionLength = 0;
			this->metroTextBox14->SelectionStart = 0;
			this->metroTextBox14->ShortcutsEnabled = true;
			this->metroTextBox14->Size = System::Drawing::Size(118, 20);
			this->metroTextBox14->TabIndex = 45;
			this->metroTextBox14->TabStop = false;
			this->metroTextBox14->Text = L"2p Health Strength";
			this->metroTextBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox14->UseSelectable = false;
			this->metroTextBox14->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox14->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar8
			// 
			int Health2pStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Health2pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar8->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar8->Location = System::Drawing::Point(163, 825);
			this->metroTrackBar8->Name = L"metroTrackBar8";
			this->metroTrackBar8->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar8->TabIndex = 46;
			this->metroTrackBar8->TabStop = false;
			this->metroTrackBar8->Text = L"metroTrackBar8";
			this->metroTrackBar8->Value = Health2pStrength;
			this->metroTrackBar8->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &LGI::metroTrackBar8_Scroll);
			// 
			// metroLabel12
			// 
			int Health2pStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Health2pStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel12->AutoSize = true;
			this->metroLabel12->Location = System::Drawing::Point(213, 851);
			this->metroLabel12->Name = L"metroLabel12";
			this->metroLabel12->Size = System::Drawing::Size(16, 19);
			this->metroLabel12->TabIndex = 47;
			this->metroLabel12->TabStop = false;
			this->metroLabel12->Text = System::Convert::ToString(Health2pStrength1);
			this->metroLabel12->Click += gcnew System::EventHandler(this, &LGI::metroLabel12_Click);
			// 
			// LGI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 899);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroLabel12);
			this->Controls->Add(this->metroTrackBar8);
			this->Controls->Add(this->metroTextBox14);
			this->Controls->Add(this->metroLabel11);
			this->Controls->Add(this->metroTrackBar7);
			this->Controls->Add(this->metroTextBox13);
			this->Controls->Add(this->metroLabel10);
			this->Controls->Add(this->metroLabel9);
			this->Controls->Add(this->metroLabel8);
			this->Controls->Add(this->metroLabel7);
			this->Controls->Add(this->metroComboBox5);
			this->Controls->Add(this->metroTextBox12);
			this->Controls->Add(this->metroComboBox4);
			this->Controls->Add(this->metroTextBox11);
			this->Controls->Add(this->metroTextBox10);
			this->Controls->Add(this->metroComboBox3);
			this->Controls->Add(this->metroComboBox2);
			this->Controls->Add(this->metroTextBox9);
			this->Controls->Add(this->metroLabel2);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroTrackBar6);
			this->Controls->Add(this->metroTrackBar5);
			this->Controls->Add(this->metroTextBox8);
			this->Controls->Add(this->metroTextBox7);
			this->Controls->Add(this->metroTrackBar4);
			this->Controls->Add(this->metroTextBox6);
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
			this->Name = L"LGI";
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

	private: System::Void metroTrackBar2_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //1p Knock Strength
	{
		metroLabel7->Text = metroTrackBar2->Value.ToString();
		Decimal value = metroTrackBar2->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Knock1pStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar4_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //1p Health Strength
	{
		metroLabel9->Text = metroTrackBar4->Value.ToString();
		Decimal value = metroTrackBar4->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Health1pStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar5_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //1p Motor Strength
	{
		metroLabel8->Text = metroTrackBar5->Value.ToString();
		Decimal value = metroTrackBar5->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Motor1pStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar6_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //2p Knock Strength
	{
		metroLabel10->Text = metroTrackBar6->Value.ToString();
		Decimal value = metroTrackBar6->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Knock2pStrength", Result, ".\\FFBPlugin.ini");
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
	private: System::Void metroComboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Which motor for Knock effect?
	{
		if (metroComboBox3->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "HowtoRumbleKnockEffect", "0", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "HowtoRumbleKnockEffect", "1", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "HowtoRumbleKnockEffect", "2", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Which motor for Motor effect?
	{
		if (metroComboBox4->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "HowtoRumbleMotorEffect", "0", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox4->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "HowtoRumbleMotorEffect", "1", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox4->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "HowtoRumbleMotorEffect", "2", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Which motor for Health effect?
	{
		if (metroComboBox5->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "HowtoRumbleHealthEffect", "0", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox5->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "HowtoRumbleHealthEffect", "1", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox5->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "HowtoRumbleHealthEffect", "2", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroLabel7_Click(System::Object^  sender, System::EventArgs^  e) //1p Knock Strength
	{

	}
	private: System::Void metroLabel8_Click(System::Object^  sender, System::EventArgs^  e) //1p Motor Strength
	{

	}
	private: System::Void metroLabel9_Click(System::Object^  sender, System::EventArgs^  e) //1p Health Strength
	{

	}
	private: System::Void metroLabel10_Click(System::Object^  sender, System::EventArgs^  e) //2p Knock Strength
	{

	}
	private: System::Void metroLabel11_Click(System::Object^  sender, System::EventArgs^  e) //2p Motor Strength
	{

	}
	private: System::Void metroLabel12_Click(System::Object^  sender, System::EventArgs^  e) //2p Health Strength
	{

	}
	private: System::Void metroTrackBar7_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //2p Motor Strength
	{
		metroLabel11->Text = metroTrackBar7->Value.ToString();
		Decimal value = metroTrackBar7->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Motor2pStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar8_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //2p Health Strength
	{
		metroLabel12->Text = metroTrackBar8->Value.ToString();
		Decimal value = metroTrackBar8->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Health2pStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) //Go Back
	{
		this->Hide();
		obj->Show();
	}
};
}