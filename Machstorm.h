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
	/// Summary for Machstorm
	/// </summary>
	public ref class Machstorm : MetroFramework::Forms::MetroForm
	{
	public:
		Machstorm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MetroForm ^obj;
		Machstorm(MetroForm ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Machstorm()
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
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox1;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox2;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox3;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox4;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox5;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox5;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar3;
	private: MetroFramework::Controls::MetroLabel^  metroLabel3;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox6;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar4;
	private: MetroFramework::Controls::MetroLabel^  metroLabel4;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox7;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox8;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar5;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel5;
	private: MetroFramework::Controls::MetroLabel^  metroLabel6;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox9;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox10;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar7;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar8;
	private: MetroFramework::Controls::MetroLabel^  metroLabel7;
	private: MetroFramework::Controls::MetroLabel^  metroLabel8;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox11;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox12;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar9;
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
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox22;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar19;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar20;
	private: MetroFramework::Controls::MetroLabel^  metroLabel19;
	private: MetroFramework::Controls::MetroLabel^  metroLabel20;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox23;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox24;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar21;
	private: MetroFramework::Controls::MetroTrackBar^  metroTrackBar22;
	private: MetroFramework::Controls::MetroLabel^  metroLabel21;
	private: MetroFramework::Controls::MetroLabel^  metroLabel22;
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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroCheckBox1 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox2 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox3 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox4 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox5 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox6 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox5 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar3 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox6 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar4 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox7 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox8 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar5 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar6 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox9 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox10 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar7 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar8 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel7 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel8 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox11 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox12 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar9 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar10 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel9 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel10 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox13 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox14 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar11 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar12 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel11 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel12 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox15 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox16 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar13 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar14 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel13 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel14 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox17 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox18 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar15 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar16 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel15 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel16 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox19 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox20 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar17 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar18 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel17 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel18 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox21 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox22 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar19 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar20 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel19 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel20 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox23 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox24 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTrackBar21 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTrackBar22 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroLabel21 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel22 = (gcnew MetroFramework::Controls::MetroLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Machstorm::Form1_FormClosing);
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
			this->metroToolTip1->SetToolTip(this->metroTextBox4, L"Length of a feedback command");
			this->metroToolTip1->SetToolTip(this->metroTextBox5, L"Strength of effect 1");
			this->metroToolTip1->SetToolTip(this->metroTextBox6, L"Length of effect 1");
			this->metroToolTip1->SetToolTip(this->metroTextBox7, L"Strength of effect 2");
			this->metroToolTip1->SetToolTip(this->metroTextBox8, L"Length of effect 2");
			this->metroToolTip1->SetToolTip(this->metroTextBox9, L"Strength of effect 3");
			this->metroToolTip1->SetToolTip(this->metroTextBox10, L"Length of effect 3");
			this->metroToolTip1->SetToolTip(this->metroTextBox11, L"Strength of effect 4");
			this->metroToolTip1->SetToolTip(this->metroTextBox12, L"Length of effect 4");
			this->metroToolTip1->SetToolTip(this->metroTextBox13, L"Strength of effect 5");
			this->metroToolTip1->SetToolTip(this->metroTextBox14, L"Length of effect 5");
			this->metroToolTip1->SetToolTip(this->metroTextBox15, L"Strength of effect 6");
			this->metroToolTip1->SetToolTip(this->metroTextBox16, L"Length of effect 6");
			this->metroToolTip1->SetToolTip(this->metroTextBox17, L"Strength of effect 7");
			this->metroToolTip1->SetToolTip(this->metroTextBox18, L"Length of effect 7");
			this->metroToolTip1->SetToolTip(this->metroTextBox19, L"Strength of effect 8");
			this->metroToolTip1->SetToolTip(this->metroTextBox20, L"Length of effect 8");
			this->metroToolTip1->SetToolTip(this->metroTextBox21, L"Strength of effect 9");
			this->metroToolTip1->SetToolTip(this->metroTextBox22, L"Length of effect 9");
			this->metroToolTip1->SetToolTip(this->metroTextBox23, L"Strength of effect 10");
			this->metroToolTip1->SetToolTip(this->metroTextBox24, L"Length of effect 10");
			// 
			// metroTextBox1
			// 
			// 
			// 
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(21, 21);
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
			this->metroTextBox1->Size = System::Drawing::Size(118, 23);
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
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(21, 21);
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
			this->metroTextBox2->Size = System::Drawing::Size(118, 23);
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
			this->metroLink1->TabIndex = 76;
			this->metroLink1->TabStop = false;
			this->metroLink1->Text = L"Go Back To Previous Menu";
			this->metroLink1->UseSelectable = false;
			this->metroLink1->Click += gcnew System::EventHandler(this, &Machstorm::metroLink1_Click);
			// 
			// metroTrackBar1
			// 
			int configMinForce = GetPrivateProfileInt(TEXT("Settings"), TEXT("MinForce"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar1->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar1->Location = System::Drawing::Point(20, 66);
			this->metroTrackBar1->Name = L"metroTrackBar1";
			this->metroTrackBar1->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar1->TabIndex = 2;
			this->metroTrackBar1->TabStop = false;
			this->metroTrackBar1->Value = configMinForce;
			this->metroTrackBar1->Text = L"metroTrackBar1";
			this->metroTrackBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar1_Scroll);
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
			this->metroTrackBar2->Text = L"metroTrackBar2";
			this->metroTrackBar2->Value = configMaxForce;
			this->metroTrackBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar2_Scroll);
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
			this->metroTextBox3->Size = System::Drawing::Size(261, 23);
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
				this->metroComboBox1->Location = System::Drawing::Point(20, 168);
				this->metroComboBox1->Name = L"metroComboBox1";
				this->metroComboBox1->Size = System::Drawing::Size(261, 29);
				this->metroComboBox1->Items->Add("Select no device");
				this->metroComboBox1->TabIndex = 5;
				this->metroComboBox1->TabStop = false;
				this->metroComboBox1->UseSelectable = false;
				this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Machstorm::metroComboBox1_SelectedIndexChanged);
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
			this->metroTextBox4->TabIndex = 6;
			this->metroTextBox4->TabStop = false;
			this->metroTextBox4->Text = L"Feedback Length";
			this->metroTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox4->UseSelectable = false;
			this->metroTextBox4->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox4->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// numericUpDown1
			// 
			int configFeedbackLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("FeedbackLength"), 120, TEXT(".\\FFBPlugin.ini"));
			this->numericUpDown1->Location = System::Drawing::Point(20, 232);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999999999999, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(261, 20);
			this->numericUpDown1->TabIndex = 7;
			this->numericUpDown1->TabStop = false;
			this->numericUpDown1->Value = configFeedbackLength1;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Machstorm::numericUpDown1_ValueChanged);
			// 
			// metroCheckBox1
			// 
			int EnableRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("EnableRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox1->AutoSize = true;
			this->metroCheckBox1->Location = System::Drawing::Point(20, 279);
			this->metroCheckBox1->Name = L"metroCheckBox1";
			this->metroCheckBox1->Size = System::Drawing::Size(102, 15);
			this->metroCheckBox1->TabIndex = 8;
			this->metroCheckBox1->TabStop = false;
			this->metroCheckBox1->Checked = EnableRumble;
			this->metroCheckBox1->Text = L"Enable Rumble";
			this->metroCheckBox1->UseSelectable = false;
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &Machstorm::metroCheckBox1_CheckedChanged);
			// 
			// metroCheckBox2
			// 
			int ReverseRumble = GetPrivateProfileInt(TEXT("Settings"), TEXT("ReverseRumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox2->AutoSize = true;
			this->metroCheckBox2->Location = System::Drawing::Point(163, 279);
			this->metroCheckBox2->Name = L"metroCheckBox2";
			this->metroCheckBox2->Size = System::Drawing::Size(107, 15);
			this->metroCheckBox2->TabIndex = 9;
			this->metroCheckBox2->TabStop = false;
			this->metroCheckBox2->Checked = ReverseRumble;
			this->metroCheckBox2->Text = L"Reverse Rumble";
			this->metroCheckBox2->UseSelectable = false;
			this->metroCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &Machstorm::metroCheckBox2_CheckedChanged);
			// 
			// metroCheckBox3
			// 
			int EnableLogging = GetPrivateProfileInt(TEXT("Settings"), TEXT("Logging"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox3->AutoSize = true;
			this->metroCheckBox3->Location = System::Drawing::Point(20, 300);
			this->metroCheckBox3->Name = L"metroCheckBox3";
			this->metroCheckBox3->Size = System::Drawing::Size(105, 15);
			this->metroCheckBox3->TabIndex = 10;
			this->metroCheckBox3->TabStop = false;
			this->metroCheckBox3->Checked = EnableLogging;
			this->metroCheckBox3->Text = L"Enable Logging";
			this->metroCheckBox3->UseSelectable = false;
			this->metroCheckBox3->CheckedChanged += gcnew System::EventHandler(this, &Machstorm::metroCheckBox3_CheckedChanged);
			// 
			// metroCheckBox4
			// 
			int ResetFB = GetPrivateProfileInt(TEXT("Settings"), TEXT("ResetFeedback"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox4->AutoSize = true;
			this->metroCheckBox4->Location = System::Drawing::Point(163, 300);
			this->metroCheckBox4->Name = L"metroCheckBox4";
			this->metroCheckBox4->Size = System::Drawing::Size(104, 15);
			this->metroCheckBox4->TabIndex = 11;
			this->metroCheckBox4->TabStop = false;
			this->metroCheckBox4->Checked = ResetFB;
			this->metroCheckBox4->Text = L"Reset Feedback";
			this->metroCheckBox4->UseSelectable = false;
			this->metroCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &Machstorm::metroCheckBox4_CheckedChanged);
			// 
			// metroCheckBox5
			// 
			int BeepWhen = GetPrivateProfileInt(TEXT("Settings"), TEXT("BeepWhenHook"), 120, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox5->AutoSize = true;
			this->metroCheckBox5->Location = System::Drawing::Point(20, 321);
			this->metroCheckBox5->Name = L"metroCheckBox5";
			this->metroCheckBox5->Size = System::Drawing::Size(115, 15);
			this->metroCheckBox5->TabIndex = 12;
			this->metroCheckBox5->TabStop = false;
			this->metroCheckBox5->Checked = BeepWhen;
			this->metroCheckBox5->Text = L"Beep When Hook";
			this->metroCheckBox5->UseSelectable = false;
			this->metroCheckBox5->CheckedChanged += gcnew System::EventHandler(this, &Machstorm::metroCheckBox5_CheckedChanged);
			// 
			// metroCheckBox6
			// 
			int GUIDMessage = GetPrivateProfileInt(TEXT("Settings"), TEXT("ForceShowDeviceGUIDMessageBox"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox6->AutoSize = true;
			this->metroCheckBox6->Location = System::Drawing::Point(163, 321);
			this->metroCheckBox6->Name = L"metroCheckBox6";
			this->metroCheckBox6->Size = System::Drawing::Size(118, 15);
			this->metroCheckBox6->TabIndex = 13;
			this->metroCheckBox6->TabStop = false;
			this->metroCheckBox6->Checked = GUIDMessage;
			this->metroCheckBox6->Text = L"GUID Messagebox";
			this->metroCheckBox6->UseSelectable = false;
			this->metroCheckBox6->CheckedChanged += gcnew System::EventHandler(this, &Machstorm::metroCheckBox6_CheckedChanged);
			// 
			// metroLabel1
			// 
			int configMinForce1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("MinForce"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(70, 92);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(16, 19);
			this->metroLabel1->TabIndex = 14;
			this->metroLabel1->TabStop = false;
			this->metroLabel1->Text = System::Convert::ToString(configMinForce1);
			this->metroLabel1->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel1_Click);
			// 
			// metroLabel2
			// 
			int configMaxForce1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("MaxForce"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(214, 92);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(16, 19);
			this->metroLabel2->TabIndex = 15;
			this->metroLabel2->TabStop = false;
			this->metroLabel2->Text = System::Convert::ToString(configMaxForce1);
			this->metroLabel2->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel2_Click);
			// 
			// metroTextBox5
			// 
			// 
			// 
			// 
			this->metroTextBox5->CustomButton->Image = nullptr;
			this->metroTextBox5->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox5->CustomButton->Name = L"";
			this->metroTextBox5->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox5->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox5->CustomButton->TabIndex = 1;
			this->metroTextBox5->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox5->CustomButton->UseSelectable = false;
			this->metroTextBox5->CustomButton->Visible = false;
			this->metroTextBox5->Lines = gcnew cli::array< System::String^  >(1) { L"Power 1 Strength" };
			this->metroTextBox5->Location = System::Drawing::Point(20, 359);
			this->metroTextBox5->MaxLength = 32767;
			this->metroTextBox5->Name = L"metroTextBox5";
			this->metroTextBox5->PasswordChar = '\0';
			this->metroTextBox5->ReadOnly = true;
			this->metroTextBox5->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox5->SelectedText = L"";
			this->metroTextBox5->SelectionLength = 0;
			this->metroTextBox5->SelectionStart = 0;
			this->metroTextBox5->ShortcutsEnabled = true;
			this->metroTextBox5->Size = System::Drawing::Size(118, 23);
			this->metroTextBox5->TabIndex = 16;
			this->metroTextBox5->TabStop = false;
			this->metroTextBox5->Text = L"Power 1 Strength";
			this->metroTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox5->UseSelectable = false;
			this->metroTextBox5->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox5->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar3
			// 
			int Power1RumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power1RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar3->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar3->Location = System::Drawing::Point(20, 388);
			this->metroTrackBar3->Name = L"metroTrackBar3";
			this->metroTrackBar3->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar3->TabIndex = 17;
			this->metroTrackBar3->TabStop = false;
			this->metroTrackBar3->Text = L"metroTrackBar3";
			this->metroTrackBar3->Value = Power1RumbleStrength;
			this->metroTrackBar3->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar3_Scroll);
			// 
			// metroLabel3
			// 
			int Power1RumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power1RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->Location = System::Drawing::Point(70, 414);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(16, 19);
			this->metroLabel3->TabIndex = 18;
			this->metroLabel3->TabStop = false;
			this->metroLabel3->Text = System::Convert::ToString(Power1RumbleStrength1);
			this->metroLabel3->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel3_Click);
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
			this->metroTextBox6->CustomButton->UseSelectable = false;
			this->metroTextBox6->CustomButton->Visible = false;
			this->metroTextBox6->Lines = gcnew cli::array< System::String^  >(1) { L"Power 1 Length" };
			this->metroTextBox6->Location = System::Drawing::Point(163, 359);
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
			this->metroTextBox6->TabIndex = 19;
			this->metroTextBox6->TabStop = false;
			this->metroTextBox6->Text = L"Power 1 Length";
			this->metroTextBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox6->UseSelectable = false;
			this->metroTextBox6->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox6->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar4
			// 
			int Power1RumbleLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power1RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar4->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar4->Location = System::Drawing::Point(163, 388);
			this->metroTrackBar4->Maximum = 9999;
			this->metroTrackBar4->Name = L"metroTrackBar4";
			this->metroTrackBar4->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar4->Value = Power1RumbleLength;
			this->metroTrackBar4->TabIndex = 20;
			this->metroTrackBar4->TabStop = false;
			this->metroTrackBar4->Text = L"metroTrackBar4";
			this->metroTrackBar4->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar4_Scroll);
			// 
			// metroLabel4
			// 
			int Power1RumbleLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power1RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->Location = System::Drawing::Point(214, 414);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(16, 19);
			this->metroLabel4->TabIndex = 21;
			this->metroLabel4->TabStop = false;
			this->metroLabel4->Text = System::Convert::ToString(Power1RumbleLength1);
			this->metroLabel4->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel4_Click);
			// 
			// metroTextBox7
			// 
			// 
			// 
			// 
			this->metroTextBox7->CustomButton->Image = nullptr;
			this->metroTextBox7->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox7->CustomButton->Name = L"";
			this->metroTextBox7->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox7->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox7->CustomButton->TabIndex = 1;
			this->metroTextBox7->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox7->CustomButton->UseSelectable = false;
			this->metroTextBox7->CustomButton->Visible = false;
			this->metroTextBox7->Lines = gcnew cli::array< System::String^  >(1) { L"Power 2 Strength" };
			this->metroTextBox7->Location = System::Drawing::Point(20, 436);
			this->metroTextBox7->MaxLength = 32767;
			this->metroTextBox7->Name = L"metroTextBox7";
			this->metroTextBox7->PasswordChar = '\0';
			this->metroTextBox7->ReadOnly = true;
			this->metroTextBox7->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox7->SelectedText = L"";
			this->metroTextBox7->SelectionLength = 0;
			this->metroTextBox7->SelectionStart = 0;
			this->metroTextBox7->ShortcutsEnabled = true;
			this->metroTextBox7->Size = System::Drawing::Size(118, 23);
			this->metroTextBox7->TabIndex = 22;
			this->metroTextBox7->TabStop = false;
			this->metroTextBox7->Text = L"Power 2 Strength";
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
			this->metroTextBox8->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox8->CustomButton->Name = L"";
			this->metroTextBox8->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox8->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox8->CustomButton->TabIndex = 1;
			this->metroTextBox8->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox8->CustomButton->UseSelectable = false;
			this->metroTextBox8->CustomButton->Visible = false;
			this->metroTextBox8->Lines = gcnew cli::array< System::String^  >(1) { L"Power 2 Length" };
			this->metroTextBox8->Location = System::Drawing::Point(163, 436);
			this->metroTextBox8->MaxLength = 32767;
			this->metroTextBox8->Name = L"metroTextBox8";
			this->metroTextBox8->PasswordChar = '\0';
			this->metroTextBox8->ReadOnly = true;
			this->metroTextBox8->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox8->SelectedText = L"";
			this->metroTextBox8->SelectionLength = 0;
			this->metroTextBox8->SelectionStart = 0;
			this->metroTextBox8->ShortcutsEnabled = true;
			this->metroTextBox8->Size = System::Drawing::Size(118, 23);
			this->metroTextBox8->TabIndex = 23;
			this->metroTextBox8->TabStop = false;
			this->metroTextBox8->Text = L"Power 2 Length";
			this->metroTextBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox8->UseSelectable = false;
			this->metroTextBox8->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox8->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar5
			// 
			int Power2RumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power2RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar5->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar5->Location = System::Drawing::Point(20, 465);
			this->metroTrackBar5->Name = L"metroTrackBar5";
			this->metroTrackBar5->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar5->TabIndex = 24;
			this->metroTrackBar5->TabStop = false;
			this->metroTrackBar5->Value = Power2RumbleStrength;
			this->metroTrackBar5->Text = L"metroTrackBar5";
			this->metroTrackBar5->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar5_Scroll);
			// 
			// metroTrackBar6
			// 
			int Power2RumbleLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power2RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar6->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar6->Location = System::Drawing::Point(163, 465);
			this->metroTrackBar6->Name = L"metroTrackBar6";
			this->metroTrackBar6->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar6->TabIndex = 25;
			this->metroTrackBar6->TabStop = false;
			this->metroTrackBar6->Maximum = 9999;
			this->metroTrackBar6->Value = Power2RumbleLength;
			this->metroTrackBar6->Text = L"metroTrackBar6";
			this->metroTrackBar6->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar6_Scroll);
			// 
			// metroLabel5
			// 
			int Power2RumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power2RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->Location = System::Drawing::Point(70, 491);
			this->metroLabel5->Name = L"metroLabel5";
			this->metroLabel5->Size = System::Drawing::Size(16, 19);
			this->metroLabel5->Text = System::Convert::ToString(Power2RumbleStrength1);
			this->metroLabel5->TabIndex = 26;
			this->metroLabel5->TabStop = false;
			this->metroLabel5->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel5_Click);
			// 
			// metroLabel6
			// 
			int Power2RumbleLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power2RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel6->AutoSize = true;
			this->metroLabel6->Location = System::Drawing::Point(214, 491);
			this->metroLabel6->Name = L"metroLabel6";
			this->metroLabel6->Size = System::Drawing::Size(16, 19);
			this->metroLabel6->TabIndex = 27;
			this->metroLabel6->TabStop = false;
			this->metroLabel6->Text = System::Convert::ToString(Power2RumbleLength1);
			this->metroLabel6->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel6_Click);
			// 
			// metroTextBox9
			// 
			// 
			// 
			// 
			this->metroTextBox9->CustomButton->Image = nullptr;
			this->metroTextBox9->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox9->CustomButton->Name = L"";
			this->metroTextBox9->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox9->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox9->CustomButton->TabIndex = 1;
			this->metroTextBox9->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox9->CustomButton->UseSelectable = false;
			this->metroTextBox9->CustomButton->Visible = false;
			this->metroTextBox9->Lines = gcnew cli::array< System::String^  >(1) { L"Power 3 Strength" };
			this->metroTextBox9->Location = System::Drawing::Point(20, 513);
			this->metroTextBox9->MaxLength = 32767;
			this->metroTextBox9->Name = L"metroTextBox9";
			this->metroTextBox9->PasswordChar = '\0';
			this->metroTextBox9->ReadOnly = true;
			this->metroTextBox9->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox9->SelectedText = L"";
			this->metroTextBox9->SelectionLength = 0;
			this->metroTextBox9->SelectionStart = 0;
			this->metroTextBox9->ShortcutsEnabled = true;
			this->metroTextBox9->Size = System::Drawing::Size(118, 23);
			this->metroTextBox9->TabIndex = 28;
			this->metroTextBox9->TabStop = false;
			this->metroTextBox9->Text = L"Power 3 Strength";
			this->metroTextBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox9->UseSelectable = false;
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
			this->metroTextBox10->CustomButton->UseSelectable = false;
			this->metroTextBox10->CustomButton->Visible = false;
			this->metroTextBox10->Lines = gcnew cli::array< System::String^  >(1) { L"Power 3 Length" };
			this->metroTextBox10->Location = System::Drawing::Point(163, 513);
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
			this->metroTextBox10->TabIndex = 29;
			this->metroTextBox10->TabStop = false;
			this->metroTextBox10->Text = L"Power 3 Length";
			this->metroTextBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox10->UseSelectable = false;
			this->metroTextBox10->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox10->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar7
			// 
			int Power3RumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power3RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar7->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar7->Location = System::Drawing::Point(20, 542);
			this->metroTrackBar7->Name = L"metroTrackBar7";
			this->metroTrackBar7->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar7->TabIndex = 30;
			this->metroTrackBar7->TabStop = false;
			this->metroTrackBar7->Value = Power3RumbleStrength;
			this->metroTrackBar7->Text = L"metroTrackBar7";
			this->metroTrackBar7->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar7_Scroll);
			// 
			// metroTrackBar8
			// 
			int Power3RumbleLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power3RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar8->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar8->Location = System::Drawing::Point(163, 542);
			this->metroTrackBar8->Name = L"metroTrackBar8";
			this->metroTrackBar8->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar8->Maximum = 9999;
			this->metroTrackBar8->Value = Power3RumbleLength;
			this->metroTrackBar8->TabIndex = 31;
			this->metroTrackBar8->TabStop = false;
			this->metroTrackBar8->Text = L"metroTrackBar8";
			this->metroTrackBar8->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar8_Scroll);
			// 
			// metroLabel7
			// 
			int Power3RumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power3RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel7->AutoSize = true;
			this->metroLabel7->Location = System::Drawing::Point(70, 568);
			this->metroLabel7->Name = L"metroLabel7";
			this->metroLabel7->Size = System::Drawing::Size(16, 19);
			this->metroLabel7->TabIndex = 32;
			this->metroLabel7->TabStop = false;
			this->metroLabel7->Text = System::Convert::ToString(Power3RumbleStrength1);
			this->metroLabel7->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel7_Click);
			// 
			// metroLabel8
			// 
			int Power3RumbleLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power3RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel8->AutoSize = true;
			this->metroLabel8->Location = System::Drawing::Point(214, 568);
			this->metroLabel8->Name = L"metroLabel8";
			this->metroLabel8->Size = System::Drawing::Size(16, 19);
			this->metroLabel8->Text = System::Convert::ToString(Power3RumbleLength1);
			this->metroLabel8->TabIndex = 33;
			this->metroLabel8->TabStop = false;
			this->metroLabel8->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel8_Click);
			// 
			// metroTextBox11
			// 
			// 
			// 
			// 
			this->metroTextBox11->CustomButton->Image = nullptr;
			this->metroTextBox11->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox11->CustomButton->Name = L"";
			this->metroTextBox11->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox11->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox11->CustomButton->TabIndex = 1;
			this->metroTextBox11->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox11->CustomButton->UseSelectable = false;
			this->metroTextBox11->CustomButton->Visible = false;
			this->metroTextBox11->Lines = gcnew cli::array< System::String^  >(1) { L"Power 4 Strength" };
			this->metroTextBox11->Location = System::Drawing::Point(20, 590);
			this->metroTextBox11->MaxLength = 32767;
			this->metroTextBox11->Name = L"metroTextBox11";
			this->metroTextBox11->PasswordChar = '\0';
			this->metroTextBox11->ReadOnly = true;
			this->metroTextBox11->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox11->SelectedText = L"";
			this->metroTextBox11->SelectionLength = 0;
			this->metroTextBox11->SelectionStart = 0;
			this->metroTextBox11->ShortcutsEnabled = true;
			this->metroTextBox11->Size = System::Drawing::Size(118, 23);
			this->metroTextBox11->TabIndex = 34;
			this->metroTextBox11->TabStop = false;
			this->metroTextBox11->Text = L"Power 4 Strength";
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
			this->metroTextBox12->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox12->CustomButton->Name = L"";
			this->metroTextBox12->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox12->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox12->CustomButton->TabIndex = 1;
			this->metroTextBox12->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox12->CustomButton->UseSelectable = false;
			this->metroTextBox12->CustomButton->Visible = false;
			this->metroTextBox12->DisplayIcon = true;
			this->metroTextBox12->Lines = gcnew cli::array< System::String^  >(1) { L"Power 4 Length" };
			this->metroTextBox12->Location = System::Drawing::Point(163, 590);
			this->metroTextBox12->MaxLength = 32767;
			this->metroTextBox12->Name = L"metroTextBox12";
			this->metroTextBox12->PasswordChar = '\0';
			this->metroTextBox12->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox12->SelectedText = L"";
			this->metroTextBox12->SelectionLength = 0;
			this->metroTextBox12->SelectionStart = 0;
			this->metroTextBox12->ShortcutsEnabled = true;
			this->metroTextBox12->Size = System::Drawing::Size(118, 23);
			this->metroTextBox12->TabIndex = 35;
			this->metroTextBox12->TabStop = false;
			this->metroTextBox12->Text = L"Power 4 Length";
			this->metroTextBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox12->UseSelectable = false;
			this->metroTextBox12->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox12->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar9
			// 
			int Power4RumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power4RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar9->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar9->Location = System::Drawing::Point(20, 619);
			this->metroTrackBar9->Name = L"metroTrackBar9";
			this->metroTrackBar9->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar9->TabIndex = 36;
			this->metroTrackBar9->TabStop = false;
			this->metroTrackBar9->Value = Power4RumbleStrength;
			this->metroTrackBar9->Text = L"metroTrackBar9";
			this->metroTrackBar9->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar9_Scroll);
			// 
			// metroTrackBar10
			// 
			int Power4RumbleLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power4RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar10->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar10->Location = System::Drawing::Point(163, 619);
			this->metroTrackBar10->Name = L"metroTrackBar10";
			this->metroTrackBar10->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar10->Maximum = 9999;
			this->metroTrackBar10->TabIndex = 37;
			this->metroTrackBar10->TabStop = false;
			this->metroTrackBar10->Value = Power4RumbleLength;
			this->metroTrackBar10->Text = L"metroTrackBar10";
			this->metroTrackBar10->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar10_Scroll);
			// 
			// metroLabel9
			// 
			int Power4RumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power4RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel9->AutoSize = true;
			this->metroLabel9->Location = System::Drawing::Point(70, 645);
			this->metroLabel9->Name = L"metroLabel9";
			this->metroLabel9->Size = System::Drawing::Size(16, 19);
			this->metroLabel9->Text = System::Convert::ToString(Power4RumbleStrength1);
			this->metroLabel9->TabIndex = 38;
			this->metroLabel9->TabStop = false;
			this->metroLabel9->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel9_Click);
			// 
			// metroLabel10
			// 
			int Power4RumbleLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power4RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel10->AutoSize = true;
			this->metroLabel10->Location = System::Drawing::Point(214, 645);
			this->metroLabel10->Name = L"metroLabel10";
			this->metroLabel10->Size = System::Drawing::Size(16, 19);
			this->metroLabel10->Text = System::Convert::ToString(Power4RumbleLength1);
			this->metroLabel10->TabIndex = 39;
			this->metroLabel10->TabStop = false;
			this->metroLabel10->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel10_Click);
			// 
			// metroTextBox13
			// 
			// 
			// 
			// 
			this->metroTextBox13->CustomButton->Image = nullptr;
			this->metroTextBox13->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox13->CustomButton->Name = L"";
			this->metroTextBox13->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox13->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox13->CustomButton->TabIndex = 1;
			this->metroTextBox13->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox13->CustomButton->UseSelectable = false;
			this->metroTextBox13->CustomButton->Visible = false;
			this->metroTextBox13->Lines = gcnew cli::array< System::String^  >(1) { L"Power 5 Strength" };
			this->metroTextBox13->Location = System::Drawing::Point(20, 667);
			this->metroTextBox13->MaxLength = 32767;
			this->metroTextBox13->Name = L"metroTextBox13";
			this->metroTextBox13->PasswordChar = '\0';
			this->metroTextBox13->ReadOnly = true;
			this->metroTextBox13->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox13->SelectedText = L"";
			this->metroTextBox13->SelectionLength = 0;
			this->metroTextBox13->SelectionStart = 0;
			this->metroTextBox13->ShortcutsEnabled = true;
			this->metroTextBox13->Size = System::Drawing::Size(118, 23);
			this->metroTextBox13->TabIndex = 40;
			this->metroTextBox13->TabStop = false;
			this->metroTextBox13->Text = L"Power 5 Strength";
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
			this->metroTextBox14->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox14->CustomButton->Name = L"";
			this->metroTextBox14->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox14->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox14->CustomButton->TabIndex = 1;
			this->metroTextBox14->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox14->CustomButton->UseSelectable = false;
			this->metroTextBox14->CustomButton->Visible = false;
			this->metroTextBox14->Lines = gcnew cli::array< System::String^  >(1) { L"Power 5 Length" };
			this->metroTextBox14->Location = System::Drawing::Point(163, 667);
			this->metroTextBox14->MaxLength = 32767;
			this->metroTextBox14->Name = L"metroTextBox14";
			this->metroTextBox14->PasswordChar = '\0';
			this->metroTextBox14->ReadOnly = true;
			this->metroTextBox14->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox14->SelectedText = L"";
			this->metroTextBox14->SelectionLength = 0;
			this->metroTextBox14->SelectionStart = 0;
			this->metroTextBox14->ShortcutsEnabled = true;
			this->metroTextBox14->Size = System::Drawing::Size(118, 23);
			this->metroTextBox14->TabIndex = 41;
			this->metroTextBox14->TabStop = false;
			this->metroTextBox14->Text = L"Power 5 Length";
			this->metroTextBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox14->UseSelectable = false;
			this->metroTextBox14->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox14->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar11
			// 
			int Power5RumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power5RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar11->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar11->Location = System::Drawing::Point(20, 696);
			this->metroTrackBar11->Name = L"metroTrackBar11";
			this->metroTrackBar11->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar11->TabIndex = 42;
			this->metroTrackBar11->TabStop = false;
			this->metroTrackBar11->Value = Power5RumbleStrength;
			this->metroTrackBar11->Text = L"metroTrackBar11";
			this->metroTrackBar11->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar11_Scroll);
			// 
			// metroTrackBar12
			// 
			int Power5RumbleLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power5RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar12->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar12->Location = System::Drawing::Point(163, 696);
			this->metroTrackBar12->Name = L"metroTrackBar12";
			this->metroTrackBar12->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar12->Maximum = 9999;
			this->metroTrackBar12->TabStop = false;
			this->metroTrackBar12->TabIndex = 43;
			this->metroTrackBar12->Value = Power5RumbleLength;
			this->metroTrackBar12->Text = L"metroTrackBar12";
			this->metroTrackBar12->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar12_Scroll);
			// 
			// metroLabel11
			// 
			int Power5RumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power5RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel11->AutoSize = true;
			this->metroLabel11->Location = System::Drawing::Point(70, 722);
			this->metroLabel11->Name = L"metroLabel11";
			this->metroLabel11->Size = System::Drawing::Size(16, 19);
			this->metroLabel11->Text = System::Convert::ToString(Power5RumbleStrength1);
			this->metroLabel11->TabIndex = 44;
			this->metroLabel11->TabStop = false;
			this->metroLabel11->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel11_Click);
			// 
			// metroLabel12
			// 
			int Power5RumbleLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power5RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel12->AutoSize = true;
			this->metroLabel12->Location = System::Drawing::Point(214, 722);
			this->metroLabel12->Name = L"metroLabel12";
			this->metroLabel12->Size = System::Drawing::Size(16, 19);
			this->metroLabel12->Text = System::Convert::ToString(Power5RumbleLength1);
			this->metroLabel12->TabIndex = 45;
			this->metroLabel12->TabStop = false;
			this->metroLabel12->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel12_Click);
			// 
			// metroTextBox15
			// 
			// 
			// 
			// 
			this->metroTextBox15->CustomButton->Image = nullptr;
			this->metroTextBox15->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox15->CustomButton->Name = L"";
			this->metroTextBox15->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox15->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox15->CustomButton->TabIndex = 1;
			this->metroTextBox15->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox15->CustomButton->UseSelectable = false;
			this->metroTextBox15->CustomButton->Visible = false;
			this->metroTextBox15->Lines = gcnew cli::array< System::String^  >(1) { L"Power 6 Strength" };
			this->metroTextBox15->Location = System::Drawing::Point(20, 744);
			this->metroTextBox15->MaxLength = 32767;
			this->metroTextBox15->Name = L"metroTextBox15";
			this->metroTextBox15->PasswordChar = '\0';
			this->metroTextBox15->ReadOnly = true;
			this->metroTextBox15->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox15->SelectedText = L"";
			this->metroTextBox15->SelectionLength = 0;
			this->metroTextBox15->SelectionStart = 0;
			this->metroTextBox15->ShortcutsEnabled = true;
			this->metroTextBox15->Size = System::Drawing::Size(118, 23);
			this->metroTextBox15->TabIndex = 46;
			this->metroTextBox15->TabStop = false;
			this->metroTextBox15->Text = L"Power 6 Strength";
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
			this->metroTextBox16->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox16->CustomButton->Name = L"";
			this->metroTextBox16->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox16->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox16->CustomButton->TabIndex = 1;
			this->metroTextBox16->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox16->CustomButton->UseSelectable = false;
			this->metroTextBox16->CustomButton->Visible = false;
			this->metroTextBox16->Lines = gcnew cli::array< System::String^  >(1) { L"Power 6 Length" };
			this->metroTextBox16->Location = System::Drawing::Point(163, 744);
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
			this->metroTextBox16->TabIndex = 47;
			this->metroTextBox16->TabStop = false;
			this->metroTextBox16->Text = L"Power 6 Length";
			this->metroTextBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox16->UseSelectable = false;
			this->metroTextBox16->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox16->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar13
			// 
			int Power6RumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power6RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar13->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar13->Location = System::Drawing::Point(20, 773);
			this->metroTrackBar13->Name = L"metroTrackBar13";
			this->metroTrackBar13->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar13->TabIndex = 48;
			this->metroTrackBar13->TabStop = false;
			this->metroTrackBar13->Value = Power6RumbleStrength;
			this->metroTrackBar13->Text = L"metroTrackBar13";
			this->metroTrackBar13->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar13_Scroll);
			// 
			// metroTrackBar14
			// 
			int Power6RumbleLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power6RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar14->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar14->Location = System::Drawing::Point(163, 773);
			this->metroTrackBar14->Name = L"metroTrackBar14";
			this->metroTrackBar14->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar14->Maximum = 9999;
			this->metroTrackBar14->TabIndex = 49;
			this->metroTrackBar14->TabStop = false;
			this->metroTrackBar14->Text = L"metroTrackBar14";
			this->metroTrackBar14->Value = Power6RumbleLength;
			this->metroTrackBar14->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar14_Scroll);
			// 
			// metroLabel13
			// 
			int Power6RumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power6RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel13->AutoSize = true;
			this->metroLabel13->Location = System::Drawing::Point(70, 799);
			this->metroLabel13->Name = L"metroLabel13";
			this->metroLabel13->Size = System::Drawing::Size(16, 19);
			this->metroLabel13->TabIndex = 50;
			this->metroLabel13->TabStop = false;
			this->metroLabel13->Text = System::Convert::ToString(Power6RumbleStrength1);
			this->metroLabel13->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel13_Click);
			// 
			// metroLabel14
			// 
			int Power6RumbleLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power6RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel14->AutoSize = true;
			this->metroLabel14->Location = System::Drawing::Point(214, 799);
			this->metroLabel14->Name = L"metroLabel14";
			this->metroLabel14->Size = System::Drawing::Size(16, 19);
			this->metroLabel14->TabIndex = 51;
			this->metroLabel14->TabStop = false;
			this->metroLabel14->Text = System::Convert::ToString(Power6RumbleLength1);
			this->metroLabel14->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel14_Click);
			// 
			// metroTextBox17
			// 
			// 
			// 
			// 
			this->metroTextBox17->CustomButton->Image = nullptr;
			this->metroTextBox17->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox17->CustomButton->Name = L"";
			this->metroTextBox17->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox17->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox17->CustomButton->TabIndex = 1;
			this->metroTextBox17->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox17->CustomButton->UseSelectable = false;
			this->metroTextBox17->CustomButton->Visible = false;
			this->metroTextBox17->Lines = gcnew cli::array< System::String^  >(1) { L"Power 7 Strength" };
			this->metroTextBox17->Location = System::Drawing::Point(20, 821);
			this->metroTextBox17->MaxLength = 32767;
			this->metroTextBox17->Name = L"metroTextBox17";
			this->metroTextBox17->PasswordChar = '\0';
			this->metroTextBox17->ReadOnly = true;
			this->metroTextBox17->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox17->SelectedText = L"";
			this->metroTextBox17->SelectionLength = 0;
			this->metroTextBox17->SelectionStart = 0;
			this->metroTextBox17->ShortcutsEnabled = true;
			this->metroTextBox17->Size = System::Drawing::Size(118, 23);
			this->metroTextBox17->TabIndex = 52;
			this->metroTextBox17->TabStop = false;
			this->metroTextBox17->Text = L"Power 7 Strength";
			this->metroTextBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox17->UseSelectable = false;
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
			this->metroTextBox18->CustomButton->UseSelectable = false;
			this->metroTextBox18->CustomButton->Visible = false;
			this->metroTextBox18->Lines = gcnew cli::array< System::String^  >(1) { L"Power 7 Length" };
			this->metroTextBox18->Location = System::Drawing::Point(163, 821);
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
			this->metroTextBox18->TabIndex = 53;
			this->metroTextBox18->TabStop = false;
			this->metroTextBox18->Text = L"Power 7 Length";
			this->metroTextBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox18->UseSelectable = false;
			this->metroTextBox18->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox18->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar15
			// 
			int Power7RumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power7RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar15->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar15->Location = System::Drawing::Point(20, 850);
			this->metroTrackBar15->Name = L"metroTrackBar15";
			this->metroTrackBar15->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar15->TabIndex = 54;
			this->metroTrackBar15->TabStop = false;
			this->metroTrackBar15->Value = Power7RumbleStrength;
			this->metroTrackBar15->Text = L"metroTrackBar15";
			this->metroTrackBar15->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar15_Scroll);
			// 
			// metroTrackBar16
			// 
			int Power7RumbleLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power7RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar16->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar16->Location = System::Drawing::Point(163, 850);
			this->metroTrackBar16->Name = L"metroTrackBar16";
			this->metroTrackBar16->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar16->Maximum = 9999;
			this->metroTrackBar16->TabIndex = 55;
			this->metroTrackBar16->TabStop = false;
			this->metroTrackBar16->Value = Power7RumbleLength;
			this->metroTrackBar16->Text = L"metroTrackBar16";
			this->metroTrackBar16->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar16_Scroll);
			// 
			// metroLabel15
			// 
			int Power7RumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power7RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel15->AutoSize = true;
			this->metroLabel15->Location = System::Drawing::Point(70, 876);
			this->metroLabel15->Name = L"metroLabel15";
			this->metroLabel15->Size = System::Drawing::Size(16, 19);
			this->metroLabel15->TabIndex = 56;
			this->metroLabel15->TabStop = false;
			this->metroLabel15->Text = System::Convert::ToString(Power7RumbleStrength1);
			this->metroLabel15->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel15_Click);
			// 
			// metroLabel16
			// 
			int Power7RumbleLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power7RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel16->AutoSize = true;
			this->metroLabel16->Location = System::Drawing::Point(214, 876);
			this->metroLabel16->Name = L"metroLabel16";
			this->metroLabel16->Size = System::Drawing::Size(16, 19);
			this->metroLabel16->TabIndex = 57;
			this->metroLabel16->TabStop = false;
			this->metroLabel16->Text = System::Convert::ToString(Power7RumbleLength1);
			this->metroLabel16->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel16_Click);
			// 
			// metroTextBox19
			// 
			// 
			// 
			// 
			this->metroTextBox19->CustomButton->Image = nullptr;
			this->metroTextBox19->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox19->CustomButton->Name = L"";
			this->metroTextBox19->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox19->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox19->CustomButton->TabIndex = 1;
			this->metroTextBox19->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox19->CustomButton->UseSelectable = false;
			this->metroTextBox19->CustomButton->Visible = false;
			this->metroTextBox19->Lines = gcnew cli::array< System::String^  >(1) { L"Power 8 Strength" };
			this->metroTextBox19->Location = System::Drawing::Point(20, 898);
			this->metroTextBox19->MaxLength = 32767;
			this->metroTextBox19->Name = L"metroTextBox19";
			this->metroTextBox19->PasswordChar = '\0';
			this->metroTextBox19->ReadOnly = true;
			this->metroTextBox19->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox19->SelectedText = L"";
			this->metroTextBox19->SelectionLength = 0;
			this->metroTextBox19->SelectionStart = 0;
			this->metroTextBox19->ShortcutsEnabled = true;
			this->metroTextBox19->Size = System::Drawing::Size(118, 23);
			this->metroTextBox19->TabIndex = 58;
			this->metroTextBox19->TabStop = false;
			this->metroTextBox19->Text = L"Power 8 Strength";
			this->metroTextBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox19->UseSelectable = false;
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
			this->metroTextBox20->CustomButton->UseSelectable = false;
			this->metroTextBox20->CustomButton->Visible = false;
			this->metroTextBox20->Lines = gcnew cli::array< System::String^  >(1) { L"Power 8 Length" };
			this->metroTextBox20->Location = System::Drawing::Point(163, 898);
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
			this->metroTextBox20->TabIndex = 59;
			this->metroTextBox20->TabStop = false;
			this->metroTextBox20->Text = L"Power 8 Length";
			this->metroTextBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox20->UseSelectable = false;
			this->metroTextBox20->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox20->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar17
			// 
			int Power8RumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power8RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar17->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar17->Location = System::Drawing::Point(20, 927);
			this->metroTrackBar17->Name = L"metroTrackBar17";
			this->metroTrackBar17->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar17->TabIndex = 60;
			this->metroTrackBar17->TabStop = false;
			this->metroTrackBar17->Value = Power8RumbleStrength;
			this->metroTrackBar17->Text = L"metroTrackBar17";
			this->metroTrackBar17->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar17_Scroll);
			// 
			// metroTrackBar18
			// 
			int Power8RumbleLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power8RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar18->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar18->Location = System::Drawing::Point(163, 927);
			this->metroTrackBar18->Name = L"metroTrackBar18";
			this->metroTrackBar18->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar18->Maximum = 9999;
			this->metroTrackBar18->TabIndex = 61;
			this->metroTrackBar18->TabStop = false;
			this->metroTrackBar18->Value = Power8RumbleLength;
			this->metroTrackBar18->Text = L"metroTrackBar18";
			this->metroTrackBar18->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar18_Scroll);
			// 
			// metroLabel17
			// 
			int Power8RumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power8RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel17->AutoSize = true;
			this->metroLabel17->Location = System::Drawing::Point(70, 953);
			this->metroLabel17->Name = L"metroLabel17";
			this->metroLabel17->Size = System::Drawing::Size(16, 19);
			this->metroLabel17->TabIndex = 62;
			this->metroLabel17->TabStop = false;
			this->metroLabel17->Text = System::Convert::ToString(Power8RumbleStrength1);
			this->metroLabel17->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel17_Click);
			// 
			// metroLabel18
			// 
			int Power8RumbleLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power8RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel18->AutoSize = true;
			this->metroLabel18->Location = System::Drawing::Point(214, 953);
			this->metroLabel18->Name = L"metroLabel18";
			this->metroLabel18->Size = System::Drawing::Size(16, 19);
			this->metroLabel18->TabIndex = 63;
			this->metroLabel18->TabStop = false;
			this->metroLabel18->Text = System::Convert::ToString(Power8RumbleLength1);
			this->metroLabel18->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel18_Click);
			// 
			// metroTextBox21
			// 
			// 
			// 
			// 
			this->metroTextBox21->CustomButton->Image = nullptr;
			this->metroTextBox21->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox21->CustomButton->Name = L"";
			this->metroTextBox21->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox21->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox21->CustomButton->TabIndex = 1;
			this->metroTextBox21->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox21->CustomButton->UseSelectable = false;
			this->metroTextBox21->CustomButton->Visible = false;
			this->metroTextBox21->Lines = gcnew cli::array< System::String^  >(1) { L"Power 9 Strength" };
			this->metroTextBox21->Location = System::Drawing::Point(20, 975);
			this->metroTextBox21->MaxLength = 32767;
			this->metroTextBox21->Name = L"metroTextBox21";
			this->metroTextBox21->PasswordChar = '\0';
			this->metroTextBox21->ReadOnly = true;
			this->metroTextBox21->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox21->SelectedText = L"";
			this->metroTextBox21->SelectionLength = 0;
			this->metroTextBox21->SelectionStart = 0;
			this->metroTextBox21->ShortcutsEnabled = true;
			this->metroTextBox21->Size = System::Drawing::Size(118, 23);
			this->metroTextBox21->TabIndex = 64;
			this->metroTextBox21->TabStop = false;
			this->metroTextBox21->Text = L"Power 9 Strength";
			this->metroTextBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox21->UseSelectable = false;
			this->metroTextBox21->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox21->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox22
			// 
			// 
			// 
			// 
			this->metroTextBox22->CustomButton->Image = nullptr;
			this->metroTextBox22->CustomButton->Location = System::Drawing::Point(96, 1);
			this->metroTextBox22->CustomButton->Name = L"";
			this->metroTextBox22->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox22->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox22->CustomButton->TabIndex = 1;
			this->metroTextBox22->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox22->CustomButton->UseSelectable = false;
			this->metroTextBox22->CustomButton->Visible = false;
			this->metroTextBox22->Lines = gcnew cli::array< System::String^  >(1) { L"Power 9 Length" };
			this->metroTextBox22->Location = System::Drawing::Point(163, 975);
			this->metroTextBox22->MaxLength = 32767;
			this->metroTextBox22->Name = L"metroTextBox22";
			this->metroTextBox22->PasswordChar = '\0';
			this->metroTextBox22->ReadOnly = true;
			this->metroTextBox22->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox22->SelectedText = L"";
			this->metroTextBox22->SelectionLength = 0;
			this->metroTextBox22->SelectionStart = 0;
			this->metroTextBox22->ShortcutsEnabled = true;
			this->metroTextBox22->Size = System::Drawing::Size(118, 23);
			this->metroTextBox22->TabIndex = 65;
			this->metroTextBox22->TabStop = false;
			this->metroTextBox22->Text = L"Power 9 Length";
			this->metroTextBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox22->UseSelectable = false;
			this->metroTextBox22->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox22->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar19
			// 
			int Power9RumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power9RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar19->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar19->Location = System::Drawing::Point(20, 1004);
			this->metroTrackBar19->Name = L"metroTrackBar19";
			this->metroTrackBar19->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar19->TabIndex = 66;
			this->metroTrackBar19->TabStop = false;
			this->metroTrackBar19->Value = Power9RumbleStrength;
			this->metroTrackBar19->Text = L"metroTrackBar19";
			this->metroTrackBar19->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar19_Scroll);
			// 
			// metroTrackBar20
			// 
			int Power9RumbleLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power9RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar20->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar20->Location = System::Drawing::Point(163, 1004);
			this->metroTrackBar20->Name = L"metroTrackBar20";
			this->metroTrackBar20->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar20->Maximum = 9999;
			this->metroTrackBar20->TabIndex = 67;
			this->metroTrackBar20->TabStop = false;
			this->metroTrackBar20->Value = Power9RumbleLength;
			this->metroTrackBar20->Text = L"metroTrackBar20";
			this->metroTrackBar20->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar20_Scroll);
			// 
			// metroLabel19
			// 
			int Power9RumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power9RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel19->AutoSize = true;
			this->metroLabel19->Location = System::Drawing::Point(70, 1030);
			this->metroLabel19->Name = L"metroLabel19";
			this->metroLabel19->Size = System::Drawing::Size(16, 19);
			this->metroLabel19->TabIndex = 68;
			this->metroLabel19->TabStop = false;
			this->metroLabel19->Text = System::Convert::ToString(Power9RumbleStrength1);
			this->metroLabel19->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel19_Click);
			// 
			// metroLabel20
			// 
			int Power9RumbleLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power9RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel20->AutoSize = true;
			this->metroLabel20->Location = System::Drawing::Point(214, 1030);
			this->metroLabel20->Name = L"metroLabel20";
			this->metroLabel20->Size = System::Drawing::Size(16, 19);
			this->metroLabel20->TabIndex = 69;
			this->metroLabel20->TabStop = false;
			this->metroLabel20->Text = System::Convert::ToString(Power9RumbleLength1);
			this->metroLabel20->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel20_Click);
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
			this->metroTextBox23->CustomButton->UseSelectable = false;
			this->metroTextBox23->CustomButton->Visible = false;
			this->metroTextBox23->Lines = gcnew cli::array< System::String^  >(1) { L"Power 10 Strength" };
			this->metroTextBox23->Location = System::Drawing::Point(20, 1052);
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
			this->metroTextBox23->TabIndex = 70;
			this->metroTextBox23->TabStop = false;
			this->metroTextBox23->Text = L"Power 10 Strength";
			this->metroTextBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox23->UseSelectable = false;
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
			this->metroTextBox24->CustomButton->UseSelectable = false;
			this->metroTextBox24->CustomButton->Visible = false;
			this->metroTextBox24->Lines = gcnew cli::array< System::String^  >(1) { L"Power 10 Length" };
			this->metroTextBox24->Location = System::Drawing::Point(163, 1052);
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
			this->metroTextBox24->TabIndex = 71;
			this->metroTextBox24->TabStop = false;
			this->metroTextBox24->Text = L"Power 10 Length";
			this->metroTextBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox24->UseSelectable = false;
			this->metroTextBox24->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox24->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTrackBar21
			// 
			int Power10RumbleStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power10RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar21->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar21->Location = System::Drawing::Point(20, 1081);
			this->metroTrackBar21->Name = L"metroTrackBar21";
			this->metroTrackBar21->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar21->Value = Power10RumbleStrength;
			this->metroTrackBar21->TabIndex = 72;
			this->metroTrackBar21->TabStop = false;
			this->metroTrackBar21->Text = L"metroTrackBar21";
			this->metroTrackBar21->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar21_Scroll);
			// 
			// metroTrackBar22
			// 
			int Power10RumbleLength = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power10RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar22->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar22->Location = System::Drawing::Point(163, 1081);
			this->metroTrackBar22->Name = L"metroTrackBar22";
			this->metroTrackBar22->Size = System::Drawing::Size(118, 23);
			this->metroTrackBar22->Maximum = 9999;
			this->metroTrackBar22->TabIndex = 73;
			this->metroTrackBar22->TabStop = false;
			this->metroTrackBar22->Value = Power10RumbleLength;
			this->metroTrackBar22->Text = L"metroTrackBar22";
			this->metroTrackBar22->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &Machstorm::metroTrackBar22_Scroll);
			// 
			// metroLabel21
			// 
			int Power10RumbleStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power10RumbleStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel21->AutoSize = true;
			this->metroLabel21->Location = System::Drawing::Point(70, 1107);
			this->metroLabel21->Name = L"metroLabel21";
			this->metroLabel21->Size = System::Drawing::Size(16, 19);
			this->metroLabel21->Text = System::Convert::ToString(Power10RumbleStrength1);
			this->metroLabel21->TabIndex = 74;
			this->metroLabel21->TabStop = false;
			this->metroLabel21->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel21_Click);
			// 
			// metroLabel22
			// 
			int Power10RumbleLength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Power10RumbleLength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel22->AutoSize = true;
			this->metroLabel22->Location = System::Drawing::Point(214, 1107);
			this->metroLabel22->Name = L"metroLabel22";
			this->metroLabel22->Size = System::Drawing::Size(16, 19);
			this->metroLabel22->Text = System::Convert::ToString(Power10RumbleLength1);
			this->metroLabel22->TabIndex = 75;
			this->metroLabel22->TabStop = false;
			this->metroLabel22->Click += gcnew System::EventHandler(this, &Machstorm::metroLabel22_Click);
			// 
			// Machstorm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 1144);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroLabel22);
			this->Controls->Add(this->metroLabel21);
			this->Controls->Add(this->metroTrackBar22);
			this->Controls->Add(this->metroTrackBar21);
			this->Controls->Add(this->metroTextBox24);
			this->Controls->Add(this->metroTextBox23);
			this->Controls->Add(this->metroLabel20);
			this->Controls->Add(this->metroLabel19);
			this->Controls->Add(this->metroTrackBar20);
			this->Controls->Add(this->metroTrackBar19);
			this->Controls->Add(this->metroTextBox22);
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
			this->Controls->Add(this->metroTrackBar9);
			this->Controls->Add(this->metroTextBox12);
			this->Controls->Add(this->metroTextBox11);
			this->Controls->Add(this->metroLabel8);
			this->Controls->Add(this->metroLabel7);
			this->Controls->Add(this->metroTrackBar8);
			this->Controls->Add(this->metroTrackBar7);
			this->Controls->Add(this->metroTextBox10);
			this->Controls->Add(this->metroTextBox9);
			this->Controls->Add(this->metroLabel6);
			this->Controls->Add(this->metroLabel5);
			this->Controls->Add(this->metroTrackBar6);
			this->Controls->Add(this->metroTrackBar5);
			this->Controls->Add(this->metroTextBox8);
			this->Controls->Add(this->metroTextBox7);
			this->Controls->Add(this->metroLabel4);
			this->Controls->Add(this->metroTrackBar4);
			this->Controls->Add(this->metroTextBox6);
			this->Controls->Add(this->metroLabel3);
			this->Controls->Add(this->metroTrackBar3);
			this->Controls->Add(this->metroTextBox5);
			this->Controls->Add(this->metroLabel2);
			this->Controls->Add(this->metroLabel1);
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
			this->Controls->Add(this->metroTrackBar2);
			this->Controls->Add(this->metroTrackBar1);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroTextBox1);
			this->MaximizeBox = false;
			this->ShowIcon = false;
			this->Name = L"Machstorm";
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
	private: System::Void metroTrackBar3_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 1 Strength
	{
		metroLabel3->Text = metroTrackBar3->Value.ToString();
		Decimal value = metroTrackBar3->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power1RumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar4_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 1 Length
	{
		metroLabel4->Text = metroTrackBar4->Value.ToString();
		Decimal value = metroTrackBar4->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power1RumbleLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar5_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 2 Strength
	{
		metroLabel5->Text = metroTrackBar5->Value.ToString();
		Decimal value = metroTrackBar5->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power2RumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar6_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 2 Length
	{
		metroLabel6->Text = metroTrackBar6->Value.ToString();
		Decimal value = metroTrackBar6->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power2RumbleLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar7_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 3 Strength
	{
		metroLabel7->Text = metroTrackBar7->Value.ToString();
		Decimal value = metroTrackBar7->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power3RumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar8_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 3 Length
	{
		metroLabel8->Text = metroTrackBar8->Value.ToString();
		Decimal value = metroTrackBar8->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power3RumbleLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar9_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 4 Strength
	{
		metroLabel9->Text = metroTrackBar9->Value.ToString();
		Decimal value = metroTrackBar9->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power4RumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar10_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 4 Length
	{
		metroLabel10->Text = metroTrackBar10->Value.ToString();
		Decimal value = metroTrackBar10->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power4RumbleLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar11_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 5 Strength
	{
		metroLabel11->Text = metroTrackBar11->Value.ToString();
		Decimal value = metroTrackBar11->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power5RumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar12_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 5 Length
	{
		metroLabel12->Text = metroTrackBar12->Value.ToString();
		Decimal value = metroTrackBar12->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power5RumbleLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar13_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 6 Strength
	{
		metroLabel13->Text = metroTrackBar13->Value.ToString();
		Decimal value = metroTrackBar13->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power6RumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar14_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 6 Length
	{
		metroLabel14->Text = metroTrackBar14->Value.ToString();
		Decimal value = metroTrackBar14->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power6RumbleLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar15_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 7 Strength
	{
		metroLabel15->Text = metroTrackBar15->Value.ToString();
		Decimal value = metroTrackBar15->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power7RumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar16_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 7 Length
	{
		metroLabel16->Text = metroTrackBar16->Value.ToString();
		Decimal value = metroTrackBar16->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power7RumbleLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar17_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 8 Strength
	{
		metroLabel17->Text = metroTrackBar17->Value.ToString();
		Decimal value = metroTrackBar17->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power8RumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar18_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 8 Length
	{
		metroLabel18->Text = metroTrackBar18->Value.ToString();
		Decimal value = metroTrackBar18->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power8RumbleLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar19_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 9 Strength
	{
		metroLabel19->Text = metroTrackBar19->Value.ToString();
		Decimal value = metroTrackBar19->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power9RumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar20_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 9 Length
	{
		metroLabel20->Text = metroTrackBar20->Value.ToString();
		Decimal value = metroTrackBar20->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power9RumbleLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar21_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 10 Strength
	{
		metroLabel21->Text = metroTrackBar21->Value.ToString();
		Decimal value = metroTrackBar21->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power10RumbleStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroTrackBar22_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) //Power 10 Length
	{
		metroLabel22->Text = metroTrackBar22->Value.ToString();
		Decimal value = metroTrackBar22->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "Power10RumbleLength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroLabel1_Click(System::Object^  sender, System::EventArgs^  e) //Min Force
	{

	}
	private: System::Void metroLabel2_Click(System::Object^  sender, System::EventArgs^  e) //Max Force
	{

	}
	private: System::Void metroLabel3_Click(System::Object^  sender, System::EventArgs^  e) //Power 1 Strength
	{

	}
	private: System::Void metroLabel4_Click(System::Object^  sender, System::EventArgs^  e) //Power 1 Length
	{

	}
	private: System::Void metroLabel5_Click(System::Object^  sender, System::EventArgs^  e) //Power 2 Strength
	{

	}
	private: System::Void metroLabel6_Click(System::Object^  sender, System::EventArgs^  e) //Power 2 Length
	{

	}
	private: System::Void metroLabel7_Click(System::Object^  sender, System::EventArgs^  e) //Power 3 Strength
	{

	}
	private: System::Void metroLabel8_Click(System::Object^  sender, System::EventArgs^  e) //Power 3 Length
	{

	}
	private: System::Void metroLabel9_Click(System::Object^  sender, System::EventArgs^  e) //Power 4 Strength
	{

	}
	private: System::Void metroLabel10_Click(System::Object^  sender, System::EventArgs^  e) //Power 4 Length
	{

	}
	private: System::Void metroLabel11_Click(System::Object^  sender, System::EventArgs^  e) //Power 5 Strength
	{

	}
	private: System::Void metroLabel12_Click(System::Object^  sender, System::EventArgs^  e) //Power 5 Length
	{

	}
	private: System::Void metroLabel13_Click(System::Object^  sender, System::EventArgs^  e) //Power 6 Strength
	{

	}
	private: System::Void metroLabel14_Click(System::Object^  sender, System::EventArgs^  e) //Power 6 Length
	{

	}
	private: System::Void metroLabel15_Click(System::Object^  sender, System::EventArgs^  e) //Power 7 Strength
	{

	}
	private: System::Void metroLabel16_Click(System::Object^  sender, System::EventArgs^  e) //Power 7 Length
	{

	}
	private: System::Void metroLabel17_Click(System::Object^  sender, System::EventArgs^  e) //Power 8 Strength
	{

	}
	private: System::Void metroLabel18_Click(System::Object^  sender, System::EventArgs^  e) //Power 8 Length
	{

	}
	private: System::Void metroLabel19_Click(System::Object^  sender, System::EventArgs^  e) //Power 9 Strength
	{

	}
	private: System::Void metroLabel20_Click(System::Object^  sender, System::EventArgs^  e) //Power 9 Length
	{

	}
	private: System::Void metroLabel21_Click(System::Object^  sender, System::EventArgs^  e) //Power 10 Strength
	{

	}
	private: System::Void metroLabel22_Click(System::Object^  sender, System::EventArgs^  e) //Power 10 Length
	{

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
	private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) //Go Back
	{
		this->Hide();
		obj->Show();
	}
};
}
