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

	public ref class WMMT6R : Helper
	{
	public:
		WMMT6R(MetroForm^ obj)
		{
			this->obj = obj;
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

			this->AutoAddLongTrackBarBlock("DamperStrength", L"Damper Strength", 0, 100, L"Strength of damper effect to lower oscillation");

			this->AutoAddComponent("GlobalForce");

			this->AutoAddComponent("AltGlobalForce");

			this->New2ColsPage();

			this->AutoAddLongTextBox(L"Game's Effects Strength", L"");
			this->AutoAddShortTrackBarBlock("SpringStrength", L"Spring", 0, 150, L"");
			this->AutoAddShortTrackBarBlock("FrictionStrength", L"Friction", 0, 150, L"");
			this->AutoAddShortTrackBarBlock("JointsAndStripesStrength", L"Joints & Stripes", 0, 150, L"Strength when going over a joint or some stripes");
			this->AutoAddShortTrackBarBlock("CollisionsStrength", L"Collisions", 0, 150, L"Strength when hitting a car or a wall");
			this->AutoAddShortTrackBarBlock("TiresSlipStrength", L"Tires Slip", 0, 150, L"Strength of vibrations when sliding");
			this->AutoAddShortTrackBarBlock("HighSpeedVibrationsStrength", L"High Speed Vibrations", 0, 150, L"Strength of vibrations at high speed\n(it's adviced to use the same value as tire slip strength)");

			this->AutoAddLongTextBox(L"Additional Fake Effects Strength", L"");
			this->AutoAddShortTrackBarBlock("WheelSpinStrength", L"Wheel Spin", 0, 150, L"");
			this->AutoAddShortTrackBarBlock("GearChangeStrength", L"Gear Change", 0, 100, L"");
			this->AutoAddShortTrackBarBlock("GearChangeDelay", L"Gear Change Delay", 0, 500, L"");
			this->AutoAddShortTrackBarBlock("GearChangeLength", L"Gear Change Length", 0, 500, L"");

			this->Init();
		}
	};
}