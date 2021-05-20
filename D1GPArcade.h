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

	public ref class D1GPArcade : Helper
	{
	public:
		D1GPArcade(MetroForm^ obj1)
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
			this->AutoAddComponent("PowerMode");
			this->AutoAddComponent("EnableDamper");
			this->AutoAddShortCheckBox("EnableGroundEffects", L"Ground Effects", L"Enable to feel ground effects on grass & rumble strip");

			this->AutoAddLongTrackBarBlock("DamperStrength", L"Damper Strength", 0, 100, L"Strength of damper effect to lower oscillation");

			this->New2ColsPage();

			this->AutoAddLongTextBox(L"Sine Effects", L"Modify sine effects here (wheels only)");

			this->AutoAddShortTrackBarBlock("FFBGrassSinePeriod", L"Grass Period", 0, 200, L"Period of Sine Effect while driving on grass");
			this->AutoAddShortTrackBarBlock("FFBGrassFadeSinePeriod", L"Grass Fade Period", 0, 200, L"Fade Period of Sine Effect while driving on rough grass");

			this->AutoAddShortTrackBarBlock("FFBRumbleStripSinePeriod", L"Rumble Strip Terrain Period", 0, 200, L"Period of Sine Effect while driving on rumble strip");
			this->AutoAddShortTrackBarBlock("FFBRumbleStripFadeSinePeriod", L"Rumble Strip Terrain Fade Period", 0, 200, L"Fade Period of Sine Effect while driving on rumble strip");

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForce");

			this->AutoAddComponent("AltGlobalForce");

			this->Init();
		}
	};
}