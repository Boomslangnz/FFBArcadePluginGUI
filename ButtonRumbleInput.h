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
#include "Helper.h"

namespace FFBPluginGUI {

	public ref class ButtonRumbleInput : Helper
	{
	public:
		ButtonRumbleInput(MetroForm ^obj1)
		{
			this->obj = obj1;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddLongTextBox(L"FFB Dynamic Strength Adjustment", L"");

			this->AutoAddShortCheckBox("EnableFFBStrengthDynamicAdjustment", L"Enable Adjustment", L"Enable to modify strength while playing");
			this->AutoAddShortCheckBox("EnableFFBStrengthPersistence", L"Enable To Make Persistent", L"Enable to save adjusment permanently");
			this->AutoAddShortCheckBox("EnableFFBStrengthTextToSpeech", L"Enable Text To Speech", L"Enable to hear strength via speaker");

			this->AutoAddShortTrackBarBlock("StepFFBStrength", L"Step FFB Strength", 0, 100, L"Set how far strength changes each button press");

			this->New2ColsPage();

			this->AddTextBox(L"Set or remove button configuration below", this->leftColX, this->minPosY, (2 * this->longWidth) + (2 * this->margin), this->textBoxHeight, L"Select Input then move or press Axis or Button");

			this->leftColPosY = this->minPosY + this->textBoxOuterHeight;

			this->AutoAddShortTextBox(L"Device 1 Select Input", L"Button names for device 1, click below to set input for device 1");
			this->AutoAddShortTextBox(L"Button Number", L"Button number set in FFBPlugin.ini for device 1");

			this->AutoAddLongInputSelect("Button", "Button1Rumble", L"Button 1");
			this->AutoAddLongInputSelect("Button", "Button2Rumble", L"Button 2");
			this->AutoAddLongInputSelect("Button", "Button3Rumble", L"Button 3");
			this->AutoAddLongInputSelect("Button", "Button4Rumble", L"Button 4");
			this->AutoAddLongInputSelect("Button", "Button5Rumble", L"Button 5");
			this->AutoAddLongInputSelect("Button", "Button6Rumble", L"Button 6");
			this->AutoAddLongInputSelect("Button", "Button7Rumble", L"Button 7");
			this->AutoAddLongInputSelect("Button", "Button8Rumble", L"Button 8");
			this->AutoAddLongInputSelect("Button", "Button9Rumble", L"Button 9");
			this->AutoAddLongInputSelect("Button", "Button10Rumble", L"Button 10");
			this->AutoAddLongInputSelect("Button", "IncreaseFFBStrength", L"Increase FFB Strength");
			this->AutoAddLongInputSelect("Button", "DecreaseFFBStrength", L"Decrease FFB Strength");
			this->AutoAddLongInputSelect("Button", "ResetFFBStrength", L"Reset FFB Strength");

			this->New2ColsPage();

			this->leftColPosY = this->minPosY + this->textBoxOuterHeight;

			this->AutoAddShortTextBox(L"Device 2 Select Input", L"Button names for device 2, click below to set input for device 2");
			this->AutoAddShortTextBox(L"Button Number", L"Button number set in FFBPlugin.ini for device 2");

			this->AutoAddLongInputSelect("Button", "Button1Device2Rumble", L"Button 1");
			this->AutoAddLongInputSelect("Button", "Button2Device2Rumble", L"Button 2");
			this->AutoAddLongInputSelect("Button", "Button3Device2Rumble", L"Button 3");
			this->AutoAddLongInputSelect("Button", "Button4Device2Rumble", L"Button 4");
			this->AutoAddLongInputSelect("Button", "Button5Device2Rumble", L"Button 5");
			this->AutoAddLongInputSelect("Button", "Button6Device2Rumble", L"Button 6");
			this->AutoAddLongInputSelect("Button", "Button7Device2Rumble", L"Button 7");
			this->AutoAddLongInputSelect("Button", "Button8Device2Rumble", L"Button 8");
			this->AutoAddLongInputSelect("Button", "Button9Device2Rumble", L"Button 9");
			this->AutoAddLongInputSelect("Button", "Button10Device2Rumble", L"Button 10");

			this->Init();
		}
	};
}
