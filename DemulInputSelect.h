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

#include "DemulNascarInput.h"
#include "DemulInitialDInput.h"
#include "DemulSmashingDriveInput.h"
#include "DemulMaximumSpeedInput.h"
#include "DemulFasterThanSpeedInput.h"
#include "DemulATVTrackInput.h"

namespace FFBPluginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DemulInputSelect
	/// </summary>
	public ref class DemulInputSelect : public MetroFramework::Forms::MetroForm
	{
	public:
		DemulInputSelect(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
	private: MetroFramework::Controls::MetroButton^ metroButton4;
	private: MetroFramework::Controls::MetroButton^ metroButton5;
	private: MetroFramework::Controls::MetroButton^ metroButton6;

	public:

		MetroForm^ obj;
		DemulInputSelect(MetroForm^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DemulInputSelect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroButton^ metroButton1;
	public:

	private: MetroFramework::Controls::MetroButton^ metroButton2;
	private: MetroFramework::Controls::MetroButton^ metroButton3;
	private: MetroFramework::Controls::MetroLink^ metroLink1;


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
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton5 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton6 = (gcnew MetroFramework::Controls::MetroButton());
			this->SuspendLayout();
			// 
			// metroButton1
			// 
			this->metroButton1->Location = System::Drawing::Point(14, 64);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(216, 23);
			this->metroButton1->TabIndex = 0;
			this->metroButton1->TabStop = false;
			this->metroButton1->Text = L"Initial D Arcade Stage Games";
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &DemulInputSelect::metroButton1_Click);
			// 
			// metroButton2
			// 
			this->metroButton2->Location = System::Drawing::Point(14, 93);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(216, 23);
			this->metroButton2->TabIndex = 4;
			this->metroButton2->TabStop = false;
			this->metroButton2->Text = L"Nascar Racing";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &DemulInputSelect::metroButton2_Click);
			// 
			// metroButton3
			// 
			this->metroButton3->Location = System::Drawing::Point(254, 93);
			this->metroButton3->Name = L"metroButton3";
			this->metroButton3->Size = System::Drawing::Size(216, 23);
			this->metroButton3->TabIndex = 5;
			this->metroButton3->TabStop = false;
			this->metroButton3->Text = L"Smashing Drive";
			this->metroButton3->UseSelectable = true;
			this->metroButton3->Click += gcnew System::EventHandler(this, &DemulInputSelect::metroButton3_Click);
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
			this->metroLink1->Click += gcnew System::EventHandler(this, &DemulInputSelect::metroLink1_Click);
			// 
			// metroButton4
			// 
			this->metroButton4->Location = System::Drawing::Point(254, 64);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(216, 23);
			this->metroButton4->TabIndex = 44;
			this->metroButton4->TabStop = false;
			this->metroButton4->Text = L"Maximum Speed";
			this->metroButton4->UseSelectable = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &DemulInputSelect::metroButton4_Click);
			// 
			// metroButton5
			// 
			this->metroButton5->Location = System::Drawing::Point(254, 35);
			this->metroButton5->Name = L"metroButton5";
			this->metroButton5->Size = System::Drawing::Size(216, 23);
			this->metroButton5->TabIndex = 45;
			this->metroButton5->TabStop = false;
			this->metroButton5->Text = L"Faster Than Speed";
			this->metroButton5->UseSelectable = true;
			this->metroButton5->Click += gcnew System::EventHandler(this, &DemulInputSelect::metroButton5_Click);
			// 
			// metroButton6
			// 
			this->metroButton6->Location = System::Drawing::Point(14, 35);
			this->metroButton6->Name = L"metroButton6";
			this->metroButton6->Size = System::Drawing::Size(216, 23);
			this->metroButton6->TabIndex = 46;
			this->metroButton6->TabStop = false;
			this->metroButton6->Text = L"ATV Track";
			this->metroButton6->UseSelectable = true;
			this->metroButton6->Click += gcnew System::EventHandler(this, &DemulInputSelect::metroButton6_Click);
			// 
			// DemulInputSelect
			// 
			this->ClientSize = System::Drawing::Size(493, 132);
			this->Controls->Add(this->metroButton6);
			this->Controls->Add(this->metroButton5);
			this->Controls->Add(this->metroButton4);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroButton3);
			this->Controls->Add(this->metroButton2);
			this->Controls->Add(this->metroButton1);
			this->MaximizeBox = false;
			this->Name = L"DemulInputSelect";
			this->Resizable = false;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DemulInputSelect::Form1_FormClosing);
			this->ResumeLayout(false);

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
	
	private: System::Void metroLink1_Click(System::Object^ sender, System::EventArgs^ e) //Go Back To Previous Menu
	{
		this->Hide();
		obj->Show();
	}

	private: System::Void metroButton1_Click(System::Object^ sender, System::EventArgs^ e) //Initial D Games
	{
		this->Hide();
		DemulInitialDInput^ obj1 = gcnew DemulInitialDInput(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton2_Click(System::Object^ sender, System::EventArgs^ e) //Nascar Racing
	{
		this->Hide();
		DemulNascarInput^ obj1 = gcnew DemulNascarInput(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton3_Click(System::Object^ sender, System::EventArgs^ e) //Smashing Drive
	{
		this->Hide();
		DemulSmashingDriveInput^ obj1 = gcnew DemulSmashingDriveInput(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton4_Click(System::Object^ sender, System::EventArgs^ e) //Maximum Speed
	{
		this->Hide();
		DemulMaximumSpeedInput^ obj1 = gcnew DemulMaximumSpeedInput(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton5_Click(System::Object^ sender, System::EventArgs^ e) //Faster Than Speed
	{
		this->Hide();
		DemulFasterThanSpeedInput^ obj1 = gcnew DemulFasterThanSpeedInput(this);
		obj1->ShowDialog();
	}
	private: System::Void metroButton6_Click(System::Object^ sender, System::EventArgs^ e) //ATV Track
	{
		this->Hide();
		DemulATVTrackInput^ obj1 = gcnew DemulATVTrackInput(this);
		obj1->ShowDialog();
	}
};
}
