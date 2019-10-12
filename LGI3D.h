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

	public ref class LGI3D : Helper
	{
	public:
		LGI3D(MetroForm ^obj1)
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

			this->AutoAddComponent("OptionsHeader");
			this->AutoAddComponent("EnableRumble");
			this->AutoAddComponent("ReverseRumble");
			this->AutoAddComponent("Logging");
			this->AutoAddComponent("ResetFeedback");
			this->AutoAddComponent("BeepWhenHook");
			this->AutoAddComponent("ForceShowDeviceGUIDMessageBox");

			this->AutoAddComponent("GlobalForceHeader");
			this->AutoAddComponent("MinForce");
			this->AutoAddComponent("MaxForce");

			this->New2ColsPage();

			this->AutoAddLongComboBoxBlock(
				"HowtoRumbleKnockEffect",
				L"Which rumble motor for Knock Effect\?",
				L"Both Rumble Motors|Left Rumble Motor|Right Rumble Motor",
				L"Rumble motor to use for Knock Effect"
			);
			this->AutoAddLongComboBoxBlock(
				"HowtoRumbleMotorEffect",
				L"Which rumble motor for Motor Effect\?",
				L"Both Rumble Motors|Left Rumble Motor|Right Rumble Motor",
				L"Rumble motor to use for Motor Effect"
			);
			this->AutoAddLongComboBoxBlock(
				"HowtoRumbleHealthEffect",
				L"Which rumble motor for Health Effect\?",
				L"Both Rumble Motors|Left Rumble Motor|Right Rumble Motor",
				L"Rumble motor to use for Health Effect"
			);

			this->AddSpace();

			this->AutoAddShortTrackBarBlock("Knock1pStrength", L"1p Knock Strength", 0, 100, L"Strength of knock effect on device 1");
			this->AutoAddShortTrackBarBlock("Knock2pStrength", L"2p Knock Strength", 0, 100, L"Strength of knock effect on device 2");
			this->AutoAddShortTrackBarBlock("Motor1pStrength", L"1p Motor Strength", 0, 100, L"Strength of motor effect on device 1");
			this->AutoAddShortTrackBarBlock("Motor2pStrength", L"2p Motor Strength", 0, 100, L"Strength of motor effect on device 2");
			this->AutoAddShortTrackBarBlock("Health1pStrength", L"1p Health Strength", 0, 100, L"Strength of health effect on device 1");
			this->AutoAddShortTrackBarBlock("Health2pStrength", L"2p Health Strength", 0, 100, L"Strength of health effect on device 2");

			this->Init();
		}
	};
}