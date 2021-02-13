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

static SDL_Joystick* gGameController;
static SDL_Haptic* gControllerHaptic;
static int effect_id;

static int StopRumbleEffectThread(void* ptr)
{
	Sleep(2000);
	SDL_JoystickRumble(gGameController, 0, 0, 0);
	return 0;
}

static int StopRumbleTriggersEffectThread(void* ptr)
{
	Sleep(2000);
	SDL_JoystickRumbleTriggers(gGameController, 0, 0, 0);
	return 0;
}

namespace FFBPluginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FFBTest
	/// </summary>
	public ref class FFBTest : public MetroFramework::Forms::MetroForm
	{
	public:
		FFBTest(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: MetroFramework::Controls::MetroButton^ metroButton14;
	public:
	private: MetroFramework::Controls::MetroButton^ metroButton15;

	public:
	
			 MetroForm ^obj;
		FFBTest(MetroForm ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			WritePrivateProfileStringA("FFBTest", "DeviceID", "99", ".\\FFBPlugin.ini");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FFBTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroButton^  metroButton1;
	public:
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox1;
	private: MetroFramework::Controls::MetroButton^  metroButton2;
	private: MetroFramework::Controls::MetroButton^  metroButton3;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox1;
	private: MetroFramework::Controls::MetroButton^  metroButton4;
	private: MetroFramework::Controls::MetroButton^  metroButton5;
	private: MetroFramework::Controls::MetroButton^  metroButton6;
	private: MetroFramework::Controls::MetroButton^  metroButton7;
	private: MetroFramework::Controls::MetroLink^  metroLink1;
	private: MetroFramework::Controls::MetroButton^  metroButton9;
	private: MetroFramework::Controls::MetroButton^  metroButton10;
	private: MetroFramework::Controls::MetroButton^  metroButton11;
	private: MetroFramework::Controls::MetroButton^  metroButton12;
	private: MetroFramework::Controls::MetroButton^  metroButton13;
	private: MetroFramework::Controls::MetroButton^  metroButton8;

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
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroCheckBox1 = (gcnew MetroFramework::Controls::MetroCheckBox());
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
			this->SuspendLayout();
			// 
			// metroButton1
			// 
			this->metroButton1->Location = System::Drawing::Point(23, 167);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(117, 23);
			this->metroButton1->TabIndex = 0;
			this->metroButton1->TabStop = false;
			this->metroButton1->Text = L"Rumble Left Motor";
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &FFBTest::metroButton1_Click);
			// 
			// metroTextBox1
			// 
			// 
			// 
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(232, 1);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox1->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox1->CustomButton->TabIndex = 1;
			this->metroTextBox1->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox1->CustomButton->UseSelectable = true;
			this->metroTextBox1->CustomButton->Visible = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"Press Button to perform effect" };
			this->metroTextBox1->Location = System::Drawing::Point(23, 138);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ReadOnly = true;
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->SelectionLength = 0;
			this->metroTextBox1->SelectionStart = 0;
			this->metroTextBox1->ShortcutsEnabled = true;
			this->metroTextBox1->Size = System::Drawing::Size(254, 23);
			this->metroTextBox1->TabIndex = 1;
			this->metroTextBox1->TabStop = false;
			this->metroTextBox1->Text = L"Press Button to perform effect";
			this->metroTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox1->UseSelectable = true;
			this->metroTextBox1->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox1->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			this->metroTextBox1->Click += gcnew System::EventHandler(this, &FFBTest::metroTextBox1_Click);
			// 
			// metroTextBox2
			// 
			// 
			// 
			// 
			this->metroTextBox2->CustomButton->Image = nullptr;
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(232, 1);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox2->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox2->CustomButton->TabIndex = 1;
			this->metroTextBox2->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox2->CustomButton->UseSelectable = true;
			this->metroTextBox2->CustomButton->Visible = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"Device GUID" };
			this->metroTextBox2->Location = System::Drawing::Point(23, 53);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ReadOnly = true;
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->SelectionLength = 0;
			this->metroTextBox2->SelectionStart = 0;
			this->metroTextBox2->ShortcutsEnabled = true;
			this->metroTextBox2->Size = System::Drawing::Size(254, 23);
			this->metroTextBox2->TabIndex = 2;
			this->metroTextBox2->TabStop = false;
			this->metroTextBox2->Text = L"Device GUID";
			this->metroTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox2->UseSelectable = true;
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			this->metroTextBox2->Click += gcnew System::EventHandler(this, &FFBTest::metroTextBox2_Click);
			// 
			// metroComboBox1
			// 
			for (int i = 0; i < SDL_NumJoysticks(); i++)
			{
				SDL_Joystick* js1 = SDL_JoystickOpen(i);
				char buff[300];
				GetPrivateProfileStringA("Settings", "DeviceGUID", "No FFBPlugin.ini found", buff, _countof(buff), ".\\FFBPlugin.ini");
				//String^ str = gcnew String(buff);
				String^ bah1 = gcnew String(SDL_JoystickName(js1));
				//this->metroComboBox1->Text = str;
				this->metroComboBox1->Items->Add(bah1);
			}
			if (SDL_NumJoysticks() == 0)
			{
				this->metroComboBox1->Text = "SDL2 Cannot Detect Any Joystick";
			}
			this->metroComboBox1->FormattingEnabled = true;
			this->metroComboBox1->ItemHeight = 23;
			this->metroComboBox1->Location = System::Drawing::Point(23, 82);
			this->metroComboBox1->Name = L"metroComboBox1";
			this->metroComboBox1->Size = System::Drawing::Size(254, 29);
			this->metroComboBox1->TabIndex = 3;
			this->metroComboBox1->TabStop = false;
			this->metroComboBox1->UseSelectable = true;
			this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FFBTest::metroComboBox1_SelectedIndexChanged);
			// 
			// metroButton2
			// 
			this->metroButton2->Location = System::Drawing::Point(160, 167);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(117, 23);
			this->metroButton2->TabIndex = 4;
			this->metroButton2->TabStop = false;
			this->metroButton2->Text = L"Rumble Right Motor";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &FFBTest::metroButton2_Click);
			// 
			// metroButton3
			// 
			this->metroButton3->Location = System::Drawing::Point(23, 225);
			this->metroButton3->Name = L"metroButton3";
			this->metroButton3->Size = System::Drawing::Size(117, 23);
			this->metroButton3->TabIndex = 5;
			this->metroButton3->TabStop = false;
			this->metroButton3->Text = L"Constant Pull Left";
			this->metroButton3->UseSelectable = true;
			this->metroButton3->Click += gcnew System::EventHandler(this, &FFBTest::metroButton3_Click);
			// 
			// metroCheckBox1
			// 
			int AlternativeFFB = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeFFB"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox1->AutoSize = true;
			this->metroCheckBox1->Location = System::Drawing::Point(93, 117);
			this->metroCheckBox1->Name = L"metroCheckBox1";
			this->metroCheckBox1->Size = System::Drawing::Size(102, 15);
			this->metroCheckBox1->TabIndex = 6;
			this->metroCheckBox1->TabStop = false;
			this->metroCheckBox1->Text = L"Alternative FFB";
			this->metroCheckBox1->Checked = AlternativeFFB;
			this->metroCheckBox1->UseSelectable = true;
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &FFBTest::metroCheckBox1_CheckedChanged);
			// 
			// metroButton4
			// 
			this->metroButton4->Location = System::Drawing::Point(160, 225);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(117, 23);
			this->metroButton4->TabIndex = 7;
			this->metroButton4->TabStop = false;
			this->metroButton4->Text = L"Constant Pull Right";
			this->metroButton4->UseSelectable = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &FFBTest::metroButton4_Click);
			// 
			// metroButton5
			// 
			this->metroButton5->Location = System::Drawing::Point(23, 254);
			this->metroButton5->Name = L"metroButton5";
			this->metroButton5->Size = System::Drawing::Size(117, 23);
			this->metroButton5->TabIndex = 8;
			this->metroButton5->TabStop = false;
			this->metroButton5->Text = L"Sine";
			this->metroButton5->UseSelectable = true;
			this->metroButton5->Click += gcnew System::EventHandler(this, &FFBTest::metroButton5_Click);
			// 
			// metroButton6
			// 
			this->metroButton6->Location = System::Drawing::Point(160, 254);
			this->metroButton6->Name = L"metroButton6";
			this->metroButton6->Size = System::Drawing::Size(117, 23);
			this->metroButton6->TabIndex = 9;
			this->metroButton6->TabStop = false;
			this->metroButton6->Text = L"Spring";
			this->metroButton6->UseSelectable = true;
			this->metroButton6->Click += gcnew System::EventHandler(this, &FFBTest::metroButton6_Click);
			// 
			// metroButton7
			// 
			this->metroButton7->Location = System::Drawing::Point(23, 283);
			this->metroButton7->Name = L"metroButton7";
			this->metroButton7->Size = System::Drawing::Size(117, 23);
			this->metroButton7->TabIndex = 10;
			this->metroButton7->TabStop = false;
			this->metroButton7->Text = L"Friction";
			this->metroButton7->UseSelectable = true;
			this->metroButton7->Click += gcnew System::EventHandler(this, &FFBTest::metroButton7_Click);
			// 
			// metroLink1
			// 
			this->metroLink1->Location = System::Drawing::Point(60, 9);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(182, 23);
			this->metroLink1->TabIndex = 11;
			this->metroLink1->TabStop = false;
			this->metroLink1->Text = L"Go Back To Previous Menu";
			this->metroLink1->UseSelectable = true;
			this->metroLink1->Click += gcnew System::EventHandler(this, &FFBTest::metroLink1_Click);
			// 
			// metroButton8
			// 
			this->metroButton8->Location = System::Drawing::Point(160, 283);
			this->metroButton8->Name = L"metroButton8";
			this->metroButton8->Size = System::Drawing::Size(117, 23);
			this->metroButton8->TabIndex = 12;
			this->metroButton8->TabStop = false;
			this->metroButton8->Text = L"Ramp";
			this->metroButton8->UseSelectable = true;
			this->metroButton8->Click += gcnew System::EventHandler(this, &FFBTest::metroButton8_Click);
			// 
			// metroButton9
			// 
			this->metroButton9->Location = System::Drawing::Point(23, 312);
			this->metroButton9->Name = L"metroButton9";
			this->metroButton9->Size = System::Drawing::Size(117, 23);
			this->metroButton9->TabIndex = 13;
			this->metroButton9->TabStop = false;
			this->metroButton9->Text = L"SawtoothUp";
			this->metroButton9->UseSelectable = true;
			this->metroButton9->Click += gcnew System::EventHandler(this, &FFBTest::metroButton9_Click);
			// 
			// metroButton10
			// 
			this->metroButton10->Location = System::Drawing::Point(160, 312);
			this->metroButton10->Name = L"metroButton10";
			this->metroButton10->Size = System::Drawing::Size(117, 23);
			this->metroButton10->TabIndex = 14;
			this->metroButton10->TabStop = false;
			this->metroButton10->Text = L"SawtoothDown";
			this->metroButton10->UseSelectable = true;
			this->metroButton10->Click += gcnew System::EventHandler(this, &FFBTest::metroButton10_Click);
			// 
			// metroButton11
			// 
			this->metroButton11->Location = System::Drawing::Point(23, 341);
			this->metroButton11->Name = L"metroButton11";
			this->metroButton11->Size = System::Drawing::Size(117, 23);
			this->metroButton11->TabIndex = 15;
			this->metroButton11->TabStop = false;
			this->metroButton11->Text = L"Inertia";
			this->metroButton11->UseSelectable = true;
			this->metroButton11->Click += gcnew System::EventHandler(this, &FFBTest::metroButton11_Click);
			// 
			// metroButton12
			// 
			this->metroButton12->Location = System::Drawing::Point(160, 341);
			this->metroButton12->Name = L"metroButton12";
			this->metroButton12->Size = System::Drawing::Size(117, 23);
			this->metroButton12->TabIndex = 16;
			this->metroButton12->TabStop = false;
			this->metroButton12->Text = L"Damper";
			this->metroButton12->UseSelectable = true;
			this->metroButton12->Click += gcnew System::EventHandler(this, &FFBTest::metroButton12_Click);
			// 
			// metroButton13
			// 
			this->metroButton13->Location = System::Drawing::Point(23, 370);
			this->metroButton13->Name = L"metroButton13";
			this->metroButton13->Size = System::Drawing::Size(117, 23);
			this->metroButton13->TabIndex = 17;
			this->metroButton13->TabStop = false;
			this->metroButton13->Text = L"Triangle";
			this->metroButton13->UseSelectable = true;
			this->metroButton13->Click += gcnew System::EventHandler(this, &FFBTest::metroButton13_Click);
			// 
			// metroButton14
			// 
			this->metroButton14->Location = System::Drawing::Point(23, 196);
			this->metroButton14->Name = L"metroButton14";
			this->metroButton14->Size = System::Drawing::Size(117, 23);
			this->metroButton14->TabIndex = 18;
			this->metroButton14->TabStop = false;
			this->metroButton14->Text = L"Rumble Left Trigger";
			this->metroButton14->UseSelectable = true;
			this->metroButton14->Click += gcnew System::EventHandler(this, &FFBTest::metroButton14_Click);
			// 
			// metroButton15
			// 
			this->metroButton15->Location = System::Drawing::Point(160, 196);
			this->metroButton15->Name = L"metroButton15";
			this->metroButton15->Size = System::Drawing::Size(117, 23);
			this->metroButton15->TabIndex = 19;
			this->metroButton15->TabStop = false;
			this->metroButton15->Text = L"Rumble Right Trigger";
			this->metroButton15->UseSelectable = true;
			this->metroButton15->Click += gcnew System::EventHandler(this, &FFBTest::metroButton15_Click);
			// 
			// FFBTest
			// 
			this->ClientSize = System::Drawing::Size(300, 406);
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
			this->Controls->Add(this->metroCheckBox1);
			this->Controls->Add(this->metroButton3);
			this->Controls->Add(this->metroButton2);
			this->Controls->Add(this->metroComboBox1);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroTextBox1);
			this->Controls->Add(this->metroButton1);
			this->MaximizeBox = false;
			this->Name = L"FFBTest";
			this->Resizable = false;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FFBTest::Form1_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		if (e->CloseReason == CloseReason::UserClosing)
		{
			SDL_JoystickRumble(gGameController, 0, 0, 0);
			SDL_JoystickRumbleTriggers(gGameController, 0, 0, 0);
			SDL_HapticStopAll(gControllerHaptic);
			SDL_HapticClose(gControllerHaptic);
			SDL_Quit();
			WritePrivateProfileStringA("FFBTest", NULL, "", ".\\FFBPlugin.ini");
			Application::Exit();
		}
	}
	private: System::Void metroTextBox2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void metroComboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "0", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "1", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "2", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "3", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "4", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "5", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "6", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "7", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "8", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "9", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "10", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "11", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "12", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "13", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "14", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "15", ".\\FFBPlugin.ini");
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
				WritePrivateProfileStringA("FFBTest", "DeviceID", "16", ".\\FFBPlugin.ini");
			}
		}
	}
	private: System::Void metroCheckBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Alternative FFB
	{
		{
			if (metroCheckBox1->Checked)
			{
				WritePrivateProfileString(TEXT("Settings"), TEXT("AlternativeFFB"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
			}
			else
			{
				WritePrivateProfileString(TEXT("Settings"), TEXT("AlternativeFFB"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
			}
		}
	}
	private: System::Void metroTextBox1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void metroButton1_Click(System::Object^ sender, System::EventArgs^ e) //Rumble Left Motor
	{
		int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
		gGameController = SDL_JoystickOpen(DeviceID);
		if (gGameController == NULL)
		{
			MessageBox::Show("Warning: Unable to open game controller!");
		}
		else
		{
			int RumbleLeftMotor = SDL_JoystickRumble(gGameController, 0xFFFF, 0, 1);
			if (RumbleLeftMotor == -1)
			{
				MessageBox::Show("Warning: Controller does not support Rumble!");
			}
			else
			{
				SDL_Thread* StopRumblethread = SDL_CreateThread(StopRumbleEffectThread, "StopRumbleEffectThread", (void*)NULL);
			}
		}
	}			
	private: System::Void metroButton2_Click(System::Object^  sender, System::EventArgs^  e) //Rumble Right Motor
	{
		int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
		gGameController = SDL_JoystickOpen(DeviceID);
		if (gGameController == NULL)
		{
			MessageBox::Show("Warning: Unable to open game controller!");
		}
		else
		{
			int RumbleLeftMotor = SDL_JoystickRumble(gGameController, 0, 0xFFFF, 1);
			if (RumbleLeftMotor == -1)
			{
				MessageBox::Show("Warning: Controller does not support Rumble!");
			}
			else
			{
				SDL_Thread* StopRumblethread = SDL_CreateThread(StopRumbleEffectThread, "StopRumbleEffectThread", (void*)NULL);
			}
		}
	}
	private: System::Void metroButton3_Click(System::Object^  sender, System::EventArgs^  e) //Constant Left
	{
		int AlternativeFFB = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeFFB"), 0, TEXT(".\\FFBPlugin.ini"));
		int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
		gGameController = SDL_JoystickOpen(DeviceID);
		if (gGameController == NULL)
		{
			MessageBox::Show("Warning: Unable to open game controller!");
		}
		else
		{
			//Get controller haptic device
			gControllerHaptic = SDL_HapticOpenFromJoystick(gGameController);
			if (gControllerHaptic == NULL)
			{
				MessageBox::Show("Warning: Controller does not support haptics!");
			}
		}
		SDL_HapticEffect tempEffect;
		SDL_memset(&tempEffect, 0, sizeof(SDL_HapticEffect));
		tempEffect.type = SDL_HAPTIC_CONSTANT;
		tempEffect.constant.direction.type = SDL_HAPTIC_CARTESIAN;
		tempEffect.constant.direction.dir[0] = 1;
		tempEffect.constant.length = 500;
		tempEffect.constant.delay = 0;
		tempEffect.constant.level = 8000;
		effect_id = SDL_HapticNewEffect(gControllerHaptic, &tempEffect);
		SDL_HapticRunEffect(gControllerHaptic, effect_id, 1);
	}
	private: System::Void metroButton4_Click(System::Object^  sender, System::EventArgs^  e) //Constant Right
	{
		int AlternativeFFB = GetPrivateProfileInt(TEXT("Settings"), TEXT("AlternativeFFB"), 0, TEXT(".\\FFBPlugin.ini"));
		int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
		gGameController = SDL_JoystickOpen(DeviceID);
		if (gGameController == NULL)
		{
			MessageBox::Show("Warning: Unable to open game controller!");
		}
		else
		{
			//Get controller haptic device
			gControllerHaptic = SDL_HapticOpenFromJoystick(gGameController);
			if (gControllerHaptic == NULL)
			{
				MessageBox::Show("Warning: Controller does not support haptics!");
			}
		}
		SDL_HapticEffect tempEffect;
		SDL_memset(&tempEffect, 0, sizeof(SDL_HapticEffect));
		tempEffect.type = SDL_HAPTIC_CONSTANT;
		tempEffect.constant.direction.type = SDL_HAPTIC_CARTESIAN;
		tempEffect.constant.length = 500;
		tempEffect.constant.delay = 0;
		tempEffect.constant.direction.dir[0] = -1;
		if (AlternativeFFB == 1)
		{
			tempEffect.constant.level = -8000;
		}
		else
		{
			tempEffect.constant.level = 8000;
		}
		effect_id = SDL_HapticNewEffect(gControllerHaptic, &tempEffect);
		SDL_HapticRunEffect(gControllerHaptic, effect_id, 1);
	}
	private: System::Void metroButton5_Click(System::Object^  sender, System::EventArgs^  e) //Sine
	{
		int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
		gGameController = SDL_JoystickOpen(DeviceID);
		if (gGameController == NULL)
		{
			MessageBox::Show("Warning: Unable to open game controller!");
		}
		else
		{
			//Get controller haptic device
			gControllerHaptic = SDL_HapticOpenFromJoystick(gGameController);
			if (gControllerHaptic == NULL)
			{
				MessageBox::Show("Warning: Controller does not support haptics!");
			}
		}
		SDL_HapticEffect tempEffect;
		SDL_memset(&tempEffect, 0, sizeof(SDL_HapticEffect));
		tempEffect.type = SDL_HAPTIC_SINE;
		tempEffect.periodic.direction.type = SDL_HAPTIC_CARTESIAN;
		tempEffect.periodic.direction.dir[0] = 1;
		tempEffect.constant.direction.dir[1] = 0; //Y Position
		tempEffect.periodic.period = 100;
		tempEffect.periodic.magnitude = 9000;
		tempEffect.periodic.length = 2000;
		tempEffect.periodic.attack_length = 120;
		tempEffect.periodic.fade_length = 120;
		effect_id = SDL_HapticNewEffect(gControllerHaptic, &tempEffect);
		SDL_HapticRunEffect(gControllerHaptic, effect_id, 1);
	}
	private: System::Void metroButton6_Click(System::Object^  sender, System::EventArgs^  e) //Spring
	{
		int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
		gGameController = SDL_JoystickOpen(DeviceID);
		if (gGameController == NULL)
		{
			MessageBox::Show("Warning: Unable to open game controller!");
		}
		else
		{
			//Get controller haptic device
			gControllerHaptic = SDL_HapticOpenFromJoystick(gGameController);
			if (gControllerHaptic == NULL)
			{
				MessageBox::Show("Warning: Controller does not support haptics!");
			}
		}
		SDL_HapticEffect tempEffect;
		SDL_memset(&tempEffect, 0, sizeof(SDL_HapticEffect));
		tempEffect.type = SDL_HAPTIC_SPRING;
		tempEffect.condition.type = SDL_HAPTIC_SPRING;
		tempEffect.condition.direction.type = SDL_HAPTIC_CARTESIAN;
		tempEffect.condition.delay = 0;
		tempEffect.condition.length = 5000;
		tempEffect.condition.direction.dir[0] = 1;
		tempEffect.constant.direction.dir[1] = 1; //Y Position
		tempEffect.condition.left_coeff[0] = (short)(30000);
		tempEffect.condition.right_coeff[0] = (short)(30000);
		tempEffect.condition.left_sat[0] = (short)(30000) * 10; //Needed for Logitech G920 wheel
		tempEffect.condition.right_sat[0] = (short)(30000) * 10; //Needed for Logitech G920 wheel
		tempEffect.condition.center[0] = 0;
		effect_id = SDL_HapticNewEffect(gControllerHaptic, &tempEffect);
		SDL_HapticRunEffect(gControllerHaptic, effect_id, 1);
	}
	private: System::Void metroButton7_Click(System::Object^  sender, System::EventArgs^  e) //Friction
	{
		int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
		gGameController = SDL_JoystickOpen(DeviceID);
		if (gGameController == NULL)
		{
			MessageBox::Show("Warning: Unable to open game controller!");
		}
		else
		{
			//Get controller haptic device
			gControllerHaptic = SDL_HapticOpenFromJoystick(gGameController);
			if (gControllerHaptic == NULL)
			{
				MessageBox::Show("Warning: Controller does not support haptics!");
			}
		}
		SDL_HapticEffect tempEffect;
		SDL_memset(&tempEffect, 0, sizeof(SDL_HapticEffect));
		tempEffect.type = SDL_HAPTIC_FRICTION;
		tempEffect.condition.type = SDL_HAPTIC_FRICTION;
		tempEffect.condition.direction.type = SDL_HAPTIC_CARTESIAN;
		tempEffect.condition.delay = 0;
		tempEffect.condition.length = 5000;
		tempEffect.condition.direction.dir[0] = 1; // not used
		tempEffect.constant.direction.dir[1] = 0; //Y Position
		tempEffect.condition.left_sat[0] = 0xFFFF;
		tempEffect.condition.right_sat[0] = 0xFFFF;
		tempEffect.condition.left_coeff[0] = 32767.0;
		tempEffect.condition.right_coeff[0] = 32767.0;
		effect_id = SDL_HapticNewEffect(gControllerHaptic, &tempEffect);
		SDL_HapticRunEffect(gControllerHaptic, effect_id, 1);
	}
	private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) //Go Back To Previous Menu
	{
		WritePrivateProfileStringA("FFBTest", NULL, "", ".\\FFBPlugin.ini");
		SDL_HapticStopAll(gControllerHaptic);
		SDL_HapticClose(gControllerHaptic);
		this->Hide();
		obj->Show();
	}
	private: System::Void metroButton8_Click(System::Object^  sender, System::EventArgs^  e) //Ramp
	{
			int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
			gGameController = SDL_JoystickOpen(DeviceID);
			if (gGameController == NULL)
			{
				MessageBox::Show("Warning: Unable to open game controller!");
			}
			else
			{
				//Get controller haptic device
				gControllerHaptic = SDL_HapticOpenFromJoystick(gGameController);
				if (gControllerHaptic == NULL)
				{
					MessageBox::Show("Warning: Controller does not support haptics!");
				}
			}
			SDL_HapticEffect tempEffect;
			SDL_memset(&tempEffect, 0, sizeof(SDL_HapticEffect));
			tempEffect.type = SDL_HAPTIC_RAMP;
			tempEffect.ramp.type = SDL_HAPTIC_RAMP;
			tempEffect.ramp.direction.type = SDL_HAPTIC_CARTESIAN;
			tempEffect.ramp.delay = 0;
			tempEffect.ramp.length = 8000;
			tempEffect.ramp.start = 0x4000;
			tempEffect.ramp.end = -0x4000;
			effect_id = SDL_HapticNewEffect(gControllerHaptic, &tempEffect);
			SDL_HapticRunEffect(gControllerHaptic, effect_id, 1);
	}
	private: System::Void metroButton9_Click(System::Object^  sender, System::EventArgs^  e) //SawtoothUp
	{
			int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
			gGameController = SDL_JoystickOpen(DeviceID);
			if (gGameController == NULL)
			{
				MessageBox::Show("Warning: Unable to open game controller!");
			}
			else
			{
				//Get controller haptic device
				gControllerHaptic = SDL_HapticOpenFromJoystick(gGameController);
				if (gControllerHaptic == NULL)
				{
					MessageBox::Show("Warning: Controller does not support haptics!");
				}
			}
			SDL_HapticEffect tempEffect;
			SDL_memset(&tempEffect, 0, sizeof(SDL_HapticEffect));
			tempEffect.type = SDL_HAPTIC_SAWTOOTHUP;
			tempEffect.condition.type = SDL_HAPTIC_SAWTOOTHUP;
			tempEffect.condition.direction.type = SDL_HAPTIC_CARTESIAN;
			tempEffect.periodic.period = 500;
			tempEffect.periodic.magnitude = 0x5000;
			tempEffect.periodic.length = 5000;
			tempEffect.periodic.attack_length = 1000;
			tempEffect.periodic.fade_length = 1000;
			effect_id = SDL_HapticNewEffect(gControllerHaptic, &tempEffect);
			SDL_HapticRunEffect(gControllerHaptic, effect_id, 1);
	}
	private: System::Void metroButton10_Click(System::Object^  sender, System::EventArgs^  e) //SawtoothDown
	{
			int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
			gGameController = SDL_JoystickOpen(DeviceID);
			if (gGameController == NULL)
			{
				MessageBox::Show("Warning: Unable to open game controller!");
			}
			else
			{
				//Get controller haptic device
				gControllerHaptic = SDL_HapticOpenFromJoystick(gGameController);
				if (gControllerHaptic == NULL)
				{
					MessageBox::Show("Warning: Controller does not support haptics!");
				}
			}
			SDL_HapticEffect tempEffect;
			SDL_memset(&tempEffect, 0, sizeof(SDL_HapticEffect));
			tempEffect.type = SDL_HAPTIC_SAWTOOTHDOWN;
			tempEffect.condition.type = SDL_HAPTIC_SAWTOOTHDOWN;
			tempEffect.condition.direction.type = SDL_HAPTIC_CARTESIAN;
			tempEffect.periodic.period = 500;
			tempEffect.periodic.magnitude = 0x5000;
			tempEffect.periodic.length = 5000;
			tempEffect.periodic.attack_length = 1000;
			tempEffect.periodic.fade_length = 1000;
			effect_id = SDL_HapticNewEffect(gControllerHaptic, &tempEffect);
			SDL_HapticRunEffect(gControllerHaptic, effect_id, 1);
	}
	private: System::Void metroButton11_Click(System::Object^  sender, System::EventArgs^  e)//Inertia
	{
			int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
			gGameController = SDL_JoystickOpen(DeviceID);
			if (gGameController == NULL)
			{
				MessageBox::Show("Warning: Unable to open game controller!");
			}
			else
			{
				//Get controller haptic device
				gControllerHaptic = SDL_HapticOpenFromJoystick(gGameController);
				if (gControllerHaptic == NULL)
				{
					MessageBox::Show("Warning: Controller does not support haptics!");
				}
			}
			SDL_HapticEffect tempEffect;
			SDL_memset(&tempEffect, 0, sizeof(SDL_HapticEffect));
			tempEffect.type = SDL_HAPTIC_INERTIA;
			tempEffect.condition.type = SDL_HAPTIC_INERTIA;
			tempEffect.condition.direction.type = SDL_HAPTIC_CARTESIAN;
			tempEffect.condition.delay = 0;
			tempEffect.condition.length = 5000;
			tempEffect.condition.direction.dir[0] = 1; // not used
			tempEffect.constant.direction.dir[1] = 0; //Y Position
			tempEffect.condition.left_sat[0] = 0xFFFF;
			tempEffect.condition.right_sat[0] = 0xFFFF;
			tempEffect.condition.left_coeff[0] = 32767.0;
			tempEffect.condition.right_coeff[0] = 32767.0;
			effect_id = SDL_HapticNewEffect(gControllerHaptic, &tempEffect);
			SDL_HapticRunEffect(gControllerHaptic, effect_id, 1);
	}
	private: System::Void metroButton12_Click(System::Object^  sender, System::EventArgs^  e) //Damper
	{
			int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
			gGameController = SDL_JoystickOpen(DeviceID);
			if (gGameController == NULL)
			{
				MessageBox::Show("Warning: Unable to open game controller!");
			}
			else
			{
				//Get controller haptic device
				gControllerHaptic = SDL_HapticOpenFromJoystick(gGameController);
				if (gControllerHaptic == NULL)
				{
					MessageBox::Show("Warning: Controller does not support haptics!");
				}
			}
			SDL_HapticEffect tempEffect;
			SDL_memset(&tempEffect, 0, sizeof(SDL_HapticEffect));
			tempEffect.type = SDL_HAPTIC_DAMPER;
			tempEffect.condition.type = SDL_HAPTIC_DAMPER;
			tempEffect.condition.direction.type = SDL_HAPTIC_CARTESIAN;
			tempEffect.condition.delay = 0;
			tempEffect.condition.length = 5000;
			tempEffect.condition.direction.dir[0] = 1; // not used
			tempEffect.constant.direction.dir[1] = 0; //Y Position
			tempEffect.condition.left_sat[0] = 0xFFFF;
			tempEffect.condition.right_sat[0] = 0xFFFF;
			tempEffect.condition.left_coeff[0] = 32767.0;
			tempEffect.condition.right_coeff[0] = 32767.0;
			effect_id = SDL_HapticNewEffect(gControllerHaptic, &tempEffect);
			SDL_HapticRunEffect(gControllerHaptic, effect_id, 1);
	}
	private: System::Void metroButton13_Click(System::Object^  sender, System::EventArgs^  e)//Triangle
	{
		int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
		gGameController = SDL_JoystickOpen(DeviceID);
		if (gGameController == NULL)
		{
			MessageBox::Show("Warning: Unable to open game controller!");
		}
		else
		{
			//Get controller haptic device
			gControllerHaptic = SDL_HapticOpenFromJoystick(gGameController);
			if (gControllerHaptic == NULL)
			{
				MessageBox::Show("Warning: Controller does not support haptics!");
			}
		}
		SDL_HapticEffect tempEffect;
		SDL_memset(&tempEffect, 0, sizeof(SDL_HapticEffect));
		tempEffect.type = SDL_HAPTIC_TRIANGLE;
		tempEffect.condition.type = SDL_HAPTIC_TRIANGLE;
		tempEffect.condition.direction.type = SDL_HAPTIC_CARTESIAN;
		tempEffect.periodic.period = 500;
		tempEffect.periodic.magnitude = 0x5000;
		tempEffect.periodic.length = 5000;
		tempEffect.periodic.attack_length = 1000;
		tempEffect.periodic.fade_length = 1000;
		effect_id = SDL_HapticNewEffect(gControllerHaptic, &tempEffect);
		SDL_HapticRunEffect(gControllerHaptic, effect_id, 1);
	}
	private: System::Void metroButton14_Click(System::Object^ sender, System::EventArgs^ e) //Left Trigger Rumble
	{
		int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
		gGameController = SDL_JoystickOpen(DeviceID);
		if (gGameController == NULL)
		{
			MessageBox::Show("Warning: Unable to open game controller!");
		}
		else
		{
			int RumbleLeftMotor = SDL_JoystickRumbleTriggers(gGameController, 0x3FFF, 0, 1);
			if (RumbleLeftMotor == -1)
			{
				MessageBox::Show("Warning: Controller does not support Rumble Triggers!");
			}
			else
			{
				SDL_Thread* StopRumbleTriggersthread = SDL_CreateThread(StopRumbleTriggersEffectThread, "StopRumbleTriggersEffectThread", (void*)NULL);
			}
		}
	}
	private: System::Void metroButton15_Click(System::Object^ sender, System::EventArgs^ e) //Right Trigger Rumble
	{
		int DeviceID = GetPrivateProfileInt(TEXT("FFBTest"), TEXT("DeviceID"), 0, TEXT(".\\FFBPlugin.ini"));
		gGameController = SDL_JoystickOpen(DeviceID);
		if (gGameController == NULL)
		{
			MessageBox::Show("Warning: Unable to open game controller!");
		}
		else
		{
			int RumbleLeftMotor = SDL_JoystickRumbleTriggers(gGameController, 0, 0x3FFF, 1);
			if (RumbleLeftMotor == -1)
			{
				MessageBox::Show("Warning: Controller does not support Rumble Triggers!");
			}
			else
			{
				SDL_Thread* StopRumbleTriggersthread = SDL_CreateThread(StopRumbleTriggersEffectThread, "StopRumbleTriggersEffectThread", (void*)NULL);
			}
		}
	}
};
}
