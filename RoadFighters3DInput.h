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
	/// Summary for RoadFighters3DInput
	/// </summary>
	public ref class RoadFighters3DInput : public MetroFramework::Forms::MetroForm
	{
	public:
		RoadFighters3DInput(void)
		{
			InitializeComponent();
			for (int i = 0; i < SDL_NumJoysticks(); i++)
			{
				SDL_Joystick* js2 = SDL_JoystickOpen(i);
			}
			static int SETUP_DEAD_ZONE = 8000;
			SDL_Event e1;
			Sleep(1000);
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
			//
			//TODO: Add the constructor code here
			//
		}
		MetroForm ^obj;
		RoadFighters3DInput(MetroForm ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RoadFighters3DInput()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox1;
	protected:
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox2;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar1;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox3;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox4;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox5;
	private: MetroFramework::Controls::MetroLink^  metroLink1;
	private: MetroFramework::Controls::MetroLink^  metroLink2;
	private: MetroFramework::Controls::MetroLink^  metroLink3;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox3;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox4;
	private: MetroFramework::Controls::MetroLink^  metroLink4;
	private: MetroFramework::Controls::MetroLink^  metroLink5;
	private: MetroFramework::Controls::MetroLink^  metroLink6;
	private: MetroFramework::Controls::MetroLink^  metroLink7;
	private: MetroFramework::Controls::MetroLink^  metroLink8;
	private: MetroFramework::Controls::MetroLink^  metroLink9;
	private: MetroFramework::Controls::MetroLink^  metroLink10;
	private: MetroFramework::Controls::MetroLink^  metroLink11;
	private: MetroFramework::Controls::MetroLink^  metroLink12;
	private: MetroFramework::Controls::MetroLink^  metroLink13;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox6;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox7;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox1;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox2;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox8;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox9;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox3;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox4;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox10;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox5;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox11;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox12;
	private: MetroFramework::Controls::MetroLink^  metroLink14;
	private: MetroFramework::Controls::MetroLink^  metroLink15;
	private: MetroFramework::Controls::MetroLink^  metroLink16;
	private: MetroFramework::Controls::MetroLink^  metroLink17;
	private: MetroFramework::Controls::MetroLink^  metroLink18;
	private: MetroFramework::Controls::MetroLink^  metroLink19;
	private: MetroFramework::Controls::MetroLink^  metroLink20;
	private: MetroFramework::Controls::MetroLink^  metroLink21;
	private: MetroFramework::Controls::MetroLink^  metroLink22;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox13;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox14;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox6;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox7;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox15;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox16;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox8;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox9;
	private: MetroFramework::Controls::MetroLabel^  metroLabel3;
	private: MetroFramework::Controls::MetroLabel^  metroLabel4;
	private: MetroFramework::Controls::MetroLabel^  metroLabel5;
	private: MetroFramework::Controls::MetroLabel^  metroLabel6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel7;
	private: MetroFramework::Controls::MetroLabel^  metroLabel8;
	private: MetroFramework::Controls::MetroLabel^  metroLabel9;
	private: MetroFramework::Controls::MetroLabel^  metroLabel10;
	private: MetroFramework::Controls::MetroLabel^  metroLabel11;
	private: MetroFramework::Controls::MetroLabel^  metroLabel12;
	private: MetroFramework::Controls::MetroLabel^  metroLabel13;
	private: MetroFramework::Controls::MetroLabel^  metroLabel14;
	private: MetroFramework::Controls::MetroLabel^  metroLabel15;
	private: MetroFramework::Controls::MetroLabel^  metroLabel16;
	private: MetroFramework::Controls::MetroLabel^  metroLabel17;
	private: MetroFramework::Controls::MetroLabel^  metroLabel18;
	private: MetroFramework::Controls::MetroLabel^  metroLabel19;
	private: MetroFramework::Controls::MetroLabel^  metroLabel20;
	private: MetroFramework::Controls::MetroLabel^  metroLabel21;
	private: MetroFramework::Controls::MetroLabel^  metroLabel22;
	private: MetroFramework::Controls::MetroLabel^  metroLabel23;
	private: MetroFramework::Controls::MetroLabel^  metroLabel24;
	private: MetroFramework::Controls::MetroLink^  metroLink23;
	private: MetroFramework::Controls::MetroLink^  metroLink24;
	private: MetroFramework::Controls::MetroLabel^  metroLabel25;
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
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar1 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar2 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox4 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox5 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink2 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink3 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroCheckBox3 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox4 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroLink4 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink5 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink6 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink7 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink8 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink9 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink10 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink11 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink12 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink13 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroTextBox6 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox7 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroComboBox2 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox8 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox9 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox3 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroComboBox4 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox10 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox5 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox11 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox12 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLink14 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink15 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink16 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink17 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink18 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink19 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink20 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink21 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink22 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroTextBox13 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox14 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox6 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroComboBox7 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox15 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox16 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox8 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroComboBox9 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel7 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel8 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel9 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel10 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel11 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel12 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel13 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel14 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel15 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel16 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel17 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel18 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel19 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel20 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel21 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel22 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel23 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel24 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLink23 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink24 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLabel25 = (gcnew MetroFramework::Controls::MetroLabel());
			this->SuspendLayout();
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &RoadFighters3DInput::Form1_FormClosing);
			// 
			// metroToolTip1
			// 
			this->metroToolTip1->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroToolTip1->StyleManager = nullptr;
			this->metroToolTip1->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroToolTip1->SetToolTip(this->metroCheckBox1, L"Enable input support");
			this->metroToolTip1->SetToolTip(this->metroCheckBox2, L"Enable sequential gears");
			this->metroToolTip1->SetToolTip(this->metroCheckBox3, L" Reverse pedal axis ");
			this->metroToolTip1->SetToolTip(this->metroCheckBox4, L" Enable if using combined pedal axis ");
			this->metroToolTip1->SetToolTip(this->metroTextBox1, L"Set steering deadzone to set deadzone on device");
			this->metroToolTip1->SetToolTip(this->metroTextBox2, L"Set pedal deadzone to set deadzone on device");
			this->metroToolTip1->SetToolTip(this->metroTextBox3, L" Click Axis/Button & under select input then press button on device for 2 seconds ");
			this->metroToolTip1->SetToolTip(this->metroTextBox4, L" Axis/Button for device 1, click below to set input for device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox5, L" Axis/Button number set in FFBPlugin.ini for device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox6, L" Choose what happens when you press up on dpad on device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox7, L" Choose what happens when you press down on dpad on device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox8, L" Choose what happens when you press left on dpad on device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox9, L" Choose what happens when you press right on dpad on device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox10, L" Device GUID FFBPlugin will use to apply forces to device 2");
			this->metroToolTip1->SetToolTip(this->metroTextBox11, L" Button names for device 2, click below to set input for device 2 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox12, L" Button number set in FFBPlugin.ini for device 2 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox13, L" Choose what happens when you press up on dpad on device 2 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox14, L" Choose what happens when you press down on dpad on device 2 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox15, L" Choose what happens when you press left on dpad on device 2 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox16, L" Choose what happens when you press right on dpad on device 2 ");
			// 
			// metroLink24
			// 
			this->metroLink24->Location = System::Drawing::Point(67, 8);
			this->metroLink24->Name = L"metroLink1";
			this->metroLink24->Size = System::Drawing::Size(173, 23);
			this->metroLink24->TabIndex = 79;
			this->metroLink24->TabStop = false;
			this->metroLink24->Text = L"Go Back To Previous Menu";
			this->metroLink24->UseSelectable = false;
			this->metroLink24->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink24_Click);
			// 
			// metroCheckBox1
			// 
			int InputDeviceWheelEnable = GetPrivateProfileInt(TEXT("Settings"), TEXT("InputDeviceWheelEnable"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox1->AutoSize = true;
			this->metroCheckBox1->Location = System::Drawing::Point(6, 53);
			this->metroCheckBox1->Name = L"metroCheckBox1";
			this->metroCheckBox1->Size = System::Drawing::Size(134, 15);
			this->metroCheckBox1->TabIndex = 0;
			this->metroCheckBox1->TabStop = false;
			this->metroCheckBox1->Text = L"Enable Input Support";
			this->metroCheckBox1->UseSelectable = false;
			this->metroCheckBox1->Checked = InputDeviceWheelEnable;
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroCheckBox1_CheckedChanged);
			// 
			// metroCheckBox2
			// 
			int SequentialGears = GetPrivateProfileInt(TEXT("Settings"), TEXT("SequentialGears"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox2->AutoSize = true;
			this->metroCheckBox2->Location = System::Drawing::Point(164, 53);
			this->metroCheckBox2->Name = L"metroCheckBox2";
			this->metroCheckBox2->Size = System::Drawing::Size(110, 15);
			this->metroCheckBox2->TabIndex = 1;
			this->metroCheckBox2->TabStop = false;
			this->metroCheckBox2->Text = L"Sequential Gears";
			this->metroCheckBox2->UseSelectable = false;
			this->metroCheckBox2->Checked = SequentialGears;
			this->metroCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroCheckBox2_CheckedChanged);
			// 
			// metroTextBox1
			// 
			// 
			// 
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox1->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox1->CustomButton->TabIndex = 1;
			this->metroTextBox1->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox1->CustomButton->UseSelectable = false;
			this->metroTextBox1->CustomButton->Visible = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"Steering Deadzone" };
			this->metroTextBox1->Location = System::Drawing::Point(6, 95);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ReadOnly = true;
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->SelectionLength = 0;
			this->metroTextBox1->SelectionStart = 0;
			this->metroTextBox1->ShortcutsEnabled = true;
			this->metroTextBox1->Size = System::Drawing::Size(131, 23);
			this->metroTextBox1->TabIndex = 2;
			this->metroTextBox1->TabStop = false;
			this->metroTextBox1->Text = L"Steering Deadzone";
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
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox2->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox2->CustomButton->TabIndex = 1;
			this->metroTextBox2->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox2->CustomButton->UseSelectable = false;
			this->metroTextBox2->CustomButton->Visible = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"Pedal Deadzone" };
			this->metroTextBox2->Location = System::Drawing::Point(164, 95);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->SelectionLength = 0;
			this->metroTextBox2->SelectionStart = 0;
			this->metroTextBox2->ShortcutsEnabled = true;
			this->metroTextBox2->Size = System::Drawing::Size(131, 23);
			this->metroTextBox2->TabIndex = 3;
			this->metroTextBox2->TabStop = false;
			this->metroTextBox2->Text = L"Pedal Deadzone";
			this->metroTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox2->UseSelectable = false;
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar1
			// 
			int SteeringDeadzone = GetPrivateProfileInt(TEXT("Settings"), TEXT("SteeringDeadzone"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar1->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar1->Location = System::Drawing::Point(6, 124);
			this->metroTrackBar1->Name = L"metroTrackBar1";
			this->metroTrackBar1->Size = System::Drawing::Size(131, 23);
			this->metroTrackBar1->TabIndex = 4;
			this->metroTrackBar1->TabStop = false;
			this->metroTrackBar1->Text = L"metroTrackBar1";
			this->metroTrackBar1->Value = SteeringDeadzone;
			this->metroTrackBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &RoadFighters3DInput::metroTrackBar1_Scroll);
			// 
			// metroTrackBar2
			// 
			int PedalDeadzone = GetPrivateProfileInt(TEXT("Settings"), TEXT("PedalDeadzone"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar2->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar2->Location = System::Drawing::Point(164, 124);
			this->metroTrackBar2->Name = L"metroTrackBar2";
			this->metroTrackBar2->Size = System::Drawing::Size(131, 23);
			this->metroTrackBar2->TabIndex = 5;
			this->metroTrackBar2->TabStop = false;
			this->metroTrackBar2->Text = L"metroTrackBar2";
			this->metroTrackBar2->Value = PedalDeadzone;
			this->metroTrackBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &RoadFighters3DInput::metroTrackBar2_Scroll);
			// 
			// metroLabel1
			// 
			int SteeringDeadzone1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("SteeringDeadzone"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(63, 150);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(16, 19);
			this->metroLabel1->TabIndex = 6;
			this->metroLabel1->TabStop = false;
			this->metroLabel1->Text = System::Convert::ToString(SteeringDeadzone1);
			// 
			// metroLabel2
			// 
			int PedalDeadzone1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("PedalDeadzone"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(221, 150);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(16, 19);
			this->metroLabel2->TabIndex = 7;
			this->metroLabel2->TabStop = false;
			this->metroLabel2->Text = System::Convert::ToString(PedalDeadzone1);
			// 
			// metroTextBox3
			// 
			// 
			// 
			// 
			this->metroTextBox3->CustomButton->Image = nullptr;
			this->metroTextBox3->CustomButton->Location = System::Drawing::Point(267, 1);
			this->metroTextBox3->CustomButton->Name = L"";
			this->metroTextBox3->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox3->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox3->CustomButton->TabIndex = 1;
			this->metroTextBox3->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox3->CustomButton->UseSelectable = false;
			this->metroTextBox3->CustomButton->Visible = false;
			this->metroTextBox3->Lines = gcnew cli::array< System::String^  >(1) { L"Click then hold inputs for 2 seconds" };
			this->metroTextBox3->Location = System::Drawing::Point(6, 187);
			this->metroTextBox3->MaxLength = 32767;
			this->metroTextBox3->Name = L"metroTextBox3";
			this->metroTextBox3->PasswordChar = '\0';
			this->metroTextBox3->ReadOnly = true;
			this->metroTextBox3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox3->SelectedText = L"";
			this->metroTextBox3->SelectionLength = 0;
			this->metroTextBox3->SelectionStart = 0;
			this->metroTextBox3->ShortcutsEnabled = true;
			this->metroTextBox3->Size = System::Drawing::Size(289, 23);
			this->metroTextBox3->TabIndex = 8;
			this->metroTextBox3->TabStop = false;
			this->metroTextBox3->Text = L"Click then hold inputs for 2 seconds";
			this->metroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox3->UseSelectable = false;
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
			this->metroTextBox4->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox4->CustomButton->Name = L"";
			this->metroTextBox4->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox4->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox4->CustomButton->TabIndex = 1;
			this->metroTextBox4->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox4->CustomButton->UseSelectable = false;
			this->metroTextBox4->CustomButton->Visible = false;
			this->metroTextBox4->Lines = gcnew cli::array< System::String^  >(1) { L"Device 1 Select Inputs" };
			this->metroTextBox4->Location = System::Drawing::Point(6, 216);
			this->metroTextBox4->MaxLength = 32767;
			this->metroTextBox4->Name = L"metroTextBox4";
			this->metroTextBox4->PasswordChar = '\0';
			this->metroTextBox4->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox4->SelectedText = L"";
			this->metroTextBox4->SelectionLength = 0;
			this->metroTextBox4->SelectionStart = 0;
			this->metroTextBox4->ShortcutsEnabled = true;
			this->metroTextBox4->Size = System::Drawing::Size(131, 23);
			this->metroTextBox4->TabIndex = 9;
			this->metroTextBox4->TabStop = false;
			this->metroTextBox4->Text = L"Device 1 Select Inputs";
			this->metroTextBox4->UseSelectable = false;
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
			this->metroTextBox5->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox5->CustomButton->Name = L"";
			this->metroTextBox5->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox5->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox5->CustomButton->TabIndex = 1;
			this->metroTextBox5->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox5->CustomButton->UseSelectable = false;
			this->metroTextBox5->CustomButton->Visible = false;
			this->metroTextBox5->Lines = gcnew cli::array< System::String^  >(1) { L"Axis & Buttons" };
			this->metroTextBox5->Location = System::Drawing::Point(164, 216);
			this->metroTextBox5->MaxLength = 32767;
			this->metroTextBox5->Name = L"metroTextBox5";
			this->metroTextBox5->PasswordChar = '\0';
			this->metroTextBox5->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox5->SelectedText = L"";
			this->metroTextBox5->SelectionLength = 0;
			this->metroTextBox5->SelectionStart = 0;
			this->metroTextBox5->ShortcutsEnabled = true;
			this->metroTextBox5->Size = System::Drawing::Size(131, 23);
			this->metroTextBox5->TabIndex = 10;
			this->metroTextBox5->TabStop = false;
			this->metroTextBox5->Text = L"Axis & Buttons";
			this->metroTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox5->UseSelectable = false;
			this->metroTextBox5->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox5->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLink1
			// 
			this->metroLink1->Location = System::Drawing::Point(6, 245);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(131, 23);
			this->metroLink1->TabIndex = 11;
			this->metroLink1->TabStop = false;
			this->metroLink1->Text = L"Steering Axis";
			this->metroLink1->UseSelectable = false;
			this->metroLink1->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink1_Click);
			// 
			// metroLink2
			// 
			this->metroLink2->Location = System::Drawing::Point(6, 274);
			this->metroLink2->Name = L"metroLink2";
			this->metroLink2->Size = System::Drawing::Size(131, 23);
			this->metroLink2->TabIndex = 12;
			this->metroLink2->TabStop = false;
			this->metroLink2->Text = L"Accelerator Axis";
			this->metroLink2->UseSelectable = false;
			this->metroLink2->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink2_Click);
			// 
			// metroLink3
			// 
			this->metroLink3->Location = System::Drawing::Point(6, 303);
			this->metroLink3->Name = L"metroLink3";
			this->metroLink3->Size = System::Drawing::Size(131, 23);
			this->metroLink3->TabIndex = 13;
			this->metroLink3->TabStop = false;
			this->metroLink3->Text = L"Brake Axis";
			this->metroLink3->UseSelectable = false;
			this->metroLink3->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink3_Click);
			// 
			// metroCheckBox3
			// 
			int InputDeviceWheelReverseAxis = GetPrivateProfileInt(TEXT("Settings"), TEXT("InputDeviceWheelReverseAxis"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox3->AutoSize = true;
			this->metroCheckBox3->Location = System::Drawing::Point(6, 74);
			this->metroCheckBox3->Name = L"metroCheckBox3";
			this->metroCheckBox3->Size = System::Drawing::Size(119, 15);
			this->metroCheckBox3->TabIndex = 14;
			this->metroCheckBox3->TabStop = false;
			this->metroCheckBox3->Text = L"Reverse Pedal Axis";
			this->metroCheckBox3->UseSelectable = false;
			this->metroCheckBox3->Checked = InputDeviceWheelReverseAxis;
			this->metroCheckBox3->CheckedChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroCheckBox3_CheckedChanged);
			// 
			// metroCheckBox4
			// 
			int InputDeviceCombinedPedals = GetPrivateProfileInt(TEXT("Settings"), TEXT("InputDeviceCombinedPedals"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox4->AutoSize = true;
			this->metroCheckBox4->Location = System::Drawing::Point(164, 74);
			this->metroCheckBox4->Name = L"metroCheckBox4";
			this->metroCheckBox4->Size = System::Drawing::Size(116, 15);
			this->metroCheckBox4->TabIndex = 15;
			this->metroCheckBox4->TabStop = false;
			this->metroCheckBox4->Text = L"Combined Pedals";
			this->metroCheckBox4->UseSelectable = false;
			this->metroCheckBox4->Checked = InputDeviceCombinedPedals;
			this->metroCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroCheckBox4_CheckedChanged);
			// 
			// metroLink4
			// 
			this->metroLink4->Location = System::Drawing::Point(6, 332);
			this->metroLink4->Name = L"metroLink4";
			this->metroLink4->Size = System::Drawing::Size(131, 23);
			this->metroLink4->TabIndex = 16;
			this->metroLink4->TabStop = false;
			this->metroLink4->Text = L"Exit Button";
			this->metroLink4->UseSelectable = false;
			this->metroLink4->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink4_Click);
			// 
			// metroLink5
			// 
			this->metroLink5->Location = System::Drawing::Point(6, 361);
			this->metroLink5->Name = L"metroLink5";
			this->metroLink5->Size = System::Drawing::Size(131, 23);
			this->metroLink5->TabIndex = 17;
			this->metroLink5->TabStop = false;
			this->metroLink5->Text = L"Test Button";
			this->metroLink5->UseSelectable = false;
			this->metroLink5->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink5_Click);
			// 
			// metroLink6
			// 
			this->metroLink6->Location = System::Drawing::Point(6, 390);
			this->metroLink6->Name = L"metroLink6";
			this->metroLink6->Size = System::Drawing::Size(131, 23);
			this->metroLink6->TabIndex = 18;
			this->metroLink6->TabStop = false;
			this->metroLink6->Text = L"Service Button";
			this->metroLink6->UseSelectable = false;
			this->metroLink6->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink6_Click);
			// 
			// metroLink7
			// 
			this->metroLink7->Location = System::Drawing::Point(6, 419);
			this->metroLink7->Name = L"metroLink7";
			this->metroLink7->Size = System::Drawing::Size(131, 23);
			this->metroLink7->TabIndex = 19;
			this->metroLink7->TabStop = false;
			this->metroLink7->Text = L"Credit Button";
			this->metroLink7->UseSelectable = false;
			this->metroLink7->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink7_Click);
			// 
			// metroLink8
			// 
			this->metroLink8->Location = System::Drawing::Point(6, 448);
			this->metroLink8->Name = L"metroLink8";
			this->metroLink8->Size = System::Drawing::Size(131, 23);
			this->metroLink8->TabIndex = 20;
			this->metroLink8->TabStop = false;
			this->metroLink8->Text = L"View Button";
			this->metroLink8->UseSelectable = false;
			this->metroLink8->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink8_Click);
			// 
			// metroLink9
			// 
			this->metroLink9->Location = System::Drawing::Point(6, 477);
			this->metroLink9->Name = L"metroLink9";
			this->metroLink9->Size = System::Drawing::Size(131, 23);
			this->metroLink9->TabIndex = 21;
			this->metroLink9->TabStop = false;
			this->metroLink9->Text = L"3D Button";
			this->metroLink9->UseSelectable = false;
			this->metroLink9->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink9_Click);
			// 
			// metroLink10
			// 
			this->metroLink10->Location = System::Drawing::Point(6, 506);
			this->metroLink10->Name = L"metroLink10";
			this->metroLink10->Size = System::Drawing::Size(131, 23);
			this->metroLink10->TabIndex = 22;
			this->metroLink10->TabStop = false;
			this->metroLink10->Text = L"Lever Up";
			this->metroLink10->UseSelectable = false;
			this->metroLink10->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink10_Click);
			// 
			// metroLink11
			// 
			this->metroLink11->Location = System::Drawing::Point(6, 535);
			this->metroLink11->Name = L"metroLink11";
			this->metroLink11->Size = System::Drawing::Size(131, 23);
			this->metroLink11->TabIndex = 23;
			this->metroLink11->TabStop = false;
			this->metroLink11->Text = L"Lever Down";
			this->metroLink11->UseSelectable = false;
			this->metroLink11->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink11_Click);
			// 
			// metroLink12
			// 
			this->metroLink12->Location = System::Drawing::Point(6, 564);
			this->metroLink12->Name = L"metroLink12";
			this->metroLink12->Size = System::Drawing::Size(131, 23);
			this->metroLink12->TabIndex = 24;
			this->metroLink12->TabStop = false;
			this->metroLink12->Text = L"Lever Left";
			this->metroLink12->UseSelectable = false;
			this->metroLink12->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink12_Click);
			// 
			// metroLink13
			// 
			this->metroLink13->Location = System::Drawing::Point(6, 593);
			this->metroLink13->Name = L"metroLink13";
			this->metroLink13->Size = System::Drawing::Size(131, 23);
			this->metroLink13->TabIndex = 25;
			this->metroLink13->TabStop = false;
			this->metroLink13->Text = L"Lever Right";
			this->metroLink13->UseSelectable = false;
			this->metroLink13->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink13_Click);
			// 
			// metroTextBox6
			// 
			// 
			// 
			// 
			this->metroTextBox6->CustomButton->Image = nullptr;
			this->metroTextBox6->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox6->CustomButton->Name = L"";
			this->metroTextBox6->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox6->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox6->CustomButton->TabIndex = 1;
			this->metroTextBox6->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox6->CustomButton->UseSelectable = false;
			this->metroTextBox6->CustomButton->Visible = false;
			this->metroTextBox6->Lines = gcnew cli::array< System::String^  >(1) { L"Dpad Up" };
			this->metroTextBox6->Location = System::Drawing::Point(6, 622);
			this->metroTextBox6->MaxLength = 32767;
			this->metroTextBox6->Name = L"metroTextBox6";
			this->metroTextBox6->PasswordChar = '\0';
			this->metroTextBox6->ReadOnly = true;
			this->metroTextBox6->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox6->SelectedText = L"";
			this->metroTextBox6->SelectionLength = 0;
			this->metroTextBox6->SelectionStart = 0;
			this->metroTextBox6->ShortcutsEnabled = true;
			this->metroTextBox6->Size = System::Drawing::Size(131, 23);
			this->metroTextBox6->TabIndex = 26;
			this->metroTextBox6->TabStop = false;
			this->metroTextBox6->Text = L"Dpad Up";
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
			this->metroTextBox7->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox7->CustomButton->Name = L"";
			this->metroTextBox7->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox7->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox7->CustomButton->TabIndex = 1;
			this->metroTextBox7->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox7->CustomButton->UseSelectable = false;
			this->metroTextBox7->CustomButton->Visible = false;
			this->metroTextBox7->Lines = gcnew cli::array< System::String^  >(1) { L"Dpad Down" };
			this->metroTextBox7->Location = System::Drawing::Point(164, 622);
			this->metroTextBox7->MaxLength = 32767;
			this->metroTextBox7->Name = L"metroTextBox7";
			this->metroTextBox7->PasswordChar = '\0';
			this->metroTextBox7->ReadOnly = true;
			this->metroTextBox7->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox7->SelectedText = L"";
			this->metroTextBox7->SelectionLength = 0;
			this->metroTextBox7->SelectionStart = 0;
			this->metroTextBox7->ShortcutsEnabled = true;
			this->metroTextBox7->Size = System::Drawing::Size(131, 23);
			this->metroTextBox7->TabIndex = 27;
			this->metroTextBox7->TabStop = false;
			this->metroTextBox7->Text = L"Dpad Down";
			this->metroTextBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox7->UseSelectable = false;
			this->metroTextBox7->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox7->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroComboBox1
			// 
			char buff[300];
			GetPrivateProfileStringA("Settings", "DpadUp", "", buff, _countof(buff), ".\\FFBPlugin.ini");
			String^ str = gcnew String(buff);
			if (str == "ExitButton")
			{
				this->metroComboBox1->Text = "Exit Button";
			}
			else if (str == "TestButton")
			{
				this->metroComboBox1->Text = "Test Button";
			}
			else if (str == "ServiceButton")
			{
				this->metroComboBox1->Text = "Service Button";
			}
			else if (str == "CreditButton")
			{
				this->metroComboBox1->Text = "Credit Button";
			}
			else if (str == "ViewButton")
			{
				this->metroComboBox1->Text = "View Button";
			}
			else if (str == "ThreeDimensionalButton")
			{
				this->metroComboBox1->Text = "3D Button";
			}
			else if (str == "leverUp")
			{
				this->metroComboBox1->Text = "lever Up";
			}
			else if (str == "leverDown")
			{
				this->metroComboBox1->Text = "lever Down";
			}
			else if (str == "leverLeft")
			{
				this->metroComboBox1->Text = "lever Left";
			}
			else if (str == "leverRight")
			{
				this->metroComboBox1->Text = "lever Right";
			}
			this->metroComboBox1->FormattingEnabled = true;
			this->metroComboBox1->ItemHeight = 23;
			this->metroComboBox1->Location = System::Drawing::Point(6, 651);
			this->metroComboBox1->Name = L"metroComboBox1";
			this->metroComboBox1->Size = System::Drawing::Size(131, 29);
			this->metroComboBox1->TabIndex = 28;
			this->metroComboBox1->TabStop = false;
			this->metroComboBox1->UseSelectable = false;
			this->metroComboBox1->Items->Add("Exit Button");
			this->metroComboBox1->Items->Add("Test Button");
			this->metroComboBox1->Items->Add("Service Button");
			this->metroComboBox1->Items->Add("Credit Button");
			this->metroComboBox1->Items->Add("View Button");
			this->metroComboBox1->Items->Add("3D Button");
			this->metroComboBox1->Items->Add("lever Up");
			this->metroComboBox1->Items->Add("lever Down");
			this->metroComboBox1->Items->Add("lever Left");
			this->metroComboBox1->Items->Add("lever Right");
			this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroComboBox1_SelectedIndexChanged);
			// 
			// metroComboBox2
			// 
			char buff1[300];
			GetPrivateProfileStringA("Settings", "DpadDown", "", buff1, _countof(buff1), ".\\FFBPlugin.ini");
			String^ str1 = gcnew String(buff1);
			if (str1 == "ExitButton")
			{
				this->metroComboBox2->Text = "Exit Button";
			}
			else if (str1 == "TestButton")
			{
				this->metroComboBox2->Text = "Test Button";
			}
			else if (str1 == "ServiceButton")
			{
				this->metroComboBox2->Text = "Service Button";
			}
			else if (str1 == "CreditButton")
			{
				this->metroComboBox2->Text = "Credit Button";
			}
			else if (str1 == "ViewButton")
			{
				this->metroComboBox2->Text = "View Button";
			}
			else if (str1 == "ThreeDimensionalButton")
			{
				this->metroComboBox2->Text = "3D Button";
			}
			else if (str1 == "leverUp")
			{
				this->metroComboBox2->Text = "lever Up";
			}
			else if (str1 == "leverDown")
			{
				this->metroComboBox2->Text = "lever Down";
			}
			else if (str1 == "leverLeft")
			{
				this->metroComboBox2->Text = "lever Left";
			}
			else if (str1 == "leverRight")
			{
				this->metroComboBox2->Text = "lever Right";
			}
			this->metroComboBox2->FormattingEnabled = true;
			this->metroComboBox2->ItemHeight = 23;
			this->metroComboBox2->Location = System::Drawing::Point(164, 651);
			this->metroComboBox2->Name = L"metroComboBox2";
			this->metroComboBox2->Size = System::Drawing::Size(131, 29);
			this->metroComboBox2->TabIndex = 29;
			this->metroComboBox2->TabStop = false;
			this->metroComboBox2->Items->Add("Exit Button");
			this->metroComboBox2->Items->Add("Test Button");
			this->metroComboBox2->Items->Add("Service Button");
			this->metroComboBox2->Items->Add("Credit Button");
			this->metroComboBox2->Items->Add("View Button");
			this->metroComboBox2->Items->Add("3D Button");
			this->metroComboBox2->Items->Add("lever Up");
			this->metroComboBox2->Items->Add("lever Down");
			this->metroComboBox2->Items->Add("lever Left");
			this->metroComboBox2->Items->Add("lever Right");
			this->metroComboBox2->UseSelectable = false;
			this->metroComboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroComboBox2_SelectedIndexChanged);
			// 
			// metroTextBox8
			// 
			// 
			// 
			// 
			this->metroTextBox8->CustomButton->Image = nullptr;
			this->metroTextBox8->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox8->CustomButton->Name = L"";
			this->metroTextBox8->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox8->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox8->CustomButton->TabIndex = 1;
			this->metroTextBox8->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox8->CustomButton->UseSelectable = false;
			this->metroTextBox8->CustomButton->Visible = false;
			this->metroTextBox8->Lines = gcnew cli::array< System::String^  >(1) { L"Dpad Left" };
			this->metroTextBox8->Location = System::Drawing::Point(6, 686);
			this->metroTextBox8->MaxLength = 32767;
			this->metroTextBox8->Name = L"metroTextBox8";
			this->metroTextBox8->PasswordChar = '\0';
			this->metroTextBox8->ReadOnly = true;
			this->metroTextBox8->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox8->SelectedText = L"";
			this->metroTextBox8->SelectionLength = 0;
			this->metroTextBox8->SelectionStart = 0;
			this->metroTextBox8->ShortcutsEnabled = true;
			this->metroTextBox8->Size = System::Drawing::Size(131, 23);
			this->metroTextBox8->TabIndex = 30;
			this->metroTextBox8->TabStop = false;
			this->metroTextBox8->Text = L"Dpad Left";
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
			this->metroTextBox9->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox9->CustomButton->Name = L"";
			this->metroTextBox9->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox9->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox9->CustomButton->TabIndex = 1;
			this->metroTextBox9->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox9->CustomButton->UseSelectable = false;
			this->metroTextBox9->CustomButton->Visible = false;
			this->metroTextBox9->Lines = gcnew cli::array< System::String^  >(1) { L"Dpad Right" };
			this->metroTextBox9->Location = System::Drawing::Point(164, 686);
			this->metroTextBox9->MaxLength = 32767;
			this->metroTextBox9->Name = L"metroTextBox9";
			this->metroTextBox9->PasswordChar = '\0';
			this->metroTextBox9->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox9->SelectedText = L"";
			this->metroTextBox9->SelectionLength = 0;
			this->metroTextBox9->SelectionStart = 0;
			this->metroTextBox9->ShortcutsEnabled = true;
			this->metroTextBox9->Size = System::Drawing::Size(131, 23);
			this->metroTextBox9->TabIndex = 31;
			this->metroTextBox9->TabStop = false;
			this->metroTextBox9->Text = L"Dpad Right";
			this->metroTextBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox9->UseSelectable = false;
			this->metroTextBox9->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox9->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroComboBox3
			// 
			char buff2[300];
			GetPrivateProfileStringA("Settings", "DpadLeft", "", buff2, _countof(buff2), ".\\FFBPlugin.ini");
			String^ str2 = gcnew String(buff2);
			if (str2 == "ExitButton")
			{
				this->metroComboBox3->Text = "Exit Button";
			}
			else if (str2 == "TestButton")
			{
				this->metroComboBox3->Text = "Test Button";
			}
			else if (str2 == "ServiceButton")
			{
				this->metroComboBox3->Text = "Service Button";
			}
			else if (str2 == "CreditButton")
			{
				this->metroComboBox3->Text = "Credit Button";
			}
			else if (str2 == "ViewButton")
			{
				this->metroComboBox3->Text = "View Button";
			}
			else if (str2 == "ThreeDimensionalButton")
			{
				this->metroComboBox3->Text = "3D Button";
			}
			else if (str2 == "leverUp")
			{
				this->metroComboBox3->Text = "lever Up";
			}
			else if (str2 == "leverDown")
			{
				this->metroComboBox3->Text = "lever Down";
			}
			else if (str2 == "leverLeft")
			{
				this->metroComboBox3->Text = "lever Left";
			}
			else if (str2 == "leverRight")
			{
				this->metroComboBox3->Text = "lever Right";
			}
			this->metroComboBox3->FormattingEnabled = true;
			this->metroComboBox3->ItemHeight = 23;
			this->metroComboBox3->Location = System::Drawing::Point(6, 715);
			this->metroComboBox3->Name = L"metroComboBox3";
			this->metroComboBox3->Size = System::Drawing::Size(131, 29);
			this->metroComboBox3->TabIndex = 32;
			this->metroComboBox3->TabStop = false;
			this->metroComboBox3->Items->Add("Exit Button");
			this->metroComboBox3->Items->Add("Test Button");
			this->metroComboBox3->Items->Add("Service Button");
			this->metroComboBox3->Items->Add("Credit Button");
			this->metroComboBox3->Items->Add("View Button");
			this->metroComboBox3->Items->Add("3D Button");
			this->metroComboBox3->Items->Add("lever Up");
			this->metroComboBox3->Items->Add("lever Down");
			this->metroComboBox3->Items->Add("lever Left");
			this->metroComboBox3->Items->Add("lever Right");
			this->metroComboBox3->UseSelectable = false;
			this->metroComboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroComboBox3_SelectedIndexChanged);
			// 
			// metroComboBox4
			// 
			char buff3[300];
			GetPrivateProfileStringA("Settings", "DpadRight", "", buff3, _countof(buff3), ".\\FFBPlugin.ini");
			String^ str3 = gcnew String(buff3);
			if (str3 == "ExitButton")
			{
				this->metroComboBox4->Text = "Exit Button";
			}
			else if (str3 == "TestButton")
			{
				this->metroComboBox4->Text = "Test Button";
			}
			else if (str3 == "ServiceButton")
			{
				this->metroComboBox4->Text = "Service Button";
			}
			else if (str3 == "CreditButton")
			{
				this->metroComboBox4->Text = "Credit Button";
			}
			else if (str3 == "ViewButton")
			{
				this->metroComboBox4->Text = "View Button";
			}
			else if (str3 == "ThreeDimensionalButton")
			{
				this->metroComboBox4->Text = "3D Button";
			}
			else if (str3 == "leverUp")
			{
				this->metroComboBox4->Text = "lever Up";
			}
			else if (str3 == "leverDown")
			{
				this->metroComboBox4->Text = "lever Down";
			}
			else if (str3 == "leverLeft")
			{
				this->metroComboBox4->Text = "lever Left";
			}
			else if (str3 == "leverRight")
			{
				this->metroComboBox4->Text = "lever Right";
			}
			this->metroComboBox4->FormattingEnabled = true;
			this->metroComboBox4->ItemHeight = 23;
			this->metroComboBox4->Location = System::Drawing::Point(164, 715);
			this->metroComboBox4->Name = L"metroComboBox4";
			this->metroComboBox4->Size = System::Drawing::Size(131, 29);
			this->metroComboBox4->TabIndex = 33;
			this->metroComboBox4->TabStop = false;
			this->metroComboBox4->Items->Add("Exit Button");
			this->metroComboBox4->Items->Add("Test Button");
			this->metroComboBox4->Items->Add("Service Button");
			this->metroComboBox4->Items->Add("Credit Button");
			this->metroComboBox4->Items->Add("View Button");
			this->metroComboBox4->Items->Add("3D Button");
			this->metroComboBox4->Items->Add("lever Up");
			this->metroComboBox4->Items->Add("lever Down");
			this->metroComboBox4->Items->Add("lever Left");
			this->metroComboBox4->Items->Add("lever Right");
			this->metroComboBox4->UseSelectable = false;
			this->metroComboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroComboBox4_SelectedIndexChanged);
			// 
			// metroTextBox10
			// 
			// 
			// 
			// 
			this->metroTextBox10->CustomButton->Image = nullptr;
			this->metroTextBox10->CustomButton->Location = System::Drawing::Point(267, 1);
			this->metroTextBox10->CustomButton->Name = L"";
			this->metroTextBox10->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox10->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox10->CustomButton->TabIndex = 1;
			this->metroTextBox10->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox10->CustomButton->UseSelectable = false;
			this->metroTextBox10->CustomButton->Visible = false;
			this->metroTextBox10->Lines = gcnew cli::array< System::String^  >(1) { L"Device 2 GUID" };
			this->metroTextBox10->Location = System::Drawing::Point(6, 769);
			this->metroTextBox10->MaxLength = 32767;
			this->metroTextBox10->Name = L"metroTextBox10";
			this->metroTextBox10->PasswordChar = '\0';
			this->metroTextBox10->ReadOnly = true;
			this->metroTextBox10->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox10->SelectedText = L"";
			this->metroTextBox10->SelectionLength = 0;
			this->metroTextBox10->SelectionStart = 0;
			this->metroTextBox10->ShortcutsEnabled = true;
			this->metroTextBox10->Size = System::Drawing::Size(289, 23);
			this->metroTextBox10->TabIndex = 34;
			this->metroTextBox10->TabStop = false;
			this->metroTextBox10->Text = L"Device 2 GUID";
			this->metroTextBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox10->UseSelectable = false;
			this->metroTextBox10->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox10->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroComboBox5
			// 
			for (int i = 0; i < SDL_NumJoysticks(); i++)
			{
				SDL_Joystick* js1 = SDL_JoystickOpen(i);
				char buff[300];
				GetPrivateProfileStringA("Settings", "DeviceGUID", "No FFBPlugin.ini found", buff, _countof(buff), ".\\FFBPlugin.ini");
				String^ str = gcnew String(buff);
				String^ bah1 = gcnew String(SDL_JoystickName(js1));
				this->metroComboBox5->Text = str;
				this->metroComboBox5->Items->Add(bah1);
			}
			if (SDL_NumJoysticks() == 0)
			{
				this->metroComboBox5->Text = "SDL2 Cannot Detect Any Joystick";
			}
				this->metroComboBox5->FormattingEnabled = true;
				this->metroComboBox5->ItemHeight = 23;
				this->metroComboBox5->Location = System::Drawing::Point(6, 798);
				this->metroComboBox5->Name = L"metroComboBox5";
				this->metroComboBox5->Size = System::Drawing::Size(289, 29);
				this->metroComboBox5->TabIndex = 35;
				this->metroComboBox5->TabStop = false;
				this->metroComboBox5->UseSelectable = false;
				this->metroComboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroComboBox5_SelectedIndexChanged);
			// 
			// metroTextBox11
			// 
			// 
			// 
			// 
			this->metroTextBox11->CustomButton->Image = nullptr;
			this->metroTextBox11->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox11->CustomButton->Name = L"";
			this->metroTextBox11->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox11->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox11->CustomButton->TabIndex = 1;
			this->metroTextBox11->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox11->CustomButton->UseSelectable = false;
			this->metroTextBox11->CustomButton->Visible = false;
			this->metroTextBox11->Lines = gcnew cli::array< System::String^  >(1) { L"Device 2 Select Inputs" };
			this->metroTextBox11->Location = System::Drawing::Point(6, 833);
			this->metroTextBox11->MaxLength = 32767;
			this->metroTextBox11->Name = L"metroTextBox11";
			this->metroTextBox11->PasswordChar = '\0';
			this->metroTextBox11->ReadOnly = true;
			this->metroTextBox11->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox11->SelectedText = L"";
			this->metroTextBox11->SelectionLength = 0;
			this->metroTextBox11->SelectionStart = 0;
			this->metroTextBox11->ShortcutsEnabled = true;
			this->metroTextBox11->Size = System::Drawing::Size(131, 23);
			this->metroTextBox11->TabIndex = 36;
			this->metroTextBox11->TabStop = false;
			this->metroTextBox11->Text = L"Device 2 Select Inputs";
			this->metroTextBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox11->UseSelectable = false;
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
			this->metroTextBox12->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox12->CustomButton->Name = L"";
			this->metroTextBox12->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox12->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox12->CustomButton->TabIndex = 1;
			this->metroTextBox12->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox12->CustomButton->UseSelectable = false;
			this->metroTextBox12->CustomButton->Visible = false;
			this->metroTextBox12->Lines = gcnew cli::array< System::String^  >(1) { L"Buttons" };
			this->metroTextBox12->Location = System::Drawing::Point(164, 833);
			this->metroTextBox12->MaxLength = 32767;
			this->metroTextBox12->Name = L"metroTextBox12";
			this->metroTextBox12->PasswordChar = '\0';
			this->metroTextBox12->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox12->SelectedText = L"";
			this->metroTextBox12->SelectionLength = 0;
			this->metroTextBox12->SelectionStart = 0;
			this->metroTextBox12->ShortcutsEnabled = true;
			this->metroTextBox12->Size = System::Drawing::Size(131, 23);
			this->metroTextBox12->TabIndex = 37;
			this->metroTextBox12->TabStop = false;
			this->metroTextBox12->Text = L"Buttons";
			this->metroTextBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox12->UseSelectable = false;
			this->metroTextBox12->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox12->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLink14
			// 
			this->metroLink14->Location = System::Drawing::Point(6, 862);
			this->metroLink14->Name = L"metroLink14";
			this->metroLink14->Size = System::Drawing::Size(131, 23);
			this->metroLink14->TabIndex = 38;
			this->metroLink14->TabStop = false;
			this->metroLink14->Text = L"Exit Button";
			this->metroLink14->UseSelectable = false;
			this->metroLink14->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink14_Click);
			// 
			// metroLink15
			// 
			this->metroLink15->Location = System::Drawing::Point(6, 891);
			this->metroLink15->Name = L"metroLink15";
			this->metroLink15->Size = System::Drawing::Size(131, 23);
			this->metroLink15->TabIndex = 39;
			this->metroLink15->TabStop = false;
			this->metroLink15->Text = L"Test Button";
			this->metroLink15->UseSelectable = false;
			this->metroLink15->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink15_Click);
			// 
			// metroLink16
			// 
			this->metroLink16->Location = System::Drawing::Point(6, 920);
			this->metroLink16->Name = L"metroLink16";
			this->metroLink16->Size = System::Drawing::Size(131, 23);
			this->metroLink16->TabIndex = 40;
			this->metroLink16->TabStop = false;
			this->metroLink16->Text = L"Service Button";
			this->metroLink16->UseSelectable = false;
			this->metroLink16->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink16_Click);
			// 
			// metroLink17
			// 
			this->metroLink17->Location = System::Drawing::Point(6, 978);
			this->metroLink17->Name = L"metroLink17";
			this->metroLink17->Size = System::Drawing::Size(131, 23);
			this->metroLink17->TabIndex = 41;
			this->metroLink17->TabStop = false;
			this->metroLink17->Text = L"View Button";
			this->metroLink17->UseSelectable = false;
			this->metroLink17->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink17_Click);
			// 
			// metroLink18
			// 
			this->metroLink18->Location = System::Drawing::Point(6, 1007);
			this->metroLink18->Name = L"metroLink18";
			this->metroLink18->Size = System::Drawing::Size(131, 23);
			this->metroLink18->TabIndex = 42;
			this->metroLink18->TabStop = false;
			this->metroLink18->Text = L"3D Button";
			this->metroLink18->UseSelectable = false;
			this->metroLink18->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink18_Click);
			// 
			// metroLink19
			// 
			this->metroLink19->Location = System::Drawing::Point(6, 1036);
			this->metroLink19->Name = L"metroLink19";
			this->metroLink19->Size = System::Drawing::Size(131, 23);
			this->metroLink19->TabIndex = 43;
			this->metroLink19->TabStop = false;
			this->metroLink19->Text = L"Lever Up";
			this->metroLink19->UseSelectable = false;
			this->metroLink19->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink19_Click);
			// 
			// metroLink20
			// 
			this->metroLink20->Location = System::Drawing::Point(6, 1065);
			this->metroLink20->Name = L"metroLink20";
			this->metroLink20->Size = System::Drawing::Size(131, 23);
			this->metroLink20->TabIndex = 44;
			this->metroLink20->TabStop = false;
			this->metroLink20->Text = L"Lever Down";
			this->metroLink20->UseSelectable = false;
			this->metroLink20->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink20_Click);
			// 
			// metroLink21
			// 
			this->metroLink21->Location = System::Drawing::Point(6, 1094);
			this->metroLink21->Name = L"metroLink21";
			this->metroLink21->Size = System::Drawing::Size(119, 23);
			this->metroLink21->TabIndex = 45;
			this->metroLink21->TabStop = false;
			this->metroLink21->Text = L"Lever Left";
			this->metroLink21->UseSelectable = false;
			this->metroLink21->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink21_Click);
			// 
			// metroLink22
			// 
			this->metroLink22->Location = System::Drawing::Point(6, 1123);
			this->metroLink22->Name = L"metroLink22";
			this->metroLink22->Size = System::Drawing::Size(131, 23);
			this->metroLink22->TabIndex = 46;
			this->metroLink22->TabStop = false;
			this->metroLink22->Text = L"Lever Right";
			this->metroLink22->UseSelectable = false;
			this->metroLink22->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink22_Click);
			// 
			// metroTextBox13
			// 
			// 
			// 
			// 
			this->metroTextBox13->CustomButton->Image = nullptr;
			this->metroTextBox13->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox13->CustomButton->Name = L"";
			this->metroTextBox13->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox13->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox13->CustomButton->TabIndex = 1;
			this->metroTextBox13->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox13->CustomButton->UseSelectable = false;
			this->metroTextBox13->CustomButton->Visible = false;
			this->metroTextBox13->Lines = gcnew cli::array< System::String^  >(1) { L"Dpad Up" };
			this->metroTextBox13->Location = System::Drawing::Point(6, 1152);
			this->metroTextBox13->MaxLength = 32767;
			this->metroTextBox13->Name = L"metroTextBox13";
			this->metroTextBox13->PasswordChar = '\0';
			this->metroTextBox13->ReadOnly = true;
			this->metroTextBox13->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox13->SelectedText = L"";
			this->metroTextBox13->SelectionLength = 0;
			this->metroTextBox13->SelectionStart = 0;
			this->metroTextBox13->ShortcutsEnabled = true;
			this->metroTextBox13->Size = System::Drawing::Size(131, 23);
			this->metroTextBox13->TabIndex = 47;
			this->metroTextBox13->TabStop = false;
			this->metroTextBox13->Text = L"Dpad Up";
			this->metroTextBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox13->UseSelectable = false;
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
			this->metroTextBox14->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox14->CustomButton->Name = L"";
			this->metroTextBox14->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox14->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox14->CustomButton->TabIndex = 1;
			this->metroTextBox14->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox14->CustomButton->UseSelectable = false;
			this->metroTextBox14->CustomButton->Visible = false;
			this->metroTextBox14->Lines = gcnew cli::array< System::String^  >(1) { L"Dpad Down" };
			this->metroTextBox14->Location = System::Drawing::Point(166, 1152);
			this->metroTextBox14->MaxLength = 32767;
			this->metroTextBox14->Name = L"metroTextBox14";
			this->metroTextBox14->PasswordChar = '\0';
			this->metroTextBox14->ReadOnly = true;
			this->metroTextBox14->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox14->SelectedText = L"";
			this->metroTextBox14->SelectionLength = 0;
			this->metroTextBox14->SelectionStart = 0;
			this->metroTextBox14->ShortcutsEnabled = true;
			this->metroTextBox14->Size = System::Drawing::Size(131, 23);
			this->metroTextBox14->TabIndex = 48;
			this->metroTextBox14->TabStop = false;
			this->metroTextBox14->Text = L"Dpad Down";
			this->metroTextBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox14->UseSelectable = false;
			this->metroTextBox14->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox14->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroComboBox6
			// 
			char buff4[300];
			GetPrivateProfileStringA("Settings", "DpadUpDevice2", "", buff4, _countof(buff4), ".\\FFBPlugin.ini");
			String^ str4 = gcnew String(buff4);
			if (str4 == "ExitButtonDevice2")
			{
				this->metroComboBox6->Text = "Exit Button";
			}
			else if (str4 == "TestButtonDevice2")
			{
				this->metroComboBox6->Text = "Test Button";
			}
			else if (str4 == "ServiceButtonDevice2")
			{
				this->metroComboBox6->Text = "Service Button";
			}
			else if (str4 == "CreditButtonDevice2")
			{
				this->metroComboBox6->Text = "Credit Button";
			}
			else if (str4 == "ViewButtonDevice2")
			{
				this->metroComboBox6->Text = "View Button";
			}
			else if (str4 == "ThreeDimensionalButtonDevice2")
			{
				this->metroComboBox6->Text = "3D Button";
			}
			else if (str4 == "leverUpDevice2")
			{
				this->metroComboBox6->Text = "lever Up";
			}
			else if (str4 == "leverDownDevice2")
			{
				this->metroComboBox6->Text = "lever Down";
			}
			else if (str4 == "leverLeftDevice2")
			{
				this->metroComboBox6->Text = "lever Left";
			}
			else if (str4 == "leverRightDevice2")
			{
				this->metroComboBox6->Text = "lever Right";
			}
			this->metroComboBox6->FormattingEnabled = true;
			this->metroComboBox6->ItemHeight = 23;
			this->metroComboBox6->Location = System::Drawing::Point(6, 1181);
			this->metroComboBox6->Name = L"metroComboBox6";
			this->metroComboBox6->Size = System::Drawing::Size(131, 29);
			this->metroComboBox6->TabIndex = 49;
			this->metroComboBox6->TabStop = false;
			this->metroComboBox6->Items->Add("Exit Button");
			this->metroComboBox6->Items->Add("Test Button");
			this->metroComboBox6->Items->Add("Service Button");
			this->metroComboBox6->Items->Add("Credit Button");
			this->metroComboBox6->Items->Add("View Button");
			this->metroComboBox6->Items->Add("3D Button");
			this->metroComboBox6->Items->Add("lever Up");
			this->metroComboBox6->Items->Add("lever Down");
			this->metroComboBox6->Items->Add("lever Left");
			this->metroComboBox6->Items->Add("lever Right");
			this->metroComboBox6->UseSelectable = false;
			this->metroComboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroComboBox6_SelectedIndexChanged);
			// 
			// metroComboBox7
			// 
			char buff5[300];
			GetPrivateProfileStringA("Settings", "DpadDownDevice2", "", buff5, _countof(buff5), ".\\FFBPlugin.ini");
			String^ str5 = gcnew String(buff5);
			if (str5 == "ExitButtonDevice2")
			{
				this->metroComboBox7->Text = "Exit Button";
			}
			else if (str5 == "TestButtonDevice2")
			{
				this->metroComboBox7->Text = "Test Button";
			}
			else if (str5 == "ServiceButtonDevice2")
			{
				this->metroComboBox7->Text = "Service Button";
			}
			else if (str5 == "CreditButtonDevice2")
			{
				this->metroComboBox7->Text = "Credit Button";
			}
			else if (str5 == "ViewButtonDevice2")
			{
				this->metroComboBox7->Text = "View Button";
			}
			else if (str5 == "ThreeDimensionalButtonDevice2")
			{
				this->metroComboBox7->Text = "3D Button";
			}
			else if (str5 == "leverUpDevice2")
			{
				this->metroComboBox7->Text = "lever Up";
			}
			else if (str5 == "leverDownDevice2")
			{
				this->metroComboBox7->Text = "lever Down";
			}
			else if (str5 == "leverLeftDevice2")
			{
				this->metroComboBox7->Text = "lever Left";
			}
			else if (str5 == "leverRightDevice2")
			{
				this->metroComboBox7->Text = "lever Right";
			}
			this->metroComboBox7->FormattingEnabled = true;
			this->metroComboBox7->ItemHeight = 23;
			this->metroComboBox7->Location = System::Drawing::Point(164, 1181);
			this->metroComboBox7->Name = L"metroComboBox7";
			this->metroComboBox7->Size = System::Drawing::Size(131, 29);
			this->metroComboBox7->TabIndex = 50;
			this->metroComboBox7->TabStop = false;
			this->metroComboBox7->Items->Add("Exit Button");
			this->metroComboBox7->Items->Add("Test Button");
			this->metroComboBox7->Items->Add("Service Button");
			this->metroComboBox7->Items->Add("Credit Button");
			this->metroComboBox7->Items->Add("View Button");
			this->metroComboBox7->Items->Add("3D Button");
			this->metroComboBox7->Items->Add("lever Up");
			this->metroComboBox7->Items->Add("lever Down");
			this->metroComboBox7->Items->Add("lever Left");
			this->metroComboBox7->Items->Add("lever Right");
			this->metroComboBox7->UseSelectable = false;
			this->metroComboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroComboBox7_SelectedIndexChanged);
			// 
			// metroTextBox15
			// 
			// 
			// 
			// 
			this->metroTextBox15->CustomButton->Image = nullptr;
			this->metroTextBox15->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox15->CustomButton->Name = L"";
			this->metroTextBox15->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox15->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox15->CustomButton->TabIndex = 1;
			this->metroTextBox15->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox15->CustomButton->UseSelectable = false;
			this->metroTextBox15->CustomButton->Visible = false;
			this->metroTextBox15->Lines = gcnew cli::array< System::String^  >(1) { L"Dpad Left" };
			this->metroTextBox15->Location = System::Drawing::Point(6, 1216);
			this->metroTextBox15->MaxLength = 32767;
			this->metroTextBox15->Name = L"metroTextBox15";
			this->metroTextBox15->PasswordChar = '\0';
			this->metroTextBox15->ReadOnly = true;
			this->metroTextBox15->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox15->SelectedText = L"";
			this->metroTextBox15->SelectionLength = 0;
			this->metroTextBox15->SelectionStart = 0;
			this->metroTextBox15->ShortcutsEnabled = true;
			this->metroTextBox15->Size = System::Drawing::Size(131, 23);
			this->metroTextBox15->TabIndex = 51;
			this->metroTextBox15->TabStop = false;
			this->metroTextBox15->Text = L"Dpad Left";
			this->metroTextBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox15->UseSelectable = false;
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
			this->metroTextBox16->CustomButton->Location = System::Drawing::Point(109, 1);
			this->metroTextBox16->CustomButton->Name = L"";
			this->metroTextBox16->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox16->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox16->CustomButton->TabIndex = 1;
			this->metroTextBox16->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox16->CustomButton->UseSelectable = false;
			this->metroTextBox16->CustomButton->Visible = false;
			this->metroTextBox16->Lines = gcnew cli::array< System::String^  >(1) { L"Dpad Right" };
			this->metroTextBox16->Location = System::Drawing::Point(164, 1216);
			this->metroTextBox16->MaxLength = 32767;
			this->metroTextBox16->Name = L"metroTextBox16";
			this->metroTextBox16->PasswordChar = '\0';
			this->metroTextBox16->ReadOnly = true;
			this->metroTextBox16->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox16->SelectedText = L"";
			this->metroTextBox16->SelectionLength = 0;
			this->metroTextBox16->SelectionStart = 0;
			this->metroTextBox16->ShortcutsEnabled = true;
			this->metroTextBox16->Size = System::Drawing::Size(131, 23);
			this->metroTextBox16->TabIndex = 52;
			this->metroTextBox16->TabStop = false;
			this->metroTextBox16->Text = L"Dpad Right";
			this->metroTextBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox16->UseSelectable = false;
			this->metroTextBox16->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox16->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroComboBox8
			// 
			char buff6[300];
			GetPrivateProfileStringA("Settings", "DpadLeftDevice2", "", buff6, _countof(buff6), ".\\FFBPlugin.ini");
			String^ str6 = gcnew String(buff6);
			if (str6 == "ExitButtonDevice2")
			{
				this->metroComboBox8->Text = "Exit Button";
			}
			else if (str6 == "TestButtonDevice2")
			{
				this->metroComboBox8->Text = "Test Button";
			}
			else if (str6 == "ServiceButtonDevice2")
			{
				this->metroComboBox8->Text = "Service Button";
			}
			else if (str6 == "CreditButtonDevice2")
			{
				this->metroComboBox8->Text = "Credit Button";
			}
			else if (str6 == "ViewButtonDevice2")
			{
				this->metroComboBox8->Text = "View Button";
			}
			else if (str6 == "ThreeDimensionalButtonDevice2")
			{
				this->metroComboBox8->Text = "3D Button";
			}
			else if (str6 == "leverUpDevice2")
			{
				this->metroComboBox8->Text = "lever Up";
			}
			else if (str6 == "leverDownDevice2")
			{
				this->metroComboBox8->Text = "lever Down";
			}
			else if (str6 == "leverLeftDevice2")
			{
				this->metroComboBox8->Text = "lever Left";
			}
			else if (str6 == "leverRightDevice2")
			{
				this->metroComboBox8->Text = "lever Right";
			}
			this->metroComboBox8->FormattingEnabled = true;
			this->metroComboBox8->ItemHeight = 23;
			this->metroComboBox8->Location = System::Drawing::Point(6, 1245);
			this->metroComboBox8->Name = L"metroComboBox8";
			this->metroComboBox8->Size = System::Drawing::Size(131, 29);
			this->metroComboBox8->TabIndex = 53;
			this->metroComboBox8->TabStop = false;
			this->metroComboBox8->Items->Add("Exit Button");
			this->metroComboBox8->Items->Add("Test Button");
			this->metroComboBox8->Items->Add("Service Button");
			this->metroComboBox8->Items->Add("Credit Button");
			this->metroComboBox8->Items->Add("View Button");
			this->metroComboBox8->Items->Add("3D Button");
			this->metroComboBox8->Items->Add("lever Up");
			this->metroComboBox8->Items->Add("lever Down");
			this->metroComboBox8->Items->Add("lever Left");
			this->metroComboBox8->Items->Add("lever Right");
			this->metroComboBox8->UseSelectable = false;
			this->metroComboBox8->SelectedIndexChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroComboBox8_SelectedIndexChanged);
			// 
			// metroComboBox9
			// 
			char buff7[300];
			GetPrivateProfileStringA("Settings", "DpadRightDevice2", "", buff7, _countof(buff7), ".\\FFBPlugin.ini");
			String^ str7 = gcnew String(buff7);
			if (str7 == "ExitButtonDevice2")
			{
				this->metroComboBox9->Text = "Exit Button";
			}
			else if (str7 == "TestButtonDevice2")
			{
				this->metroComboBox9->Text = "Test Button";
			}
			else if (str7 == "ServiceButtonDevice2")
			{
				this->metroComboBox9->Text = "Service Button";
			}
			else if (str7 == "CreditButtonDevice2")
			{
				this->metroComboBox9->Text = "Credit Button";
			}
			else if (str7 == "ViewButtonDevice2")
			{
				this->metroComboBox9->Text = "View Button";
			}
			else if (str7 == "ThreeDimensionalButtonDevice2")
			{
				this->metroComboBox9->Text = "3D Button";
			}
			else if (str7 == "leverUpDevice2")
			{
				this->metroComboBox9->Text = "lever Up";
			}
			else if (str7 == "leverDownDevice2")
			{
				this->metroComboBox9->Text = "lever Down";
			}
			else if (str7 == "leverLeftDevice2")
			{
				this->metroComboBox9->Text = "lever Left";
			}
			else if (str7 == "leverRightDevice2")
			{
				this->metroComboBox9->Text = "lever Right";
			}
			this->metroComboBox9->FormattingEnabled = true;
			this->metroComboBox9->ItemHeight = 23;
			this->metroComboBox9->Location = System::Drawing::Point(164, 1245);
			this->metroComboBox9->Name = L"metroComboBox9";
			this->metroComboBox9->Size = System::Drawing::Size(131, 29);
			this->metroComboBox9->TabIndex = 54;
			this->metroComboBox9->TabStop = false;
			this->metroComboBox9->Items->Add("Exit Button");
			this->metroComboBox9->Items->Add("Test Button");
			this->metroComboBox9->Items->Add("Service Button");
			this->metroComboBox9->Items->Add("Credit Button");
			this->metroComboBox9->Items->Add("View Button");
			this->metroComboBox9->Items->Add("3D Button");
			this->metroComboBox9->Items->Add("lever Up");
			this->metroComboBox9->Items->Add("lever Down");
			this->metroComboBox9->Items->Add("lever Left");
			this->metroComboBox9->Items->Add("lever Right");
			this->metroComboBox9->UseSelectable = false;
			this->metroComboBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &RoadFighters3DInput::metroComboBox9_SelectedIndexChanged);
			// 
			// metroLabel3
			// 
			int InputDeviceWheelSteeringAxis1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("InputDeviceWheelSteeringAxis"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->Location = System::Drawing::Point(221, 245);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(16, 19);
			this->metroLabel3->TabIndex = 55;
			this->metroLabel3->TabStop = false;
			this->metroLabel3->Text = System::Convert::ToString(InputDeviceWheelSteeringAxis1);
			// 
			// metroLabel4
			// 
			int InputDeviceWheelAcclAxis1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("InputDeviceWheelAcclAxis"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->Location = System::Drawing::Point(221, 274);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(16, 19);
			this->metroLabel4->TabIndex = 56;
			this->metroLabel4->TabStop = false;
			this->metroLabel4->Text = System::Convert::ToString(InputDeviceWheelAcclAxis1);
			// 
			// metroLabel5
			// 
			int InputDeviceWheelBrakeAxis1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("InputDeviceWheelBrakeAxis"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->Location = System::Drawing::Point(221, 303);
			this->metroLabel5->Name = L"metroLabel5";
			this->metroLabel5->Size = System::Drawing::Size(16, 19);
			this->metroLabel5->TabIndex = 57;
			this->metroLabel5->TabStop = false;
			this->metroLabel5->Text = System::Convert::ToString(InputDeviceWheelBrakeAxis1);
			// 
			// metroLabel6
			// 
			int ExitButton1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("ExitButton"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel6->AutoSize = true;
			this->metroLabel6->Location = System::Drawing::Point(221, 332);
			this->metroLabel6->Name = L"metroLabel6";
			this->metroLabel6->Size = System::Drawing::Size(16, 19);
			this->metroLabel6->TabIndex = 58;
			this->metroLabel6->TabStop = false;
			this->metroLabel6->Text = System::Convert::ToString(ExitButton1);
			// 
			// metroLabel7
			// 
			int TestButton1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("TestButton"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel7->AutoSize = true;
			this->metroLabel7->Location = System::Drawing::Point(221, 361);
			this->metroLabel7->Name = L"metroLabel7";
			this->metroLabel7->Size = System::Drawing::Size(16, 19);
			this->metroLabel7->TabIndex = 59;
			this->metroLabel7->TabStop = false;
			this->metroLabel7->Text = System::Convert::ToString(TestButton1);
			// 
			// metroLabel8
			// 
			int ServiceButton1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("ServiceButton"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel8->AutoSize = true;
			this->metroLabel8->Location = System::Drawing::Point(221, 390);
			this->metroLabel8->Name = L"metroLabel8";
			this->metroLabel8->Size = System::Drawing::Size(16, 19);
			this->metroLabel8->TabIndex = 60;
			this->metroLabel8->TabStop = false;
			this->metroLabel8->Text = System::Convert::ToString(ServiceButton1);
			// 
			// metroLabel9
			// 
			int CreditButton1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("CreditButton"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel9->AutoSize = true;
			this->metroLabel9->Location = System::Drawing::Point(221, 419);
			this->metroLabel9->Name = L"metroLabel9";
			this->metroLabel9->Size = System::Drawing::Size(16, 19);
			this->metroLabel9->TabIndex = 61;
			this->metroLabel9->TabStop = false;
			this->metroLabel9->Text = System::Convert::ToString(CreditButton1);
			// 
			// metroLabel10
			// 
			int ViewButton1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("ViewButton"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel10->AutoSize = true;
			this->metroLabel10->Location = System::Drawing::Point(221, 448);
			this->metroLabel10->Name = L"metroLabel10";
			this->metroLabel10->Size = System::Drawing::Size(16, 19);
			this->metroLabel10->TabIndex = 62;
			this->metroLabel10->TabStop = false;
			this->metroLabel10->Text = System::Convert::ToString(ViewButton1);
			// 
			// metroLabel11
			// 
			int ThreeDimensionalButton1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("ThreeDimensionalButton"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel11->AutoSize = true;
			this->metroLabel11->Location = System::Drawing::Point(221, 477);
			this->metroLabel11->Name = L"metroLabel11";
			this->metroLabel11->Size = System::Drawing::Size(16, 19);
			this->metroLabel11->TabIndex = 63;
			this->metroLabel11->TabStop = false;
			this->metroLabel11->Text = System::Convert::ToString(ThreeDimensionalButton1);
			// 
			// metroLabel12
			// 
			int leverUp1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("leverUp"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel12->AutoSize = true;
			this->metroLabel12->Location = System::Drawing::Point(221, 506);
			this->metroLabel12->Name = L"metroLabel12";
			this->metroLabel12->Size = System::Drawing::Size(16, 19);
			this->metroLabel12->TabIndex = 64;
			this->metroLabel12->TabStop = false;
			this->metroLabel12->Text = System::Convert::ToString(leverUp1);
			// 
			// metroLabel13
			// 
			int leverDown1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("leverDown"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel13->AutoSize = true;
			this->metroLabel13->Location = System::Drawing::Point(221, 535);
			this->metroLabel13->Name = L"metroLabel13";
			this->metroLabel13->Size = System::Drawing::Size(16, 19);
			this->metroLabel13->TabIndex = 65;
			this->metroLabel13->TabStop = false;
			this->metroLabel13->Text = System::Convert::ToString(leverDown1);
			// 
			// metroLabel14
			// 
			int leverLeft1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("leverLeft"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel14->AutoSize = true;
			this->metroLabel14->Location = System::Drawing::Point(221, 564);
			this->metroLabel14->Name = L"metroLabel14";
			this->metroLabel14->Size = System::Drawing::Size(16, 19);
			this->metroLabel14->TabIndex = 66;
			this->metroLabel14->TabStop = false;
			this->metroLabel14->Text = System::Convert::ToString(leverLeft1);
			// 
			// metroLabel15
			// 
			int leverRight1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("leverRight"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel15->AutoSize = true;
			this->metroLabel15->Location = System::Drawing::Point(221, 593);
			this->metroLabel15->Name = L"metroLabel15";
			this->metroLabel15->Size = System::Drawing::Size(16, 19);
			this->metroLabel15->TabIndex = 67;
			this->metroLabel15->TabStop = false;
			this->metroLabel15->Text = System::Convert::ToString(leverRight1);
			// 
			// metroLabel16
			// 
			int ExitButtonDevice21 = GetPrivateProfileInt(TEXT("Settings"), TEXT("ExitButtonDevice2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel16->AutoSize = true;
			this->metroLabel16->Location = System::Drawing::Point(221, 862);
			this->metroLabel16->Name = L"metroLabel16";
			this->metroLabel16->Size = System::Drawing::Size(16, 19);
			this->metroLabel16->TabIndex = 68;
			this->metroLabel16->TabStop = false;
			this->metroLabel16->Text = System::Convert::ToString(ExitButtonDevice21);
			// 
			// metroLabel17
			// 
			int TestButtonDevice21 = GetPrivateProfileInt(TEXT("Settings"), TEXT("TestButtonDevice2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel17->AutoSize = true;
			this->metroLabel17->Location = System::Drawing::Point(221, 891);
			this->metroLabel17->Name = L"metroLabel17";
			this->metroLabel17->Size = System::Drawing::Size(16, 19);
			this->metroLabel17->TabIndex = 69;
			this->metroLabel17->TabStop = false;
			this->metroLabel17->Text = System::Convert::ToString(TestButtonDevice21);
			// 
			// metroLabel18
			// 
			int ServiceButtonDevice21 = GetPrivateProfileInt(TEXT("Settings"), TEXT("ServiceButtonDevice2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel18->AutoSize = true;
			this->metroLabel18->Location = System::Drawing::Point(221, 920);
			this->metroLabel18->Name = L"metroLabel18";
			this->metroLabel18->Size = System::Drawing::Size(16, 19);
			this->metroLabel18->TabIndex = 70;
			this->metroLabel18->TabStop = false;
			this->metroLabel18->Text = System::Convert::ToString(ServiceButtonDevice21);
			// 
			// metroLabel19
			// 
			int ViewButtonDevice21 = GetPrivateProfileInt(TEXT("Settings"), TEXT("ViewButtonDevice2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel19->AutoSize = true;
			this->metroLabel19->Location = System::Drawing::Point(221, 978);
			this->metroLabel19->Name = L"metroLabel19";
			this->metroLabel19->Size = System::Drawing::Size(16, 19);
			this->metroLabel19->TabIndex = 71;
			this->metroLabel19->TabStop = false;
			this->metroLabel19->Text = System::Convert::ToString(ViewButtonDevice21);
			// 
			// metroLabel20
			// 
			int ThreeDimensionalButtonDevice21 = GetPrivateProfileInt(TEXT("Settings"), TEXT("ThreeDimensionalButtonDevice2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel20->AutoSize = true;
			this->metroLabel20->Location = System::Drawing::Point(221, 1007);
			this->metroLabel20->Name = L"metroLabel20";
			this->metroLabel20->Size = System::Drawing::Size(16, 19);
			this->metroLabel20->TabIndex = 72;
			this->metroLabel20->TabStop = false;
			this->metroLabel20->Text = System::Convert::ToString(ThreeDimensionalButtonDevice21);
			// 
			// metroLabel21
			// 
			int leverUpDevice21 = GetPrivateProfileInt(TEXT("Settings"), TEXT("leverUpDevice2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel21->AutoSize = true;
			this->metroLabel21->Location = System::Drawing::Point(221, 1036);
			this->metroLabel21->Name = L"metroLabel21";
			this->metroLabel21->Size = System::Drawing::Size(16, 19);
			this->metroLabel21->TabIndex = 73;
			this->metroLabel21->TabStop = false;
			this->metroLabel21->Text = System::Convert::ToString(leverUpDevice21);
			// 
			// metroLabel22
			// 
			int leverDownDevice21 = GetPrivateProfileInt(TEXT("Settings"), TEXT("leverDownDevice2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel22->AutoSize = true;
			this->metroLabel22->Location = System::Drawing::Point(221, 1065);
			this->metroLabel22->Name = L"metroLabel22";
			this->metroLabel22->Size = System::Drawing::Size(16, 19);
			this->metroLabel22->TabIndex = 74;
			this->metroLabel22->TabStop = false;
			this->metroLabel22->Text = System::Convert::ToString(leverDownDevice21);
			// 
			// metroLabel23
			// 
			int leverLeftDevice21 = GetPrivateProfileInt(TEXT("Settings"), TEXT("leverLeftDevice2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel23->AutoSize = true;
			this->metroLabel23->Location = System::Drawing::Point(221, 1094);
			this->metroLabel23->Name = L"metroLabel23";
			this->metroLabel23->Size = System::Drawing::Size(16, 19);
			this->metroLabel23->TabIndex = 75;
			this->metroLabel23->TabStop = false;
			this->metroLabel23->Text = System::Convert::ToString(leverLeftDevice21);
			// 
			// metroLabel24
			// 
			int leverRightDevice21 = GetPrivateProfileInt(TEXT("Settings"), TEXT("leverRightDevice2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel24->AutoSize = true;
			this->metroLabel24->Location = System::Drawing::Point(221, 1123);
			this->metroLabel24->Name = L"metroLabel24";
			this->metroLabel24->Size = System::Drawing::Size(16, 19);
			this->metroLabel24->TabIndex = 76;
			this->metroLabel24->TabStop = false;
			this->metroLabel24->Text = System::Convert::ToString(leverRightDevice21);
			// 
			// metroLink23
			// 
			this->metroLink23->Location = System::Drawing::Point(6, 949);
			this->metroLink23->Name = L"metroLink23";
			this->metroLink23->Size = System::Drawing::Size(131, 23);
			this->metroLink23->TabIndex = 77;
			this->metroLink23->TabStop = false;
			this->metroLink23->Text = L"Credit Button";
			this->metroLink23->UseSelectable = false;
			this->metroLink23->Click += gcnew System::EventHandler(this, &RoadFighters3DInput::metroLink23_Click);
			// 
			// metroLabel25
			// 
			int CreditButtonDevice21 = GetPrivateProfileInt(TEXT("Settings"), TEXT("CreditButtonDevice2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel25->AutoSize = true;
			this->metroLabel25->Location = System::Drawing::Point(221, 949);
			this->metroLabel25->Name = L"metroLabel25";
			this->metroLabel25->Size = System::Drawing::Size(16, 19);
			this->metroLabel25->TabIndex = 78;
			this->metroLabel25->TabStop = false;
			this->metroLabel25->Text = System::Convert::ToString(CreditButtonDevice21);
			// 
			// RoadFighters3DInput
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 1300);
			this->Controls->Add(this->metroLink24);
			this->Controls->Add(this->metroLabel25);
			this->Controls->Add(this->metroLink23);
			this->Controls->Add(this->metroLabel24);
			this->Controls->Add(this->metroLabel23);
			this->Controls->Add(this->metroLabel22);
			this->Controls->Add(this->metroLabel21);
			this->Controls->Add(this->metroLabel20);
			this->Controls->Add(this->metroLabel19);
			this->Controls->Add(this->metroLabel18);
			this->Controls->Add(this->metroLabel17);
			this->Controls->Add(this->metroLabel16);
			this->Controls->Add(this->metroLabel15);
			this->Controls->Add(this->metroLabel14);
			this->Controls->Add(this->metroLabel13);
			this->Controls->Add(this->metroLabel12);
			this->Controls->Add(this->metroLabel11);
			this->Controls->Add(this->metroLabel10);
			this->Controls->Add(this->metroLabel9);
			this->Controls->Add(this->metroLabel8);
			this->Controls->Add(this->metroLabel7);
			this->Controls->Add(this->metroLabel6);
			this->Controls->Add(this->metroLabel5);
			this->Controls->Add(this->metroLabel4);
			this->Controls->Add(this->metroLabel3);
			this->Controls->Add(this->metroComboBox9);
			this->Controls->Add(this->metroComboBox8);
			this->Controls->Add(this->metroTextBox16);
			this->Controls->Add(this->metroTextBox15);
			this->Controls->Add(this->metroComboBox7);
			this->Controls->Add(this->metroComboBox6);
			this->Controls->Add(this->metroTextBox14);
			this->Controls->Add(this->metroTextBox13);
			this->Controls->Add(this->metroLink22);
			this->Controls->Add(this->metroLink21);
			this->Controls->Add(this->metroLink20);
			this->Controls->Add(this->metroLink19);
			this->Controls->Add(this->metroLink18);
			this->Controls->Add(this->metroLink17);
			this->Controls->Add(this->metroLink16);
			this->Controls->Add(this->metroLink15);
			this->Controls->Add(this->metroLink14);
			this->Controls->Add(this->metroTextBox12);
			this->Controls->Add(this->metroTextBox11);
			this->Controls->Add(this->metroComboBox5);
			this->Controls->Add(this->metroTextBox10);
			this->Controls->Add(this->metroComboBox4);
			this->Controls->Add(this->metroComboBox3);
			this->Controls->Add(this->metroTextBox9);
			this->Controls->Add(this->metroTextBox8);
			this->Controls->Add(this->metroComboBox2);
			this->Controls->Add(this->metroComboBox1);
			this->Controls->Add(this->metroTextBox7);
			this->Controls->Add(this->metroTextBox6);
			this->Controls->Add(this->metroLink13);
			this->Controls->Add(this->metroLink12);
			this->Controls->Add(this->metroLink11);
			this->Controls->Add(this->metroLink10);
			this->Controls->Add(this->metroLink9);
			this->Controls->Add(this->metroLink8);
			this->Controls->Add(this->metroLink7);
			this->Controls->Add(this->metroLink6);
			this->Controls->Add(this->metroLink5);
			this->Controls->Add(this->metroLink4);
			this->Controls->Add(this->metroCheckBox4);
			this->Controls->Add(this->metroCheckBox3);
			this->Controls->Add(this->metroLink3);
			this->Controls->Add(this->metroLink2);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroTextBox5);
			this->Controls->Add(this->metroTextBox4);
			this->Controls->Add(this->metroTextBox3);
			this->Controls->Add(this->metroLabel2);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroTrackBar2);
			this->Controls->Add(this->metroTrackBar1);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroTextBox1);
			this->Controls->Add(this->metroCheckBox2);
			this->Controls->Add(this->metroCheckBox1);
			this->MaximizeBox = false;
			this->ShowIcon = false;
			this->Name = L"RoadFighters3DInput";
			this->Padding = System::Windows::Forms::Padding(0, 60, 0, 0);
			this->Resizable = false;
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
	private: System::Void metroCheckBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Enable Input
	{
		if (metroCheckBox1->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("InputDeviceWheelEnable"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("InputDeviceWheelEnable"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}

	}
	private: System::Void metroCheckBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Sequential Gears
	{
		if (metroCheckBox2->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("SequentialGears"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("SequentialGears"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}

	}
	private: System::Void metroCheckBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Reverse Axis
	{
		if (metroCheckBox3->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("InputDeviceWheelReverseAxis"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("InputDeviceWheelReverseAxis"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}

	}
	private: System::Void metroCheckBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Combined Pedals
	{
		if (metroCheckBox4->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("InputDeviceCombinedPedals"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("InputDeviceCombinedPedals"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}

	}
	private: System::Void metroTrackBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Steering Deadzone
	{
		metroLabel1->Text = metroTrackBar1->Value.ToString();
		Decimal value = metroTrackBar1->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "SteeringDeadzone", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar2_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Pedal Deadzone
	{
		metroLabel2->Text = metroTrackBar2->Value.ToString();
		Decimal value = metroTrackBar2->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "PedalDeadzone", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 Steering Axis
	{
		metroLabel3->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		static int SETUP_DEAD_ZONE = 10000;
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"0";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"0";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "0", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 1)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"1";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"1";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "1", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 2)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"2";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"2";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "2", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 3)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"3";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"3";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "3", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 4)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"4";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"4";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "4", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 5)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"5";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"5";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "5", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 6)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"6";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"6";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "6", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 7)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"7";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"7";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "7", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 8)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"8";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"8";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "8", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 9)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"9";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"9";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "9", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 10)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"10";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"10";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "10", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 11)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"11";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"11";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "11", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 12)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"12";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"12";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "12", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 13)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"13";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"13";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "13", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 14)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"14";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"14";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "14", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 15)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"15";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel3->Text = L"15";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelSteeringAxis", "15", ".\\FFBPlugin.ini");
				}
			}
		}
	}					
	private: System::Void metroLink2_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 Accl Axis
	{
		metroLabel4->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		static int SETUP_DEAD_ZONE = 10000;
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"0";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"0";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "0", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 1)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"1";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"1";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "1", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 2)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"2";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"2";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "2", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 3)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"3";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"3";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "3", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 4)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"4";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"4";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "4", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 5)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"5";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"5";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "5", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 6)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"6";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"6";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "6", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 7)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"7";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"7";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "7", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 8)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"8";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"8";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "8", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 9)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"9";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"9";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "9", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 10)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"10";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"10";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "10", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 11)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"11";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"11";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "11", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 12)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"12";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"12";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "12", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 13)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"13";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"13";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "13", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 14)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"14";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"14";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "14", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 15)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"15";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel4->Text = L"15";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelAcclAxis", "15", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink3_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 Brake Axis
	{
		metroLabel5->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		static int SETUP_DEAD_ZONE = 10000;
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"0";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"0";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "0", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 1)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"1";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"1";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "1", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 2)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"2";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"2";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "2", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 3)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"3";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"3";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "3", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 4)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"4";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"4";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "4", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 5)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"5";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"5";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "5", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 6)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"6";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"6";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "6", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 7)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"7";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"7";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "7", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 8)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"8";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"8";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "8", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 9)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"9";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"9";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "9", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 10)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"10";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"10";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "10", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 11)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"11";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"11";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "11", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 12)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"12";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"12";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "12", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 13)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"13";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"13";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "13", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 14)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"14";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"14";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "14", ".\\FFBPlugin.ini");
				}
			}
			else if (e1.jaxis.axis == 15)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"15";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					metroLabel5->Text = L"15";
					WritePrivateProfileStringA("Settings", "InputDeviceWheelBrakeAxis", "15", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink4_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 Exit Button
	{
		metroLabel6->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel6->Text = L"0";
					WritePrivateProfileStringA("Settings", "ExitButton", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel6->Text = L"1";
					WritePrivateProfileStringA("Settings", "ExitButton", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel6->Text = L"2";
					WritePrivateProfileStringA("Settings", "ExitButton", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel6->Text = L"3";
					WritePrivateProfileStringA("Settings", "ExitButton", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel6->Text = L"4";
					WritePrivateProfileStringA("Settings", "ExitButton", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel6->Text = L"5";
					WritePrivateProfileStringA("Settings", "ExitButton", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel6->Text = L"6";
					WritePrivateProfileStringA("Settings", "ExitButton", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel6->Text = L"7";
					WritePrivateProfileStringA("Settings", "ExitButton", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel6->Text = L"8";
					WritePrivateProfileStringA("Settings", "ExitButton", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel6->Text = L"9";
					WritePrivateProfileStringA("Settings", "ExitButton", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel6->Text = L"10";
					WritePrivateProfileStringA("Settings", "ExitButton", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel6->Text = L"11";
					WritePrivateProfileStringA("Settings", "ExitButton", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel6->Text = L"12";
					WritePrivateProfileStringA("Settings", "ExitButton", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel6->Text = L"13";
					WritePrivateProfileStringA("Settings", "ExitButton", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel6->Text = L"14";
					WritePrivateProfileStringA("Settings", "ExitButton", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel6->Text = L"15";
					WritePrivateProfileStringA("Settings", "ExitButton", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel6->Text = L"16";
					WritePrivateProfileStringA("Settings", "ExitButton", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel6->Text = L"17";
					WritePrivateProfileStringA("Settings", "ExitButton", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel6->Text = L"18";
					WritePrivateProfileStringA("Settings", "ExitButton", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel6->Text = L"19";
					WritePrivateProfileStringA("Settings", "ExitButton", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel6->Text = L"20";
					WritePrivateProfileStringA("Settings", "ExitButton", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel6->Text = L"21";
					WritePrivateProfileStringA("Settings", "ExitButton", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel6->Text = L"22";
					WritePrivateProfileStringA("Settings", "ExitButton", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel6->Text = L"23";
					WritePrivateProfileStringA("Settings", "ExitButton", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel6->Text = L"24";
					WritePrivateProfileStringA("Settings", "ExitButton", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel6->Text = L"25";
					WritePrivateProfileStringA("Settings", "ExitButton", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel6->Text = L"26";
					WritePrivateProfileStringA("Settings", "ExitButton", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel6->Text = L"27";
					WritePrivateProfileStringA("Settings", "ExitButton", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel6->Text = L"28";
					WritePrivateProfileStringA("Settings", "ExitButton", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel6->Text = L"29";
					WritePrivateProfileStringA("Settings", "ExitButton", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel6->Text = L"30";
					WritePrivateProfileStringA("Settings", "ExitButton", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink5_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 Test Button
	{
		metroLabel7->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel7->Text = L"0";
					WritePrivateProfileStringA("Settings", "TestButton", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel7->Text = L"1";
					WritePrivateProfileStringA("Settings", "TestButton", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel7->Text = L"2";
					WritePrivateProfileStringA("Settings", "TestButton", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel7->Text = L"3";
					WritePrivateProfileStringA("Settings", "TestButton", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel7->Text = L"4";
					WritePrivateProfileStringA("Settings", "TestButton", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel7->Text = L"5";
					WritePrivateProfileStringA("Settings", "TestButton", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel7->Text = L"6";
					WritePrivateProfileStringA("Settings", "TestButton", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel7->Text = L"7";
					WritePrivateProfileStringA("Settings", "TestButton", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel7->Text = L"8";
					WritePrivateProfileStringA("Settings", "TestButton", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel7->Text = L"9";
					WritePrivateProfileStringA("Settings", "TestButton", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel7->Text = L"10";
					WritePrivateProfileStringA("Settings", "TestButton", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel7->Text = L"11";
					WritePrivateProfileStringA("Settings", "TestButton", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel7->Text = L"12";
					WritePrivateProfileStringA("Settings", "TestButton", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel7->Text = L"13";
					WritePrivateProfileStringA("Settings", "TestButton", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel7->Text = L"14";
					WritePrivateProfileStringA("Settings", "TestButton", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel7->Text = L"15";
					WritePrivateProfileStringA("Settings", "TestButton", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel7->Text = L"16";
					WritePrivateProfileStringA("Settings", "TestButton", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel7->Text = L"17";
					WritePrivateProfileStringA("Settings", "TestButton", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel7->Text = L"18";
					WritePrivateProfileStringA("Settings", "TestButton", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel7->Text = L"19";
					WritePrivateProfileStringA("Settings", "TestButton", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel7->Text = L"20";
					WritePrivateProfileStringA("Settings", "TestButton", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel7->Text = L"21";
					WritePrivateProfileStringA("Settings", "TestButton", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel7->Text = L"22";
					WritePrivateProfileStringA("Settings", "TestButton", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel7->Text = L"23";
					WritePrivateProfileStringA("Settings", "TestButton", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel7->Text = L"24";
					WritePrivateProfileStringA("Settings", "TestButton", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel7->Text = L"25";
					WritePrivateProfileStringA("Settings", "TestButton", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel7->Text = L"26";
					WritePrivateProfileStringA("Settings", "TestButton", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel7->Text = L"27";
					WritePrivateProfileStringA("Settings", "TestButton", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel7->Text = L"28";
					WritePrivateProfileStringA("Settings", "TestButton", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel7->Text = L"29";
					WritePrivateProfileStringA("Settings", "TestButton", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel7->Text = L"30";
					WritePrivateProfileStringA("Settings", "TestButton", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink6_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 Service Button
	{
		metroLabel8->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel8->Text = L"0";
					WritePrivateProfileStringA("Settings", "ServiceButton", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel8->Text = L"1";
					WritePrivateProfileStringA("Settings", "ServiceButton", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel8->Text = L"2";
					WritePrivateProfileStringA("Settings", "ServiceButton", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel8->Text = L"3";
					WritePrivateProfileStringA("Settings", "ServiceButton", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel8->Text = L"4";
					WritePrivateProfileStringA("Settings", "ServiceButton", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel8->Text = L"5";
					WritePrivateProfileStringA("Settings", "ServiceButton", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel8->Text = L"6";
					WritePrivateProfileStringA("Settings", "ServiceButton", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel8->Text = L"7";
					WritePrivateProfileStringA("Settings", "ServiceButton", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel8->Text = L"8";
					WritePrivateProfileStringA("Settings", "ServiceButton", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel8->Text = L"9";
					WritePrivateProfileStringA("Settings", "ServiceButton", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel8->Text = L"10";
					WritePrivateProfileStringA("Settings", "ServiceButton", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel8->Text = L"11";
					WritePrivateProfileStringA("Settings", "ServiceButton", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel8->Text = L"12";
					WritePrivateProfileStringA("Settings", "ServiceButton", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel8->Text = L"13";
					WritePrivateProfileStringA("Settings", "ServiceButton", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel8->Text = L"14";
					WritePrivateProfileStringA("Settings", "ServiceButton", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel8->Text = L"15";
					WritePrivateProfileStringA("Settings", "ServiceButton", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel8->Text = L"16";
					WritePrivateProfileStringA("Settings", "ServiceButton", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel8->Text = L"17";
					WritePrivateProfileStringA("Settings", "ServiceButton", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel8->Text = L"18";
					WritePrivateProfileStringA("Settings", "ServiceButton", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel8->Text = L"19";
					WritePrivateProfileStringA("Settings", "ServiceButton", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel8->Text = L"20";
					WritePrivateProfileStringA("Settings", "ServiceButton", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel8->Text = L"21";
					WritePrivateProfileStringA("Settings", "ServiceButton", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel8->Text = L"22";
					WritePrivateProfileStringA("Settings", "ServiceButton", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel8->Text = L"23";
					WritePrivateProfileStringA("Settings", "ServiceButton", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel8->Text = L"24";
					WritePrivateProfileStringA("Settings", "ServiceButton", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel8->Text = L"25";
					WritePrivateProfileStringA("Settings", "ServiceButton", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel8->Text = L"26";
					WritePrivateProfileStringA("Settings", "ServiceButton", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel8->Text = L"27";
					WritePrivateProfileStringA("Settings", "ServiceButton", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel8->Text = L"28";
					WritePrivateProfileStringA("Settings", "ServiceButton", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel8->Text = L"29";
					WritePrivateProfileStringA("Settings", "ServiceButton", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel8->Text = L"30";
					WritePrivateProfileStringA("Settings", "ServiceButton", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink7_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 Credit Button
	{
		metroLabel9->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel9->Text = L"0";
					WritePrivateProfileStringA("Settings", "CreditButton", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel9->Text = L"1";
					WritePrivateProfileStringA("Settings", "CreditButton", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel9->Text = L"2";
					WritePrivateProfileStringA("Settings", "CreditButton", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel9->Text = L"3";
					WritePrivateProfileStringA("Settings", "CreditButton", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel9->Text = L"4";
					WritePrivateProfileStringA("Settings", "CreditButton", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel9->Text = L"5";
					WritePrivateProfileStringA("Settings", "CreditButton", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel9->Text = L"6";
					WritePrivateProfileStringA("Settings", "CreditButton", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel9->Text = L"7";
					WritePrivateProfileStringA("Settings", "CreditButton", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel9->Text = L"8";
					WritePrivateProfileStringA("Settings", "CreditButton", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel9->Text = L"9";
					WritePrivateProfileStringA("Settings", "CreditButton", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel9->Text = L"10";
					WritePrivateProfileStringA("Settings", "CreditButton", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel9->Text = L"11";
					WritePrivateProfileStringA("Settings", "CreditButton", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel9->Text = L"12";
					WritePrivateProfileStringA("Settings", "CreditButton", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel9->Text = L"13";
					WritePrivateProfileStringA("Settings", "CreditButton", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel9->Text = L"14";
					WritePrivateProfileStringA("Settings", "CreditButton", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel9->Text = L"15";
					WritePrivateProfileStringA("Settings", "CreditButton", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel9->Text = L"16";
					WritePrivateProfileStringA("Settings", "CreditButton", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel9->Text = L"17";
					WritePrivateProfileStringA("Settings", "CreditButton", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel9->Text = L"18";
					WritePrivateProfileStringA("Settings", "CreditButton", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel9->Text = L"19";
					WritePrivateProfileStringA("Settings", "CreditButton", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel9->Text = L"20";
					WritePrivateProfileStringA("Settings", "CreditButton", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel9->Text = L"21";
					WritePrivateProfileStringA("Settings", "CreditButton", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel9->Text = L"22";
					WritePrivateProfileStringA("Settings", "CreditButton", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel9->Text = L"23";
					WritePrivateProfileStringA("Settings", "CreditButton", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel9->Text = L"24";
					WritePrivateProfileStringA("Settings", "CreditButton", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel9->Text = L"25";
					WritePrivateProfileStringA("Settings", "CreditButton", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel9->Text = L"26";
					WritePrivateProfileStringA("Settings", "CreditButton", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel9->Text = L"27";
					WritePrivateProfileStringA("Settings", "CreditButton", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel9->Text = L"28";
					WritePrivateProfileStringA("Settings", "CreditButton", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel9->Text = L"29";
					WritePrivateProfileStringA("Settings", "CreditButton", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel9->Text = L"30";
					WritePrivateProfileStringA("Settings", "CreditButton", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink8_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 View Button
	{
		metroLabel10->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel10->Text = L"0";
					WritePrivateProfileStringA("Settings", "ViewButton", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel10->Text = L"1";
					WritePrivateProfileStringA("Settings", "ViewButton", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel10->Text = L"2";
					WritePrivateProfileStringA("Settings", "ViewButton", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel10->Text = L"3";
					WritePrivateProfileStringA("Settings", "ViewButton", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel10->Text = L"4";
					WritePrivateProfileStringA("Settings", "ViewButton", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel10->Text = L"5";
					WritePrivateProfileStringA("Settings", "ViewButton", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel10->Text = L"6";
					WritePrivateProfileStringA("Settings", "ViewButton", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel10->Text = L"7";
					WritePrivateProfileStringA("Settings", "ViewButton", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel10->Text = L"8";
					WritePrivateProfileStringA("Settings", "ViewButton", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel10->Text = L"9";
					WritePrivateProfileStringA("Settings", "ViewButton", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel10->Text = L"10";
					WritePrivateProfileStringA("Settings", "ViewButton", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel10->Text = L"11";
					WritePrivateProfileStringA("Settings", "ViewButton", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel10->Text = L"12";
					WritePrivateProfileStringA("Settings", "ViewButton", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel10->Text = L"13";
					WritePrivateProfileStringA("Settings", "ViewButton", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel10->Text = L"14";
					WritePrivateProfileStringA("Settings", "ViewButton", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel10->Text = L"15";
					WritePrivateProfileStringA("Settings", "ViewButton", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel10->Text = L"16";
					WritePrivateProfileStringA("Settings", "ViewButton", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel10->Text = L"17";
					WritePrivateProfileStringA("Settings", "ViewButton", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel10->Text = L"18";
					WritePrivateProfileStringA("Settings", "ViewButton", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel10->Text = L"19";
					WritePrivateProfileStringA("Settings", "ViewButton", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel10->Text = L"20";
					WritePrivateProfileStringA("Settings", "ViewButton", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel10->Text = L"21";
					WritePrivateProfileStringA("Settings", "ViewButton", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel10->Text = L"22";
					WritePrivateProfileStringA("Settings", "ViewButton", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel10->Text = L"23";
					WritePrivateProfileStringA("Settings", "ViewButton", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel10->Text = L"24";
					WritePrivateProfileStringA("Settings", "ViewButton", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel10->Text = L"25";
					WritePrivateProfileStringA("Settings", "ViewButton", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel10->Text = L"26";
					WritePrivateProfileStringA("Settings", "ViewButton", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel10->Text = L"27";
					WritePrivateProfileStringA("Settings", "ViewButton", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel10->Text = L"28";
					WritePrivateProfileStringA("Settings", "ViewButton", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel10->Text = L"29";
					WritePrivateProfileStringA("Settings", "ViewButton", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel10->Text = L"30";
					WritePrivateProfileStringA("Settings", "ViewButton", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink9_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 3D Button
	{
		metroLabel11->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel11->Text = L"0";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel11->Text = L"1";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel11->Text = L"2";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel11->Text = L"3";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel11->Text = L"4";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel11->Text = L"5";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel11->Text = L"6";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel11->Text = L"7";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel11->Text = L"8";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel11->Text = L"9";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel11->Text = L"10";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel11->Text = L"11";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel11->Text = L"12";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel11->Text = L"13";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel11->Text = L"14";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel11->Text = L"15";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel11->Text = L"16";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel11->Text = L"17";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel11->Text = L"18";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel11->Text = L"19";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel11->Text = L"20";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel11->Text = L"21";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel11->Text = L"22";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel11->Text = L"23";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel11->Text = L"24";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel11->Text = L"25";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel11->Text = L"26";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel11->Text = L"27";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel11->Text = L"28";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel11->Text = L"29";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel11->Text = L"30";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButton", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink10_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 Lever Up
	{
		metroLabel12->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel12->Text = L"0";
					WritePrivateProfileStringA("Settings", "leverUp", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel12->Text = L"1";
					WritePrivateProfileStringA("Settings", "leverUp", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel12->Text = L"2";
					WritePrivateProfileStringA("Settings", "leverUp", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel12->Text = L"3";
					WritePrivateProfileStringA("Settings", "leverUp", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel12->Text = L"4";
					WritePrivateProfileStringA("Settings", "leverUp", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel12->Text = L"5";
					WritePrivateProfileStringA("Settings", "leverUp", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel12->Text = L"6";
					WritePrivateProfileStringA("Settings", "leverUp", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel12->Text = L"7";
					WritePrivateProfileStringA("Settings", "leverUp", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel12->Text = L"8";
					WritePrivateProfileStringA("Settings", "leverUp", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel12->Text = L"9";
					WritePrivateProfileStringA("Settings", "leverUp", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel12->Text = L"10";
					WritePrivateProfileStringA("Settings", "leverUp", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel12->Text = L"11";
					WritePrivateProfileStringA("Settings", "leverUp", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel12->Text = L"12";
					WritePrivateProfileStringA("Settings", "leverUp", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel12->Text = L"13";
					WritePrivateProfileStringA("Settings", "leverUp", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel12->Text = L"14";
					WritePrivateProfileStringA("Settings", "leverUp", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel12->Text = L"15";
					WritePrivateProfileStringA("Settings", "leverUp", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel12->Text = L"16";
					WritePrivateProfileStringA("Settings", "leverUp", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel12->Text = L"17";
					WritePrivateProfileStringA("Settings", "leverUp", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel12->Text = L"18";
					WritePrivateProfileStringA("Settings", "leverUp", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel12->Text = L"19";
					WritePrivateProfileStringA("Settings", "leverUp", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel12->Text = L"20";
					WritePrivateProfileStringA("Settings", "leverUp", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel12->Text = L"21";
					WritePrivateProfileStringA("Settings", "leverUp", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel12->Text = L"22";
					WritePrivateProfileStringA("Settings", "leverUp", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel12->Text = L"23";
					WritePrivateProfileStringA("Settings", "leverUp", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel12->Text = L"24";
					WritePrivateProfileStringA("Settings", "leverUp", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel12->Text = L"25";
					WritePrivateProfileStringA("Settings", "leverUp", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel12->Text = L"26";
					WritePrivateProfileStringA("Settings", "leverUp", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel12->Text = L"27";
					WritePrivateProfileStringA("Settings", "leverUp", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel12->Text = L"28";
					WritePrivateProfileStringA("Settings", "leverUp", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel12->Text = L"29";
					WritePrivateProfileStringA("Settings", "leverUp", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel12->Text = L"30";
					WritePrivateProfileStringA("Settings", "leverUp", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink11_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 Lever Down
	{
		metroLabel13->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel13->Text = L"0";
					WritePrivateProfileStringA("Settings", "leverDown", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel13->Text = L"1";
					WritePrivateProfileStringA("Settings", "leverDown", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel13->Text = L"2";
					WritePrivateProfileStringA("Settings", "leverDown", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel13->Text = L"3";
					WritePrivateProfileStringA("Settings", "leverDown", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel13->Text = L"4";
					WritePrivateProfileStringA("Settings", "leverDown", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel13->Text = L"5";
					WritePrivateProfileStringA("Settings", "leverDown", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel13->Text = L"6";
					WritePrivateProfileStringA("Settings", "leverDown", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel13->Text = L"7";
					WritePrivateProfileStringA("Settings", "leverDown", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel13->Text = L"8";
					WritePrivateProfileStringA("Settings", "leverDown", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel13->Text = L"9";
					WritePrivateProfileStringA("Settings", "leverDown", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel13->Text = L"10";
					WritePrivateProfileStringA("Settings", "leverDown", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel13->Text = L"11";
					WritePrivateProfileStringA("Settings", "leverDown", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel13->Text = L"12";
					WritePrivateProfileStringA("Settings", "leverDown", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel13->Text = L"13";
					WritePrivateProfileStringA("Settings", "leverDown", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel13->Text = L"14";
					WritePrivateProfileStringA("Settings", "leverDown", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel13->Text = L"15";
					WritePrivateProfileStringA("Settings", "leverDown", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel13->Text = L"16";
					WritePrivateProfileStringA("Settings", "leverDown", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel13->Text = L"17";
					WritePrivateProfileStringA("Settings", "leverDown", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel13->Text = L"18";
					WritePrivateProfileStringA("Settings", "leverDown", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel13->Text = L"19";
					WritePrivateProfileStringA("Settings", "leverDown", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel13->Text = L"20";
					WritePrivateProfileStringA("Settings", "leverDown", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel13->Text = L"21";
					WritePrivateProfileStringA("Settings", "leverDown", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel13->Text = L"22";
					WritePrivateProfileStringA("Settings", "leverDown", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel13->Text = L"23";
					WritePrivateProfileStringA("Settings", "leverDown", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel13->Text = L"24";
					WritePrivateProfileStringA("Settings", "leverDown", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel13->Text = L"25";
					WritePrivateProfileStringA("Settings", "leverDown", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel13->Text = L"26";
					WritePrivateProfileStringA("Settings", "leverDown", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel13->Text = L"27";
					WritePrivateProfileStringA("Settings", "leverDown", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel13->Text = L"28";
					WritePrivateProfileStringA("Settings", "leverDown", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel13->Text = L"29";
					WritePrivateProfileStringA("Settings", "leverDown", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel13->Text = L"30";
					WritePrivateProfileStringA("Settings", "leverDown", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink12_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 Lever Left
	{
		metroLabel14->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel14->Text = L"0";
					WritePrivateProfileStringA("Settings", "leverLeft", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel14->Text = L"1";
					WritePrivateProfileStringA("Settings", "leverLeft", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel14->Text = L"2";
					WritePrivateProfileStringA("Settings", "leverLeft", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel14->Text = L"3";
					WritePrivateProfileStringA("Settings", "leverLeft", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel14->Text = L"4";
					WritePrivateProfileStringA("Settings", "leverLeft", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel14->Text = L"5";
					WritePrivateProfileStringA("Settings", "leverLeft", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel14->Text = L"6";
					WritePrivateProfileStringA("Settings", "leverLeft", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel14->Text = L"7";
					WritePrivateProfileStringA("Settings", "leverLeft", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel14->Text = L"8";
					WritePrivateProfileStringA("Settings", "leverLeft", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel14->Text = L"9";
					WritePrivateProfileStringA("Settings", "leverLeft", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel14->Text = L"10";
					WritePrivateProfileStringA("Settings", "leverLeft", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel14->Text = L"11";
					WritePrivateProfileStringA("Settings", "leverLeft", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel14->Text = L"12";
					WritePrivateProfileStringA("Settings", "leverLeft", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel14->Text = L"13";
					WritePrivateProfileStringA("Settings", "leverLeft", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel14->Text = L"14";
					WritePrivateProfileStringA("Settings", "leverLeft", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel14->Text = L"15";
					WritePrivateProfileStringA("Settings", "leverLeft", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel14->Text = L"16";
					WritePrivateProfileStringA("Settings", "leverLeft", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel14->Text = L"17";
					WritePrivateProfileStringA("Settings", "leverLeft", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel14->Text = L"18";
					WritePrivateProfileStringA("Settings", "leverLeft", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel14->Text = L"19";
					WritePrivateProfileStringA("Settings", "leverLeft", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel14->Text = L"20";
					WritePrivateProfileStringA("Settings", "leverLeft", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel14->Text = L"21";
					WritePrivateProfileStringA("Settings", "leverLeft", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel14->Text = L"22";
					WritePrivateProfileStringA("Settings", "leverLeft", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel14->Text = L"23";
					WritePrivateProfileStringA("Settings", "leverLeft", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel14->Text = L"24";
					WritePrivateProfileStringA("Settings", "leverLeft", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel14->Text = L"25";
					WritePrivateProfileStringA("Settings", "leverLeft", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel14->Text = L"26";
					WritePrivateProfileStringA("Settings", "leverLeft", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel14->Text = L"27";
					WritePrivateProfileStringA("Settings", "leverLeft", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel14->Text = L"28";
					WritePrivateProfileStringA("Settings", "leverLeft", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel14->Text = L"29";
					WritePrivateProfileStringA("Settings", "leverLeft", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel14->Text = L"30";
					WritePrivateProfileStringA("Settings", "leverLeft", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink13_Click(System::Object^  sender, System::EventArgs^  e) //Device 1 Lever Right
	{
		metroLabel15->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel15->Text = L"0";
					WritePrivateProfileStringA("Settings", "leverRight", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel15->Text = L"1";
					WritePrivateProfileStringA("Settings", "leverRight", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel15->Text = L"2";
					WritePrivateProfileStringA("Settings", "leverRight", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel15->Text = L"3";
					WritePrivateProfileStringA("Settings", "leverRight", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel15->Text = L"4";
					WritePrivateProfileStringA("Settings", "leverRight", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel15->Text = L"5";
					WritePrivateProfileStringA("Settings", "leverRight", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel15->Text = L"6";
					WritePrivateProfileStringA("Settings", "leverRight", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel15->Text = L"7";
					WritePrivateProfileStringA("Settings", "leverRight", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel15->Text = L"8";
					WritePrivateProfileStringA("Settings", "leverRight", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel15->Text = L"9";
					WritePrivateProfileStringA("Settings", "leverRight", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel15->Text = L"10";
					WritePrivateProfileStringA("Settings", "leverRight", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel15->Text = L"11";
					WritePrivateProfileStringA("Settings", "leverRight", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel15->Text = L"12";
					WritePrivateProfileStringA("Settings", "leverRight", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel15->Text = L"13";
					WritePrivateProfileStringA("Settings", "leverRight", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel15->Text = L"14";
					WritePrivateProfileStringA("Settings", "leverRight", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel15->Text = L"15";
					WritePrivateProfileStringA("Settings", "leverRight", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel15->Text = L"16";
					WritePrivateProfileStringA("Settings", "leverRight", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel15->Text = L"17";
					WritePrivateProfileStringA("Settings", "leverRight", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel15->Text = L"18";
					WritePrivateProfileStringA("Settings", "leverRight", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel15->Text = L"19";
					WritePrivateProfileStringA("Settings", "leverRight", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel15->Text = L"20";
					WritePrivateProfileStringA("Settings", "leverRight", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel15->Text = L"21";
					WritePrivateProfileStringA("Settings", "leverRight", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel15->Text = L"22";
					WritePrivateProfileStringA("Settings", "leverRight", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel15->Text = L"23";
					WritePrivateProfileStringA("Settings", "leverRight", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel15->Text = L"24";
					WritePrivateProfileStringA("Settings", "leverRight", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel15->Text = L"25";
					WritePrivateProfileStringA("Settings", "leverRight", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel15->Text = L"26";
					WritePrivateProfileStringA("Settings", "leverRight", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel15->Text = L"27";
					WritePrivateProfileStringA("Settings", "leverRight", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel15->Text = L"28";
					WritePrivateProfileStringA("Settings", "leverRight", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel15->Text = L"29";
					WritePrivateProfileStringA("Settings", "leverRight", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel15->Text = L"30";
					WritePrivateProfileStringA("Settings", "leverRight", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink14_Click(System::Object^  sender, System::EventArgs^  e) //Device 2 Exit Button
	{
		metroLabel16->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel16->Text = L"0";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel16->Text = L"1";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel16->Text = L"2";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel16->Text = L"3";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel16->Text = L"4";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel16->Text = L"5";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel16->Text = L"6";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel16->Text = L"7";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel16->Text = L"8";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel16->Text = L"9";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel16->Text = L"10";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel16->Text = L"11";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel16->Text = L"12";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel16->Text = L"13";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel16->Text = L"14";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel16->Text = L"15";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel16->Text = L"16";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel16->Text = L"17";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel16->Text = L"18";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel16->Text = L"19";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel16->Text = L"20";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel16->Text = L"21";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel16->Text = L"22";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel16->Text = L"23";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel16->Text = L"24";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel16->Text = L"25";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel16->Text = L"26";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel16->Text = L"27";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel16->Text = L"28";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel16->Text = L"29";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel16->Text = L"30";
					WritePrivateProfileStringA("Settings", "ExitButtonDevice2", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink15_Click(System::Object^  sender, System::EventArgs^  e) //Device 2 Test Button
	{
		metroLabel17->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel17->Text = L"0";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel17->Text = L"1";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel17->Text = L"2";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel17->Text = L"3";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel17->Text = L"4";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel17->Text = L"5";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel17->Text = L"6";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel17->Text = L"7";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel17->Text = L"8";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel17->Text = L"9";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel17->Text = L"10";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel17->Text = L"11";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel17->Text = L"12";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel17->Text = L"13";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel17->Text = L"14";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel17->Text = L"15";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel17->Text = L"16";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel17->Text = L"17";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel17->Text = L"18";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel17->Text = L"19";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel17->Text = L"20";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel17->Text = L"21";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel17->Text = L"22";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel1->Text = L"23";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel17->Text = L"24";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel17->Text = L"25";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel17->Text = L"26";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel17->Text = L"27";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel17->Text = L"28";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel17->Text = L"29";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel17->Text = L"30";
					WritePrivateProfileStringA("Settings", "TestButtonDevice2", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink16_Click(System::Object^  sender, System::EventArgs^  e) //Device 2 Service Button
	{
		metroLabel18->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel18->Text = L"0";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel18->Text = L"1";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel18->Text = L"2";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel18->Text = L"3";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel18->Text = L"4";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel18->Text = L"5";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel18->Text = L"6";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel18->Text = L"7";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel18->Text = L"8";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel18->Text = L"9";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel18->Text = L"10";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel18->Text = L"11";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel18->Text = L"12";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel18->Text = L"13";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel18->Text = L"14";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel18->Text = L"15";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel18->Text = L"16";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel18->Text = L"17";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel18->Text = L"18";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel18->Text = L"19";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel18->Text = L"20";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel18->Text = L"21";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel18->Text = L"22";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel18->Text = L"23";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel18->Text = L"24";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel18->Text = L"25";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel18->Text = L"26";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel18->Text = L"27";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel18->Text = L"28";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel18->Text = L"29";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel18->Text = L"30";
					WritePrivateProfileStringA("Settings", "ServiceButtonDevice2", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink17_Click(System::Object^  sender, System::EventArgs^  e) //Device 2 View Button
	{
		metroLabel19->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel19->Text = L"0";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel19->Text = L"1";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel19->Text = L"2";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel19->Text = L"3";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel19->Text = L"4";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel19->Text = L"5";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel19->Text = L"6";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel19->Text = L"7";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel19->Text = L"8";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel19->Text = L"9";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel19->Text = L"10";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel19->Text = L"11";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel19->Text = L"12";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel19->Text = L"13";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel19->Text = L"14";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel19->Text = L"15";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel19->Text = L"16";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel1->Text = L"17";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel19->Text = L"18";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel19->Text = L"19";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel19->Text = L"20";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel19->Text = L"21";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel19->Text = L"22";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel19->Text = L"23";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel19->Text = L"24";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel19->Text = L"25";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel19->Text = L"26";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel19->Text = L"27";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel19->Text = L"28";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel19->Text = L"29";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel19->Text = L"30";
					WritePrivateProfileStringA("Settings", "ViewButtonDevice2", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink18_Click(System::Object^  sender, System::EventArgs^  e) //Device 2 3D Button
	{
		metroLabel20->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel20->Text = L"0";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel20->Text = L"1";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel20->Text = L"2";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel20->Text = L"3";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel20->Text = L"4";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel20->Text = L"5";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel20->Text = L"6";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel20->Text = L"7";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel20->Text = L"8";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel20->Text = L"9";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel20->Text = L"10";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel20->Text = L"11";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel20->Text = L"12";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel20->Text = L"13";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel20->Text = L"14";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel20->Text = L"15";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel20->Text = L"16";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel20->Text = L"17";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel20->Text = L"18";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel20->Text = L"19";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel20->Text = L"20";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel20->Text = L"21";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel20->Text = L"22";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel20->Text = L"23";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel20->Text = L"24";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel20->Text = L"25";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel20->Text = L"26";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel20->Text = L"27";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel20->Text = L"28";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel20->Text = L"29";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel20->Text = L"30";
					WritePrivateProfileStringA("Settings", "ThreeDimensionalButtonDevice2", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink19_Click(System::Object^  sender, System::EventArgs^  e) //Device 2 Lever Up
	{
		metroLabel21->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel21->Text = L"0";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel21->Text = L"1";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel21->Text = L"2";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel21->Text = L"3";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel21->Text = L"4";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel21->Text = L"5";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel21->Text = L"6";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel21->Text = L"7";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel21->Text = L"8";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel21->Text = L"9";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel21->Text = L"10";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel21->Text = L"11";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel21->Text = L"12";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel21->Text = L"13";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel21->Text = L"14";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel21->Text = L"15";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel21->Text = L"16";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel21->Text = L"17";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel21->Text = L"18";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel21->Text = L"19";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel21->Text = L"20";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel21->Text = L"21";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel21->Text = L"22";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel21->Text = L"23";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel21->Text = L"24";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel21->Text = L"25";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel21->Text = L"26";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel21->Text = L"27";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel21->Text = L"28";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel21->Text = L"29";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel21->Text = L"30";
					WritePrivateProfileStringA("Settings", "leverUpDevice2", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink20_Click(System::Object^  sender, System::EventArgs^  e) //Device 2 Lever Down
	{
		metroLabel22->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel22->Text = L"0";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel22->Text = L"1";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel22->Text = L"2";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel22->Text = L"3";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel22->Text = L"4";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel22->Text = L"5";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel22->Text = L"6";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel22->Text = L"7";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel22->Text = L"8";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel22->Text = L"9";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel22->Text = L"10";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel22->Text = L"11";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel22->Text = L"12";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel22->Text = L"13";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel22->Text = L"14";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel22->Text = L"15";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel22->Text = L"16";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel22->Text = L"17";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel22->Text = L"18";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel22->Text = L"19";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel22->Text = L"20";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel22->Text = L"21";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel22->Text = L"22";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel22->Text = L"23";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel22->Text = L"24";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel22->Text = L"25";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel22->Text = L"26";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel22->Text = L"27";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel22->Text = L"28";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel22->Text = L"29";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel22->Text = L"30";
					WritePrivateProfileStringA("Settings", "leverDownDevice2", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink21_Click(System::Object^  sender, System::EventArgs^  e) //Device 2 Lever Left
	{
		metroLabel23->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel23->Text = L"0";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel23->Text = L"1";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel23->Text = L"2";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel23->Text = L"3";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel23->Text = L"4";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel23->Text = L"5";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel23->Text = L"6";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel23->Text = L"7";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel23->Text = L"8";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel23->Text = L"9";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel23->Text = L"10";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel23->Text = L"11";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel23->Text = L"12";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel23->Text = L"13";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel23->Text = L"14";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel23->Text = L"15";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel23->Text = L"16";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel23->Text = L"17";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel23->Text = L"18";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel23->Text = L"19";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel23->Text = L"20";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel23->Text = L"21";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel23->Text = L"22";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel23->Text = L"23";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel23->Text = L"24";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel23->Text = L"25";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel23->Text = L"26";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel23->Text = L"27";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel23->Text = L"28";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel23->Text = L"29";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel23->Text = L"30";
					WritePrivateProfileStringA("Settings", "leverLeftDevice2", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink22_Click(System::Object^  sender, System::EventArgs^  e) //Device 2 Lever Right
	{
		metroLabel24->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel24->Text = L"0";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel24->Text = L"1";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel24->Text = L"2";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel24->Text = L"3";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel24->Text = L"4";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel24->Text = L"5";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel24->Text = L"6";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel24->Text = L"7";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel24->Text = L"8";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel24->Text = L"9";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel24->Text = L"10";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel24->Text = L"11";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel24->Text = L"12";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel24->Text = L"13";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel24->Text = L"14";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel24->Text = L"15";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel24->Text = L"16";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel24->Text = L"17";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel24->Text = L"18";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel24->Text = L"19";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel24->Text = L"20";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel24->Text = L"21";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel24->Text = L"22";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel24->Text = L"23";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel24->Text = L"24";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel24->Text = L"25";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel24->Text = L"26";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel24->Text = L"27";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel24->Text = L"28";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel24->Text = L"29";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel24->Text = L"30";
					WritePrivateProfileStringA("Settings", "leverRightDevice2", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroComboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Device 1 Dpad Up
	{
		if (metroComboBox1->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "DpadUp", "ExitButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox1->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "DpadUp", "TestButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox1->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "DpadUp", "ServiceButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox1->SelectedIndex == 3)
		{
			WritePrivateProfileStringA("Settings", "DpadUp", "CreditButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox1->SelectedIndex == 4)
		{
			WritePrivateProfileStringA("Settings", "DpadUp", "ViewButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox1->SelectedIndex == 5)
		{
			WritePrivateProfileStringA("Settings", "DpadUp", "ThreeDimensionalButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox1->SelectedIndex == 6)
		{
			WritePrivateProfileStringA("Settings", "DpadUp", "leverUp", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox1->SelectedIndex == 7)
		{
			WritePrivateProfileStringA("Settings", "DpadUp", "leverDown", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox1->SelectedIndex == 8)
		{
			WritePrivateProfileStringA("Settings", "DpadUp", "leverLeft", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox1->SelectedIndex == 9)
		{
			WritePrivateProfileStringA("Settings", "DpadUp", "leverRight", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Device 1 Dpad Down
	{
		if (metroComboBox2->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "DpadDown", "ExitButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox2->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "DpadDown", "TestButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox2->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "DpadDown", "ServiceButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox2->SelectedIndex == 3)
		{
			WritePrivateProfileStringA("Settings", "DpadDown", "CreditButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox2->SelectedIndex == 4)
		{
			WritePrivateProfileStringA("Settings", "DpadDown", "ViewButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox2->SelectedIndex == 5)
		{
			WritePrivateProfileStringA("Settings", "DpadDown", "ThreeDimensionalButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox2->SelectedIndex == 6)
		{
			WritePrivateProfileStringA("Settings", "DpadDown", "leverUp", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox2->SelectedIndex == 7)
		{
			WritePrivateProfileStringA("Settings", "DpadDown", "leverDown", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox2->SelectedIndex == 8)
		{
			WritePrivateProfileStringA("Settings", "DpadDown", "leverLeft", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox2->SelectedIndex == 9)
		{
			WritePrivateProfileStringA("Settings", "DpadDown", "leverRight", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Device 1 Dpad Left
	{
		if (metroComboBox3->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "DpadLeft", "ExitButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "DpadLeft", "TestButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "DpadLeft", "ServiceButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 3)
		{
			WritePrivateProfileStringA("Settings", "DpadLeft", "CreditButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 4)
		{
			WritePrivateProfileStringA("Settings", "DpadLeft", "ViewButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 5)
		{
			WritePrivateProfileStringA("Settings", "DpadLeft", "ThreeDimensionalButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 6)
		{
			WritePrivateProfileStringA("Settings", "DpadLeft", "leverUp", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 7)
		{
			WritePrivateProfileStringA("Settings", "DpadLeft", "leverDown", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 8)
		{
			WritePrivateProfileStringA("Settings", "DpadLeft", "leverLeft", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox3->SelectedIndex == 9)
		{
			WritePrivateProfileStringA("Settings", "DpadLeft", "leverRight", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Device 1 Dpad Right
	{
		if (metroComboBox4->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "DpadRight", "ExitButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox4->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "DpadRight", "TestButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox4->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "DpadRight", "ServiceButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox4->SelectedIndex == 3)
		{
			WritePrivateProfileStringA("Settings", "DpadRight", "CreditButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox4->SelectedIndex == 4)
		{
			WritePrivateProfileStringA("Settings", "DpadRight", "ViewButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox4->SelectedIndex == 5)
		{
			WritePrivateProfileStringA("Settings", "DpadRight", "ThreeDimensionalButton", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox4->SelectedIndex == 6)
		{
			WritePrivateProfileStringA("Settings", "DpadRight", "leverUp", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox4->SelectedIndex == 7)
		{
			WritePrivateProfileStringA("Settings", "DpadRight", "leverDown", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox4->SelectedIndex == 8)
		{
			WritePrivateProfileStringA("Settings", "DpadRight", "leverLeft", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox4->SelectedIndex == 9)
		{
			WritePrivateProfileStringA("Settings", "DpadRight", "leverRight", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Device 2 Dpad Up
	{
		if (metroComboBox6->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "DpadUpDevice2", "ExitButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox6->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "DpadUpDevice2", "TestButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox6->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "DpadUpDevice2", "ServiceButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox6->SelectedIndex == 3)
		{
			WritePrivateProfileStringA("Settings", "DpadUpDevice2", "CreditButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox6->SelectedIndex == 4)
		{
			WritePrivateProfileStringA("Settings", "DpadUpDevice2", "ViewButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox6->SelectedIndex == 5)
		{
			WritePrivateProfileStringA("Settings", "DpadUpDevice2", "ThreeDimensionalButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox6->SelectedIndex == 6)
		{
			WritePrivateProfileStringA("Settings", "DpadUpDevice2", "leverUpDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox6->SelectedIndex == 7)
		{
			WritePrivateProfileStringA("Settings", "DpadUpDevice2", "leverDownDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox6->SelectedIndex == 8)
		{
			WritePrivateProfileStringA("Settings", "DpadUpDevice2", "leverLeftDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox6->SelectedIndex == 9)
		{
			WritePrivateProfileStringA("Settings", "DpadUpDevice2", "leverRightDevice2", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Device 2 Dpad Down
	{
		if (metroComboBox7->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "DpadDownDevice2", "ExitButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox7->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "DpadDownDevice2", "TestButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox7->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "DpadDownDevice2", "ServiceButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox7->SelectedIndex == 3)
		{
			WritePrivateProfileStringA("Settings", "DpadDownDevice2", "CreditButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox7->SelectedIndex == 4)
		{
			WritePrivateProfileStringA("Settings", "DpadDownDevice2", "ViewButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox7->SelectedIndex == 5)
		{
			WritePrivateProfileStringA("Settings", "DpadDownDevice2", "ThreeDimensionalButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox7->SelectedIndex == 6)
		{
			WritePrivateProfileStringA("Settings", "DpadDownDevice2", "leverUpDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox7->SelectedIndex == 7)
		{
			WritePrivateProfileStringA("Settings", "DpadDownDevice2", "leverDownDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox7->SelectedIndex == 8)
		{
			WritePrivateProfileStringA("Settings", "DpadDownDevice2", "leverLeftDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox7->SelectedIndex == 9)
		{
			WritePrivateProfileStringA("Settings", "DpadDownDevice2", "leverRightDevice2", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Device 2 Dpad Left
	{
		if (metroComboBox8->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "DpadLeftDevice2", "ExitButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox8->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "DpadLeftDevice2", "TestButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox8->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "DpadLeftDevice2", "ServiceButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox8->SelectedIndex == 3)
		{
			WritePrivateProfileStringA("Settings", "DpadLeftDevice2", "CreditButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox8->SelectedIndex == 4)
		{
			WritePrivateProfileStringA("Settings", "DpadLeftDevice2", "ViewButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox8->SelectedIndex == 5)
		{
			WritePrivateProfileStringA("Settings", "DpadLeftDevice2", "ThreeDimensionalButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox8->SelectedIndex == 6)
		{
			WritePrivateProfileStringA("Settings", "DpadLeftDevice2", "leverUpDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox8->SelectedIndex == 7)
		{
			WritePrivateProfileStringA("Settings", "DpadLeftDevice2", "leverDownDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox8->SelectedIndex == 8)
		{
			WritePrivateProfileStringA("Settings", "DpadLeftDevice2", "leverLeftDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox8->SelectedIndex == 9)
		{
			WritePrivateProfileStringA("Settings", "DpadLeftDevice2", "leverRightDevice2", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroComboBox9_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Device 2 Dpad Right
	{
		if (metroComboBox9->SelectedIndex == 0)
		{
			WritePrivateProfileStringA("Settings", "DpadRightDevice2", "ExitButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox9->SelectedIndex == 1)
		{
			WritePrivateProfileStringA("Settings", "DpadRightDevice2", "TestButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox9->SelectedIndex == 2)
		{
			WritePrivateProfileStringA("Settings", "DpadRightDevice2", "ServiceButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox9->SelectedIndex == 3)
		{
			WritePrivateProfileStringA("Settings", "DpadRightDevice2", "CreditButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox9->SelectedIndex == 4)
		{
			WritePrivateProfileStringA("Settings", "DpadRightDevice2", "ViewButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox9->SelectedIndex == 5)
		{
			WritePrivateProfileStringA("Settings", "DpadRightDevice2", "ThreeDimensionalButtonDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox9->SelectedIndex == 6)
		{
			WritePrivateProfileStringA("Settings", "DpadRightDevice2", "leverUpDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox9->SelectedIndex == 7)
		{
			WritePrivateProfileStringA("Settings", "DpadRightDevice2", "leverDownDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox9->SelectedIndex == 8)
		{
			WritePrivateProfileStringA("Settings", "DpadRightDevice2", "leverLeftDevice2", ".\\FFBPlugin.ini");
		}
		else if (metroComboBox9->SelectedIndex == 9)
		{
			WritePrivateProfileStringA("Settings", "DpadRightDevice2", "leverRightDevice2", ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroLink23_Click(System::Object^  sender, System::EventArgs^  e) //Device 2 Credit Button 
	{
		metroLabel25->Text = L"Undetected";
		for (int i = 0; i < SDL_NumJoysticks(); i++)
		{
			SDL_Joystick* js2 = SDL_JoystickOpen(i);
		}
		SDL_Event e1;
		Sleep(2000);
		while (SDL_PollEvent(&e1))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					metroLabel25->Text = L"0";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel25->Text = L"1";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel25->Text = L"2";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel25->Text = L"3";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel25->Text = L"4";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel25->Text = L"5";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel25->Text = L"6";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel25->Text = L"7";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel25->Text = L"8";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel25->Text = L"9";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel25->Text = L"10";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel25->Text = L"11";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel25->Text = L"12";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel25->Text = L"13";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel25->Text = L"14";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel25->Text = L"15";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel25->Text = L"16";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel25->Text = L"17";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel25->Text = L"18";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel25->Text = L"19";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel25->Text = L"20";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel25->Text = L"21";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel25->Text = L"22";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel25->Text = L"23";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel25->Text = L"24";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel25->Text = L"25";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel25->Text = L"26";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel25->Text = L"27";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel25->Text = L"28";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel25->Text = L"29";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel25->Text = L"30";
					WritePrivateProfileStringA("Settings", "CreditButtonDevice2", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroComboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) //Device 2 GUID
	{
		if (metroComboBox5->SelectedIndex == 0)
		{
			SDL_Joystick* js = SDL_JoystickOpen(0);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 1)
		{
			SDL_Joystick* js = SDL_JoystickOpen(1);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 2)
		{
			SDL_Joystick* js = SDL_JoystickOpen(2);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 3)
		{
			SDL_Joystick* js = SDL_JoystickOpen(3);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 4)
		{
			SDL_Joystick* js = SDL_JoystickOpen(4);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 5)
		{
			SDL_Joystick* js = SDL_JoystickOpen(5);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 6)
		{
			SDL_Joystick* js = SDL_JoystickOpen(6);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 7)
		{
			SDL_Joystick* js = SDL_JoystickOpen(7);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 8)
		{
			SDL_Joystick* js = SDL_JoystickOpen(8);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 9)
		{
			SDL_Joystick* js = SDL_JoystickOpen(9);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 10)
		{
			SDL_Joystick* js = SDL_JoystickOpen(10);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 11)
		{
			SDL_Joystick* js = SDL_JoystickOpen(11);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 12)
		{
			SDL_Joystick* js = SDL_JoystickOpen(12);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 13)
		{
			SDL_Joystick* js = SDL_JoystickOpen(13);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 14)
		{
			SDL_Joystick* js = SDL_JoystickOpen(14);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 15)
		{
			SDL_Joystick* js = SDL_JoystickOpen(15);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
		else if (metroComboBox5->SelectedIndex == 16)
		{
			SDL_Joystick* js = SDL_JoystickOpen(16);
			SDL_JoystickGUID guid = SDL_JoystickGetGUID(js);
			char text[256];
			SDL_JoystickGetGUIDString(guid, text, 256);
			String^ str = gcnew String(text);
			this->metroComboBox5->Text = str;
			{
				WritePrivateProfileStringA("Settings", "Device2GUID", text, ".\\FFBPlugin.ini");
			}
		}
	}
	private: System::Void metroLink24_Click(System::Object^  sender, System::EventArgs^  e) //Go Back
	{
		this->Hide();
		obj->Show();
	}
};
}
