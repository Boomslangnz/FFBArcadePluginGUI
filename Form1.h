#pragma once
#include <Windows.h>
#include <string>
#include "AfterburnerClimax.h"
#include "BG4.h"
#include "ButtonRumble.h"
#include "ButtonRumbleInput.h"
#include "ChaseHQ2.h"
#include "DaytonaChampionshipUSA.h"
#include "DaytonaChampionshipUSAInput.h"
#include "FFBTest.h"
#include "FordRacing.h"
#include "GTIClub.h"
#include "InitialD4.h"
#include "InitialD4Japan.h"
#include "InitialD5.h"
#include "InitialD6.h"
#include "InitialD7.h"
#include "InitialD8.h"
#include "LGI.h"
#include "LGI3D.h"
#include "M2Emulator.h"
#include "M2EmulatorInput.h"
#include "Machstorm.h"
#include "Mame0199.h"
#include "Mame0206.h"
#include "MKGP100.h"
#include "MKGP110.h"
#include "NascarRacing.h"
#include "Outrun2.h"
#include "Outrun2Input.h"
#include "PokkenTournament.h"
#include "RoadFighters3D.h"
#include "RoadFighters3DInput.h"
#include "SegaRacingClassic.h"
#include "SegaRally3.h"
#include "SonicAllStars.h"
#include "WackyRaces.h"
#include "WMMT5.h"

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 471);
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
			Mame0199^ obj1 = gcnew Mame0199(this);
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
		else if (GameSelect == 7)
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
		else if (GameSelect == 9)
		{
			this->Hide();
			WMMT5^ obj1 = gcnew WMMT5(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 11)
		{
			this->Hide();
			MKGP100^ obj1 = gcnew MKGP100(this);
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
			MKGP110^ obj1 = gcnew MKGP110(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 21)
		{
			this->Hide();
			SonicAllStars^ obj1 = gcnew SonicAllStars(this);
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
			M2Emulator^ obj1 = gcnew M2Emulator(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 26)
		{
			this->Hide();
			NascarRacing^ obj1 = gcnew NascarRacing(this);
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
		else if (GameSelect == 32)
		{
			this->Hide();
			Mame0206^ obj1 = gcnew Mame0206(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 33)
		{
			this->Hide();
			Mame0206^ obj1 = gcnew Mame0206(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 34)
		{
			this->Hide();
			Mame0199^ obj1 = gcnew Mame0199(this);
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
			ButtonRumble^ obj1 = gcnew ButtonRumble(this);
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
		else if (GameSelect == 2)
		{
			MessageBox::Show("Wacky Races contains no input features");
		}
		else if (GameSelect == 3)
		{
			MessageBox::Show("ChaseHQ2 contains no input features");
		}
		else if (GameSelect == 4)
		{
			MessageBox::Show("Mame 0.199 contains no input features");
		}
		else if (GameSelect == 5)
		{
			MessageBox::Show("Sega Racing Classic contains no input features");
		}
		else if (GameSelect == 6)
		{
			MessageBox::Show("Sega Rally 3 contains no input features");
		}
		else if (GameSelect == 7)
		{
			MessageBox::Show("Ford Racing contains no input features");
		}
		else if (GameSelect == 8)
		{
			MessageBox::Show("Initial D6 contains no input features");
		}
		else if (GameSelect == 9)
		{
			MessageBox::Show("WMMT5 contains no input features");
		}
		else if (GameSelect == 11)
		{
			MessageBox::Show("Mario Kart GP DX 1.00 contains no input features");
		}
		else if (GameSelect == 12)
		{
			this->Hide();
			Outrun2Input^ obj1 = gcnew Outrun2Input(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 13)
		{
			MessageBox::Show("Battle Gear 4 contains no input features");
		}
		else if (GameSelect == 14)
		{
			MessageBox::Show("Machstorm contains no input features");
		}
		else if (GameSelect == 15)
		{
			MessageBox::Show("Afterburner Climax contains no input features");
		}
		else if (GameSelect == 16)
		{
			MessageBox::Show("Initial D4 contains no input features");
		}
		else if (GameSelect == 17)
		{
			MessageBox::Show("Initial D7 contains no input features");
		}
		else if (GameSelect == 18)
		{
			MessageBox::Show("Initial D8 contains no input features");
		}
		else if (GameSelect == 19)
		{
			MessageBox::Show("Pokken Tournament contains no input features");
		}
		else if (GameSelect == 20)
		{
			MessageBox::Show("Mario Kart GP DX 1.10 contains no input features");
		}
		else if (GameSelect == 21)
		{
			MessageBox::Show("Sonic & Sega All Star Racing contains no input features");
		}
		else if (GameSelect == 23)
		{
			MessageBox::Show("Initial D5 contains no input features");
		}
		else if (GameSelect == 24)
		{
			MessageBox::Show("Initial D4 Japan contains no input features");
		}
		else if (GameSelect == 25)
		{
			this->Hide();
			M2EmulatorInput^ obj1 = gcnew M2EmulatorInput(this);
			obj1->ShowDialog();
		}
		else if (GameSelect == 26)
		{
			MessageBox::Show("Nascar Racing contains no input features");
		}
		else if (GameSelect == 27)
		{
			MessageBox::Show("GTI Club Supermini Festa contains no input features");
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
		else if (GameSelect == 30)
		{
			MessageBox::Show("Lets go island 3D contains no input features");
		}
		else if (GameSelect == 31)
		{
		MessageBox::Show("Lets go island contains no input features");
		}
		else if (GameSelect == 32)
		{
		MessageBox::Show("Mame 0.206 contains no input features");
		}
		else if (GameSelect == 33)
		{
		MessageBox::Show("Mame 0.206 contains no input features");
		}
		else if (GameSelect == 34)
		{
		MessageBox::Show("Mame 0.199 contains no input features");
		}
		else if (GameSelect == 35)
		{
		this->Hide();
		Outrun2Input^ obj1 = gcnew Outrun2Input(this);
		obj1->ShowDialog();
		}
		else if (GameSelect == 36)
		{
			this->Hide();
			ButtonRumbleInput^ obj1 = gcnew ButtonRumbleInput(this);
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
};
}