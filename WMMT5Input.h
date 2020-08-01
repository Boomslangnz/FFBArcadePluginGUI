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
#include "Helper.h"

namespace FFBPluginGUI {

	public ref class WMMT5Input : Helper
	{
	public:
		WMMT5Input(MetroForm^ obj)
		{
			this->obj = obj;
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

			this->AutoAddLongTextBox(L"Game Options", L"");

			this->AutoAddLongCheckBox("ForceFullTune", L"Force Full Tune", L"Forces full tune if you select a car which is not already fully tuned");
			this->AutoAddLongCheckBox("DisableRaceTimer", L"Disable Race Timer", L"");
			this->AutoAddLongCheckBox("EnableForceFinish", L"Enable Force Finish", L"Enable the option to end the race\n(with a win if you are leading, a lose if not)\nby pressing the button configured below");
			this->AutoAddLongCheckBox("EnableForceTimeUp", L"Enable Force Time Up", L"Enable the option to force a time up to end the race\nby pressing the button configured below");

			this->AutoAddLongTextBox(L"Set or remove button configuration below", L"Click then press any button");
			this->AutoAddShortTextBox(L"Device Select Input", L"Button names for device, click below to set input for device");
			this->AutoAddShortTextBox(L"Button Number", L"Button number set in FFBPlugin.ini for device");

			this->AutoAddLongInputSelect("Button", "ForceFinishButton", L"Force Finish");
			this->AutoAddLongInputSelect("Button", "ForceTimeUpButton", L"Force Time Up");
			this->AutoAddLongInputSelect("Button", "IncreaseFFBStrength", L"Increase FFB Strength");
			this->AutoAddLongInputSelect("Button", "DecreaseFFBStrength", L"Decrease FFB Strength");
			this->AutoAddLongInputSelect("Button", "ResetFFBStrength", L"Reset FFB Strength");

			this->Init();
		}
	};
}