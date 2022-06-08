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

namespace FFBPluginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LindberghHelp
	/// </summary>
	public ref class ElfLdr2Help : public MetroFramework::Forms::MetroForm
	{
	public:
		ElfLdr2Help(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox2;
	private: MetroFramework::Controls::MetroComboBox^ metroComboBox1;
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox3;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox2;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox3;
	private: MetroFramework::Controls::MetroCheckBox^ metroCheckBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;



	public:

		MetroForm^ obj;
		ElfLdr2Help(MetroForm^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ElfLdr2Help()
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
	private: MetroFramework::Controls::MetroLink^ metroLink1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ElfLdr2Help::typeid));
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
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
			this->metroLink1->Click += gcnew System::EventHandler(this, &ElfLdr2Help::metroLink1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->HideSelection = false;
			this->richTextBox1->Location = System::Drawing::Point(23, 35);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(447, 354);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->TabStop = false;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// ElfLdr2Help
			// 
			this->ClientSize = System::Drawing::Size(493, 411);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->metroLink1);
			this->MaximizeBox = false;
			this->Name = L"ElfLdr2Help";
			this->Resizable = false;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ElfLdr2Help::Form1_FormClosing);
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
	};
}
