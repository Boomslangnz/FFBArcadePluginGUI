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
	/// Summary for MKGP110
	/// </summary>
	public ref class MKGP110 : MetroFramework::Forms::MetroForm
	{
	public:
		MKGP110(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:

		MetroForm ^obj;
		MKGP110(MetroForm ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MKGP110()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroLink^  metroLink1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	protected:
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar1;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox3;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox22;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox23;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox23;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox24;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar20;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox25;
	private: MetroFramework::Controls::MetroLabel^  metroLabel20;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox26;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar21;
	private: MetroFramework::Controls::MetroLabel^  metroLabel21;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar22;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar23;
	private: MetroFramework::Controls::MetroLabel^  metroLabel22;
	private: MetroFramework::Controls::MetroLabel^  metroLabel23;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox2;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox3;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox4;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox5;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox6;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox7;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox8;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox9;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox10;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox11;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox12;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox13;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox14;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox15;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox16;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox17;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox18;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox19;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox20;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox21;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox22;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox5;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox6;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar3;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar4;
	private: MetroFramework::Controls::MetroLabel^  metroLabel3;
	private: MetroFramework::Controls::MetroLabel^  metroLabel4;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox7;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar5;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox8;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel5;
	private: MetroFramework::Controls::MetroLabel^  metroLabel6;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox9;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar7;
	private: MetroFramework::Controls::MetroLabel^  metroLabel7;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox10;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar8;
	private: MetroFramework::Controls::MetroLabel^  metroLabel8;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox11;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar9;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox12;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar10;
	private: MetroFramework::Controls::MetroLabel^  metroLabel9;
	private: MetroFramework::Controls::MetroLabel^  metroLabel10;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox13;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox14;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar11;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar12;
	private: MetroFramework::Controls::MetroLabel^  metroLabel11;
	private: MetroFramework::Controls::MetroLabel^  metroLabel12;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox15;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox16;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar13;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar14;
	private: MetroFramework::Controls::MetroLabel^  metroLabel13;
	private: MetroFramework::Controls::MetroLabel^  metroLabel14;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox17;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox18;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar15;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar16;
	private: MetroFramework::Controls::MetroLabel^  metroLabel15;
	private: MetroFramework::Controls::MetroLabel^  metroLabel16;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox19;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox20;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar17;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar18;
	private: MetroFramework::Controls::MetroLabel^  metroLabel17;
	private: MetroFramework::Controls::MetroLabel^  metroLabel18;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox21;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar19;
	private: MetroFramework::Controls::MetroLabel^  metroLabel19;
	private: MetroFramework::Components::MetroToolTip^  metroToolTip1;

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
			this->metroCheckBox1 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox2 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox3 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox4 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox5 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox6 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox7 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox4 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox5 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox6 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox7 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox8 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox9 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox10 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox11 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox12 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox13 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox14 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox15 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox16 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox17 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox18 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox19 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox20 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox21 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroTrackBar1 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar2 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroCheckBox8 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox9 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox10 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox11 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox12 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox13 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox14 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox15 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox16 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox17 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox18 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox19 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox20 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox21 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox22 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroTrackBar3 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar4 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTrackBar5 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar6 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTrackBar7 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel7 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTrackBar8 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel8 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTrackBar9 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar10 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel9 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel10 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTrackBar11 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar12 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel11 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel12 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTrackBar13 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar14 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel13 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel14 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTrackBar15 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar16 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel15 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel16 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTrackBar17 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar18 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel17 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel18 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTrackBar19 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel19 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroCheckBox23 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroTextBox22 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox23 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox24 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar20 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTextBox25 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel20 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox26 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar21 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel21 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTrackBar22 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar23 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel22 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel23 = (gcnew MetroFramework::Controls::MetroLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
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
			this->metroToolTip1->SetToolTip(this->metroTextBox5, L"Strength of constant effect similar to spring");
			this->metroToolTip1->SetToolTip(this->metroTextBox6, L"Strength when using weapons");
			this->metroToolTip1->SetToolTip(this->metroTextBox7, L"Strength when picking up coins");
			this->metroToolTip1->SetToolTip(this->metroTextBox8, L"Division of strength when drifting");
			this->metroToolTip1->SetToolTip(this->metroTextBox9, L"Strength when kart hits ground");
			this->metroToolTip1->SetToolTip(this->metroTextBox10, L"Strength when using boost effect");
			this->metroToolTip1->SetToolTip(this->metroTextBox11, L"Strength when hitting karts or walls");
			this->metroToolTip1->SetToolTip(this->metroTextBox12, L"Strength when driving over dirt");
			this->metroToolTip1->SetToolTip(this->metroTextBox13, L"Strength when driving over grass");
			this->metroToolTip1->SetToolTip(this->metroTextBox14, L"Strength when driving over sand");
			this->metroToolTip1->SetToolTip(this->metroTextBox15, L"Strength when driving through water for wheels");
			this->metroToolTip1->SetToolTip(this->metroTextBox16, L"Strength when driving through water for rumble");
			this->metroToolTip1->SetToolTip(this->metroTextBox17, L"Strength when driving over tiles");
			this->metroToolTip1->SetToolTip(this->metroTextBox18, L"Strength when driving over carpet");
			this->metroToolTip1->SetToolTip(this->metroTextBox19, L"Strength when driving over speed bumps");
			this->metroToolTip1->SetToolTip(this->metroTextBox20, L"Strength when driving over rough part of track");
			this->metroToolTip1->SetToolTip(this->metroTextBox21, L"Strength when driving over bridge");
			// 
			// metroCheckBox1
			// 
			int EnableRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("EnableRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox1->AutoSize = true;
			this->metroCheckBox1->Location = System::Drawing::Point(20, 499);
			this->metroCheckBox1->Name = L"metroCheckBox1";
			this->metroCheckBox1->Size = System::Drawing::Size(102, 15);
			this->metroCheckBox1->TabIndex = 10;
			this->metroCheckBox1->TabStop = false;
			this->metroCheckBox1->Text = L"Enable Rumble";
			this->metroCheckBox1->Checked = EnableRumble;
			this->metroCheckBox1->UseSelectable = true;
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox1_CheckedChanged);
			// 
			// metroCheckBox2
			// 
			int ReverseRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("ReverseRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox2->AutoSize = true;
			this->metroCheckBox2->Location = System::Drawing::Point(159, 499);
			this->metroCheckBox2->Name = L"metroCheckBox2";
			this->metroCheckBox2->Size = System::Drawing::Size(107, 15);
			this->metroCheckBox2->TabIndex = 11;
			this->metroCheckBox2->TabStop = false;
			this->metroCheckBox2->Text = L"Reverse Rumble";
			this->metroCheckBox2->UseSelectable = true;
			this->metroCheckBox2->Checked = ReverseRumble;
			this->metroCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox2_CheckedChanged);
			// 
			// metroCheckBox3
			// 
			int EnableLogging = GetPrivateProfileInt(TEXT("Settings"), TEXT("Logging"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox3->AutoSize = true;
			this->metroCheckBox3->Location = System::Drawing::Point(20, 520);
			this->metroCheckBox3->Name = L"metroCheckBox3";
			this->metroCheckBox3->Size = System::Drawing::Size(105, 15);
			this->metroCheckBox3->TabIndex = 12;
			this->metroCheckBox3->TabStop = false;
			this->metroCheckBox3->Text = L"Enable Logging";
			this->metroCheckBox3->Checked = EnableLogging;
			this->metroCheckBox3->UseSelectable = true;
			this->metroCheckBox3->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox3_CheckedChanged);
			// 
			// metroCheckBox4
			// 
			int ResetFB = GetPrivateProfileInt(TEXT("Settings"), TEXT("ResetFeedback"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox4->AutoSize = true;
			this->metroCheckBox4->Location = System::Drawing::Point(159, 520);
			this->metroCheckBox4->Name = L"metroCheckBox4";
			this->metroCheckBox4->Size = System::Drawing::Size(104, 15);
			this->metroCheckBox4->TabIndex = 13;
			this->metroCheckBox4->TabStop = false;
			this->metroCheckBox4->Text = L"Reset Feedback";
			this->metroCheckBox4->Checked = ResetFB;
			this->metroCheckBox4->UseSelectable = true;
			this->metroCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox4_CheckedChanged);
			// 
			// metroCheckBox5
			// 
			int BeepWhen = GetPrivateProfileInt(TEXT("Settings"), TEXT("BeepWhenHook"), 120, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox5->AutoSize = true;
			this->metroCheckBox5->Location = System::Drawing::Point(20, 541);
			this->metroCheckBox5->Name = L"metroCheckBox5";
			this->metroCheckBox5->Size = System::Drawing::Size(115, 15);
			this->metroCheckBox5->TabIndex = 14;
			this->metroCheckBox5->TabStop = false;
			this->metroCheckBox5->Text = L"Beep When Hook";
			this->metroCheckBox5->Checked = BeepWhen;
			this->metroCheckBox5->UseSelectable = true;
			this->metroCheckBox5->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox5_CheckedChanged);
			// 
			// metroCheckBox6
			// 
			int GUIDMessage = GetPrivateProfileInt(TEXT("Settings"), TEXT("ForceShowDeviceGUIDMessageBox"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox6->AutoSize = true;
			this->metroCheckBox6->Location = System::Drawing::Point(159, 541);
			this->metroCheckBox6->Name = L"metroCheckBox6";
			this->metroCheckBox6->Size = System::Drawing::Size(118, 15);
			this->metroCheckBox6->TabIndex = 15;
			this->metroCheckBox6->TabStop = false;
			this->metroCheckBox6->Text = L"GUID Messagebox";
			this->metroCheckBox6->Checked = GUIDMessage;
			this->metroCheckBox6->UseSelectable = true;
			this->metroCheckBox6->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox6_CheckedChanged);
			// 
			// metroCheckBox7
			// 
			int ConstantEffectForSteering = GetPrivateProfileInt(TEXT("Settings"), TEXT("ConstantEffectForSteering"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox7->AutoSize = true;
			this->metroCheckBox7->Location = System::Drawing::Point(20, 575);
			this->metroCheckBox7->Name = L"metroCheckBox7";
			this->metroCheckBox7->Size = System::Drawing::Size(117, 15);
			this->metroCheckBox7->TabIndex = 16;
			this->metroCheckBox7->TabStop = false;
			this->metroCheckBox7->Text = L"Constant Steering";
			this->metroCheckBox7->Checked = ConstantEffectForSteering;
			this->metroCheckBox7->UseSelectable = true;
			this->metroCheckBox7->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox7_CheckedChanged);
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
			this->metroTextBox1->CustomButton->UseSelectable = true;
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
			this->metroToolTip1->SetToolTip(this->metroTextBox1, L" Minimum overrall force strength that will be applied to device ");
			this->metroTextBox1->UseSelectable = true;
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
			this->metroTextBox2->CustomButton->UseSelectable = true;
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
			this->metroToolTip1->SetToolTip(this->metroTextBox2, L" Maximum overrall force strength that will be applied to device ");
			this->metroTextBox2->UseSelectable = true;
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
			this->metroTextBox3->CustomButton->Location = System::Drawing::Point(239, 1);
			this->metroTextBox3->CustomButton->Name = L"";
			this->metroTextBox3->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox3->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox3->CustomButton->TabIndex = 1;
			this->metroTextBox3->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox3->CustomButton->UseSelectable = true;
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
			this->metroTextBox3->Size = System::Drawing::Size(261, 23);
			this->metroTextBox3->TabIndex = 6;
			this->metroTextBox3->TabStop = false;
			this->metroTextBox3->Text = L"Device GUID";
			this->metroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox3, L" Device GUID FFBPlugin will use to apply forces to device ");
			this->metroTextBox3->UseSelectable = true;
			this->metroTextBox3->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox3->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
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
			this->metroTextBox4->CustomButton->UseSelectable = true;
			this->metroTextBox4->CustomButton->Visible = false;
			this->metroTextBox4->Lines = gcnew cli::array< System::String^  >(1) { L"Feedback Length" };
			this->metroTextBox4->Location = System::Drawing::Point(20, 203);
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
			this->metroTextBox4->TabIndex = 8;
			this->metroTextBox4->TabStop = false;
			this->metroTextBox4->Text = L"Feedback Length";
			this->metroTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox4, L"Length of a feedback command");
			this->metroTextBox4->UseSelectable = true;
			this->metroTextBox4->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox4->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox5
			// 
			// 
			// 
			// 
			this->metroTextBox5->CustomButton->Image = nullptr;
			this->metroTextBox5->CustomButton->Location = System::Drawing::Point(93, 1);
			this->metroTextBox5->CustomButton->Name = L"";
			this->metroTextBox5->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox5->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox5->CustomButton->TabIndex = 1;
			this->metroTextBox5->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox5->CustomButton->UseSelectable = true;
			this->metroTextBox5->CustomButton->Visible = false;
			this->metroTextBox5->Lines = gcnew cli::array< System::String^  >(1) { L"Constant Strength" };
			this->metroTextBox5->Location = System::Drawing::Point(20, 752);
			this->metroTextBox5->MaxLength = 32767;
			this->metroTextBox5->Name = L"metroTextBox5";
			this->metroTextBox5->PasswordChar = '\0';
			this->metroTextBox5->ReadOnly = true;
			this->metroTextBox5->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox5->SelectedText = L"";
			this->metroTextBox5->SelectionLength = 0;
			this->metroTextBox5->SelectionStart = 0;
			this->metroTextBox5->ShortcutsEnabled = true;
			this->metroTextBox5->Size = System::Drawing::Size(115, 23);
			this->metroTextBox5->TabIndex = 32;
			this->metroTextBox5->TabStop = false;
			this->metroTextBox5->Text = L"Constant Strength";
			this->metroTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox5, L"Strength of constant effect similar to spring");
			this->metroTextBox5->UseSelectable = true;
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
			this->metroTextBox6->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox6->CustomButton->Name = L"";
			this->metroTextBox6->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox6->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox6->CustomButton->TabIndex = 1;
			this->metroTextBox6->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox6->CustomButton->UseSelectable = true;
			this->metroTextBox6->CustomButton->Visible = false;
			this->metroTextBox6->Lines = gcnew cli::array< System::String^  >(1) { L"Weapon Strength" };
			this->metroTextBox6->Location = System::Drawing::Point(168, 752);
			this->metroTextBox6->MaxLength = 32767;
			this->metroTextBox6->Name = L"metroTextBox6";
			this->metroTextBox6->PasswordChar = '\0';
			this->metroTextBox6->ReadOnly = true;
			this->metroTextBox6->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox6->SelectedText = L"";
			this->metroTextBox6->SelectionLength = 0;
			this->metroTextBox6->SelectionStart = 0;
			this->metroTextBox6->ShortcutsEnabled = true;
			this->metroTextBox6->Size = System::Drawing::Size(118, 23);
			this->metroTextBox6->TabIndex = 33;
			this->metroTextBox6->TabStop = false;
			this->metroTextBox6->Text = L"Weapon Strength";
			this->metroTextBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox6, L"Strength when using weapons");
			this->metroTextBox6->UseSelectable = true;
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
			this->metroTextBox7->CustomButton->Location = System::Drawing::Point(93, 1);
			this->metroTextBox7->CustomButton->Name = L"";
			this->metroTextBox7->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox7->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox7->CustomButton->TabIndex = 1;
			this->metroTextBox7->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox7->CustomButton->UseSelectable = true;
			this->metroTextBox7->CustomButton->Visible = false;
			this->metroTextBox7->Lines = gcnew cli::array< System::String^  >(1) { L"Coin Strength" };
			this->metroTextBox7->Location = System::Drawing::Point(20, 829);
			this->metroTextBox7->MaxLength = 32767;
			this->metroTextBox7->Name = L"metroTextBox7";
			this->metroTextBox7->PasswordChar = '\0';
			this->metroTextBox7->ReadOnly = true;
			this->metroTextBox7->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox7->SelectedText = L"";
			this->metroTextBox7->SelectionLength = 0;
			this->metroTextBox7->SelectionStart = 0;
			this->metroTextBox7->ShortcutsEnabled = true;
			this->metroTextBox7->Size = System::Drawing::Size(115, 23);
			this->metroTextBox7->TabIndex = 38;
			this->metroTextBox7->TabStop = false;
			this->metroTextBox7->Text = L"Coin Strength";
			this->metroTextBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox7, L"Strength when picking up coins");
			this->metroTextBox7->UseSelectable = true;
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
			this->metroTextBox8->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox8->CustomButton->Name = L"";
			this->metroTextBox8->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox8->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox8->CustomButton->TabIndex = 1;
			this->metroTextBox8->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox8->CustomButton->UseSelectable = true;
			this->metroTextBox8->CustomButton->Visible = false;
			this->metroTextBox8->Lines = gcnew cli::array< System::String^  >(1) { L"Drift Multiplier" };
			this->metroTextBox8->Location = System::Drawing::Point(168, 829);
			this->metroTextBox8->MaxLength = 32767;
			this->metroTextBox8->Name = L"metroTextBox8";
			this->metroTextBox8->PasswordChar = '\0';
			this->metroTextBox8->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox8->SelectedText = L"";
			this->metroTextBox8->SelectionLength = 0;
			this->metroTextBox8->SelectionStart = 0;
			this->metroTextBox8->ShortcutsEnabled = true;
			this->metroTextBox8->Size = System::Drawing::Size(118, 23);
			this->metroTextBox8->TabIndex = 40;
			this->metroTextBox8->TabStop = false;
			this->metroTextBox8->Text = L"Drift Multiplier";
			this->metroTextBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox8, L"Division of strength when drifting");
			this->metroTextBox8->UseSelectable = true;
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
			this->metroTextBox9->CustomButton->Location = System::Drawing::Point(93, 1);
			this->metroTextBox9->CustomButton->Name = L"";
			this->metroTextBox9->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox9->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox9->CustomButton->TabIndex = 1;
			this->metroTextBox9->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox9->CustomButton->UseSelectable = true;
			this->metroTextBox9->CustomButton->Visible = false;
			this->metroTextBox9->Lines = gcnew cli::array< System::String^  >(1) { L"Hit Ground Strength" };
			this->metroTextBox9->Location = System::Drawing::Point(20, 906);
			this->metroTextBox9->MaxLength = 32767;
			this->metroTextBox9->Name = L"metroTextBox9";
			this->metroTextBox9->PasswordChar = '\0';
			this->metroTextBox9->ReadOnly = true;
			this->metroTextBox9->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox9->SelectedText = L"";
			this->metroTextBox9->SelectionLength = 0;
			this->metroTextBox9->SelectionStart = 0;
			this->metroTextBox9->ShortcutsEnabled = true;
			this->metroTextBox9->Size = System::Drawing::Size(115, 23);
			this->metroTextBox9->TabIndex = 44;
			this->metroTextBox9->TabStop = false;
			this->metroTextBox9->Text = L"Hit Ground Strength";
			this->metroTextBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox9, L"Strength when kart hits ground");
			this->metroTextBox9->UseSelectable = true;
			this->metroTextBox9->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox9->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox10
			// 
			// 
			// 
			// 
			this->metroTextBox10->CustomButton->Image = nullptr;
			this->metroTextBox10->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox10->CustomButton->Name = L"";
			this->metroTextBox10->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox10->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox10->CustomButton->TabIndex = 1;
			this->metroTextBox10->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox10->CustomButton->UseSelectable = true;
			this->metroTextBox10->CustomButton->Visible = false;
			this->metroTextBox10->Lines = gcnew cli::array< System::String^  >(1) { L"Boost Strength" };
			this->metroTextBox10->Location = System::Drawing::Point(168, 906);
			this->metroTextBox10->MaxLength = 32767;
			this->metroTextBox10->Name = L"metroTextBox10";
			this->metroTextBox10->PasswordChar = '\0';
			this->metroTextBox10->ReadOnly = true;
			this->metroTextBox10->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox10->SelectedText = L"";
			this->metroTextBox10->SelectionLength = 0;
			this->metroTextBox10->SelectionStart = 0;
			this->metroTextBox10->ShortcutsEnabled = true;
			this->metroTextBox10->Size = System::Drawing::Size(118, 23);
			this->metroTextBox10->TabIndex = 47;
			this->metroTextBox10->TabStop = false;
			this->metroTextBox10->Text = L"Boost Strength";
			this->metroTextBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox10, L"Strength when using boost effect");
			this->metroTextBox10->UseSelectable = true;
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
			this->metroTextBox11->CustomButton->Location = System::Drawing::Point(93, 1);
			this->metroTextBox11->CustomButton->Name = L"";
			this->metroTextBox11->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox11->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox11->CustomButton->TabIndex = 1;
			this->metroTextBox11->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox11->CustomButton->UseSelectable = true;
			this->metroTextBox11->CustomButton->Visible = false;
			this->metroTextBox11->Lines = gcnew cli::array< System::String^  >(1) { L"Main Shake Strength" };
			this->metroTextBox11->Location = System::Drawing::Point(20, 986);
			this->metroTextBox11->MaxLength = 32767;
			this->metroTextBox11->Name = L"metroTextBox11";
			this->metroTextBox11->PasswordChar = '\0';
			this->metroTextBox11->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox11->SelectedText = L"";
			this->metroTextBox11->SelectionLength = 0;
			this->metroTextBox11->SelectionStart = 0;
			this->metroTextBox11->ShortcutsEnabled = true;
			this->metroTextBox11->Size = System::Drawing::Size(115, 23);
			this->metroTextBox11->TabIndex = 50;
			this->metroTextBox11->TabStop = false;
			this->metroTextBox11->Text = L"Main Shake Strength";
			this->metroTextBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox11, L"Strength when hitting karts or walls");
			this->metroTextBox11->UseSelectable = true;
			this->metroTextBox11->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox11->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox12
			// 
			// 
			// 
			// 
			this->metroTextBox12->CustomButton->Image = nullptr;
			this->metroTextBox12->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox12->CustomButton->Name = L"";
			this->metroTextBox12->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox12->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox12->CustomButton->TabIndex = 1;
			this->metroTextBox12->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox12->CustomButton->UseSelectable = true;
			this->metroTextBox12->CustomButton->Visible = false;
			this->metroTextBox12->Lines = gcnew cli::array< System::String^  >(1) { L"Dirt Strength" };
			this->metroTextBox12->Location = System::Drawing::Point(168, 986);
			this->metroTextBox12->MaxLength = 32767;
			this->metroTextBox12->Name = L"metroTextBox12";
			this->metroTextBox12->PasswordChar = '\0';
			this->metroTextBox12->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox12->SelectedText = L"";
			this->metroTextBox12->SelectionLength = 0;
			this->metroTextBox12->SelectionStart = 0;
			this->metroTextBox12->ShortcutsEnabled = true;
			this->metroTextBox12->Size = System::Drawing::Size(118, 23);
			this->metroTextBox12->TabIndex = 52;
			this->metroTextBox12->TabStop = false;
			this->metroTextBox12->Text = L"Dirt Strength";
			this->metroTextBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox12, L"Strength when driving over dirt");
			this->metroTextBox12->UseSelectable = true;
			this->metroTextBox12->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox12->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox13
			// 
			// 
			// 
			// 
			this->metroTextBox13->CustomButton->Image = nullptr;
			this->metroTextBox13->CustomButton->Location = System::Drawing::Point(93, 1);
			this->metroTextBox13->CustomButton->Name = L"";
			this->metroTextBox13->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox13->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox13->CustomButton->TabIndex = 1;
			this->metroTextBox13->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox13->CustomButton->UseSelectable = true;
			this->metroTextBox13->CustomButton->Visible = false;
			this->metroTextBox13->Lines = gcnew cli::array< System::String^  >(1) { L"Grass Strength" };
			this->metroTextBox13->Location = System::Drawing::Point(20, 1060);
			this->metroTextBox13->MaxLength = 32767;
			this->metroTextBox13->Name = L"metroTextBox13";
			this->metroTextBox13->PasswordChar = '\0';
			this->metroTextBox13->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox13->SelectedText = L"";
			this->metroTextBox13->SelectionLength = 0;
			this->metroTextBox13->SelectionStart = 0;
			this->metroTextBox13->ShortcutsEnabled = true;
			this->metroTextBox13->Size = System::Drawing::Size(115, 23);
			this->metroTextBox13->TabIndex = 56;
			this->metroTextBox13->TabStop = false;
			this->metroTextBox13->Text = L"Grass Strength";
			this->metroTextBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox13, L"Strength when driving over grass");
			this->metroTextBox13->UseSelectable = true;
			this->metroTextBox13->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox13->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox14
			// 
			// 
			// 
			// 
			this->metroTextBox14->CustomButton->Image = nullptr;
			this->metroTextBox14->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox14->CustomButton->Name = L"";
			this->metroTextBox14->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox14->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox14->CustomButton->TabIndex = 1;
			this->metroTextBox14->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox14->CustomButton->UseSelectable = true;
			this->metroTextBox14->CustomButton->Visible = false;
			this->metroTextBox14->Lines = gcnew cli::array< System::String^  >(1) { L"Sand Strength" };
			this->metroTextBox14->Location = System::Drawing::Point(168, 1060);
			this->metroTextBox14->MaxLength = 32767;
			this->metroTextBox14->Name = L"metroTextBox14";
			this->metroTextBox14->PasswordChar = '\0';
			this->metroTextBox14->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox14->SelectedText = L"";
			this->metroTextBox14->SelectionLength = 0;
			this->metroTextBox14->SelectionStart = 0;
			this->metroTextBox14->ShortcutsEnabled = true;
			this->metroTextBox14->Size = System::Drawing::Size(118, 23);
			this->metroTextBox14->TabIndex = 57;
			this->metroTextBox14->TabStop = false;
			this->metroTextBox14->Text = L"Sand Strength";
			this->metroTextBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox14, L"Strength when driving over sand");
			this->metroTextBox14->UseSelectable = true;
			this->metroTextBox14->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox14->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox15
			// 
			// 
			// 
			// 
			this->metroTextBox15->CustomButton->Image = nullptr;
			this->metroTextBox15->CustomButton->Location = System::Drawing::Point(93, 1);
			this->metroTextBox15->CustomButton->Name = L"";
			this->metroTextBox15->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox15->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox15->CustomButton->TabIndex = 1;
			this->metroTextBox15->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox15->CustomButton->UseSelectable = true;
			this->metroTextBox15->CustomButton->Visible = false;
			this->metroTextBox15->Lines = gcnew cli::array< System::String^  >(1) { L"Water Friction" };
			this->metroTextBox15->Location = System::Drawing::Point(20, 1140);
			this->metroTextBox15->MaxLength = 32767;
			this->metroTextBox15->Name = L"metroTextBox15";
			this->metroTextBox15->PasswordChar = '\0';
			this->metroTextBox15->ReadOnly = true;
			this->metroTextBox15->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox15->SelectedText = L"";
			this->metroTextBox15->SelectionLength = 0;
			this->metroTextBox15->SelectionStart = 0;
			this->metroTextBox15->ShortcutsEnabled = true;
			this->metroTextBox15->Size = System::Drawing::Size(115, 23);
			this->metroTextBox15->TabIndex = 62;
			this->metroTextBox15->TabStop = false;
			this->metroTextBox15->Text = L"Water Friction";
			this->metroTextBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox15, L"Strength when driving through water for wheels");
			this->metroTextBox15->UseSelectable = true;
			this->metroTextBox15->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox15->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox16
			// 
			// 
			// 
			// 
			this->metroTextBox16->CustomButton->Image = nullptr;
			this->metroTextBox16->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox16->CustomButton->Name = L"";
			this->metroTextBox16->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox16->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox16->CustomButton->TabIndex = 1;
			this->metroTextBox16->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox16->CustomButton->UseSelectable = true;
			this->metroTextBox16->CustomButton->Visible = false;
			this->metroTextBox16->Lines = gcnew cli::array< System::String^  >(1) { L"Water Rumble" };
			this->metroTextBox16->Location = System::Drawing::Point(168, 1140);
			this->metroTextBox16->MaxLength = 32767;
			this->metroTextBox16->Name = L"metroTextBox16";
			this->metroTextBox16->PasswordChar = '\0';
			this->metroTextBox16->ReadOnly = true;
			this->metroTextBox16->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox16->SelectedText = L"";
			this->metroTextBox16->SelectionLength = 0;
			this->metroTextBox16->SelectionStart = 0;
			this->metroTextBox16->ShortcutsEnabled = true;
			this->metroTextBox16->Size = System::Drawing::Size(118, 23);
			this->metroTextBox16->TabIndex = 63;
			this->metroTextBox16->TabStop = false;
			this->metroTextBox16->Text = L"Water Rumble";
			this->metroTextBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox16, L"Strength when driving through water for rumble");
			this->metroTextBox16->UseSelectable = true;
			this->metroTextBox16->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox16->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox17
			// 
			// 
			// 
			// 
			this->metroTextBox17->CustomButton->Image = nullptr;
			this->metroTextBox17->CustomButton->Location = System::Drawing::Point(93, 1);
			this->metroTextBox17->CustomButton->Name = L"";
			this->metroTextBox17->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox17->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox17->CustomButton->TabIndex = 1;
			this->metroTextBox17->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox17->CustomButton->UseSelectable = true;
			this->metroTextBox17->CustomButton->Visible = false;
			this->metroTextBox17->Lines = gcnew cli::array< System::String^  >(1) { L"Tile Strength" };
			this->metroTextBox17->Location = System::Drawing::Point(20, 1217);
			this->metroTextBox17->MaxLength = 32767;
			this->metroTextBox17->Name = L"metroTextBox17";
			this->metroTextBox17->PasswordChar = '\0';
			this->metroTextBox17->ReadOnly = true;
			this->metroTextBox17->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox17->SelectedText = L"";
			this->metroTextBox17->SelectionLength = 0;
			this->metroTextBox17->SelectionStart = 0;
			this->metroTextBox17->ShortcutsEnabled = true;
			this->metroTextBox17->Size = System::Drawing::Size(115, 23);
			this->metroTextBox17->TabIndex = 68;
			this->metroTextBox17->TabStop = false;
			this->metroTextBox17->Text = L"Tile Strength";
			this->metroTextBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox17, L"Strength when driving over tiles");
			this->metroTextBox17->UseSelectable = true;
			this->metroTextBox17->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox17->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox18
			// 
			// 
			// 
			// 
			this->metroTextBox18->CustomButton->Image = nullptr;
			this->metroTextBox18->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox18->CustomButton->Name = L"";
			this->metroTextBox18->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox18->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox18->CustomButton->TabIndex = 1;
			this->metroTextBox18->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox18->CustomButton->UseSelectable = true;
			this->metroTextBox18->CustomButton->Visible = false;
			this->metroTextBox18->Lines = gcnew cli::array< System::String^  >(1) { L"Carpet Strength" };
			this->metroTextBox18->Location = System::Drawing::Point(168, 1217);
			this->metroTextBox18->MaxLength = 32767;
			this->metroTextBox18->Name = L"metroTextBox18";
			this->metroTextBox18->PasswordChar = '\0';
			this->metroTextBox18->ReadOnly = true;
			this->metroTextBox18->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox18->SelectedText = L"";
			this->metroTextBox18->SelectionLength = 0;
			this->metroTextBox18->SelectionStart = 0;
			this->metroTextBox18->ShortcutsEnabled = true;
			this->metroTextBox18->Size = System::Drawing::Size(118, 23);
			this->metroTextBox18->TabIndex = 69;
			this->metroTextBox18->TabStop = false;
			this->metroTextBox18->Text = L"Carpet Strength";
			this->metroTextBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox18, L"Strength when driving over carpet");
			this->metroTextBox18->UseSelectable = true;
			this->metroTextBox18->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox18->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox19
			// 
			// 
			// 
			// 
			this->metroTextBox19->CustomButton->Image = nullptr;
			this->metroTextBox19->CustomButton->Location = System::Drawing::Point(93, 1);
			this->metroTextBox19->CustomButton->Name = L"";
			this->metroTextBox19->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox19->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox19->CustomButton->TabIndex = 1;
			this->metroTextBox19->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox19->CustomButton->UseSelectable = true;
			this->metroTextBox19->CustomButton->Visible = false;
			this->metroTextBox19->Lines = gcnew cli::array< System::String^  >(1) { L"Speed Bump" };
			this->metroTextBox19->Location = System::Drawing::Point(23, 1295);
			this->metroTextBox19->MaxLength = 32767;
			this->metroTextBox19->Name = L"metroTextBox19";
			this->metroTextBox19->PasswordChar = '\0';
			this->metroTextBox19->ReadOnly = true;
			this->metroTextBox19->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox19->SelectedText = L"";
			this->metroTextBox19->SelectionLength = 0;
			this->metroTextBox19->SelectionStart = 0;
			this->metroTextBox19->ShortcutsEnabled = true;
			this->metroTextBox19->Size = System::Drawing::Size(115, 23);
			this->metroTextBox19->TabIndex = 74;
			this->metroTextBox19->TabStop = false;
			this->metroTextBox19->Text = L"Speed Bump";
			this->metroTextBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox19, L"Strength when driving over speed bumps");
			this->metroTextBox19->UseSelectable = true;
			this->metroTextBox19->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox19->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox20
			// 
			// 
			// 
			// 
			this->metroTextBox20->CustomButton->Image = nullptr;
			this->metroTextBox20->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox20->CustomButton->Name = L"";
			this->metroTextBox20->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox20->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox20->CustomButton->TabIndex = 1;
			this->metroTextBox20->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox20->CustomButton->UseSelectable = true;
			this->metroTextBox20->CustomButton->Visible = false;
			this->metroTextBox20->Lines = gcnew cli::array< System::String^  >(1) { L"Rough Track" };
			this->metroTextBox20->Location = System::Drawing::Point(168, 1295);
			this->metroTextBox20->MaxLength = 32767;
			this->metroTextBox20->Name = L"metroTextBox20";
			this->metroTextBox20->PasswordChar = '\0';
			this->metroTextBox20->ReadOnly = true;
			this->metroTextBox20->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox20->SelectedText = L"";
			this->metroTextBox20->SelectionLength = 0;
			this->metroTextBox20->SelectionStart = 0;
			this->metroTextBox20->ShortcutsEnabled = true;
			this->metroTextBox20->Size = System::Drawing::Size(118, 23);
			this->metroTextBox20->TabIndex = 75;
			this->metroTextBox20->TabStop = false;
			this->metroTextBox20->Text = L"Rough Track";
			this->metroTextBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox20, L"Strength when driving over rough part of track");
			this->metroTextBox20->UseSelectable = true;
			this->metroTextBox20->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox20->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox21
			// 
			// 
			// 
			// 
			this->metroTextBox21->CustomButton->Image = nullptr;
			this->metroTextBox21->CustomButton->Location = System::Drawing::Point(93, 1);
			this->metroTextBox21->CustomButton->Name = L"";
			this->metroTextBox21->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox21->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox21->CustomButton->TabIndex = 1;
			this->metroTextBox21->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox21->CustomButton->UseSelectable = true;
			this->metroTextBox21->CustomButton->Visible = false;
			this->metroTextBox21->Lines = gcnew cli::array< System::String^  >(1) { L"Bridge Strength" };
			this->metroTextBox21->Location = System::Drawing::Point(23, 1372);
			this->metroTextBox21->MaxLength = 32767;
			this->metroTextBox21->Name = L"metroTextBox21";
			this->metroTextBox21->PasswordChar = '\0';
			this->metroTextBox21->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox21->SelectedText = L"";
			this->metroTextBox21->SelectionLength = 0;
			this->metroTextBox21->SelectionStart = 0;
			this->metroTextBox21->ShortcutsEnabled = true;
			this->metroTextBox21->Size = System::Drawing::Size(115, 23);
			this->metroTextBox21->TabIndex = 80;
			this->metroTextBox21->TabStop = false;
			this->metroTextBox21->Text = L"Bridge Strength";
			this->metroTextBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox21, L"Strength when driving over bridge");
			this->metroTextBox21->UseSelectable = true;
			this->metroTextBox21->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox21->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLink1
			// 
			this->metroLink1->Location = System::Drawing::Point(67, 8);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(173, 23);
			this->metroLink1->TabIndex = 84;
			this->metroLink1->TabStop = false;
			this->metroLink1->Text = L"Go Back To Previous Menu";
			this->metroLink1->UseSelectable = true;
			this->metroLink1->Click += gcnew System::EventHandler(this, &MKGP110::metroLink1_Click);
			// 
			// metroTrackBar1
			// 
			int configMinForce = GetPrivateProfileInt(TEXT("Settings"), TEXT("MinForce"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar1->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar1->Location = System::Drawing::Point(20, 63);
			this->metroTrackBar1->Name = L"metroTrackBar1";
			this->metroTrackBar1->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar1->TabIndex = 2;
			this->metroTrackBar1->Value = configMinForce;
			this->metroTrackBar1->TabStop = false;
			this->metroTrackBar1->Text = L"metroTrackBar1";
			this->metroTrackBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar1_Scroll);
			// 
			// metroTrackBar2
			// 
			int configMaxForce = GetPrivateProfileInt(TEXT("Settings"), TEXT("MaxForce"), 100, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar2->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar2->Location = System::Drawing::Point(163, 63);
			this->metroTrackBar2->Name = L"metroTrackBar2";
			this->metroTrackBar2->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar2->TabIndex = 3;
			this->metroTrackBar2->Value = configMaxForce;
			this->metroTrackBar2->TabStop = false;
			this->metroTrackBar2->Text = L"metroTrackBar2";
			this->metroTrackBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar2_Scroll);
			// 
			// metroLabel1
			// 
			int configMinForce1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("MinForce"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(71, 89);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(0, 0);
			this->metroLabel1->Text = System::Convert::ToString(configMinForce1);
			this->metroLabel1->TabIndex = 4;
			// 
			// metroLabel2
			// 
			int configMaxForce1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("MaxForce"), 100, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(213, 89);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(0, 0);
			this->metroLabel2->Text = System::Convert::ToString(configMaxForce1);
			this->metroLabel2->TabIndex = 5;
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
			this->metroComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Select no device" });
			this->metroComboBox1->Location = System::Drawing::Point(20, 168);
			this->metroComboBox1->Name = L"metroComboBox1";
			this->metroComboBox1->Size = System::Drawing::Size(261, 29);
			this->metroComboBox1->TabIndex = 7;
			this->metroComboBox1->TabStop = false;
			this->metroComboBox1->UseSelectable = true;
			this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MKGP110::metroComboBox1_SelectedIndexChanged);
			// 
			// numericUpDown1
			// 
			int configFeedbackLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("FeedbackLength"), 120, TEXT(".\\FFBPlugin.ini"));
			this->numericUpDown1->Location = System::Drawing::Point(20, 232);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(261, 20);
			this->numericUpDown1->TabIndex = 9;
			this->numericUpDown1->Value = configFeedbackLength1;
			this->numericUpDown1->TabStop = false;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MKGP110::numericUpDown1_ValueChanged);
			// 
			// metroCheckBox8
			// 
			int WeaponRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("WeaponRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox8->AutoSize = true;
			this->metroCheckBox8->Location = System::Drawing::Point(159, 575);
			this->metroCheckBox8->Name = L"metroCheckBox8";
			this->metroCheckBox8->Size = System::Drawing::Size(100, 15);
			this->metroCheckBox8->TabIndex = 17;
			this->metroCheckBox8->TabStop = false;
			this->metroCheckBox8->Text = L"Weapon Effect";
			this->metroCheckBox8->Checked = WeaponRumble;
			this->metroCheckBox8->UseSelectable = true;
			this->metroCheckBox8->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox8_CheckedChanged);
			// 
			// metroCheckBox9
			// 
			int CoinRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("CoinRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox9->AutoSize = true;
			this->metroCheckBox9->Location = System::Drawing::Point(20, 596);
			this->metroCheckBox9->Name = L"metroCheckBox9";
			this->metroCheckBox9->Size = System::Drawing::Size(81, 15);
			this->metroCheckBox9->TabIndex = 18;
			this->metroCheckBox9->TabStop = false;
			this->metroCheckBox9->Text = L"Coin Effect";
			this->metroCheckBox9->Checked = CoinRumble;
			this->metroCheckBox9->UseSelectable = true;
			this->metroCheckBox9->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox9_CheckedChanged);
			// 
			// metroCheckBox10
			// 
			int DriftRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("DriftRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox10->AutoSize = true;
			this->metroCheckBox10->Location = System::Drawing::Point(159, 596);
			this->metroCheckBox10->Name = L"metroCheckBox10";
			this->metroCheckBox10->Size = System::Drawing::Size(79, 15);
			this->metroCheckBox10->TabIndex = 19;
			this->metroCheckBox10->TabStop = false;
			this->metroCheckBox10->Text = L"Drift Effect";
			this->metroCheckBox10->Checked = DriftRumble;
			this->metroCheckBox10->UseSelectable = true;
			this->metroCheckBox10->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox10_CheckedChanged);
			// 
			// metroCheckBox11
			// 
			int HitGroundRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("HitGroundRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox11->AutoSize = true;
			this->metroCheckBox11->Location = System::Drawing::Point(20, 617);
			this->metroCheckBox11->Name = L"metroCheckBox11";
			this->metroCheckBox11->Size = System::Drawing::Size(115, 15);
			this->metroCheckBox11->TabIndex = 20;
			this->metroCheckBox11->TabStop = false;
			this->metroCheckBox11->Text = L"Hit Ground Effect";
			this->metroCheckBox11->Checked = HitGroundRumble;
			this->metroCheckBox11->UseSelectable = true;
			this->metroCheckBox11->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox11_CheckedChanged);
			// 
			// metroCheckBox12
			// 
			int BoostRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("BoostRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox12->AutoSize = true;
			this->metroCheckBox12->Location = System::Drawing::Point(159, 617);
			this->metroCheckBox12->Name = L"metroCheckBox12";
			this->metroCheckBox12->Size = System::Drawing::Size(86, 15);
			this->metroCheckBox12->TabIndex = 21;
			this->metroCheckBox12->TabStop = false;
			this->metroCheckBox12->Text = L"Boost Effect";
			this->metroCheckBox12->Checked = BoostRumble;
			this->metroCheckBox12->UseSelectable = true;
			this->metroCheckBox12->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox12_CheckedChanged);
			// 
			// metroCheckBox13
			// 
			int MainShakeRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("MainShakeRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox13->AutoSize = true;
			this->metroCheckBox13->Location = System::Drawing::Point(20, 638);
			this->metroCheckBox13->Name = L"metroCheckBox13";
			this->metroCheckBox13->Size = System::Drawing::Size(117, 15);
			this->metroCheckBox13->TabIndex = 22;
			this->metroCheckBox13->TabStop = false;
			this->metroCheckBox13->Text = L"Main Shake Effect";
			this->metroCheckBox13->Checked = MainShakeRumble;
			this->metroCheckBox13->UseSelectable = true;
			this->metroCheckBox13->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox13_CheckedChanged);
			// 
			// metroCheckBox14
			// 
			int DirtRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("DirtRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox14->AutoSize = true;
			this->metroCheckBox14->Location = System::Drawing::Point(159, 638);
			this->metroCheckBox14->Name = L"metroCheckBox14";
			this->metroCheckBox14->Size = System::Drawing::Size(75, 15);
			this->metroCheckBox14->TabIndex = 23;
			this->metroCheckBox14->TabStop = false;
			this->metroCheckBox14->Text = L"Dirt Effect";
			this->metroCheckBox14->Checked = DirtRumble;
			this->metroCheckBox14->UseSelectable = true;
			this->metroCheckBox14->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox14_CheckedChanged);
			// 
			// metroCheckBox15
			// 
			int GrassRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("GrassRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox15->AutoSize = true;
			this->metroCheckBox15->Location = System::Drawing::Point(20, 659);
			this->metroCheckBox15->Name = L"metroCheckBox15";
			this->metroCheckBox15->Size = System::Drawing::Size(84, 15);
			this->metroCheckBox15->TabIndex = 24;
			this->metroCheckBox15->TabStop = false;
			this->metroCheckBox15->Text = L"Grass Effect";
			this->metroCheckBox15->Checked = GrassRumble;
			this->metroCheckBox15->UseSelectable = true;
			this->metroCheckBox15->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox15_CheckedChanged);
			// 
			// metroCheckBox16
			// 
			int SandRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("SandRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox16->AutoSize = true;
			this->metroCheckBox16->Location = System::Drawing::Point(159, 659);
			this->metroCheckBox16->Name = L"metroCheckBox16";
			this->metroCheckBox16->Size = System::Drawing::Size(82, 15);
			this->metroCheckBox16->TabIndex = 25;
			this->metroCheckBox16->TabStop = false;
			this->metroCheckBox16->Checked = SandRumble;
			this->metroCheckBox16->Text = L"Sand Effect";
			this->metroCheckBox16->UseSelectable = true;
			this->metroCheckBox16->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox16_CheckedChanged);
			// 
			// metroCheckBox17
			// 
			int WaterRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("WaterRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox17->AutoSize = true;
			this->metroCheckBox17->Location = System::Drawing::Point(20, 680);
			this->metroCheckBox17->Name = L"metroCheckBox17";
			this->metroCheckBox17->Size = System::Drawing::Size(87, 15);
			this->metroCheckBox17->TabIndex = 26;
			this->metroCheckBox17->TabStop = false;
			this->metroCheckBox17->Text = L"Water Effect";
			this->metroCheckBox17->Checked = WaterRumble;
			this->metroCheckBox17->UseSelectable = true;
			this->metroCheckBox17->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox17_CheckedChanged);
			// 
			// metroCheckBox18
			// 
			int TileRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("TileRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox18->AutoSize = true;
			this->metroCheckBox18->Location = System::Drawing::Point(159, 680);
			this->metroCheckBox18->Name = L"metroCheckBox18";
			this->metroCheckBox18->Size = System::Drawing::Size(75, 15);
			this->metroCheckBox18->TabIndex = 27;
			this->metroCheckBox18->TabStop = false;
			this->metroCheckBox18->Text = L"Tile Effect";
			this->metroCheckBox18->Checked = TileRumble;
			this->metroCheckBox18->UseSelectable = true;
			this->metroCheckBox18->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox18_CheckedChanged);
			// 
			// metroCheckBox19
			// 
			int CarpetRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("CarpetRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox19->AutoSize = true;
			this->metroCheckBox19->Location = System::Drawing::Point(20, 701);
			this->metroCheckBox19->Name = L"metroCheckBox19";
			this->metroCheckBox19->Size = System::Drawing::Size(91, 15);
			this->metroCheckBox19->TabIndex = 28;
			this->metroCheckBox19->TabStop = false;
			this->metroCheckBox19->Text = L"Carpet Effect";
			this->metroCheckBox19->Checked = CarpetRumble;
			this->metroCheckBox19->UseSelectable = true;
			this->metroCheckBox19->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox19_CheckedChanged);
			// 
			// metroCheckBox20
			// 
			int SpeedBumpRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("SpeedBumpRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox20->AutoSize = true;
			this->metroCheckBox20->Location = System::Drawing::Point(159, 701);
			this->metroCheckBox20->Name = L"metroCheckBox20";
			this->metroCheckBox20->Size = System::Drawing::Size(123, 15);
			this->metroCheckBox20->TabIndex = 29;
			this->metroCheckBox20->TabStop = false;
			this->metroCheckBox20->Checked = SpeedBumpRumble;
			this->metroCheckBox20->Text = L"Speed Bump Effect";
			this->metroCheckBox20->UseSelectable = true;
			this->metroCheckBox20->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox20_CheckedChanged);
			// 
			// metroCheckBox21
			// 
			int RoughTrackRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("RoughTrackRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox21->AutoSize = true;
			this->metroCheckBox21->Location = System::Drawing::Point(20, 722);
			this->metroCheckBox21->Name = L"metroCheckBox21";
			this->metroCheckBox21->Size = System::Drawing::Size(122, 15);
			this->metroCheckBox21->TabIndex = 30;
			this->metroCheckBox21->TabStop = false;
			this->metroCheckBox21->Checked = RoughTrackRumble;
			this->metroCheckBox21->Text = L"Rough Track Effect";
			this->metroCheckBox21->UseSelectable = true;
			this->metroCheckBox21->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox21_CheckedChanged);
			// 
			// metroCheckBox22
			// 
			int BridgeRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("BridgeRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox22->AutoSize = true;
			this->metroCheckBox22->Location = System::Drawing::Point(159, 722);
			this->metroCheckBox22->Name = L"metroCheckBox22";
			this->metroCheckBox22->Size = System::Drawing::Size(90, 15);
			this->metroCheckBox22->TabIndex = 31;
			this->metroCheckBox22->TabStop = false;
			this->metroCheckBox22->Checked = BridgeRumble;
			this->metroCheckBox22->Text = L"Bridge Effect";
			this->metroCheckBox22->UseSelectable = true;
			this->metroCheckBox22->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox22_CheckedChanged);
			// 
			// metroTrackBar3
			// 
			int ConstantEffectForSteeringStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("ConstantEffectForSteeringStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar3->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar3->Location = System::Drawing::Point(20, 781);
			this->metroTrackBar3->Maximum = 999;
			this->metroTrackBar3->Minimum = 128;
			this->metroTrackBar3->Name = L"metroTrackBar3";
			this->metroTrackBar3->Size = System::Drawing::Size(115, 23);
			this->metroTrackBar3->TabIndex = 34;
			this->metroTrackBar3->TabStop = false;
			this->metroTrackBar3->Text = L"metroTrackBar3";
			if ((ConstantEffectForSteeringStrength > 127) && (ConstantEffectForSteering < 1000))
			{
				this->metroTrackBar3->Value = ConstantEffectForSteeringStrength;
			}
			else
			{
				this->metroTrackBar3->Value = 128;
			}
			this->metroTrackBar3->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar3_Scroll);
			// 
			// metroTrackBar4
			// 
			int WeaponRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("WeaponRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar4->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar4->Location = System::Drawing::Point(168, 781);
			this->metroTrackBar4->Name = L"metroTrackBar4";
			this->metroTrackBar4->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar4->TabIndex = 35;
			this->metroTrackBar4->TabStop = false;
			this->metroTrackBar4->Value = WeaponRumbleStrength;
			this->metroTrackBar4->Text = L"metroTrackBar4";
			this->metroTrackBar4->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar4_Scroll);
			// 
			// metroLabel3
			// 
			int ConstantEffectForSteeringStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("ConstantEffectForSteeringStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->Location = System::Drawing::Point(71, 807);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(23, 19);
			this->metroLabel3->Text = System::Convert::ToString(ConstantEffectForSteeringStrength1);
			this->metroLabel3->TabIndex = 36;
			// 
			// metroLabel4
			// 
			int WeaponRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("WeaponRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->Location = System::Drawing::Point(213, 807);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(23, 19);
			this->metroLabel4->Text = System::Convert::ToString(WeaponRumbleStrength1);
			this->metroLabel4->TabIndex = 37;
			// 
			// metroTrackBar5
			// 
			int CoinRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("CoinRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar5->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar5->Location = System::Drawing::Point(20, 858);
			this->metroTrackBar5->Name = L"metroTrackBar5";
			this->metroTrackBar5->Size = System::Drawing::Size(115, 23);
			this->metroTrackBar5->TabIndex = 39;
			this->metroTrackBar5->TabStop = false;
			this->metroTrackBar5->Value = CoinRumbleStrength;
			this->metroTrackBar5->Text = L"metroTrackBar5";
			this->metroTrackBar5->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar5_Scroll);
			// 
			// metroTrackBar6
			// 
			int DriftRumbleControllerStrengthMultiplier = GetPrivateProfileInt(TEXT("Settings"), TEXT("DriftRumbleControllerStrengthMultiplier"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar6->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar6->Location = System::Drawing::Point(168, 858);
			this->metroTrackBar6->Maximum = 999;
			this->metroTrackBar6->Name = L"metroTrackBar6";
			this->metroTrackBar6->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar6->TabIndex = 41;
			this->metroTrackBar6->Value = DriftRumbleControllerStrengthMultiplier;
			this->metroTrackBar6->TabStop = false;
			this->metroTrackBar6->Text = L"metroTrackBar6";
			this->metroTrackBar6->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar6_Scroll);
			// 
			// metroLabel5
			// 
			int CoinRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("CoinRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->Location = System::Drawing::Point(71, 884);
			this->metroLabel5->Name = L"metroLabel5";
			this->metroLabel5->Size = System::Drawing::Size(23, 19);
			this->metroLabel5->TabIndex = 42;
			this->metroLabel5->Text = System::Convert::ToString(CoinRumbleStrength1);
			// 
			// metroLabel6
			// 
			int DriftRumbleControllerStrengthMultiplier1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("DriftRumbleControllerStrengthMultiplier"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel6->AutoSize = true;
			this->metroLabel6->Location = System::Drawing::Point(213, 884);
			this->metroLabel6->Name = L"metroLabel6";
			this->metroLabel6->Size = System::Drawing::Size(23, 19);
			this->metroLabel6->TabIndex = 43;
			this->metroLabel6->Text = System::Convert::ToString(DriftRumbleControllerStrengthMultiplier1);
			// 
			// metroTrackBar7
			// 
			int HitGroundRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("HitGroundRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar7->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar7->Location = System::Drawing::Point(20, 935);
			this->metroTrackBar7->Name = L"metroTrackBar7";
			this->metroTrackBar7->Size = System::Drawing::Size(115, 23);
			this->metroTrackBar7->TabIndex = 45;
			this->metroTrackBar7->Value = HitGroundRumbleStrength;
			this->metroTrackBar7->TabStop = false;
			this->metroTrackBar7->Text = L"metroTrackBar7";
			this->metroTrackBar7->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar7_Scroll);
			// 
			// metroLabel7
			// 
			int HitGroundRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("HitGroundRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel7->AutoSize = true;
			this->metroLabel7->Location = System::Drawing::Point(71, 964);
			this->metroLabel7->Name = L"metroLabel7";
			this->metroLabel7->Size = System::Drawing::Size(23, 19);
			this->metroLabel7->TabIndex = 46;
			this->metroLabel7->Text = System::Convert::ToString(HitGroundRumbleStrength1);
			// 
			// metroTrackBar8
			// 
			int BoostRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("BoostRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar8->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar8->Location = System::Drawing::Point(168, 935);
			this->metroTrackBar8->Name = L"metroTrackBar8";
			this->metroTrackBar8->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar8->TabIndex = 48;
			this->metroTrackBar8->TabStop = false;
			this->metroTrackBar8->Value = BoostRumbleStrength;
			this->metroTrackBar8->Text = L"metroTrackBar8";
			this->metroTrackBar8->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar8_Scroll);
			// 
			// metroLabel8
			// 
			int BoostRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("BoostRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel8->AutoSize = true;
			this->metroLabel8->Location = System::Drawing::Point(213, 964);
			this->metroLabel8->Name = L"metroLabel8";
			this->metroLabel8->Size = System::Drawing::Size(23, 19);
			this->metroLabel8->TabIndex = 49;
			this->metroLabel8->Text = System::Convert::ToString(BoostRumbleStrength1);
			// 
			// metroTrackBar9
			// 
			int MainShakeRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("MainShakeRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar9->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar9->Location = System::Drawing::Point(20, 1012);
			this->metroTrackBar9->Name = L"metroTrackBar9";
			this->metroTrackBar9->Size = System::Drawing::Size(115, 23);
			this->metroTrackBar9->TabIndex = 51;
			this->metroTrackBar9->Value = MainShakeRumbleStrength;
			this->metroTrackBar9->TabStop = false;
			this->metroTrackBar9->Text = L"metroTrackBar9";
			this->metroTrackBar9->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar9_Scroll);
			// 
			// metroTrackBar10
			// 
			int DirtRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("DirtRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar10->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar10->Location = System::Drawing::Point(168, 1012);
			this->metroTrackBar10->Name = L"metroTrackBar10";
			this->metroTrackBar10->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar10->TabIndex = 53;
			this->metroTrackBar10->Value = DirtRumbleStrength;
			this->metroTrackBar10->TabStop = false;
			this->metroTrackBar10->Text = L"metroTrackBar10";
			this->metroTrackBar10->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar10_Scroll);
			// 
			// metroLabel9
			// 
			int MainShakeRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("MainShakeRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel9->AutoSize = true;
			this->metroLabel9->Location = System::Drawing::Point(71, 1038);
			this->metroLabel9->Name = L"metroLabel9";
			this->metroLabel9->Size = System::Drawing::Size(23, 19);
			this->metroLabel9->TabIndex = 54;
			this->metroLabel9->Text = System::Convert::ToString(MainShakeRumbleStrength1);
			// 
			// metroLabel10
			// 
			int DirtRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("DirtRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel10->AutoSize = true;
			this->metroLabel10->Location = System::Drawing::Point(213, 1038);
			this->metroLabel10->Name = L"metroLabel10";
			this->metroLabel10->Size = System::Drawing::Size(23, 19);
			this->metroLabel10->TabIndex = 55;
			this->metroLabel10->Text = System::Convert::ToString(DirtRumbleStrength1);
			// 
			// metroTrackBar11
			// 
			int GrassRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("GrassRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar11->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar11->Location = System::Drawing::Point(20, 1089);
			this->metroTrackBar11->Name = L"metroTrackBar11";
			this->metroTrackBar11->Size = System::Drawing::Size(115, 23);
			this->metroTrackBar11->TabIndex = 58;
			this->metroTrackBar11->Value = GrassRumbleStrength;
			this->metroTrackBar11->TabStop = false;
			this->metroTrackBar11->Text = L"metroTrackBar11";
			this->metroTrackBar11->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar11_Scroll);
			// 
			// metroTrackBar12
			// 
			int SandRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("SandRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar12->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar12->Location = System::Drawing::Point(168, 1089);
			this->metroTrackBar12->Name = L"metroTrackBar12";
			this->metroTrackBar12->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar12->TabIndex = 59;
			this->metroTrackBar12->Value = SandRumbleStrength;
			this->metroTrackBar12->TabStop = false;
			this->metroTrackBar12->Text = L"metroTrackBar12";
			this->metroTrackBar12->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar12_Scroll);
			// 
			// metroLabel11
			// 
			int GrassRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("GrassRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel11->AutoSize = true;
			this->metroLabel11->Location = System::Drawing::Point(71, 1118);
			this->metroLabel11->Name = L"metroLabel11";
			this->metroLabel11->Size = System::Drawing::Size(23, 19);
			this->metroLabel11->TabIndex = 60;
			this->metroLabel11->Text = System::Convert::ToString(GrassRumbleStrength1);
			// 
			// metroLabel12
			// 
			int SandRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("SandRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel12->AutoSize = true;
			this->metroLabel12->Location = System::Drawing::Point(213, 1118);
			this->metroLabel12->Name = L"metroLabel12";
			this->metroLabel12->Size = System::Drawing::Size(23, 19);
			this->metroLabel12->TabIndex = 61;
			this->metroLabel12->Text = System::Convert::ToString(SandRumbleStrength1);
			// 
			// metroTrackBar13
			// 
			int WaterRumbleWheelStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("WaterRumbleWheelStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar13->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar13->Location = System::Drawing::Point(20, 1169);
			this->metroTrackBar13->Name = L"metroTrackBar13";
			this->metroTrackBar13->Size = System::Drawing::Size(115, 23);
			this->metroTrackBar13->TabIndex = 64;
			this->metroTrackBar13->Value = WaterRumbleWheelStrength;
			this->metroTrackBar13->TabStop = false;
			this->metroTrackBar13->Text = L"metroTrackBar13";
			this->metroTrackBar13->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar13_Scroll);
			// 
			// metroTrackBar14
			// 
			int WaterRumbleControllerStrengthMultiplier = GetPrivateProfileInt(TEXT("Settings"), TEXT("WaterRumbleControllerStrengthMultiplier"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar14->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar14->Location = System::Drawing::Point(168, 1169);
			this->metroTrackBar14->Maximum = 999;
			this->metroTrackBar14->Name = L"metroTrackBar14";
			this->metroTrackBar14->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar14->TabIndex = 65;
			this->metroTrackBar14->Value = WaterRumbleControllerStrengthMultiplier;
			this->metroTrackBar14->TabStop = false;
			this->metroTrackBar14->Text = L"metroTrackBar14";
			this->metroTrackBar14->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar14_Scroll);
			// 
			// metroLabel13
			// 
			int WaterRumbleWheelStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("WaterRumbleWheelStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel13->AutoSize = true;
			this->metroLabel13->Location = System::Drawing::Point(71, 1195);
			this->metroLabel13->Name = L"metroLabel13";
			this->metroLabel13->Size = System::Drawing::Size(23, 19);
			this->metroLabel13->TabIndex = 66;
			this->metroLabel13->Text = System::Convert::ToString(WaterRumbleWheelStrength1);
			// 
			// metroLabel14
			// 
			int WaterRumbleControllerStrengthMultiplier1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("WaterRumbleControllerStrengthMultiplier"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel14->AutoSize = true;
			this->metroLabel14->Location = System::Drawing::Point(213, 1195);
			this->metroLabel14->Name = L"metroLabel14";
			this->metroLabel14->Text = System::Convert::ToString(WaterRumbleControllerStrengthMultiplier1);
			this->metroLabel14->Size = System::Drawing::Size(23, 19);
			this->metroLabel14->TabIndex = 67;
			this->metroLabel14->Text = L"99";
			// 
			// metroTrackBar15
			// 
			int TileRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("TileRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar15->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar15->Location = System::Drawing::Point(20, 1247);
			this->metroTrackBar15->Name = L"metroTrackBar15";
			this->metroTrackBar15->Size = System::Drawing::Size(115, 23);
			this->metroTrackBar15->TabIndex = 70;
			this->metroTrackBar15->TabStop = false;
			this->metroTrackBar15->Value = TileRumbleStrength;
			this->metroTrackBar15->Text = L"metroTrackBar15";
			this->metroTrackBar15->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar15_Scroll);
			// 
			// metroTrackBar16
			// 
			int CarpetRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("CarpetRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar16->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar16->Location = System::Drawing::Point(168, 1247);
			this->metroTrackBar16->Name = L"metroTrackBar16";
			this->metroTrackBar16->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar16->TabIndex = 71;
			this->metroTrackBar16->TabStop = false;
			this->metroTrackBar16->Value = CarpetRumbleStrength;
			this->metroTrackBar16->Text = L"metroTrackBar16";
			this->metroTrackBar16->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar16_Scroll);
			// 
			// metroLabel15
			// 
			int TileRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("TileRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel15->AutoSize = true;
			this->metroLabel15->Location = System::Drawing::Point(71, 1273);
			this->metroLabel15->Name = L"metroLabel15";
			this->metroLabel15->Size = System::Drawing::Size(23, 19);
			this->metroLabel15->TabIndex = 72;
			this->metroLabel15->Text = System::Convert::ToString(TileRumbleStrength1);
			// 
			// metroLabel16
			// 
			int CarpetRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("CarpetRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel16->AutoSize = true;
			this->metroLabel16->Location = System::Drawing::Point(213, 1273);
			this->metroLabel16->Name = L"metroLabel16";
			this->metroLabel16->Size = System::Drawing::Size(23, 19);
			this->metroLabel16->TabIndex = 73;
			this->metroLabel16->Text = System::Convert::ToString(CarpetRumbleStrength1);
			// 
			// metroTrackBar17
			// 
			int SpeedBumpRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("SpeedBumpRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar17->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar17->Location = System::Drawing::Point(23, 1324);
			this->metroTrackBar17->Name = L"metroTrackBar17";
			this->metroTrackBar17->Size = System::Drawing::Size(115, 23);
			this->metroTrackBar17->TabIndex = 76;
			this->metroTrackBar17->Value = SpeedBumpRumbleStrength;
			this->metroTrackBar17->TabStop = false;
			this->metroTrackBar17->Text = L"metroTrackBar17";
			this->metroTrackBar17->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar17_Scroll);
			// 
			// metroTrackBar18
			// 
			int RoughTrackRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("RoughTrackRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar18->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar18->Location = System::Drawing::Point(168, 1324);
			this->metroTrackBar18->Name = L"metroTrackBar18";
			this->metroTrackBar18->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar18->TabIndex = 77;
			this->metroTrackBar18->Value = RoughTrackRumbleStrength;
			this->metroTrackBar18->TabStop = false;
			this->metroTrackBar18->Text = L"metroTrackBar18";
			this->metroTrackBar18->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar18_Scroll);
			// 
			// metroLabel17
			// 
			int SpeedBumpRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("SpeedBumpRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel17->AutoSize = true;
			this->metroLabel17->Location = System::Drawing::Point(71, 1350);
			this->metroLabel17->Name = L"metroLabel17";
			this->metroLabel17->Size = System::Drawing::Size(23, 19);
			this->metroLabel17->TabIndex = 78;
			this->metroLabel17->Text = System::Convert::ToString(SpeedBumpRumbleStrength1);
			// 
			// metroLabel18
			// 
			int RoughTrackRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("RoughTrackRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel18->AutoSize = true;
			this->metroLabel18->Location = System::Drawing::Point(213, 1350);
			this->metroLabel18->Name = L"metroLabel18";
			this->metroLabel18->Size = System::Drawing::Size(23, 19);
			this->metroLabel18->TabIndex = 79;
			this->metroLabel18->Text = System::Convert::ToString(RoughTrackRumbleStrength1);
			// 
			// metroTrackBar19
			// 
			int BridgeRumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("BridgeRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar19->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar19->Location = System::Drawing::Point(23, 1401);
			this->metroTrackBar19->Name = L"metroTrackBar19";
			this->metroTrackBar19->Size = System::Drawing::Size(115, 23);
			this->metroTrackBar19->TabIndex = 81;
			this->metroTrackBar19->TabStop = false;
			this->metroTrackBar19->Value = BridgeRumbleStrength;
			this->metroTrackBar19->Text = L"metroTrackBar19";
			this->metroTrackBar19->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar19_Scroll);
			// 
			// metroLabel19
			// 
			int BridgeRumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("BridgeRumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel19->AutoSize = true;
			this->metroLabel19->Location = System::Drawing::Point(71, 1427);
			this->metroLabel19->Name = L"metroLabel19";
			this->metroLabel19->Size = System::Drawing::Size(23, 19);
			this->metroLabel19->TabIndex = 82;
			this->metroLabel19->Text = System::Convert::ToString(BridgeRumbleStrength1);
			// 
			// metroCheckBox23
			// 
			int AlternativeFFB = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeFFB"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox23->AutoSize = true;
			this->metroCheckBox23->Location = System::Drawing::Point(20, 478);
			this->metroCheckBox23->Name = L"metroCheckBox23";
			this->metroCheckBox23->Size = System::Drawing::Size(102, 15);
			this->metroCheckBox23->TabIndex = 85;
			this->metroCheckBox23->Text = L"Alternative FFB";
			this->metroCheckBox23->Checked = AlternativeFFB;
			this->metroCheckBox23->TabStop = false;
			this->metroCheckBox23->UseSelectable = true;
			this->metroCheckBox23->CheckedChanged += gcnew System::EventHandler(this, &MKGP110::metroCheckBox23_CheckedChanged);
			// 
			// metroTextBox22
			// 
			// 
			// 
			// 
			this->metroTextBox22->CustomButton->Image = nullptr;
			this->metroTextBox22->CustomButton->Location = System::Drawing::Point(243, 2);
			this->metroTextBox22->CustomButton->Name = L"";
			this->metroTextBox22->CustomButton->Size = System::Drawing::Size(15, 15);
			this->metroTextBox22->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox22->CustomButton->TabIndex = 1;
			this->metroTextBox22->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox22->CustomButton->UseSelectable = true;
			this->metroTextBox22->CustomButton->Visible = false;
			this->metroTextBox22->Lines = gcnew cli::array< System::String^  >(1) { L"Alternative FFB Config" };
			this->metroTextBox22->Location = System::Drawing::Point(20, 270);
			this->metroTextBox22->MaxLength = 32767;
			this->metroTextBox22->Name = L"metroTextBox22";
			this->metroTextBox22->PasswordChar = '\0';
			this->metroTextBox22->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox22->SelectedText = L"";
			this->metroTextBox22->ReadOnly = true;
			this->metroTextBox22->SelectionLength = 0;
			this->metroTextBox22->SelectionStart = 0;
			this->metroTextBox22->ShortcutsEnabled = true;
			this->metroTextBox22->Size = System::Drawing::Size(261, 20);
			this->metroTextBox22->TabIndex = 86;
			this->metroTextBox22->TabStop = false;
			this->metroTextBox22->Text = L"Alternative FFB Config";
			this->metroTextBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox22->UseSelectable = true;
			this->metroTextBox22->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox22->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox23
			// 
			// 
			// 
			// 
			this->metroTextBox23->CustomButton->Image = nullptr;
			this->metroTextBox23->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox23->CustomButton->Name = L"";
			this->metroTextBox23->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox23->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox23->CustomButton->TabIndex = 1;
			this->metroTextBox23->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox23->CustomButton->UseSelectable = true;
			this->metroTextBox23->CustomButton->Visible = false;
			this->metroTextBox23->Lines = gcnew cli::array< System::String^  >(1) { L"Min Force Left" };
			this->metroTextBox23->Location = System::Drawing::Point(20, 296);
			this->metroTextBox23->MaxLength = 32767;
			this->metroTextBox23->Name = L"metroTextBox23";
			this->metroTextBox23->PasswordChar = '\0';
			this->metroTextBox23->ReadOnly = true;
			this->metroTextBox23->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox23->SelectedText = L"";
			this->metroTextBox23->SelectionLength = 0;
			this->metroTextBox23->SelectionStart = 0;
			this->metroTextBox23->ShortcutsEnabled = true;
			this->metroTextBox23->Size = System::Drawing::Size(118, 23);
			this->metroTextBox23->TabIndex = 87;
			this->metroTextBox23->TabStop = false;
			this->metroTextBox23->Text = L"Min Force Left";
			this->metroTextBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox23->UseSelectable = true;
			this->metroTextBox23->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox23->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox24
			// 
			// 
			// 
			// 
			this->metroTextBox24->CustomButton->Image = nullptr;
			this->metroTextBox24->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox24->CustomButton->Name = L"";
			this->metroTextBox24->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox24->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox24->CustomButton->TabIndex = 1;
			this->metroTextBox24->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox24->CustomButton->UseSelectable = true;
			this->metroTextBox24->CustomButton->Visible = false;
			this->metroTextBox24->Lines = gcnew cli::array< System::String^  >(1) { L"Max Force Left" };
			this->metroTextBox24->Location = System::Drawing::Point(163, 296);
			this->metroTextBox24->MaxLength = 32767;
			this->metroTextBox24->Name = L"metroTextBox24";
			this->metroTextBox24->PasswordChar = '\0';
			this->metroTextBox24->ReadOnly = true;
			this->metroTextBox24->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox24->SelectedText = L"";
			this->metroTextBox24->SelectionLength = 0;
			this->metroTextBox24->SelectionStart = 0;
			this->metroTextBox24->ShortcutsEnabled = true;
			this->metroTextBox24->Size = System::Drawing::Size(118, 23);
			this->metroTextBox24->TabIndex = 88;
			this->metroTextBox24->TabStop = false;
			this->metroTextBox24->Text = L"Max Force Left";
			this->metroTextBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox24->UseSelectable = true;
			this->metroTextBox24->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox24->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar20
			// 
			int AlternativeMinForceLeft = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMinForceLeft"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar20->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar20->Location = System::Drawing::Point(20, 328);
			this->metroTrackBar20->Name = L"metroTrackBar20";
			this->metroTrackBar20->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar20->TabIndex = 89;
			this->metroTrackBar20->Maximum = 100;
			this->metroTrackBar20->Minimum = -100;
			this->metroTrackBar20->Value = AlternativeMinForceLeft;
			this->metroTrackBar20->Text = L"metroTrackBar20";
			this->metroTrackBar20->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar20_Scroll);
			// 
			// metroTextBox25
			// 
			// 
			// 
			// 
			this->metroTextBox25->CustomButton->Image = nullptr;
			this->metroTextBox25->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox25->CustomButton->Name = L"";
			this->metroTextBox25->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox25->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox25->CustomButton->TabIndex = 1;
			this->metroTextBox25->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox25->CustomButton->UseSelectable = true;
			this->metroTextBox25->CustomButton->Visible = false;
			this->metroTextBox25->Lines = gcnew cli::array< System::String^  >(1) { L"Min Force Right" };
			this->metroTextBox25->Location = System::Drawing::Point(20, 376);
			this->metroTextBox25->MaxLength = 32767;
			this->metroTextBox25->Name = L"metroTextBox25";
			this->metroTextBox25->PasswordChar = '\0';
			this->metroTextBox25->ReadOnly = true;
			this->metroTextBox25->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox25->SelectedText = L"";
			this->metroTextBox25->SelectionLength = 0;
			this->metroTextBox25->SelectionStart = 0;
			this->metroTextBox25->ShortcutsEnabled = true;
			this->metroTextBox25->Size = System::Drawing::Size(118, 23);
			this->metroTextBox25->TabIndex = 90;
			this->metroTextBox25->TabStop = false;
			this->metroTextBox25->Text = L"Min Force Right";
			this->metroTextBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox25->UseSelectable = true;
			this->metroTextBox25->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox25->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLabel20
			// 
			int AlternativeMinForceLeft1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMinForceLeft"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel20->AutoSize = true;
			this->metroLabel20->Location = System::Drawing::Point(71, 354);
			this->metroLabel20->Name = L"metroLabel20";
			this->metroLabel20->Size = System::Drawing::Size(23, 19);
			this->metroLabel20->TabIndex = 91;
			this->metroLabel20->Text = System::Convert::ToString(AlternativeMinForceLeft1);
			this->metroLabel20->Click += gcnew System::EventHandler(this, &MKGP110::metroLabel20_Click);
			// 
			// metroTextBox26
			// 
			// 
			// 
			// 
			this->metroTextBox26->CustomButton->Image = nullptr;
			this->metroTextBox26->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox26->CustomButton->Name = L"";
			this->metroTextBox26->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox26->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox26->CustomButton->TabIndex = 1;
			this->metroTextBox26->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox26->CustomButton->UseSelectable = true;
			this->metroTextBox26->CustomButton->Visible = false;
			this->metroTextBox26->Lines = gcnew cli::array< System::String^  >(1) { L"Max Force Right" };
			this->metroTextBox26->Location = System::Drawing::Point(163, 376);
			this->metroTextBox26->MaxLength = 32767;
			this->metroTextBox26->Name = L"metroTextBox26";
			this->metroTextBox26->PasswordChar = '\0';
			this->metroTextBox26->ReadOnly = true;
			this->metroTextBox26->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox26->SelectedText = L"";
			this->metroTextBox26->SelectionLength = 0;
			this->metroTextBox26->SelectionStart = 0;
			this->metroTextBox26->ShortcutsEnabled = true;
			this->metroTextBox26->Size = System::Drawing::Size(118, 23);
			this->metroTextBox26->TabIndex = 92;
			this->metroTextBox26->TabStop = false;
			this->metroTextBox26->Text = L"Max Force Right";
			this->metroTextBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox26->UseSelectable = true;
			this->metroTextBox26->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox26->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar21
			// 
			int AlternativeMaxForceLeft = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMaxForceLeft"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar21->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar21->Location = System::Drawing::Point(163, 328);
			this->metroTrackBar21->Name = L"metroTrackBar21";
			this->metroTrackBar21->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar21->TabIndex = 93;
			this->metroTrackBar21->Maximum = 100;
			this->metroTrackBar21->Minimum = -100;
			this->metroTrackBar21->Value = AlternativeMaxForceLeft;
			this->metroTrackBar21->Text = L"metroTrackBar21";
			this->metroTrackBar21->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar21_Scroll);
			// 
			// metroLabel21
			// 
			int AlternativeMaxForceLeft1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMaxForceLeft"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel21->AutoSize = true;
			this->metroLabel21->Location = System::Drawing::Point(211, 354);
			this->metroLabel21->Name = L"metroLabel21";
			this->metroLabel21->Size = System::Drawing::Size(23, 19);
			this->metroLabel21->TabIndex = 94;
			this->metroLabel21->Text = System::Convert::ToString(AlternativeMaxForceLeft1);
			this->metroLabel21->Click += gcnew System::EventHandler(this, &MKGP110::metroLabel21_Click);
			// 
			// metroTrackBar22
			// 
			int AlternativeMinForceRight = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMinForceRight"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar22->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar22->Location = System::Drawing::Point(20, 405);
			this->metroTrackBar22->Name = L"metroTrackBar22";
			this->metroTrackBar22->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar22->TabIndex = 95;
			this->metroTrackBar22->Maximum = 100;
			this->metroTrackBar22->Minimum = -100;
			this->metroTrackBar22->Value = AlternativeMinForceRight;
			this->metroTrackBar22->Text = L"metroTrackBar22";
			this->metroTrackBar22->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar22_Scroll);
			// 
			// metroTrackBar23
			// 
			int AlternativeMaxForceRight = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMaxForceRight"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar23->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar23->Location = System::Drawing::Point(163, 405);
			this->metroTrackBar23->Name = L"metroTrackBar23";
			this->metroTrackBar23->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar23->TabIndex = 96;
			this->metroTrackBar23->Maximum = 100;
			this->metroTrackBar23->Minimum = -100;
			this->metroTrackBar23->Value = AlternativeMaxForceRight;
			this->metroTrackBar23->Text = L"metroTrackBar23";
			this->metroTrackBar23->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MKGP110::metroTrackBar23_Scroll);
			// 
			// metroLabel22
			// 
			int AlternativeMinForceRight1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMinForceRight"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel22->AutoSize = true;
			this->metroLabel22->Location = System::Drawing::Point(71, 431);
			this->metroLabel22->Name = L"metroLabel22";
			this->metroLabel22->Size = System::Drawing::Size(23, 19);
			this->metroLabel22->TabIndex = 97;
			this->metroLabel22->Text = System::Convert::ToString(AlternativeMinForceRight1);
			this->metroLabel22->Click += gcnew System::EventHandler(this, &MKGP110::metroLabel22_Click);
			// 
			// metroLabel23
			// 
			int AlternativeMaxForceRight1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeMaxForceRight"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel23->AutoSize = true;
			this->metroLabel23->Location = System::Drawing::Point(211, 431);
			this->metroLabel23->Name = L"metroLabel23";
			this->metroLabel23->Size = System::Drawing::Size(23, 19);
			this->metroLabel23->TabIndex = 98;
			this->metroLabel23->Text = System::Convert::ToString(AlternativeMaxForceRight1);
			this->metroLabel23->Click += gcnew System::EventHandler(this, &MKGP110::metroLabel23_Click);
			// 
			// MKGP110
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(315, 800);
			this->Controls->Add(this->metroLabel23);
			this->Controls->Add(this->metroLabel22);
			this->Controls->Add(this->metroTrackBar23);
			this->Controls->Add(this->metroTrackBar22);
			this->Controls->Add(this->metroLabel21);
			this->Controls->Add(this->metroTrackBar21);
			this->Controls->Add(this->metroTextBox26);
			this->Controls->Add(this->metroLabel20);
			this->Controls->Add(this->metroTextBox25);
			this->Controls->Add(this->metroTrackBar20);
			this->Controls->Add(this->metroTextBox24);
			this->Controls->Add(this->metroTextBox23);
			this->Controls->Add(this->metroTextBox22);
			this->Controls->Add(this->metroCheckBox23);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroLabel19);
			this->Controls->Add(this->metroTrackBar19);
			this->Controls->Add(this->metroTextBox21);
			this->Controls->Add(this->metroLabel18);
			this->Controls->Add(this->metroLabel17);
			this->Controls->Add(this->metroTrackBar18);
			this->Controls->Add(this->metroTrackBar17);
			this->Controls->Add(this->metroTextBox20);
			this->Controls->Add(this->metroTextBox19);
			this->Controls->Add(this->metroLabel16);
			this->Controls->Add(this->metroLabel15);
			this->Controls->Add(this->metroTrackBar16);
			this->Controls->Add(this->metroTrackBar15);
			this->Controls->Add(this->metroTextBox18);
			this->Controls->Add(this->metroTextBox17);
			this->Controls->Add(this->metroLabel14);
			this->Controls->Add(this->metroLabel13);
			this->Controls->Add(this->metroTrackBar14);
			this->Controls->Add(this->metroTrackBar13);
			this->Controls->Add(this->metroTextBox16);
			this->Controls->Add(this->metroTextBox15);
			this->Controls->Add(this->metroLabel12);
			this->Controls->Add(this->metroLabel11);
			this->Controls->Add(this->metroTrackBar12);
			this->Controls->Add(this->metroTrackBar11);
			this->Controls->Add(this->metroTextBox14);
			this->Controls->Add(this->metroTextBox13);
			this->Controls->Add(this->metroLabel10);
			this->Controls->Add(this->metroLabel9);
			this->Controls->Add(this->metroTrackBar10);
			this->Controls->Add(this->metroTextBox12);
			this->Controls->Add(this->metroTrackBar9);
			this->Controls->Add(this->metroTextBox11);
			this->Controls->Add(this->metroLabel8);
			this->Controls->Add(this->metroTrackBar8);
			this->Controls->Add(this->metroTextBox10);
			this->Controls->Add(this->metroLabel7);
			this->Controls->Add(this->metroTrackBar7);
			this->Controls->Add(this->metroTextBox9);
			this->Controls->Add(this->metroLabel6);
			this->Controls->Add(this->metroLabel5);
			this->Controls->Add(this->metroTrackBar6);
			this->Controls->Add(this->metroTextBox8);
			this->Controls->Add(this->metroTrackBar5);
			this->Controls->Add(this->metroTextBox7);
			this->Controls->Add(this->metroLabel4);
			this->Controls->Add(this->metroLabel3);
			this->Controls->Add(this->metroTrackBar4);
			this->Controls->Add(this->metroTrackBar3);
			this->Controls->Add(this->metroTextBox6);
			this->Controls->Add(this->metroTextBox5);
			this->Controls->Add(this->metroCheckBox22);
			this->Controls->Add(this->metroCheckBox21);
			this->Controls->Add(this->metroCheckBox20);
			this->Controls->Add(this->metroCheckBox19);
			this->Controls->Add(this->metroCheckBox18);
			this->Controls->Add(this->metroCheckBox17);
			this->Controls->Add(this->metroCheckBox16);
			this->Controls->Add(this->metroCheckBox15);
			this->Controls->Add(this->metroCheckBox14);
			this->Controls->Add(this->metroCheckBox13);
			this->Controls->Add(this->metroCheckBox12);
			this->Controls->Add(this->metroCheckBox11);
			this->Controls->Add(this->metroCheckBox10);
			this->Controls->Add(this->metroCheckBox9);
			this->Controls->Add(this->metroCheckBox8);
			this->Controls->Add(this->metroCheckBox7);
			this->Controls->Add(this->metroCheckBox6);
			this->Controls->Add(this->metroCheckBox5);
			this->Controls->Add(this->metroCheckBox4);
			this->Controls->Add(this->metroCheckBox3);
			this->Controls->Add(this->metroCheckBox2);
			this->Controls->Add(this->metroCheckBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->metroTextBox4);
			this->Controls->Add(this->metroComboBox1);
			this->Controls->Add(this->metroTextBox3);
			this->Controls->Add(this->metroLabel2);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroTrackBar2);
			this->Controls->Add(this->metroTrackBar1);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroTextBox1);
			this->MaximizeBox = false;
			this->Name = L"MKGP110";
			this->Padding = System::Windows::Forms::Padding(0, 60, 0, 0);
			this->Resizable = false;
			this->ShowIcon = false;
			this->Style = MetroFramework::MetroColorStyle::White;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MKGP110::Form1_FormClosing);
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
	private: System::Void metroTrackBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Min Force
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
	private: System::Void metroTrackBar3_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Constant Steering
	{
		metroLabel3->Text = metroTrackBar3->Value.ToString();
		Decimal value = metroTrackBar3->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "ConstantEffectForSteeringStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar4_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Weapon Strength
	{
		metroLabel4->Text = metroTrackBar4->Value.ToString();
		Decimal value = metroTrackBar4->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "WeaponRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar5_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Coin Strength
	{
		metroLabel5->Text = metroTrackBar5->Value.ToString();
		Decimal value = metroTrackBar5->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "CoinRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar6_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Drift Multiplier
	{
		metroLabel6->Text = metroTrackBar6->Value.ToString();
		Decimal value = metroTrackBar6->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "DriftRumbleControllerStrengthMultiplier", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar7_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Hit Ground Strength
	{
		metroLabel7->Text = metroTrackBar7->Value.ToString();
		Decimal value = metroTrackBar7->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "HitGroundRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar8_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Boost Strength
	{
		metroLabel8->Text = metroTrackBar8->Value.ToString();
		Decimal value = metroTrackBar8->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "BoostRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar9_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Main Shake Strength
	{
		metroLabel9->Text = metroTrackBar9->Value.ToString();
		Decimal value = metroTrackBar9->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "MainShakeRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar10_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Dirt Strength
	{
		metroLabel10->Text = metroTrackBar10->Value.ToString();
		Decimal value = metroTrackBar10->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "DirtRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar11_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Grass Strength
	{
		metroLabel11->Text = metroTrackBar11->Value.ToString();
		Decimal value = metroTrackBar11->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "GrassRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar12_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Sand Strength
	{
		metroLabel12->Text = metroTrackBar12->Value.ToString();
		Decimal value = metroTrackBar12->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "SandRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar13_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Water Friction
	{
		metroLabel13->Text = metroTrackBar13->Value.ToString();
		Decimal value = metroTrackBar13->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "WaterRumbleWheelStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar14_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Water Rumble
	{
		metroLabel14->Text = metroTrackBar14->Value.ToString();
		Decimal value = metroTrackBar14->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "WaterRumbleControllerStrengthMultiplier", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar15_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Tile Strength
	{
		metroLabel15->Text = metroTrackBar15->Value.ToString();
		Decimal value = metroTrackBar15->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "TileRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar16_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Carpet Strength
	{
		metroLabel16->Text = metroTrackBar16->Value.ToString();
		Decimal value = metroTrackBar16->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "CarpetRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar17_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Speed Bump Strength
	{
		metroLabel17->Text = metroTrackBar17->Value.ToString();
		Decimal value = metroTrackBar17->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "SpeedBumpRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar18_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Rough Track Strength
	{
		metroLabel18->Text = metroTrackBar18->Value.ToString();
		Decimal value = metroTrackBar18->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "RoughTrackRumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar19_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Bridge Strength
	{
		metroLabel19->Text = metroTrackBar19->Value.ToString();
		Decimal value = metroTrackBar19->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "BridgeRumbleStrength", Result, ".\\FFBPlugin.ini");
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
	private: System::Void metroCheckBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //GUID Messagebox
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
	private: System::Void metroCheckBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Constant Steering
	{
		if (metroCheckBox7->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ConstantEffectForSteering"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ConstantEffectForSteering"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Weapon Effect
	{
		if (metroCheckBox8->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("WeaponRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("WeaponRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Coin Effect
	{
		if (metroCheckBox9->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("CoinRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("CoinRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Drift Effect
	{
		if (metroCheckBox10->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("DriftRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("DriftRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Hit Ground
	{
		if (metroCheckBox11->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("HitGroundRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("HitGroundRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Boost Effect
	{
		if (metroCheckBox12->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("BoostRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("BoostRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Main Shake
	{
		if (metroCheckBox13->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("MainShakeRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("MainShakeRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Dirt Effect
	{
		if (metroCheckBox14->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("DirtRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("DirtRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Grass Effect
	{
		if (metroCheckBox15->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("GrassRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("GrassRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox16_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Sand Effect
	{
		if (metroCheckBox16->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("SandRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("SandRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Water Effect
	{
		if (metroCheckBox17->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("WaterRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("WaterRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox18_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Tile Effect
	{
		if (metroCheckBox18->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("TileRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("TileRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox19_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Carpet Effect
	{
		if (metroCheckBox19->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("CarpetRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("CarpetRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox20_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Speed Bump
	{
		if (metroCheckBox20->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("SpeedBumpRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("SpeedBumpRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox21_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Rough Track
	{
		if (metroCheckBox21->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("RoughTrackRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("RoughTrackRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroCheckBox22_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Bridge Effect
	{
		if (metroCheckBox22->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("BridgeRumble"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("BridgeRumble"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) //Go Back
	{
		this->Hide();
		obj->Show();
	}
	private: System::Void metroTrackBar20_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Min Force Left
	{
		metroLabel20->Text = metroTrackBar20->Value.ToString();
		Decimal value = metroTrackBar20->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "AlternativeMinForceLeft", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar21_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Max Force Left
	{
		metroLabel21->Text = metroTrackBar21->Value.ToString();
		Decimal value = metroTrackBar21->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "AlternativeMaxForceLeft", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar22_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Min Force Right
	{
		metroLabel22->Text = metroTrackBar22->Value.ToString();
		Decimal value = metroTrackBar22->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "AlternativeMinForceRight", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar23_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Max Force Right
	{
		metroLabel23->Text = metroTrackBar23->Value.ToString();
		Decimal value = metroTrackBar23->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "AlternativeMaxForceRight", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroLabel20_Click(System::Object^  sender, System::EventArgs^  e) //Min Force Left
	{

	}
	private: System::Void metroLabel21_Click(System::Object^  sender, System::EventArgs^  e) //Max Force Left
	{

	}
	private: System::Void metroLabel22_Click(System::Object^  sender, System::EventArgs^  e) //Min Force Right
	{

	}
	private: System::Void metroLabel23_Click(System::Object^  sender, System::EventArgs^  e) //Max Force Right
	{

	}
	private: System::Void metroCheckBox23_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Alternative FFB
	{
		if (metroCheckBox23->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("AlternativeFFB"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("AlternativeFFB"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	}
	};
}
