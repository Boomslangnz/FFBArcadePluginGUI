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
#include "AliensExtermination.h"
#include "AfterburnerClimax.h"
#include "ArcticThunder.h"
#include "Batman.h"
#include "BG4.h"
#include "ButtonRumble.h"
#include "ButtonRumbleInput.h"
#include "CrazyTaxi.h"
#include "ChaseHQ2.h"
#include "ChaseHQ2Input.h"
#include "CrusnBlast.h"
#include "D1GPArcade.h"
#include "DaytonaChampionshipUSANSE.h"
#include "DaytonaChampionshipUSA.h"
#include "DaytonaChampionshipUSAInput.h"
#include "DeadHeat.h"
#include "DemulInputSelect.h"
#include "DemulSelect.h"
#include "DirtyDrivin.h"
#include "ElfLdr2Help.h"
#include "FFBTest.h"
#include "FnF.h"
#include "FnFDrift.h"
#include "FnFSuperCars.h"
#include "FordRacing.h"
#include "FNF.h"
#include "FNFDrift.h"
#include "FNFSupercars.h"
#include "FlycastEmulatorSelect.h"
#include "GaelcoTuningRace.h"
#include "GoldenGun.h"
#include "GRIDCustom.h"
#include "GRIDReal.h"
#include "GTIClub.h"
#include "H2Overdrive.h"
#include "Help.h"
#include "HummerExtreme.h"
#include "HOTD4.h"
#include "HummerExtreme.h"
#include "InitialD0.h"
#include "InitialD0Input.h"
#include "InitialD4.h"
#include "InitialD4Japan.h"
#include "InitialD5.h"
#include "InitialD6.h"
#include "InitialD7.h"
#include "InitialD8.h"
#include "InitialDTheArcadev231.h"
#include "KODrive.h"
#include "LGI.h"
#include "LGI3D.h"
#include "LindberghHelp.h"
#include "M2EmulatorSelect.h"
#include "M2EmulatorInput.h"
#include "Machstorm.h"
#include "MameSelect.h"
#include "MKGP100Custom.h"
#include "MKGP110Custom.h"
#include "MKGP110Real.h"
#include "MKGP118Custom.h"
#include "MKGP118Real.h"
#include "MKGPUSAReal.h"
#include "MKGPUSACustom.h"
#include "Outrun2.h"
#include "Outrun2Input.h"
#include "PokkenTournament.h"
#include "RingRiders.h"
#include "RoadFighters3D.h"
#include "RoadFighters3DInput.h"
#include "SegaRacingClassic.h"
#include "SegaRally3.h"
#include "SnoCross.h"
#include "SonicAllStars.h"
#include "StormRacerG.h"
#include "StrengthInput.h"
#include "SupermodelSelect.h"
#include "SWDC2018.h"
#include "WackyRaces.h"
#include "WastelandRacers2071.h"
#include "WMMT3.h"
#include "WMMT5.h"
#include "WMMT5Input.h"
#include "WMMT6.h"
#include "WMMT6Input.h"
#include "WMMT6R.h"
#include "WMMT6RR.h"
#include "Rambo.h"
#include "R-Tuned.h"
#include "TokyoCop.h"
#include "Transformers.h"

namespace FFBPluginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MetroFramework::Forms;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public MetroFramework::Forms::MetroForm
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroButton^  metroButton1;
	protected:
	private: MetroFramework::Controls::MetroButton^  metroButton2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: MetroFramework::Controls::MetroButton^  metroButton3;
	private: MetroFramework::Controls::MetroButton^ metroButton4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// metroButton1
			// 
			this->metroButton1->Location = System::Drawing::Point(3, 172);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(294, 82);
			this->metroButton1->TabIndex = 0;
			this->metroButton1->TabStop = false;
			this->metroButton1->Text = L"Force Feedback Setup";
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &Form1::metroButton1_Click);
			// 
			// metroButton2
			// 
			this->metroButton2->Location = System::Drawing::Point(3, 270);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(294, 82);
			this->metroButton2->TabIndex = 1;
			this->metroButton2->TabStop = false;
			this->metroButton2->Text = L"Input / Miscellaneous Setup";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &Form1::metroButton2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(294, 127);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// metroButton3
			// 
			this->metroButton3->Location = System::Drawing::Point(3, 368);
			this->metroButton3->Name = L"metroButton3";
			this->metroButton3->Size = System::Drawing::Size(294, 82);
			this->metroButton3->TabIndex = 3;
			this->metroButton3->TabStop = false;
			this->metroButton3->Text = L"Force Feedback Test";
			this->metroButton3->UseSelectable = true;
			this->metroButton3->Click += gcnew System::EventHandler(this, &Form1::metroButton3_Click);
			// 
			// metroButton4
			// 
			this->metroButton4->Location = System::Drawing::Point(3, 466);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(294, 82);
			this->metroButton4->TabIndex = 4;
			this->metroButton4->TabStop = false;
			this->metroButton4->Text = L"Setup Help";
			this->metroButton4->UseSelectable = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &Form1::metroButton4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 566);
			this->Controls->Add(this->metroButton4);
			this->Controls->Add(this->metroButton3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->metroButton2);
			this->Controls->Add(this->metroButton1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Padding = System::Windows::Forms::Padding(0, 60, 0, 0);
			this->Resizable = false;
			this->ShowIcon = false;
			this->Style = MetroFramework::MetroColorStyle::Silver;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

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
	private: System::Void metroButton1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int GameSelect = GetPrivateProfileInt(TEXT("Settings"), TEXT("GameId"), 0, TEXT(".\\FFBPlugin.ini"));
		if (GameSelect == 1)
		{
			this->Hide();
			DaytonaChampionshipUSA^ obj1 = gcnew DaytonaChampionshipUSA(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 2)
		{
			this->Hide();
			WackyRaces^ obj1 = gcnew WackyRaces(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 3)
		{
			this->Hide();
			ChaseHQ2^ obj1 = gcnew ChaseHQ2(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 4)
		{
			this->Hide();
			HOTD4^ obj1 = gcnew HOTD4(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 5)
		{
			this->Hide();
			SegaRacingClassic^ obj1 = gcnew SegaRacingClassic(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 6)
		{
			this->Hide();
			SegaRally3^ obj1 = gcnew SegaRally3(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 7 || GameSelect == 73)
		{
			this->Hide();
			FordRacing^ obj1 = gcnew FordRacing(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 8)
		{
			this->Hide();
			InitialD6^ obj1 = gcnew InitialD6(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 9 || GameSelect == 56 || GameSelect == 57)
		{
			this->Hide();
			WMMT5^ obj1 = gcnew WMMT5(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 10)
		{
			this->Hide();
			GRIDReal^ obj1 = gcnew GRIDReal(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 11)
		{
			this->Hide();
			MKGP100Custom^ obj1 = gcnew MKGP100Custom(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 12)
		{
			this->Hide();
			Outrun2^ obj1 = gcnew Outrun2(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 13)
		{
			this->Hide();
			BG4^ obj1 = gcnew BG4(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 14)
		{
			this->Hide();
			Machstorm^ obj1 = gcnew Machstorm(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 15)
		{
			this->Hide();
			AfterburnerClimax^ obj1 = gcnew AfterburnerClimax(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 16)
		{
			this->Hide();
			InitialD4^ obj1 = gcnew InitialD4(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 17)
		{
			this->Hide();
			InitialD7^ obj1 = gcnew InitialD7(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 18)
		{
			this->Hide();
			InitialD8^ obj1 = gcnew InitialD8(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 19)
		{
			this->Hide();
			PokkenTournament^ obj1 = gcnew PokkenTournament(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 20)
		{
			this->Hide();
			MKGP110Custom^ obj1 = gcnew MKGP110Custom(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 21 || GameSelect == 74)
		{
			this->Hide();
			SonicAllStars^ obj1 = gcnew SonicAllStars(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 22)
		{
			this->Hide();
			MameSelect^ obj1 = gcnew MameSelect(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 23)
		{
			this->Hide();
			InitialD5^ obj1 = gcnew InitialD5(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 24)
		{
			this->Hide();
			InitialD4Japan^ obj1 = gcnew InitialD4Japan(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 25)
		{
			this->Hide();
			M2EmulatorSelect^ obj1 = gcnew M2EmulatorSelect(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 26)
		{
			this->Hide();
			DemulSelect^ obj1 = gcnew DemulSelect(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 27)
		{
			this->Hide();
			GTIClub^ obj1 = gcnew GTIClub(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 28)
		{
			this->Hide();
			ButtonRumble^ obj1 = gcnew ButtonRumble(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 29)
		{
			this->Hide();
			RoadFighters3D^ obj1 = gcnew RoadFighters3D(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 30)
		{
			this->Hide();
			LGI3D^ obj1 = gcnew LGI3D(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 31)
		{
			this->Hide();
			LGI^ obj1 = gcnew LGI(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 32 || GameSelect == 49 || GameSelect == 67)
		{
			this->Hide();
			InitialD0^ obj1 = gcnew InitialD0(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 34)
		{
			this->Hide();
			SupermodelSelect^ obj1 = gcnew SupermodelSelect(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 35)
		{
			this->Hide();
			Outrun2^ obj1 = gcnew Outrun2(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 36)
		{
			this->Hide();
			AliensExtermination^ obj1 = gcnew AliensExtermination(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 37)
		{
			this->Hide();
			Rambo^ obj1 = gcnew Rambo(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 38)
		{
			this->Hide();
			FordRacing^ obj1 = gcnew FordRacing(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 39)
		{
			this->Hide();
			KODrive^ obj1 = gcnew KODrive(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 40)
		{
			this->Hide();
			Transformers^ obj1 = gcnew Transformers(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 41)
		{
			this->Hide();
			GoldenGun^ obj1 = gcnew GoldenGun(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 42)
		{
			this->Hide();
			DirtyDrivin^ obj1 = gcnew DirtyDrivin(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 43)
		{
			this->Hide();
			H2Overdrive^ obj1 = gcnew H2Overdrive(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 44)
		{
			this->Hide();
			SnoCross^ obj1 = gcnew SnoCross(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 45)
		{
			this->Hide();
			Batman^ obj1 = gcnew Batman(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 46)
		{
			this->Hide();
			RTuned^ obj1 = gcnew RTuned(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 47)
		{
			this->Hide();
			SegaRally3^ obj1 = gcnew SegaRally3(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 50)
		{
			this->Hide();
			SWDC2018^ obj1 = gcnew SWDC2018(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 51)
		{
			this->Hide();
			MKGPUSACustom^ obj1 = gcnew MKGPUSACustom(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 52)
		{
			this->Hide();
			WMMT6^ obj1 = gcnew WMMT6(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 53)
		{
			this->Hide();
			WMMT6R^ obj1 = gcnew WMMT6R(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 54)
		{
			this->Hide();
			StormRacerG^ obj1 = gcnew StormRacerG(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 55)
		{
			this->Hide();
			D1GPArcade^ obj1 = gcnew D1GPArcade(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 58)
		{
			this->Hide();
			CrazyTaxi^ obj1 = gcnew CrazyTaxi(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 59)
		{
			this->Hide();
			DaytonaChampionshipUSANSE^ obj1 = gcnew DaytonaChampionshipUSANSE(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 60)
		{
			this->Hide();
			FlycastEmulatorSelect^ obj1 = gcnew FlycastEmulatorSelect(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 61)
		{
			this->Hide();
			WMMT3^ obj1 = gcnew WMMT3(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 62 || GameSelect == 63)
		{
			this->Hide();
			DeadHeat^ obj1 = gcnew DeadHeat(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 64)
		{
			this->Hide();
			GaelcoTuningRace^ obj1 = gcnew GaelcoTuningRace(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 65)
		{
			this->Hide();
			TokyoCop^ obj1 = gcnew TokyoCop(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 66)
		{
			this->Hide();
			RingRiders^ obj1 = gcnew RingRiders(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 68)
		{
			this->Hide();
			MKGP118Real^ obj1 = gcnew MKGP118Real(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 69)
		{
			this->Hide();
			MKGP110Real^ obj1 = gcnew MKGP110Real(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 70)
		{
			this->Hide();
			MKGPUSAReal^ obj1 = gcnew MKGPUSAReal(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 71)
		{
			this->Hide();
			GRIDCustom^ obj1 = gcnew GRIDCustom(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 72)
		{
			this->Hide();
			MKGP118Custom^ obj1 = gcnew MKGP118Custom(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 75)
		{
			this->Hide();
			ArcticThunder^ obj1 = gcnew ArcticThunder(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 76)
		{
			this->Hide();
			CrusnBlast^ obj1 = gcnew CrusnBlast(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 77)
		{
			this->Hide();
			FNF^ obj1 = gcnew FNF(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 78)
		{
			this->Hide();
			FNFDrift^ obj1 = gcnew FNFDrift(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 79)
		{
			this->Hide();
			FNFSupercars^ obj1 = gcnew FNFSupercars(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 81)
		{
			this->Hide();
			HummerExtreme^ obj1 = gcnew HummerExtreme(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 82)
		{
			this->Hide();
			InitialDTAv231^ obj1 = gcnew InitialDTAv231(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 83)
		{
			this->Hide();
			WastelandRacers2071^ obj1 = gcnew WastelandRacers2071(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 84)
		{
			this->Hide();
			WMMT6RR^ obj1 = gcnew WMMT6RR(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 77)
		{
			this->Hide();
			FnF^ obj1 = gcnew FnF(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 78)
		{
			this->Hide();
			FnFDrift^ obj1 = gcnew FnFDrift(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 79)
		{
			this->Hide();
			FnFSuperCars^ obj1 = gcnew FnFSuperCars(this);
			obj1->ShowDialog();
		}
		else if(GameSelect == 81)
		{
			this->Hide();
			HummerExtreme^ obj1 = gcnew HummerExtreme(this);
			obj1->ShowDialog();
		} 
		else
		{
			MessageBox::Show("FFBPlugin.ini does not contain GameId or does not exist");
		}
	}
	private: System::Void metroButton2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int GameSelect = GetPrivateProfileInt(TEXT("Settings"), TEXT("GameId"), 0, TEXT(".\\FFBPlugin.ini"));
		if (GameSelect == 1)
		{
			this->Hide();
			DaytonaChampionshipUSAInput^ obj1 = gcnew DaytonaChampionshipUSAInput(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 2 || GameSelect == 4 || GameSelect == 5 || GameSelect == 6 || GameSelect == 7 || GameSelect == 8 || GameSelect == 10 || GameSelect == 11 || GameSelect == 13 || GameSelect == 14 || GameSelect == 15 || GameSelect == 16 ||
			GameSelect == 17 || GameSelect == 18 || GameSelect == 19 || GameSelect == 20 || GameSelect == 21 || GameSelect == 22 || GameSelect == 23 || GameSelect == 24 || GameSelect == 27 || GameSelect == 30 || GameSelect == 31  || GameSelect == 33 || 
			GameSelect == 34 || GameSelect == 36 || GameSelect == 37 || GameSelect == 38 || GameSelect == 39 || GameSelect == 40 || GameSelect == 41 || GameSelect == 42 || GameSelect == 43 || GameSelect == 44 || GameSelect == 45 || GameSelect == 46 || 
			GameSelect == 47 || GameSelect == 50 || GameSelect == 51 || GameSelect == 53 || GameSelect == 54 || GameSelect == 55 || GameSelect == 56 || GameSelect == 57 || GameSelect == 58 || GameSelect == 59 || GameSelect == 60 || GameSelect == 61 || 
			GameSelect == 62 || GameSelect == 63 || GameSelect == 64 || GameSelect == 65 || GameSelect == 66 || GameSelect == 68 || GameSelect == 69 || GameSelect == 70 || GameSelect == 71 || GameSelect == 72 || GameSelect == 73 || GameSelect == 74 ||
			GameSelect == 75 || GameSelect == 76 || GameSelect == 77 || GameSelect == 78 || GameSelect == 79 || GameSelect == 81 || GameSelect == 82 || GameSelect == 83 || GameSelect == 84)
		{
			this->Hide();
			StrengthInput^ obj1 = gcnew StrengthInput(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 3)
		{
			this->Hide();
			ChaseHQ2Input^ obj1 = gcnew ChaseHQ2Input(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 9)
		{
			this->Hide();
			WMMT5Input^ obj1 = gcnew WMMT5Input(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 12)
		{
			this->Hide();
			Outrun2Input^ obj1 = gcnew Outrun2Input(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 25)
		{
			this->Hide();
			M2EmulatorInput^ obj1 = gcnew M2EmulatorInput(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 26)
		{
			this->Hide();
			DemulInputSelect^ obj1 = gcnew DemulInputSelect(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 28)
		{
			this->Hide();
			ButtonRumbleInput^ obj1 = gcnew ButtonRumbleInput(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 29)
		{
			this->Hide();
			RoadFighters3DInput^ obj1 = gcnew RoadFighters3DInput(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 32 || GameSelect == 49 || GameSelect == 67)
		{
			this->Hide();
			InitialD0Input^ obj1 = gcnew InitialD0Input(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 35)
		{
			this->Hide();
			Outrun2Input^ obj1 = gcnew Outrun2Input(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 52)
		{
			this->Hide();
			WMMT6Input^ obj1 = gcnew WMMT6Input(this);
			obj1->ShowDialog();
		}
		else
		{
			MessageBox::Show("FFBPlugin.ini contains no input features or does not exist");
		}
	}
	private: System::Void metroButton3_Click(System::Object^  sender, System::EventArgs^  e) //FFB Test
	{
		this->Hide();
		FFBTest^ obj1 = gcnew FFBTest(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton4_Click(System::Object^ sender, System::EventArgs^ e) //Help
	{
		int GameSelect = GetPrivateProfileInt(TEXT("Settings"), TEXT("GameId"), 0, TEXT(".\\FFBPlugin.ini"));
		if (GameSelect == 4 || GameSelect == 12 || GameSelect == 15 || GameSelect == 16 || GameSelect == 23 || GameSelect == 24 || GameSelect == 35 || GameSelect == 37 || GameSelect == 46 || GameSelect == 64 || GameSelect == 65)
		{
			this->Hide();
			LindberghHelp^ obj1 = gcnew LindberghHelp(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 61 || GameSelect == 62 || GameSelect == 63 || GameSelect == 66 || GameSelect == 76 || GameSelect == 81)
		{
			this->Hide();
			ElfLdr2Help^ obj1 = gcnew ElfLdr2Help(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 1 || GameSelect == 2 || GameSelect == 3 || GameSelect == 5 || GameSelect == 6 || GameSelect == 7 || GameSelect == 8 || GameSelect == 9 || GameSelect == 10 || GameSelect == 11 || GameSelect == 13 ||
			GameSelect == 14 || GameSelect == 17 || GameSelect == 18 || GameSelect == 19 || GameSelect == 20 || GameSelect == 21 || GameSelect == 22 || GameSelect == 25 || GameSelect == 26 || GameSelect == 27 || GameSelect == 28 || 
			GameSelect == 29 || GameSelect == 30 || GameSelect == 31 || GameSelect == 32 || GameSelect == 33 || GameSelect == 34 || GameSelect == 36 || GameSelect == 38 || GameSelect == 39 || GameSelect == 40 || 
			GameSelect == 41 || GameSelect == 42 || GameSelect == 43 || GameSelect == 44 || GameSelect == 45 || GameSelect == 47 || GameSelect == 49 || GameSelect == 50 || GameSelect == 51 || GameSelect == 52 || GameSelect == 53 || 
			GameSelect == 54 || GameSelect == 55 || GameSelect == 56 || GameSelect == 57 || GameSelect == 58 || GameSelect == 59 || GameSelect == 60 || GameSelect == 67 || GameSelect == 68 || GameSelect == 69 || GameSelect == 70 ||
			GameSelect == 71 || GameSelect == 72 || GameSelect == 73 || GameSelect == 74 || GameSelect == 75 || GameSelect == 77 || GameSelect == 78 || GameSelect == 79 || GameSelect == 82 || GameSelect == 83 || GameSelect == 84)
		{
			this->Hide();
			Help^ obj1 = gcnew Help(this);
			obj1->ShowDialog();
		}
		else
		{
			MessageBox::Show("FFBPlugin.ini does not contain GameId or does not exist");
		}
	}
};
}