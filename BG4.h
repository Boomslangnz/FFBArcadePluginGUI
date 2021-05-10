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

	public ref class BG4 : Helper
	{
	public:
		BG4(MetroForm ^obj1)
		{
			this->obj = obj1;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddDevice1Selector();
			this->AutoAddComponent("FeedbackLength");

			this->AutoAddComponent("CommonOptions");
			this->AutoAddComponent("AlternativeFFB");
			this->AutoAddComponent("EnableDamper");
			this->AutoAddShortCheckBox("EnableBoostEffect", L"Racing Boost Effect", L"Enable to feel shake while boosting etc");
			this->AutoAddShortCheckBox("EnableGearShiftEffect", L"Gear Shift Effect", L"Enable to feel shake while changing gear");

			this->New2ColsPage();

			this->AutoAddLongTrackBarBlock("DamperStrength", L"Damper Strength", 0, 100, L"Strength of damper effect to lower oscillation");
			this->AutoAddLongTrackBarBlock("SpringStrength", L"Spring Strength", 0, 100, L"Spring Strength for wheels only");

			this->AutoAddLongTextBox(L"Sine Effects", L"Modify sine effects here (wheels only)");

			this->AutoAddShortTrackBarBlock("BoostSinePeriod", L"Boost Period", 0, 200, L"Period of Sine Effect");
			this->AutoAddShortTrackBarBlock("BoostFadeSinePeriod", L"Boost Fade Period", 0, 200, L"Fade Period of Sine Effect");
			this->AutoAddShortTrackBarBlock("GearChangeStrength", L"Gear Change Strength", 0, 100, L"Strength of Sine Effect");
			this->AutoAddShortTrackBarBlock("GearChangeSinePeriod", L"Gear Change Sine Period", 0, 200, L"Period of Sine Effect");

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForce");

			this->AutoAddComponent("AltGlobalForce");

			this->Init();
		}
	};
}
