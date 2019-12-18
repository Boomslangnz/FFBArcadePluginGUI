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

	public ref class Transformers : Helper
	{
	public:
		Transformers(MetroForm^ obj1)
		{
			this->obj = obj1;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddDevice1Selector();
			this->AutoAddDevice2Selector();
			this->AutoAddComponent("FeedbackLength");

			this->AutoAddComponent("CommonOptions");

			this->AutoAddComponent("EnableRumbleDevice2");
			this->AutoAddComponent("ReverseRumbleDevice2");

			this->AutoAddComponent("GlobalForce");

			this->New2ColsPage();

			this->AutoAddLongComboBoxBlock(
				"HowtoRumbleGunEffect",
				"",
				L"Which rumble motor for Gun Effect\?",
				L"Both Rumble Motors|Left Rumble Motor|Right Rumble Motor",
				L"Rumble motor to use for Gun Effect"
			);

			this->AutoAddLongComboBoxBlock(
				"HowtoRumbleHealthEffect",
				"",
				L"Which rumble motor for Health Effect\?",
				L"Both Rumble Motors|Left Rumble Motor|Right Rumble Motor",
				L"Rumble motor to use for Health Effect"
			);

			this->AddSpace();

			this->AutoAddShortTrackBarBlock("Gun1pStrength", L"1p Gun Strength", 0, 100, L"Strength of Gun effect on device 1");
			this->AutoAddShortTrackBarBlock("Gun2pStrength", L"2p Gun Strength", 0, 100, L"Strength of Gun effect on device 2");
			this->AutoAddShortTrackBarBlock("Health1pStrength", L"1p Health Strength", 0, 100, L"Strength of health effect on device 1");
			this->AutoAddShortTrackBarBlock("Health2pStrength", L"2p Health Strength", 0, 100, L"Strength of health effect on device 2");

			this->Init();
		}
	};
}