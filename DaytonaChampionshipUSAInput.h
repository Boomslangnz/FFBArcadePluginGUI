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
	/// Summary for DaytonaChampionshipUSAInput
	/// </summary>
	public ref class DaytonaChampionshipUSAInput : public MetroFramework::Forms::MetroForm
	{
	public:
		DaytonaChampionshipUSAInput(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MetroForm ^obj;
		DaytonaChampionshipUSAInput(MetroForm ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DaytonaChampionshipUSAInput()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox1;
	protected:
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox2;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox3;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox4;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox3;
	private: MetroFramework::Controls::MetroLink^  metroLink1;
	private: MetroFramework::Controls::MetroLink^  metroLink2;
	private: MetroFramework::Controls::MetroLink^  metroLink3;
	private: MetroFramework::Controls::MetroLink^  metroLink4;
	private: MetroFramework::Controls::MetroLink^  metroLink5;
	private: MetroFramework::Controls::MetroLink^  metroLink6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel3;
	private: MetroFramework::Controls::MetroLabel^  metroLabel4;
	private: MetroFramework::Controls::MetroLabel^  metroLabel5;
	private: MetroFramework::Controls::MetroLabel^  metroLabel6;
	private: MetroFramework::Controls::MetroLink^  metroLink7;
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
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink2 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink3 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink4 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink5 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink6 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLink7 = (gcnew MetroFramework::Controls::MetroLink());
			this->SuspendLayout();
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DaytonaChampionshipUSAInput::Form1_FormClosing);
			// 
			// metroToolTip1
			// 
			this->metroToolTip1->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroToolTip1->StyleManager = nullptr;
			this->metroToolTip1->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroToolTip1->SetToolTip(this->metroCheckBox1, L"Enable to change gears");
			this->metroToolTip1->SetToolTip(this->metroCheckBox2, L"Enable to exit game when press escape key");
			this->metroToolTip1->SetToolTip(this->metroCheckBox3, L"Enable to move through menu with device");
			this->metroToolTip1->SetToolTip(this->metroCheckBox4, L"Hide Mouse Cursor when launch game");
			this->metroToolTip1->SetToolTip(this->metroTextBox1, L" Click Button under select input then press button on device for 2 seconds ");
			this->metroToolTip1->SetToolTip(this->metroTextBox2, L" Button names for device, click below to set input for device");
			this->metroToolTip1->SetToolTip(this->metroTextBox3, L" Button number set in FFBPlugin.ini for device");

			// 
			// metroLink7
			// 
			this->metroLink7->Location = System::Drawing::Point(67, 8);
			this->metroLink7->Name = L"metroLink1";
			this->metroLink7->Size = System::Drawing::Size(173, 23);
			this->metroLink7->TabIndex = 19;
			this->metroLink7->TabStop = false;
			this->metroLink7->Text = L"Go Back To Previous Menu";
			this->metroLink7->UseSelectable = false;
			this->metroLink7->Click += gcnew System::EventHandler(this, &DaytonaChampionshipUSAInput::metroLink7_Click);
			// 
			// metroCheckBox1
			// 
			this->metroCheckBox1->AutoSize = true;
			this->metroCheckBox1->Location = System::Drawing::Point(6, 43);
			this->metroCheckBox1->Name = L"metroCheckBox1";
			this->metroCheckBox1->Size = System::Drawing::Size(129, 15);
			this->metroCheckBox1->TabIndex = 0;
			this->metroCheckBox1->TabStop = false;
			this->metroCheckBox1->Text = L"Enable Gear Change";
			this->metroCheckBox1->UseSelectable = false;
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &DaytonaChampionshipUSAInput::metroCheckBox1_CheckedChanged);
			// 
			// metroCheckBox2
			// 
			this->metroCheckBox2->AutoSize = true;
			this->metroCheckBox2->Location = System::Drawing::Point(165, 43);
			this->metroCheckBox2->Name = L"metroCheckBox2";
			this->metroCheckBox2->Size = System::Drawing::Size(132, 15);
			this->metroCheckBox2->TabIndex = 1;
			this->metroCheckBox2->TabStop = false;
			this->metroCheckBox2->Text = L"Enable Escape as Exit";
			this->metroCheckBox2->UseSelectable = false;
			this->metroCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &DaytonaChampionshipUSAInput::metroCheckBox2_CheckedChanged);
			// 
			// metroCheckBox3
			// 
			this->metroCheckBox3->AutoSize = true;
			this->metroCheckBox3->Location = System::Drawing::Point(6, 64);
			this->metroCheckBox3->Name = L"metroCheckBox3";
			this->metroCheckBox3->Size = System::Drawing::Size(153, 15);
			this->metroCheckBox3->TabIndex = 2;
			this->metroCheckBox3->TabStop = false;
			this->metroCheckBox3->Text = L"Enable Menu Movement";
			this->metroCheckBox3->UseSelectable = false;
			this->metroCheckBox3->CheckedChanged += gcnew System::EventHandler(this, &DaytonaChampionshipUSAInput::metroCheckBox3_CheckedChanged);
			// 
			// metroCheckBox4
			// 
			this->metroCheckBox4->AutoSize = true;
			this->metroCheckBox4->Location = System::Drawing::Point(165, 64);
			this->metroCheckBox4->Name = L"metroCheckBox4";
			this->metroCheckBox4->Size = System::Drawing::Size(125, 15);
			this->metroCheckBox4->TabStop = false;
			this->metroCheckBox4->TabIndex = 3;
			this->metroCheckBox4->Text = L"Hide Mouse Cursor";
			this->metroCheckBox4->UseSelectable = false;
			this->metroCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &DaytonaChampionshipUSAInput::metroCheckBox4_CheckedChanged);
			// 
			// metroTextBox1
			// 
			// 
			// 
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(287, 1);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox1->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox1->CustomButton->TabIndex = 1;
			this->metroTextBox1->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox1->CustomButton->UseSelectable = false;
			this->metroTextBox1->CustomButton->Visible = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"Click then hold button for 2 seconds" };
			this->metroTextBox1->Location = System::Drawing::Point(3, 101);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ReadOnly = true;
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->SelectionLength = 0;
			this->metroTextBox1->SelectionStart = 0;
			this->metroTextBox1->ShortcutsEnabled = true;
			this->metroTextBox1->Size = System::Drawing::Size(309, 23);
			this->metroTextBox1->TabIndex = 4;
			this->metroTextBox1->TabStop = false;
			this->metroTextBox1->Text = L"Click then hold button for 2 seconds";
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
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(134, 1);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox2->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox2->CustomButton->TabIndex = 1;
			this->metroTextBox2->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox2->CustomButton->UseSelectable = false;
			this->metroTextBox2->CustomButton->Visible = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"Device Select Input" };
			this->metroTextBox2->Location = System::Drawing::Point(3, 130);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->SelectionLength = 0;
			this->metroTextBox2->SelectionStart = 0;
			this->metroTextBox2->ShortcutsEnabled = true;
			this->metroTextBox2->Size = System::Drawing::Size(156, 23);
			this->metroTextBox2->TabIndex = 5;
			this->metroTextBox2->TabStop = false;
			this->metroTextBox2->Text = L"Device Select Input";
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
			this->metroTextBox3->CustomButton->Location = System::Drawing::Point(125, 1);
			this->metroTextBox3->CustomButton->Name = L"";
			this->metroTextBox3->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox3->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox3->CustomButton->TabIndex = 1;
			this->metroTextBox3->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox3->CustomButton->UseSelectable = false;
			this->metroTextBox3->CustomButton->Visible = false;
			this->metroTextBox3->Lines = gcnew cli::array< System::String^  >(1) { L"Button Number" };
			this->metroTextBox3->Location = System::Drawing::Point(165, 130);
			this->metroTextBox3->MaxLength = 32767;
			this->metroTextBox3->Name = L"metroTextBox3";
			this->metroTextBox3->PasswordChar = '\0';
			this->metroTextBox3->ReadOnly = true;
			this->metroTextBox3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox3->SelectedText = L"";
			this->metroTextBox3->SelectionLength = 0;
			this->metroTextBox3->SelectionStart = 0;
			this->metroTextBox3->ShortcutsEnabled = true;
			this->metroTextBox3->Size = System::Drawing::Size(147, 23);
			this->metroTextBox3->TabIndex = 6;
			this->metroTextBox3->TabStop = false;
			this->metroTextBox3->Text = L"Button Number";
			this->metroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox3->UseSelectable = false;
			this->metroTextBox3->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox3->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLink1
			// 
			this->metroLink1->Location = System::Drawing::Point(3, 159);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(156, 23);
			this->metroLink1->TabIndex = 7;
			this->metroLink1->TabStop = false;
			this->metroLink1->Text = L"Gear 1";
			this->metroLink1->UseSelectable = false;
			this->metroLink1->Click += gcnew System::EventHandler(this, &DaytonaChampionshipUSAInput::metroLink1_Click);
			// 
			// metroLink2
			// 
			this->metroLink2->Location = System::Drawing::Point(3, 188);
			this->metroLink2->Name = L"metroLink2";
			this->metroLink2->Size = System::Drawing::Size(156, 23);
			this->metroLink2->TabIndex = 8;
			this->metroLink2->TabStop = false;
			this->metroLink2->Text = L"Gear 2";
			this->metroLink2->UseSelectable = false;
			this->metroLink2->Click += gcnew System::EventHandler(this, &DaytonaChampionshipUSAInput::metroLink2_Click);
			// 
			// metroLink3
			// 
			this->metroLink3->Location = System::Drawing::Point(3, 217);
			this->metroLink3->Name = L"metroLink3";
			this->metroLink3->Size = System::Drawing::Size(156, 23);
			this->metroLink3->TabIndex = 9;
			this->metroLink3->TabStop = false;
			this->metroLink3->Text = L"Gear 3";
			this->metroLink3->UseSelectable = false;
			this->metroLink3->Click += gcnew System::EventHandler(this, &DaytonaChampionshipUSAInput::metroLink3_Click);
			// 
			// metroLink4
			// 
			this->metroLink4->Location = System::Drawing::Point(3, 246);
			this->metroLink4->Name = L"metroLink4";
			this->metroLink4->Size = System::Drawing::Size(156, 23);
			this->metroLink4->TabIndex = 10;
			this->metroLink4->TabStop = false;
			this->metroLink4->Text = L"Gear 4";
			this->metroLink4->UseSelectable = false;
			this->metroLink4->Click += gcnew System::EventHandler(this, &DaytonaChampionshipUSAInput::metroLink4_Click);
			// 
			// metroLink5
			// 
			this->metroLink5->Location = System::Drawing::Point(3, 275);
			this->metroLink5->Name = L"metroLink5";
			this->metroLink5->Size = System::Drawing::Size(156, 23);
			this->metroLink5->TabIndex = 11;
			this->metroLink5->TabStop = false;
			this->metroLink5->Text = L"Gear Up";
			this->metroLink5->UseSelectable = false;
			this->metroLink5->Click += gcnew System::EventHandler(this, &DaytonaChampionshipUSAInput::metroLink5_Click);
			// 
			// metroLink6
			// 
			this->metroLink6->Location = System::Drawing::Point(3, 304);
			this->metroLink6->Name = L"metroLink6";
			this->metroLink6->Size = System::Drawing::Size(156, 23);
			this->metroLink6->TabIndex = 12;
			this->metroLink6->TabStop = false;
			this->metroLink6->Text = L"Gear Down";
			this->metroLink6->UseSelectable = false;
			this->metroLink6->Click += gcnew System::EventHandler(this, &DaytonaChampionshipUSAInput::metroLink6_Click);
			// 
			// metroLabel1
			// 
			int Gear1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear1"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(225, 159);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(16, 19);
			this->metroLabel1->Text = System::Convert::ToString(Gear1);
			this->metroLabel1->TabIndex = 13;
			this->metroLabel1->TabStop = false;
			// 
			// metroLabel2
			// 
			int Gear2 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(225, 188);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(16, 19);
			this->metroLabel2->Text = System::Convert::ToString(Gear2);
			this->metroLabel2->TabIndex = 14;
			this->metroLabel2->TabStop = false;
			// 
			// metroLabel3
			// 
			int Gear3 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear3"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->Location = System::Drawing::Point(225, 217);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(16, 19);
			this->metroLabel3->Text = System::Convert::ToString(Gear3);
			this->metroLabel3->TabIndex = 15;
			this->metroLabel3->TabStop = false;
			// 
			// metroLabel4
			// 
			int Gear4 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear4"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->Location = System::Drawing::Point(225, 246);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(16, 19);
			this->metroLabel4->Text = System::Convert::ToString(Gear4);
			this->metroLabel4->TabIndex = 16;
			this->metroLabel4->TabStop = false;
			// 
			// metroLabel5
			// 
			int GearUp = GetPrivateProfileInt(TEXT("Settings"), TEXT("GearUp"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->Location = System::Drawing::Point(225, 275);
			this->metroLabel5->Name = L"metroLabel5";
			this->metroLabel5->Size = System::Drawing::Size(16, 19);
			this->metroLabel5->Text = System::Convert::ToString(GearUp);
			this->metroLabel5->TabIndex = 17;
			this->metroLabel5->TabStop = false;
			// 
			// metroLabel6
			// 
			int GearDown = GetPrivateProfileInt(TEXT("Settings"), TEXT("GearDown"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel6->AutoSize = true;
			this->metroLabel6->Location = System::Drawing::Point(225, 304);
			this->metroLabel6->Name = L"metroLabel6";
			this->metroLabel6->Size = System::Drawing::Size(16, 19);
			this->metroLabel6->Text = System::Convert::ToString(GearDown);
			this->metroLabel6->TabIndex = 18;
			this->metroLabel6->TabStop = false;
			// 
			// DaytonaChampionshipUSAInput
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(315, 358);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroLabel6);
			this->Controls->Add(this->metroLabel5);
			this->Controls->Add(this->metroLabel4);
			this->Controls->Add(this->metroLabel3);
			this->Controls->Add(this->metroLabel2);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroLink7);
			this->Controls->Add(this->metroLink6);
			this->Controls->Add(this->metroLink5);
			this->Controls->Add(this->metroLink4);
			this->Controls->Add(this->metroLink3);
			this->Controls->Add(this->metroLink2);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroTextBox3);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroTextBox1);
			this->Controls->Add(this->metroCheckBox4);
			this->Controls->Add(this->metroCheckBox3);
			this->Controls->Add(this->metroCheckBox2);
			this->Controls->Add(this->metroCheckBox1);
			this->MaximizeBox = false;
			this->ShowIcon = false;
			this->Name = L"DaytonaChampionshipUSAInput";
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
	private: System::Void metroCheckBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Enable Gear Change
	{
		if (metroCheckBox1->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ChangeGearsViaPlugin"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ChangeGearsViaPlugin"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}
	
	}
	private: System::Void metroCheckBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Enable Escape as Exit
	{
		if (metroCheckBox2->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("EscapeKeyExitViaPlugin"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("EscapeKeyExitViaPlugin"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}

	}
	private: System::Void metroCheckBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Enable Menu Movement
	{
		if (metroCheckBox3->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("MenuMovementViaPlugin"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("MenuMovementViaPlugin"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}

	}
	private: System::Void metroCheckBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Hide Mouse Cursor
	{
		if (metroCheckBox4->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("HideCursor"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("HideCursor"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}

	}
	private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) //Gear 1
	{
		metroLabel1->Text = L"Undetected";
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
					metroLabel1->Text = L"0";
					WritePrivateProfileStringA("Settings", "Gear1", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel1->Text = L"1";
					WritePrivateProfileStringA("Settings", "Gear1", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel1->Text = L"2";
					WritePrivateProfileStringA("Settings", "Gear1", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel1->Text = L"3";
					WritePrivateProfileStringA("Settings", "Gear1", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel1->Text = L"4";
					WritePrivateProfileStringA("Settings", "Gear1", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel1->Text = L"5";
					WritePrivateProfileStringA("Settings", "Gear1", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel1->Text = L"6";
					WritePrivateProfileStringA("Settings", "Gear1", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel1->Text = L"7";
					WritePrivateProfileStringA("Settings", "Gear1", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel1->Text = L"8";
					WritePrivateProfileStringA("Settings", "Gear1", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel1->Text = L"9";
					WritePrivateProfileStringA("Settings", "Gear1", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel1->Text = L"10";
					WritePrivateProfileStringA("Settings", "Gear1", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel1->Text = L"11";
					WritePrivateProfileStringA("Settings", "Gear1", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel1->Text = L"12";
					WritePrivateProfileStringA("Settings", "Gear1", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel1->Text = L"13";
					WritePrivateProfileStringA("Settings", "Gear1", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel1->Text = L"14";
					WritePrivateProfileStringA("Settings", "Gear1", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel1->Text = L"15";
					WritePrivateProfileStringA("Settings", "Gear1", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel1->Text = L"16";
					WritePrivateProfileStringA("Settings", "Gear1", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel1->Text = L"17";
					WritePrivateProfileStringA("Settings", "Gear1", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel1->Text = L"18";
					WritePrivateProfileStringA("Settings", "Gear1", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel1->Text = L"19";
					WritePrivateProfileStringA("Settings", "Gear1", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel1->Text = L"20";
					WritePrivateProfileStringA("Settings", "Gear1", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel1->Text = L"21";
					WritePrivateProfileStringA("Settings", "Gear1", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel1->Text = L"22";
					WritePrivateProfileStringA("Settings", "Gear1", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel1->Text = L"23";
					WritePrivateProfileStringA("Settings", "Gear1", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel1->Text = L"24";
					WritePrivateProfileStringA("Settings", "Gear1", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel1->Text = L"25";
					WritePrivateProfileStringA("Settings", "Gear1", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel1->Text = L"26";
					WritePrivateProfileStringA("Settings", "Gear1", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel1->Text = L"27";
					WritePrivateProfileStringA("Settings", "Gear1", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel1->Text = L"28";
					WritePrivateProfileStringA("Settings", "Gear1", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel1->Text = L"29";
					WritePrivateProfileStringA("Settings", "Gear1", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel1->Text = L"30";
					WritePrivateProfileStringA("Settings", "Gear1", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink2_Click(System::Object^  sender, System::EventArgs^  e) //Gear 2
	{
		metroLabel2->Text = L"Undetected";
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
					metroLabel2->Text = L"0";
					WritePrivateProfileStringA("Settings", "Gear2", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel2->Text = L"1";
					WritePrivateProfileStringA("Settings", "Gear2", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel2->Text = L"2";
					WritePrivateProfileStringA("Settings", "Gear2", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel2->Text = L"3";
					WritePrivateProfileStringA("Settings", "Gear2", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel2->Text = L"4";
					WritePrivateProfileStringA("Settings", "Gear2", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel2->Text = L"5";
					WritePrivateProfileStringA("Settings", "Gear2", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel2->Text = L"6";
					WritePrivateProfileStringA("Settings", "Gear2", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel2->Text = L"7";
					WritePrivateProfileStringA("Settings", "Gear2", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel2->Text = L"8";
					WritePrivateProfileStringA("Settings", "Gear2", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel2->Text = L"9";
					WritePrivateProfileStringA("Settings", "Gear2", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel2->Text = L"10";
					WritePrivateProfileStringA("Settings", "Gear2", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel2->Text = L"11";
					WritePrivateProfileStringA("Settings", "Gear2", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel2->Text = L"12";
					WritePrivateProfileStringA("Settings", "Gear2", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel2->Text = L"13";
					WritePrivateProfileStringA("Settings", "Gear2", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel2->Text = L"14";
					WritePrivateProfileStringA("Settings", "Gear2", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel2->Text = L"15";
					WritePrivateProfileStringA("Settings", "Gear2", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel2->Text = L"16";
					WritePrivateProfileStringA("Settings", "Gear2", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel2->Text = L"17";
					WritePrivateProfileStringA("Settings", "Gear2", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel2->Text = L"18";
					WritePrivateProfileStringA("Settings", "Gear2", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel2->Text = L"19";
					WritePrivateProfileStringA("Settings", "Gear2", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel2->Text = L"20";
					WritePrivateProfileStringA("Settings", "Gear2", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel2->Text = L"21";
					WritePrivateProfileStringA("Settings", "Gear2", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel2->Text = L"22";
					WritePrivateProfileStringA("Settings", "Gear2", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel2->Text = L"23";
					WritePrivateProfileStringA("Settings", "Gear2", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel2->Text = L"24";
					WritePrivateProfileStringA("Settings", "Gear2", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel2->Text = L"25";
					WritePrivateProfileStringA("Settings", "Gear2", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel2->Text = L"26";
					WritePrivateProfileStringA("Settings", "Gear2", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel2->Text = L"27";
					WritePrivateProfileStringA("Settings", "Gear2", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel2->Text = L"28";
					WritePrivateProfileStringA("Settings", "Gear2", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel2->Text = L"29";
					WritePrivateProfileStringA("Settings", "Gear2", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel2->Text = L"30";
					WritePrivateProfileStringA("Settings", "Gear2", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink3_Click(System::Object^  sender, System::EventArgs^  e) //Gear 3
	{
		metroLabel3->Text = L"Undetected";
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
					metroLabel3->Text = L"0";
					WritePrivateProfileStringA("Settings", "Gear3", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel3->Text = L"1";
					WritePrivateProfileStringA("Settings", "Gear3", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel3->Text = L"2";
					WritePrivateProfileStringA("Settings", "Gear3", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel3->Text = L"3";
					WritePrivateProfileStringA("Settings", "Gear3", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel3->Text = L"4";
					WritePrivateProfileStringA("Settings", "Gear3", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel3->Text = L"5";
					WritePrivateProfileStringA("Settings", "Gear3", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel3->Text = L"6";
					WritePrivateProfileStringA("Settings", "Gear3", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel3->Text = L"7";
					WritePrivateProfileStringA("Settings", "Gear3", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel3->Text = L"8";
					WritePrivateProfileStringA("Settings", "Gear3", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel3->Text = L"9";
					WritePrivateProfileStringA("Settings", "Gear3", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel3->Text = L"10";
					WritePrivateProfileStringA("Settings", "Gear3", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel3->Text = L"11";
					WritePrivateProfileStringA("Settings", "Gear3", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel3->Text = L"12";
					WritePrivateProfileStringA("Settings", "Gear3", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel3->Text = L"13";
					WritePrivateProfileStringA("Settings", "Gear3", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel3->Text = L"14";
					WritePrivateProfileStringA("Settings", "Gear3", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel3->Text = L"15";
					WritePrivateProfileStringA("Settings", "Gear3", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel3->Text = L"16";
					WritePrivateProfileStringA("Settings", "Gear3", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel3->Text = L"17";
					WritePrivateProfileStringA("Settings", "Gear3", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel3->Text = L"18";
					WritePrivateProfileStringA("Settings", "Gear3", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel3->Text = L"19";
					WritePrivateProfileStringA("Settings", "Gear3", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel3->Text = L"20";
					WritePrivateProfileStringA("Settings", "Gear3", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel3->Text = L"21";
					WritePrivateProfileStringA("Settings", "Gear3", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel3->Text = L"22";
					WritePrivateProfileStringA("Settings", "Gear3", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel3->Text = L"23";
					WritePrivateProfileStringA("Settings", "Gear3", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel3->Text = L"24";
					WritePrivateProfileStringA("Settings", "Gear3", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel3->Text = L"25";
					WritePrivateProfileStringA("Settings", "Gear3", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel3->Text = L"26";
					WritePrivateProfileStringA("Settings", "Gear3", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel3->Text = L"27";
					WritePrivateProfileStringA("Settings", "Gear3", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel3->Text = L"28";
					WritePrivateProfileStringA("Settings", "Gear3", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel3->Text = L"29";
					WritePrivateProfileStringA("Settings", "Gear3", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel3->Text = L"30";
					WritePrivateProfileStringA("Settings", "Gear3", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink4_Click(System::Object^  sender, System::EventArgs^  e) //Gear 4
	{
		metroLabel4->Text = L"Undetected";
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
					metroLabel4->Text = L"0";
					WritePrivateProfileStringA("Settings", "Gear4", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel4->Text = L"1";
					WritePrivateProfileStringA("Settings", "Gear4", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel4->Text = L"2";
					WritePrivateProfileStringA("Settings", "Gear4", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel4->Text = L"3";
					WritePrivateProfileStringA("Settings", "Gear4", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel4->Text = L"4";
					WritePrivateProfileStringA("Settings", "Gear4", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel4->Text = L"5";
					WritePrivateProfileStringA("Settings", "Gear4", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel4->Text = L"6";
					WritePrivateProfileStringA("Settings", "Gear4", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel4->Text = L"7";
					WritePrivateProfileStringA("Settings", "Gear4", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel4->Text = L"8";
					WritePrivateProfileStringA("Settings", "Gear4", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel4->Text = L"9";
					WritePrivateProfileStringA("Settings", "Gear4", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel4->Text = L"10";
					WritePrivateProfileStringA("Settings", "Gear4", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel4->Text = L"11";
					WritePrivateProfileStringA("Settings", "Gear4", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel4->Text = L"12";
					WritePrivateProfileStringA("Settings", "Gear4", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel4->Text = L"13";
					WritePrivateProfileStringA("Settings", "Gear4", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel4->Text = L"14";
					WritePrivateProfileStringA("Settings", "Gear4", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel4->Text = L"15";
					WritePrivateProfileStringA("Settings", "Gear4", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel4->Text = L"16";
					WritePrivateProfileStringA("Settings", "Gear4", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel4->Text = L"17";
					WritePrivateProfileStringA("Settings", "Gear4", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel4->Text = L"18";
					WritePrivateProfileStringA("Settings", "Gear4", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel4->Text = L"19";
					WritePrivateProfileStringA("Settings", "Gear4", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel4->Text = L"20";
					WritePrivateProfileStringA("Settings", "Gear4", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel4->Text = L"21";
					WritePrivateProfileStringA("Settings", "Gear4", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel4->Text = L"22";
					WritePrivateProfileStringA("Settings", "Gear4", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel4->Text = L"23";
					WritePrivateProfileStringA("Settings", "Gear4", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel4->Text = L"24";
					WritePrivateProfileStringA("Settings", "Gear4", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel4->Text = L"25";
					WritePrivateProfileStringA("Settings", "Gear4", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel4->Text = L"26";
					WritePrivateProfileStringA("Settings", "Gear4", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel4->Text = L"27";
					WritePrivateProfileStringA("Settings", "Gear4", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel4->Text = L"28";
					WritePrivateProfileStringA("Settings", "Gear4", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel4->Text = L"29";
					WritePrivateProfileStringA("Settings", "Gear4", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel4->Text = L"30";
					WritePrivateProfileStringA("Settings", "Gear4", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink5_Click(System::Object^  sender, System::EventArgs^  e) //Gear Up
	{
		metroLabel5->Text = L"Undetected";
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
					metroLabel5->Text = L"0";
					WritePrivateProfileStringA("Settings", "GearUp", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel5->Text = L"1";
					WritePrivateProfileStringA("Settings", "GearUp", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel5->Text = L"2";
					WritePrivateProfileStringA("Settings", "GearUp", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel5->Text = L"3";
					WritePrivateProfileStringA("Settings", "GearUp", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel5->Text = L"4";
					WritePrivateProfileStringA("Settings", "GearUp", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel5->Text = L"5";
					WritePrivateProfileStringA("Settings", "GearUp", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel5->Text = L"6";
					WritePrivateProfileStringA("Settings", "GearUp", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel5->Text = L"7";
					WritePrivateProfileStringA("Settings", "GearUp", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel5->Text = L"8";
					WritePrivateProfileStringA("Settings", "GearUp", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel5->Text = L"9";
					WritePrivateProfileStringA("Settings", "GearUp", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel5->Text = L"10";
					WritePrivateProfileStringA("Settings", "GearUp", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel5->Text = L"11";
					WritePrivateProfileStringA("Settings", "GearUp", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel5->Text = L"12";
					WritePrivateProfileStringA("Settings", "GearUp", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel5->Text = L"13";
					WritePrivateProfileStringA("Settings", "GearUp", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel5->Text = L"14";
					WritePrivateProfileStringA("Settings", "GearUp", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel5->Text = L"15";
					WritePrivateProfileStringA("Settings", "GearUp", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel5->Text = L"16";
					WritePrivateProfileStringA("Settings", "GearUp", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel5->Text = L"17";
					WritePrivateProfileStringA("Settings", "GearUp", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel5->Text = L"18";
					WritePrivateProfileStringA("Settings", "GearUp", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel5->Text = L"19";
					WritePrivateProfileStringA("Settings", "GearUp", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel5->Text = L"20";
					WritePrivateProfileStringA("Settings", "GearUp", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel5->Text = L"21";
					WritePrivateProfileStringA("Settings", "GearUp", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel5->Text = L"22";
					WritePrivateProfileStringA("Settings", "GearUp", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel5->Text = L"23";
					WritePrivateProfileStringA("Settings", "GearUp", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel5->Text = L"24";
					WritePrivateProfileStringA("Settings", "GearUp", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel5->Text = L"25";
					WritePrivateProfileStringA("Settings", "GearUp", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel5->Text = L"26";
					WritePrivateProfileStringA("Settings", "GearUp", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel5->Text = L"27";
					WritePrivateProfileStringA("Settings", "GearUp", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel5->Text = L"28";
					WritePrivateProfileStringA("Settings", "GearUp", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel5->Text = L"29";
					WritePrivateProfileStringA("Settings", "GearUp", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel5->Text = L"30";
					WritePrivateProfileStringA("Settings", "GearUp", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink6_Click(System::Object^  sender, System::EventArgs^  e) //Gear Down
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
					WritePrivateProfileStringA("Settings", "GearDown", "0", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 1)
				{
					metroLabel6->Text = L"1";
					WritePrivateProfileStringA("Settings", "GearDown", "1", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 2)
				{
					metroLabel6->Text = L"2";
					WritePrivateProfileStringA("Settings", "GearDown", "2", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 3)
				{
					metroLabel6->Text = L"3";
					WritePrivateProfileStringA("Settings", "GearDown", "3", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 4)
				{
					metroLabel6->Text = L"4";
					WritePrivateProfileStringA("Settings", "GearDown", "4", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 5)
				{
					metroLabel6->Text = L"5";
					WritePrivateProfileStringA("Settings", "GearDown", "5", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 6)
				{
					metroLabel6->Text = L"6";
					WritePrivateProfileStringA("Settings", "GearDown", "6", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 7)
				{
					metroLabel6->Text = L"7";
					WritePrivateProfileStringA("Settings", "GearDown", "7", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 8)
				{
					metroLabel6->Text = L"8";
					WritePrivateProfileStringA("Settings", "GearDown", "8", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 9)
				{
					metroLabel6->Text = L"9";
					WritePrivateProfileStringA("Settings", "GearDown", "9", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 10)
				{
					metroLabel6->Text = L"10";
					WritePrivateProfileStringA("Settings", "GearDown", "10", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 11)
				{
					metroLabel6->Text = L"11";
					WritePrivateProfileStringA("Settings", "GearDown", "11", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 12)
				{
					metroLabel6->Text = L"12";
					WritePrivateProfileStringA("Settings", "GearDown", "12", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 13)
				{
					metroLabel6->Text = L"13";
					WritePrivateProfileStringA("Settings", "GearDown", "13", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 14)
				{
					metroLabel6->Text = L"14";
					WritePrivateProfileStringA("Settings", "GearDown", "14", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 15)
				{
					metroLabel6->Text = L"15";
					WritePrivateProfileStringA("Settings", "GearDown", "15", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 16)
				{
					metroLabel6->Text = L"16";
					WritePrivateProfileStringA("Settings", "GearDown", "16", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 17)
				{
					metroLabel6->Text = L"17";
					WritePrivateProfileStringA("Settings", "GearDown", "17", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 18)
				{
					metroLabel6->Text = L"18";
					WritePrivateProfileStringA("Settings", "GearDown", "18", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 19)
				{
					metroLabel6->Text = L"19";
					WritePrivateProfileStringA("Settings", "GearDown", "19", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 20)
				{
					metroLabel6->Text = L"20";
					WritePrivateProfileStringA("Settings", "GearDown", "20", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 21)
				{
					metroLabel6->Text = L"21";
					WritePrivateProfileStringA("Settings", "GearDown", "21", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 22)
				{
					metroLabel6->Text = L"22";
					WritePrivateProfileStringA("Settings", "GearDown", "22", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 23)
				{
					metroLabel6->Text = L"23";
					WritePrivateProfileStringA("Settings", "GearDown", "23", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 24)
				{
					metroLabel6->Text = L"24";
					WritePrivateProfileStringA("Settings", "GearDown", "24", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 25)
				{
					metroLabel6->Text = L"25";
					WritePrivateProfileStringA("Settings", "GearDown", "25", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 26)
				{
					metroLabel6->Text = L"26";
					WritePrivateProfileStringA("Settings", "GearDown", "26", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 27)
				{
					metroLabel6->Text = L"27";
					WritePrivateProfileStringA("Settings", "GearDown", "27", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 28)
				{
					metroLabel6->Text = L"28";
					WritePrivateProfileStringA("Settings", "GearDown", "28", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 29)
				{
					metroLabel6->Text = L"29";
					WritePrivateProfileStringA("Settings", "GearDown", "29", ".\\FFBPlugin.ini");
				}
				else if (e1.jbutton.button == 30)
				{
					metroLabel6->Text = L"30";
					WritePrivateProfileStringA("Settings", "GearDown", "30", ".\\FFBPlugin.ini");
				}
			}
		}
	}
	private: System::Void metroLink7_Click(System::Object^  sender, System::EventArgs^  e) //Go Back
	{
		this->Hide();
		obj->Show();
	}
};
}
