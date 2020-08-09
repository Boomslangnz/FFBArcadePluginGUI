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

#include "AceDriver.h"
#include "AceDriverVictoryLap.h"
#include "AfterburnerII.h"
#include "Alien3.h"
#include "BeastBusters.h"
#include "CaliforniaSpeed.h"
#include "CrusnUSA.h"
#include "CrusnWorld.h"
#include "ChaseBombers.h"
#include "CiscoHeat.h"
#include "DaytonaUSA.h"
#include "DirtDash.h"
#include "DoubleAxle.h"
#include "GhoulPanic.h"
#include "F1GrandPrixStar.h"
#include "F1GrandPrixStar2.h"
#include "GunBuster.h"
#include "Hyperdrive.h"
#include "Indy500.h"
#include "LaserGhost.h"
#include "MechanizedAttack.h"
#include "OffRoadChallenge.h"
#include "OutRun.h"
#include "OutRunners.h"
#include "OperationThunderbolt.h"
#include "OperationWolf.h"
#include "PointBlank2.h"
#include "PowerDrift.h"
#include "RailChase.h"
#include "RaveRacer.h"
#include "RevolutionX.h"
#include "SanFranciscoRush.h"
#include "SanFranciscoRushTheRock.h"
#include "SanFranciscoRush2049.h"
#include "STCC.h"
#include "SuperChase.h"
#include "SuperGT.h"
#include "Spacegun.h"
#include "Terminator2.h"
#include "TimeCrisis.h"
#include "TurboOutrun.h"
#include "TurkeyShoot.h"
#include "UnderFire.h"
#include "VaporTrx.h"
#include "VirtuaRacing.h"
#include "ZombieRaid.h"

namespace FFBPluginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MameSelect
	/// </summary>
	public ref class MameSelect : public MetroFramework::Forms::MetroForm
	{
	public:
		MameSelect(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: MetroFramework::Controls::MetroButton^ metroButton14;
	public:
	private: MetroFramework::Controls::MetroButton^ metroButton15;
	private: MetroFramework::Controls::MetroButton^ metroButton16;
	private: MetroFramework::Controls::MetroButton^ metroButton17;
	private: MetroFramework::Controls::MetroButton^ metroButton18;
	private: MetroFramework::Controls::MetroButton^ metroButton19;
	private: MetroFramework::Controls::MetroButton^ metroButton20;
	private: MetroFramework::Controls::MetroButton^ metroButton21;
	private: MetroFramework::Controls::MetroButton^ metroButton22;
	private: MetroFramework::Controls::MetroButton^ metroButton23;
	private: MetroFramework::Controls::MetroButton^ metroButton24;
	private: MetroFramework::Controls::MetroButton^ metroButton25;
	private: MetroFramework::Controls::MetroButton^ metroButton26;
	private: MetroFramework::Controls::MetroButton^ metroButton27;
	private: MetroFramework::Controls::MetroButton^ metroButton28;
	private: MetroFramework::Controls::MetroButton^ metroButton29;
	private: MetroFramework::Controls::MetroButton^ metroButton30;
	private: MetroFramework::Controls::MetroButton^ metroButton31;
	private: MetroFramework::Controls::MetroButton^ metroButton32;
	private: MetroFramework::Controls::MetroButton^ metroButton33;
	private: MetroFramework::Controls::MetroButton^ metroButton34;
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox2;
	private: MetroFramework::Controls::MetroComboBox^ metroComboBox1;
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox3;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox2;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox3;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox4;
	private: MetroFramework::Controls::MetroButton^ metroButton35;
	private: MetroFramework::Controls::MetroButton^ metroButton36;
	private: MetroFramework::Controls::MetroButton^ metroButton37;
	private: MetroFramework::Controls::MetroButton^ metroButton38;
	private: MetroFramework::Controls::MetroButton^ metroButton39;

	private: MetroFramework::Controls::MetroButton^ metroButton41;
	private: MetroFramework::Controls::MetroButton^ metroButton42;
	private: MetroFramework::Controls::MetroButton^ metroButton43;
	private: MetroFramework::Controls::MetroButton^ metroButton44;
	private: MetroFramework::Controls::MetroButton^ metroButton45;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox5;
	private: MetroFramework::Controls::MetroTrackBar^ metroTrackBar1;
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox4;
	private: MetroFramework::Controls::MetroLabel^ metroLabel1;
	private: MetroFramework::Controls::MetroButton^ metroButton40;

	public:

		MetroForm^ obj;
		MameSelect(MetroForm^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MameSelect()
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
	private: MetroFramework::Controls::MetroButton^ metroButton4;
	private: MetroFramework::Controls::MetroButton^ metroButton5;
	private: MetroFramework::Controls::MetroButton^ metroButton6;
	private: MetroFramework::Controls::MetroButton^ metroButton7;
	private: MetroFramework::Controls::MetroLink^ metroLink1;
	private: MetroFramework::Controls::MetroButton^ metroButton9;
	private: MetroFramework::Controls::MetroButton^ metroButton10;
	private: MetroFramework::Controls::MetroButton^ metroButton11;
	private: MetroFramework::Controls::MetroButton^ metroButton12;
	private: MetroFramework::Controls::MetroButton^ metroButton13;
	private: MetroFramework::Controls::MetroButton^ metroButton8;
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
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton5 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton6 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton7 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroButton8 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton9 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton10 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton11 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton12 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton13 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton14 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton15 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton16 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton17 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton18 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton19 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton20 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton21 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton22 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton23 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton24 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton25 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton26 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton27 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton28 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton29 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton30 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton31 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton32 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton33 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton34 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroCheckBox1 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox2 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox3 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroCheckBox4 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroButton35 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton36 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton37 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton38 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton39 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton41 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton42 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton43 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton44 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton45 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroCheckBox5 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroTrackBar1 = (gcnew MetroFramework::Controls::MetroTrackBar());
			this->metroTextBox4 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton40 = (gcnew MetroFramework::Controls::MetroButton());
			this->SuspendLayout();
			// 
			// metroButton1
			// 
			this->metroButton1->Location = System::Drawing::Point(23, 308);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(216, 23);
			this->metroButton1->TabIndex = 0;
			this->metroButton1->TabStop = false;
			this->metroButton1->Text = L"Afterburner II";
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &MameSelect::metroButton1_Click);
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
			this->metroTextBox1->Location = System::Drawing::Point(23, 250);
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
			this->metroTextBox1->Click += gcnew System::EventHandler(this, &MameSelect::metroTextBox1_Click);
			// 
			// metroButton2
			// 
			this->metroButton2->Location = System::Drawing::Point(254, 308);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(216, 23);
			this->metroButton2->TabIndex = 4;
			this->metroButton2->TabStop = false;
			this->metroButton2->Text = L"Alien 3";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &MameSelect::metroButton2_Click);
			// 
			// metroButton3
			// 
			this->metroButton3->Location = System::Drawing::Point(23, 337);
			this->metroButton3->Name = L"metroButton3";
			this->metroButton3->Size = System::Drawing::Size(216, 23);
			this->metroButton3->TabIndex = 5;
			this->metroButton3->TabStop = false;
			this->metroButton3->Text = L"Beast Busters";
			this->metroButton3->UseSelectable = true;
			this->metroButton3->Click += gcnew System::EventHandler(this, &MameSelect::metroButton3_Click);
			// 
			// metroButton4
			// 
			this->metroButton4->Location = System::Drawing::Point(254, 337);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(216, 23);
			this->metroButton4->TabIndex = 7;
			this->metroButton4->TabStop = false;
			this->metroButton4->Text = L"California Speed";
			this->metroButton4->UseSelectable = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &MameSelect::metroButton4_Click);
			// 
			// metroButton5
			// 
			this->metroButton5->Location = System::Drawing::Point(23, 366);
			this->metroButton5->Name = L"metroButton5";
			this->metroButton5->Size = System::Drawing::Size(216, 23);
			this->metroButton5->TabIndex = 8;
			this->metroButton5->TabStop = false;
			this->metroButton5->Text = L"Chase Bombers";
			this->metroButton5->UseSelectable = true;
			this->metroButton5->Click += gcnew System::EventHandler(this, &MameSelect::metroButton5_Click);
			// 
			// metroButton6
			// 
			this->metroButton6->Location = System::Drawing::Point(254, 366);
			this->metroButton6->Name = L"metroButton6";
			this->metroButton6->Size = System::Drawing::Size(216, 23);
			this->metroButton6->TabIndex = 9;
			this->metroButton6->TabStop = false;
			this->metroButton6->Text = L"Cisco Heat";
			this->metroButton6->UseSelectable = true;
			this->metroButton6->Click += gcnew System::EventHandler(this, &MameSelect::metroButton6_Click);
			// 
			// metroButton7
			// 
			this->metroButton7->Location = System::Drawing::Point(23, 395);
			this->metroButton7->Name = L"metroButton7";
			this->metroButton7->Size = System::Drawing::Size(216, 23);
			this->metroButton7->TabIndex = 10;
			this->metroButton7->TabStop = false;
			this->metroButton7->Text = L"Cruis\'n USA";
			this->metroButton7->UseSelectable = true;
			this->metroButton7->Click += gcnew System::EventHandler(this, &MameSelect::metroButton7_Click);
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
			this->metroLink1->Click += gcnew System::EventHandler(this, &MameSelect::metroLink1_Click);
			// 
			// metroButton8
			// 
			this->metroButton8->Location = System::Drawing::Point(254, 395);
			this->metroButton8->Name = L"metroButton8";
			this->metroButton8->Size = System::Drawing::Size(216, 23);
			this->metroButton8->TabIndex = 12;
			this->metroButton8->TabStop = false;
			this->metroButton8->Text = L"Cruis\'n World";
			this->metroButton8->UseSelectable = true;
			this->metroButton8->Click += gcnew System::EventHandler(this, &MameSelect::metroButton8_Click);
			// 
			// metroButton9
			// 
			this->metroButton9->Location = System::Drawing::Point(254, 453);
			this->metroButton9->Name = L"metroButton9";
			this->metroButton9->Size = System::Drawing::Size(216, 23);
			this->metroButton9->TabIndex = 13;
			this->metroButton9->TabStop = false;
			this->metroButton9->Text = L"F-1 Grand Prix Star";
			this->metroButton9->UseSelectable = true;
			this->metroButton9->Click += gcnew System::EventHandler(this, &MameSelect::metroButton9_Click);
			// 
			// metroButton10
			// 
			this->metroButton10->Location = System::Drawing::Point(23, 482);
			this->metroButton10->Name = L"metroButton10";
			this->metroButton10->Size = System::Drawing::Size(216, 23);
			this->metroButton10->TabIndex = 14;
			this->metroButton10->TabStop = false;
			this->metroButton10->Text = L"F-1 Grand Prix Star II";
			this->metroButton10->UseSelectable = true;
			this->metroButton10->Click += gcnew System::EventHandler(this, &MameSelect::metroButton10_Click);
			// 
			// metroButton11
			// 
			this->metroButton11->Location = System::Drawing::Point(254, 482);
			this->metroButton11->Name = L"metroButton11";
			this->metroButton11->Size = System::Drawing::Size(216, 23);
			this->metroButton11->TabIndex = 15;
			this->metroButton11->TabStop = false;
			this->metroButton11->Text = L"Ghoul Panic";
			this->metroButton11->UseSelectable = true;
			this->metroButton11->Click += gcnew System::EventHandler(this, &MameSelect::metroButton11_Click);
			// 
			// metroButton12
			// 
			this->metroButton12->Location = System::Drawing::Point(23, 511);
			this->metroButton12->Name = L"metroButton12";
			this->metroButton12->Size = System::Drawing::Size(216, 23);
			this->metroButton12->TabIndex = 16;
			this->metroButton12->TabStop = false;
			this->metroButton12->Text = L"Gunbuster";
			this->metroButton12->UseSelectable = true;
			this->metroButton12->Click += gcnew System::EventHandler(this, &MameSelect::metroButton12_Click);
			// 
			// metroButton13
			// 
			this->metroButton13->Location = System::Drawing::Point(707, 47);
			this->metroButton13->Name = L"metroButton13";
			this->metroButton13->Size = System::Drawing::Size(216, 23);
			this->metroButton13->TabIndex = 17;
			this->metroButton13->TabStop = false;
			this->metroButton13->Text = L"Laser Ghost";
			this->metroButton13->UseSelectable = true;
			this->metroButton13->Click += gcnew System::EventHandler(this, &MameSelect::metroButton13_Click);
			// 
			// metroButton14
			// 
			this->metroButton14->Location = System::Drawing::Point(476, 76);
			this->metroButton14->Name = L"metroButton14";
			this->metroButton14->Size = System::Drawing::Size(216, 23);
			this->metroButton14->TabIndex = 18;
			this->metroButton14->TabStop = false;
			this->metroButton14->Text = L"Mechanized Attack";
			this->metroButton14->UseSelectable = true;
			this->metroButton14->Click += gcnew System::EventHandler(this, &MameSelect::metroButton14_Click);
			// 
			// metroButton15
			// 
			this->metroButton15->Location = System::Drawing::Point(707, 76);
			this->metroButton15->Name = L"metroButton15";
			this->metroButton15->Size = System::Drawing::Size(216, 23);
			this->metroButton15->TabIndex = 19;
			this->metroButton15->TabStop = false;
			this->metroButton15->Text = L"Off Road Challenge";
			this->metroButton15->UseSelectable = true;
			this->metroButton15->Click += gcnew System::EventHandler(this, &MameSelect::metroButton15_Click);
			// 
			// metroButton16
			// 
			this->metroButton16->Location = System::Drawing::Point(707, 105);
			this->metroButton16->Name = L"metroButton16";
			this->metroButton16->Size = System::Drawing::Size(216, 23);
			this->metroButton16->TabIndex = 20;
			this->metroButton16->TabStop = false;
			this->metroButton16->Text = L"Operation Thunderbolt";
			this->metroButton16->UseSelectable = true;
			this->metroButton16->Click += gcnew System::EventHandler(this, &MameSelect::metroButton16_Click);
			// 
			// metroButton17
			// 
			this->metroButton17->Location = System::Drawing::Point(476, 105);
			this->metroButton17->Name = L"metroButton17";
			this->metroButton17->Size = System::Drawing::Size(216, 23);
			this->metroButton17->TabIndex = 21;
			this->metroButton17->TabStop = false;
			this->metroButton17->Text = L"Operation Wolf";
			this->metroButton17->UseSelectable = true;
			this->metroButton17->Click += gcnew System::EventHandler(this, &MameSelect::metroButton17_Click);
			// 
			// metroButton18
			// 
			this->metroButton18->Location = System::Drawing::Point(707, 134);
			this->metroButton18->Name = L"metroButton18";
			this->metroButton18->Size = System::Drawing::Size(216, 23);
			this->metroButton18->TabIndex = 22;
			this->metroButton18->TabStop = false;
			this->metroButton18->Text = L"Outrun";
			this->metroButton18->UseSelectable = true;
			this->metroButton18->Click += gcnew System::EventHandler(this, &MameSelect::metroButton18_Click);
			// 
			// metroButton19
			// 
			this->metroButton19->Location = System::Drawing::Point(476, 134);
			this->metroButton19->Name = L"metroButton19";
			this->metroButton19->Size = System::Drawing::Size(216, 23);
			this->metroButton19->TabIndex = 23;
			this->metroButton19->TabStop = false;
			this->metroButton19->Text = L"Outrunners";
			this->metroButton19->UseSelectable = true;
			this->metroButton19->Click += gcnew System::EventHandler(this, &MameSelect::metroButton19_Click);
			// 
			// metroButton20
			// 
			this->metroButton20->Location = System::Drawing::Point(707, 163);
			this->metroButton20->Name = L"metroButton20";
			this->metroButton20->Size = System::Drawing::Size(216, 23);
			this->metroButton20->TabIndex = 24;
			this->metroButton20->TabStop = false;
			this->metroButton20->Text = L"Point Blank 2";
			this->metroButton20->UseSelectable = true;
			this->metroButton20->Click += gcnew System::EventHandler(this, &MameSelect::metroButton20_Click);
			// 
			// metroButton21
			// 
			this->metroButton21->Location = System::Drawing::Point(476, 163);
			this->metroButton21->Name = L"metroButton21";
			this->metroButton21->Size = System::Drawing::Size(216, 23);
			this->metroButton21->TabIndex = 25;
			this->metroButton21->TabStop = false;
			this->metroButton21->Text = L"Power Drift";
			this->metroButton21->UseSelectable = true;
			this->metroButton21->Click += gcnew System::EventHandler(this, &MameSelect::metroButton21_Click);
			// 
			// metroButton22
			// 
			this->metroButton22->Location = System::Drawing::Point(476, 192);
			this->metroButton22->Name = L"metroButton22";
			this->metroButton22->Size = System::Drawing::Size(216, 23);
			this->metroButton22->TabIndex = 26;
			this->metroButton22->TabStop = false;
			this->metroButton22->Text = L"Rail Chase";
			this->metroButton22->UseSelectable = true;
			this->metroButton22->Click += gcnew System::EventHandler(this, &MameSelect::metroButton22_Click);
			// 
			// metroButton23
			// 
			this->metroButton23->Location = System::Drawing::Point(476, 221);
			this->metroButton23->Name = L"metroButton23";
			this->metroButton23->Size = System::Drawing::Size(216, 23);
			this->metroButton23->TabIndex = 27;
			this->metroButton23->TabStop = false;
			this->metroButton23->Text = L"Revolution X";
			this->metroButton23->UseSelectable = true;
			this->metroButton23->Click += gcnew System::EventHandler(this, &MameSelect::metroButton23_Click);
			// 
			// metroButton24
			// 
			this->metroButton24->Location = System::Drawing::Point(707, 221);
			this->metroButton24->Name = L"metroButton24";
			this->metroButton24->Size = System::Drawing::Size(216, 23);
			this->metroButton24->TabIndex = 28;
			this->metroButton24->TabStop = false;
			this->metroButton24->Text = L"San Francisco Rush";
			this->metroButton24->UseSelectable = true;
			this->metroButton24->Click += gcnew System::EventHandler(this, &MameSelect::metroButton24_Click);
			// 
			// metroButton25
			// 
			this->metroButton25->Location = System::Drawing::Point(476, 250);
			this->metroButton25->Name = L"metroButton25";
			this->metroButton25->Size = System::Drawing::Size(216, 23);
			this->metroButton25->TabIndex = 29;
			this->metroButton25->TabStop = false;
			this->metroButton25->Text = L"San Francisco Rush: The Rock";
			this->metroButton25->UseSelectable = true;
			this->metroButton25->Click += gcnew System::EventHandler(this, &MameSelect::metroButton25_Click);
			// 
			// metroButton26
			// 
			this->metroButton26->Location = System::Drawing::Point(707, 250);
			this->metroButton26->Name = L"metroButton26";
			this->metroButton26->Size = System::Drawing::Size(216, 23);
			this->metroButton26->TabIndex = 30;
			this->metroButton26->TabStop = false;
			this->metroButton26->Text = L"San Francisco Rush 2049";
			this->metroButton26->UseSelectable = true;
			this->metroButton26->Click += gcnew System::EventHandler(this, &MameSelect::metroButton26_Click);
			// 
			// metroButton27
			// 
			this->metroButton27->Location = System::Drawing::Point(476, 279);
			this->metroButton27->Name = L"metroButton27";
			this->metroButton27->Size = System::Drawing::Size(216, 23);
			this->metroButton27->TabIndex = 31;
			this->metroButton27->TabStop = false;
			this->metroButton27->Text = L"Space Gun";
			this->metroButton27->UseSelectable = true;
			this->metroButton27->Click += gcnew System::EventHandler(this, &MameSelect::metroButton27_Click);
			// 
			// metroButton28
			// 
			this->metroButton28->Location = System::Drawing::Point(707, 308);
			this->metroButton28->Name = L"metroButton28";
			this->metroButton28->Size = System::Drawing::Size(216, 23);
			this->metroButton28->TabIndex = 32;
			this->metroButton28->TabStop = false;
			this->metroButton28->Text = L"Terminator 2";
			this->metroButton28->UseSelectable = true;
			this->metroButton28->Click += gcnew System::EventHandler(this, &MameSelect::metroButton28_Click);
			// 
			// metroButton29
			// 
			this->metroButton29->Location = System::Drawing::Point(476, 337);
			this->metroButton29->Name = L"metroButton29";
			this->metroButton29->Size = System::Drawing::Size(216, 23);
			this->metroButton29->TabIndex = 33;
			this->metroButton29->TabStop = false;
			this->metroButton29->Text = L"Time Crisis";
			this->metroButton29->UseSelectable = true;
			this->metroButton29->Click += gcnew System::EventHandler(this, &MameSelect::metroButton29_Click);
			// 
			// metroButton30
			// 
			this->metroButton30->Location = System::Drawing::Point(707, 337);
			this->metroButton30->Name = L"metroButton30";
			this->metroButton30->Size = System::Drawing::Size(216, 23);
			this->metroButton30->TabIndex = 34;
			this->metroButton30->TabStop = false;
			this->metroButton30->Text = L"Turbo Outrun";
			this->metroButton30->UseSelectable = true;
			this->metroButton30->Click += gcnew System::EventHandler(this, &MameSelect::metroButton30_Click);
			// 
			// metroButton31
			// 
			this->metroButton31->Location = System::Drawing::Point(476, 366);
			this->metroButton31->Name = L"metroButton31";
			this->metroButton31->Size = System::Drawing::Size(216, 23);
			this->metroButton31->TabIndex = 35;
			this->metroButton31->TabStop = false;
			this->metroButton31->Text = L"Turkey Shoot";
			this->metroButton31->UseSelectable = true;
			this->metroButton31->Click += gcnew System::EventHandler(this, &MameSelect::metroButton31_Click);
			// 
			// metroButton32
			// 
			this->metroButton32->Location = System::Drawing::Point(707, 366);
			this->metroButton32->Name = L"metroButton32";
			this->metroButton32->Size = System::Drawing::Size(216, 23);
			this->metroButton32->TabIndex = 36;
			this->metroButton32->TabStop = false;
			this->metroButton32->Text = L"Under Fire";
			this->metroButton32->UseSelectable = true;
			this->metroButton32->Click += gcnew System::EventHandler(this, &MameSelect::metroButton32_Click);
			// 
			// metroButton33
			// 
			this->metroButton33->Location = System::Drawing::Point(707, 395);
			this->metroButton33->Name = L"metroButton33";
			this->metroButton33->Size = System::Drawing::Size(216, 23);
			this->metroButton33->TabIndex = 37;
			this->metroButton33->TabStop = false;
			this->metroButton33->Text = L"Virtua Racing";
			this->metroButton33->UseSelectable = true;
			this->metroButton33->Click += gcnew System::EventHandler(this, &MameSelect::metroButton33_Click);
			// 
			// metroButton34
			// 
			this->metroButton34->Location = System::Drawing::Point(476, 424);
			this->metroButton34->Name = L"metroButton34";
			this->metroButton34->Size = System::Drawing::Size(216, 23);
			this->metroButton34->TabIndex = 38;
			this->metroButton34->TabStop = false;
			this->metroButton34->Text = L"Zombie Raid";
			this->metroButton34->UseSelectable = true;
			this->metroButton34->Click += gcnew System::EventHandler(this, &MameSelect::metroButton34_Click);
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
			this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MameSelect::metroComboBox1_SelectedIndexChanged);
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
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &MameSelect::metroCheckBox1_CheckedChanged);
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
			this->metroCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &MameSelect::metroCheckBox2_CheckedChanged);
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
			this->metroCheckBox3->CheckedChanged += gcnew System::EventHandler(this, &MameSelect::metroCheckBox3_CheckedChanged);
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
			this->metroCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &MameSelect::metroCheckBox4_CheckedChanged);
			// 
			// metroButton35
			// 
			this->metroButton35->Location = System::Drawing::Point(254, 511);
			this->metroButton35->Name = L"metroButton35";
			this->metroButton35->Size = System::Drawing::Size(216, 23);
			this->metroButton35->TabIndex = 44;
			this->metroButton35->TabStop = false;
			this->metroButton35->Text = L"Hyperdrive";
			this->metroButton35->UseSelectable = true;
			this->metroButton35->Click += gcnew System::EventHandler(this, &MameSelect::metroButton35_Click);
			// 
			// metroButton36
			// 
			this->metroButton36->Location = System::Drawing::Point(476, 395);
			this->metroButton36->Name = L"metroButton36";
			this->metroButton36->Size = System::Drawing::Size(216, 23);
			this->metroButton36->TabIndex = 45;
			this->metroButton36->TabStop = false;
			this->metroButton36->Text = L"Vapor TRX";
			this->metroButton36->UseSelectable = true;
			this->metroButton36->Click += gcnew System::EventHandler(this, &MameSelect::metroButton36_Click);
			// 
			// metroButton37
			// 
			this->metroButton37->Location = System::Drawing::Point(23, 424);
			this->metroButton37->Name = L"metroButton37";
			this->metroButton37->Size = System::Drawing::Size(216, 23);
			this->metroButton37->TabIndex = 46;
			this->metroButton37->TabStop = false;
			this->metroButton37->Text = L"Daytona USA";
			this->metroButton37->UseSelectable = true;
			this->metroButton37->Click += gcnew System::EventHandler(this, &MameSelect::metroButton37_Click);
			// 
			// metroButton38
			// 
			this->metroButton38->Location = System::Drawing::Point(476, 47);
			this->metroButton38->Name = L"metroButton38";
			this->metroButton38->Size = System::Drawing::Size(216, 23);
			this->metroButton38->TabIndex = 47;
			this->metroButton38->TabStop = false;
			this->metroButton38->Text = L"Indy 500";
			this->metroButton38->UseSelectable = true;
			this->metroButton38->Click += gcnew System::EventHandler(this, &MameSelect::metroButton38_Click);
			// 
			// metroButton39
			// 
			this->metroButton39->Location = System::Drawing::Point(707, 192);
			this->metroButton39->Name = L"metroButton39";
			this->metroButton39->Size = System::Drawing::Size(216, 23);
			this->metroButton39->TabIndex = 48;
			this->metroButton39->TabStop = false;
			this->metroButton39->Text = L"Rave Racer";
			this->metroButton39->UseSelectable = true;
			this->metroButton39->Click += gcnew System::EventHandler(this, &MameSelect::metroButton39_Click);
			// 
			// metroButton41
			// 
			this->metroButton41->Location = System::Drawing::Point(476, 308);
			this->metroButton41->Name = L"metroButton41";
			this->metroButton41->Size = System::Drawing::Size(216, 23);
			this->metroButton41->TabIndex = 50;
			this->metroButton41->TabStop = false;
			this->metroButton41->Text = L"Super GT 24hr";
			this->metroButton41->UseSelectable = true;
			this->metroButton41->Click += gcnew System::EventHandler(this, &MameSelect::metroButton41_Click);
			// 
			// metroButton42
			// 
			this->metroButton42->Location = System::Drawing::Point(707, 279);
			this->metroButton42->Name = L"metroButton42";
			this->metroButton42->Size = System::Drawing::Size(216, 23);
			this->metroButton42->TabIndex = 51;
			this->metroButton42->TabStop = false;
			this->metroButton42->Text = L"Super Chase Criminal Termination";
			this->metroButton42->UseSelectable = true;
			this->metroButton42->Click += gcnew System::EventHandler(this, &MameSelect::metroButton42_Click);
			// 
			// metroButton43
			// 
			this->metroButton43->Location = System::Drawing::Point(254, 424);
			this->metroButton43->Name = L"metroButton43";
			this->metroButton43->Size = System::Drawing::Size(216, 23);
			this->metroButton43->TabIndex = 52;
			this->metroButton43->TabStop = false;
			this->metroButton43->Text = L"Dirt Dash";
			this->metroButton43->UseSelectable = true;
			this->metroButton43->Click += gcnew System::EventHandler(this, &MameSelect::metroButton43_Click);
			// 
			// metroButton44
			// 
			this->metroButton44->Location = System::Drawing::Point(23, 279);
			this->metroButton44->Name = L"metroButton44";
			this->metroButton44->Size = System::Drawing::Size(216, 23);
			this->metroButton44->TabIndex = 53;
			this->metroButton44->TabStop = false;
			this->metroButton44->Text = L"Ace Driver";
			this->metroButton44->UseSelectable = true;
			this->metroButton44->Click += gcnew System::EventHandler(this, &MameSelect::metroButton44_Click);
			// 
			// metroButton45
			// 
			this->metroButton45->Location = System::Drawing::Point(254, 279);
			this->metroButton45->Name = L"metroButton45";
			this->metroButton45->Size = System::Drawing::Size(216, 23);
			this->metroButton45->TabIndex = 54;
			this->metroButton45->TabStop = false;
			this->metroButton45->Text = L"Ace Driver Victory Lap";
			this->metroButton45->UseSelectable = true;
			this->metroButton45->Click += gcnew System::EventHandler(this, &MameSelect::metroButton45_Click);
			// 
			// metroCheckBox5
			// 
			int EnableForceSpringEffectA = GetPrivateProfileInt(TEXT("Settings"), TEXT("EnableForceSpringEffect"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox5->AutoSize = true;
			this->metroCheckBox5->Location = System::Drawing::Point(193, 149);
			this->metroCheckBox5->Name = L"metroCheckBox5";
			this->metroCheckBox5->Size = System::Drawing::Size(165, 15);
			this->metroCheckBox5->TabIndex = 55;
			this->metroCheckBox5->TabStop = false;
			this->metroCheckBox5->Checked = EnableForceSpringEffectA;
			this->metroCheckBox5->Text = L"Enable Global Spring Effect";
			this->metroCheckBox5->UseSelectable = true;
			this->metroCheckBox5->CheckedChanged += gcnew System::EventHandler(this, &MameSelect::metroCheckBox5_CheckedChanged);
			// 
			// metroTrackBar1
			// 
			int ForceSpringStrength = GetPrivateProfileInt(TEXT("Settings"), TEXT("ForceSpringStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroTrackBar1->BackColor = System::Drawing::Color::Transparent;
			this->metroTrackBar1->Location = System::Drawing::Point(23, 204);
			this->metroTrackBar1->Name = L"metroTrackBar1";
			this->metroTrackBar1->Size = System::Drawing::Size(447, 23);
			this->metroTrackBar1->TabIndex = 56;
			this->metroTrackBar1->Value = ForceSpringStrength;
			this->metroTrackBar1->Text = L"metroTrackBar1";
			this->metroTrackBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MameSelect::metroTrackBar1_Scroll);
			// 
			// metroTextBox4
			// 
			// 
			// 
			// 
			this->metroTextBox4->CustomButton->Image = nullptr;
			this->metroTextBox4->CustomButton->Location = System::Drawing::Point(425, 1);
			this->metroTextBox4->CustomButton->Name = L"";
			this->metroTextBox4->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox4->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox4->CustomButton->TabIndex = 1;
			this->metroTextBox4->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox4->CustomButton->UseSelectable = true;
			this->metroTextBox4->CustomButton->Visible = false;
			this->metroTextBox4->Lines = gcnew cli::array< System::String^  >(1) { L"Global Spring Effect Strength" };
			this->metroTextBox4->Location = System::Drawing::Point(23, 175);
			this->metroTextBox4->MaxLength = 32767;
			this->metroTextBox4->Name = L"metroTextBox4";
			this->metroTextBox4->PasswordChar = '\0';
			this->metroTextBox4->ReadOnly = true;
			this->metroTextBox4->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox4->SelectedText = L"";
			this->metroTextBox4->SelectionLength = 0;
			this->metroTextBox4->SelectionStart = 0;
			this->metroTextBox4->ShortcutsEnabled = true;
			this->metroTextBox4->Size = System::Drawing::Size(447, 23);
			this->metroTextBox4->TabIndex = 57;
			this->metroTextBox4->TabStop = false;
			this->metroTextBox4->Text = L"Global Spring Effect Strength";
			this->metroTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox4->UseSelectable = true;
			this->metroTextBox4->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox4->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLabel1
			// 
			int ForceSpringStrength1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("ForceSpringStrength"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(233, 228);
			this->metroLabel1->Text = System::Convert::ToString(ForceSpringStrength1);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(0, 0);
			this->metroLabel1->TabIndex = 58;
			this->metroLabel1->Click += gcnew System::EventHandler(this, &MameSelect::metroLabel1_Click);
			// 
			// metroButton40
			// 
			this->metroButton40->Location = System::Drawing::Point(23, 453);
			this->metroButton40->Name = L"metroButton40";
			this->metroButton40->Size = System::Drawing::Size(216, 23);
			this->metroButton40->TabIndex = 59;
			this->metroButton40->TabStop = false;
			this->metroButton40->Text = L"Double Axle";
			this->metroButton40->UseSelectable = true;
			this->metroButton40->Click += gcnew System::EventHandler(this, &MameSelect::metroButton40_Click_1);
			// 
			// MameSelect
			// 
			int AutoScrollGUI = GetPrivateProfileInt(TEXT("Settings"), TEXT("AutoScrollGUI"), 0, TEXT(".\\FFBPlugin.ini"));
			if (AutoScrollGUI == 1)
			{
				this->AutoScroll = true;
			}
			this->ClientSize = System::Drawing::Size(933, 550);
			this->Controls->Add(this->metroButton40);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroTextBox4);
			this->Controls->Add(this->metroTrackBar1);
			this->Controls->Add(this->metroCheckBox5);
			this->Controls->Add(this->metroButton45);
			this->Controls->Add(this->metroButton44);
			this->Controls->Add(this->metroButton43);
			this->Controls->Add(this->metroButton42);
			this->Controls->Add(this->metroButton41);
			this->Controls->Add(this->metroButton39);
			this->Controls->Add(this->metroButton38);
			this->Controls->Add(this->metroButton37);
			this->Controls->Add(this->metroButton36);
			this->Controls->Add(this->metroButton35);
			this->Controls->Add(this->metroCheckBox4);
			this->Controls->Add(this->metroCheckBox3);
			this->Controls->Add(this->metroCheckBox2);
			this->Controls->Add(this->metroTextBox3);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroButton34);
			this->Controls->Add(this->metroButton33);
			this->Controls->Add(this->metroButton32);
			this->Controls->Add(this->metroButton31);
			this->Controls->Add(this->metroButton30);
			this->Controls->Add(this->metroButton29);
			this->Controls->Add(this->metroButton28);
			this->Controls->Add(this->metroButton27);
			this->Controls->Add(this->metroButton26);
			this->Controls->Add(this->metroButton25);
			this->Controls->Add(this->metroButton24);
			this->Controls->Add(this->metroButton23);
			this->Controls->Add(this->metroButton22);
			this->Controls->Add(this->metroButton21);
			this->Controls->Add(this->metroButton20);
			this->Controls->Add(this->metroButton19);
			this->Controls->Add(this->metroButton18);
			this->Controls->Add(this->metroButton17);
			this->Controls->Add(this->metroButton16);
			this->Controls->Add(this->metroButton15);
			this->Controls->Add(this->metroButton14);
			this->Controls->Add(this->metroButton13);
			this->Controls->Add(this->metroButton12);
			this->Controls->Add(this->metroButton11);
			this->Controls->Add(this->metroButton10);
			this->Controls->Add(this->metroButton9);
			this->Controls->Add(this->metroButton8);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroButton7);
			this->Controls->Add(this->metroButton6);
			this->Controls->Add(this->metroButton5);
			this->Controls->Add(this->metroButton4);
			this->Controls->Add(this->metroButton3);
			this->Controls->Add(this->metroButton2);
			this->Controls->Add(this->metroTextBox1);
			this->Controls->Add(this->metroButton1);
			this->Controls->Add(this->metroComboBox1);
			this->Controls->Add(this->metroCheckBox1);
			this->MaximizeBox = false;
			this->Name = L"MameSelect";
			this->Resizable = false;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MameSelect::Form1_FormClosing);
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
	private: System::Void metroCheckBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) //Spring Effect
	{
		if (metroCheckBox5->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("EnableForceSpringEffect"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("EnableForceSpringEffect"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
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
	private: System::Void metroTextBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void metroButton1_Click(System::Object^ sender, System::EventArgs^ e) //Afterburner II
	{
		this->Hide();
		AfterburnerII^ obj1 = gcnew AfterburnerII(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton2_Click(System::Object^ sender, System::EventArgs^ e) //Alien3
	{
		this->Hide();
		Alien3^ obj1 = gcnew Alien3(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton3_Click(System::Object^ sender, System::EventArgs^ e) //Beast Busters
	{
		this->Hide();
		BeastBusters^ obj1 = gcnew BeastBusters(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton4_Click(System::Object^ sender, System::EventArgs^ e) //California Speed
	{
		this->Hide();
		CaliforniaSpeed^ obj1 = gcnew CaliforniaSpeed(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton5_Click(System::Object^ sender, System::EventArgs^ e) //Chase Bombers
	{
		this->Hide();
		ChaseBombers^ obj1 = gcnew ChaseBombers(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton6_Click(System::Object^ sender, System::EventArgs^ e) //Cisco Heat
	{
		this->Hide();
		CiscoHeat^ obj1 = gcnew CiscoHeat(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton7_Click(System::Object^ sender, System::EventArgs^ e) //Crusn USA
	{
		this->Hide();
		CrusnUSA^ obj1 = gcnew CrusnUSA(this);
		obj1->ShowDialog();
	}
	private: System::Void metroLink1_Click(System::Object^ sender, System::EventArgs^ e) //Go Back To Previous Menu
	{
		this->Hide();
		obj->Show();
	}
	private: System::Void metroButton8_Click(System::Object^ sender, System::EventArgs^ e) //Crusn World
	{
		this->Hide();
		CrusnWorld^ obj1 = gcnew CrusnWorld(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton9_Click(System::Object^ sender, System::EventArgs^ e) //F1 GP Star
	{
		this->Hide();
		F1GrandPrixStar^ obj1 = gcnew F1GrandPrixStar(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton10_Click(System::Object^ sender, System::EventArgs^ e) //F1 GP Star 2
	{
		this->Hide();
		F1GrandPrixStar2^ obj1 = gcnew F1GrandPrixStar2(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton11_Click(System::Object^ sender, System::EventArgs^ e)//Ghoul Panic
	{
		this->Hide();
		GhoulPanic^ obj1 = gcnew GhoulPanic(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton12_Click(System::Object^ sender, System::EventArgs^ e) //Gunbuster
	{
		this->Hide();
		GunBuster^ obj1 = gcnew GunBuster(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton13_Click(System::Object^ sender, System::EventArgs^ e)//Laser Ghost
	{
		this->Hide();
		LaserGhost^ obj1 = gcnew LaserGhost(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton14_Click(System::Object^ sender, System::EventArgs^ e)//Mechanized Attack
	{
		this->Hide();
		MechanizedAttack^ obj1 = gcnew MechanizedAttack(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton15_Click(System::Object^ sender, System::EventArgs^ e)//Off Road Challenge
	{
		this->Hide();
		OffRoadChallenge^ obj1 = gcnew OffRoadChallenge(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton16_Click(System::Object^ sender, System::EventArgs^ e)//Operation Thunderbolt
	{
		this->Hide();
		OperationThunderbolt^ obj1 = gcnew OperationThunderbolt(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton17_Click(System::Object^ sender, System::EventArgs^ e)//Operation Wolf
	{
		this->Hide();
		OperationWolf^ obj1 = gcnew OperationWolf(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton18_Click(System::Object^ sender, System::EventArgs^ e)//Outrun
	{
		this->Hide();
		Outrun^ obj1 = gcnew Outrun(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton19_Click(System::Object^ sender, System::EventArgs^ e)//OutRunners 
	{
		this->Hide();
		OutRunners^ obj1 = gcnew OutRunners(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton20_Click(System::Object^ sender, System::EventArgs^ e)//Point Blank 2
	{
		this->Hide();
		PointBlank2^ obj1 = gcnew PointBlank2(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton21_Click(System::Object^ sender, System::EventArgs^ e)//Power Drift
	{
		this->Hide();
		PowerDrift^ obj1 = gcnew PowerDrift(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton22_Click(System::Object^ sender, System::EventArgs^ e)//Rail Chase
	{
		this->Hide();
		RailChase^ obj1 = gcnew RailChase(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton23_Click(System::Object^ sender, System::EventArgs^ e)//Revolution X
	{
		this->Hide();
		RevolutionX^ obj1 = gcnew RevolutionX(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton24_Click(System::Object^ sender, System::EventArgs^ e)//San Francisco Rush
	{
		this->Hide();
		SanFranciscoRush^ obj1 = gcnew SanFranciscoRush(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton25_Click(System::Object^ sender, System::EventArgs^ e)//San Francisco Rush The Rock
	{
		this->Hide();
		SanFranciscoRushTheRock^ obj1 = gcnew SanFranciscoRushTheRock(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton26_Click(System::Object^ sender, System::EventArgs^ e)//San Francisco Rush 2049
	{
		this->Hide();
		SanFranciscoRush2049^ obj1 = gcnew SanFranciscoRush2049(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton27_Click(System::Object^ sender, System::EventArgs^ e)//Space gun
	{
		this->Hide();
		Spacegun^ obj1 = gcnew Spacegun(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton28_Click(System::Object^ sender, System::EventArgs^ e)//Terminator 2
	{
		this->Hide();
		Terminator2^ obj1 = gcnew Terminator2(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton29_Click(System::Object^ sender, System::EventArgs^ e)//Time Crisis
	{
		this->Hide();
		TimeCrisis^ obj1 = gcnew TimeCrisis(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton30_Click(System::Object^ sender, System::EventArgs^ e)//Turbo Outrun
	{
		this->Hide();
		TurboOutrun^ obj1 = gcnew TurboOutrun(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton31_Click(System::Object^ sender, System::EventArgs^ e) //Turkey Shoot
	{
		this->Hide();
		TurkeyShoot^ obj1 = gcnew TurkeyShoot(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton32_Click(System::Object^ sender, System::EventArgs^ e)//Under Fire
	{
		this->Hide();
		UnderFire^ obj1 = gcnew UnderFire(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton33_Click(System::Object^ sender, System::EventArgs^ e)//Virtua Racing
	{
		this->Hide();
		VirtuaRacing^ obj1 = gcnew VirtuaRacing(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton34_Click(System::Object^ sender, System::EventArgs^ e)//Zombie Raid
	{
		this->Hide();
		ZombieRaid^ obj1 = gcnew ZombieRaid(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton35_Click(System::Object^ sender, System::EventArgs^ e) //Hyperdrive
	{
		this->Hide();
		Hyperdrive^ obj1 = gcnew Hyperdrive(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton36_Click(System::Object^ sender, System::EventArgs^ e) //Vapor TRX
	{
		this->Hide();
		VaporTrx^ obj1 = gcnew VaporTrx(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton37_Click(System::Object^ sender, System::EventArgs^ e) //Daytona USA
	{
		this->Hide();
		DaytonaUSA^ obj1 = gcnew DaytonaUSA(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton38_Click(System::Object^ sender, System::EventArgs^ e) //Indy 500
	{
		this->Hide();
		Indy500^ obj1 = gcnew Indy500(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton39_Click(System::Object^ sender, System::EventArgs^ e) //Rave Racer
	{
		this->Hide();
		RaveRacer^ obj1 = gcnew RaveRacer(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton40_Click(System::Object^ sender, System::EventArgs^ e) //Sega Touring Car Championship
	{
		this->Hide();
		STCC^ obj1 = gcnew STCC(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton41_Click(System::Object^ sender, System::EventArgs^ e) //Super GT 24hr
	{
		this->Hide();
		SuperGT^ obj1 = gcnew SuperGT(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton42_Click(System::Object^ sender, System::EventArgs^ e) //Super Chase Criminal Termination
	{
		this->Hide();
		SuperChase^ obj1 = gcnew SuperChase(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton43_Click(System::Object^ sender, System::EventArgs^ e) //Dirt Dash
	{
		this->Hide();
		DirtDash^ obj1 = gcnew DirtDash(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton44_Click(System::Object^ sender, System::EventArgs^ e) //Ace Driver
	{
		this->Hide();
		AceDriver^ obj1 = gcnew AceDriver(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton45_Click(System::Object^ sender, System::EventArgs^ e) //Ace Driver Victory Lap
	{
		this->Hide();
		AceDriverVictoryLap^ obj1 = gcnew AceDriverVictoryLap(this);
		obj1->ShowDialog();
	}
	
	private: System::Void metroLabel1_Click(System::Object^ sender, System::EventArgs^ e) //Global Spring Effect Value
	{

	}
	private: System::Void metroTrackBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) //Global Spring Effect Value Change
	{
		metroLabel1->Text = metroTrackBar1->Value.ToString();
		Decimal value = metroTrackBar1->Value;
		int myInt{ value };
		char Result[16];
		sprintf_s(Result, "%d", myInt);
		{
			WritePrivateProfileStringA("Settings", "ForceSpringStrength", Result, ".\\FFBPlugin.ini");
		}
	}
	private: System::Void metroButton40_Click_1(System::Object^ sender, System::EventArgs^ e) //Double Axle
	{
		this->Hide();
		DoubleAxle^ obj1 = gcnew DoubleAxle(this);
		obj1->ShowDialog();
	}
};
}
