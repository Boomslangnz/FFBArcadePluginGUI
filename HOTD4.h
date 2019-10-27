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

	public ref class HOTD4 : Helper
	{
	public:
		HOTD4(MetroForm^ obj1)
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

			this->AutoAddComponent("GlobalForce");

			this->New2ColsPage();

			this->AutoAddLongComboBoxBlock(
				"HowtoRumbleBulletEffect",
				"",
				L"Which rumble motor for Bullet Effect\?",
				L"Both Rumble Motors|Left Rumble Motor|Right Rumble Motor",
				L"Rumble motor to use for Bullet Effect"
			);
			this->AutoAddLongComboBoxBlock(
				"HowtoRumbleGrenadeEffect",
				"",
				L"Which rumble motor for Grenade Effect\?",
				L"Both Rumble Motors|Left Rumble Motor|Right Rumble Motor",
				L"Rumble motor to use for Grenade Effect"
			);
			this->AutoAddLongComboBoxBlock(
				"HowtoRumbleHealthEffect",
				"",
				L"Which rumble motor for Health Effect\?",
				L"Both Rumble Motors|Left Rumble Motor|Right Rumble Motor",
				L"Rumble motor to use for Health Effect"
			);

			this->AddSpace();

			this->AutoAddShortTrackBarBlock("Bullet1pStrength", L"1p Bullet Strength", 0, 100, L"Strength of bullet effect on device 1");
			this->AutoAddShortTrackBarBlock("Bullet2pStrength", L"2p Bullet Strength", 0, 100, L"Strength of bullet effect on device 2");
			this->AutoAddShortTrackBarBlock("Grenade1pStrength", L"1p Grenade Strength", 0, 100, L"Strength of grenade effect on device 1");
			this->AutoAddShortTrackBarBlock("Grenade2pStrength", L"2p Grenade Strength", 0, 100, L"Strength of grenade effect on device 2");
			this->AutoAddShortTrackBarBlock("Health1pStrength", L"1p Health Strength", 0, 100, L"Strength of health effect on device 1");
			this->AutoAddShortTrackBarBlock("Health2pStrength", L"2p Health Strength", 0, 100, L"Strength of health effect on device 2");

			this->Init();
		}
	};
}