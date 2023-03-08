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

	public ref class CrazyTaxi : Helper
	{
	public:
		CrazyTaxi(MetroForm^ obj1)
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
			this->AutoAddShortCheckBox("EngineRumbleEffect", L"Engine Rumble Effect", L"Enable to feel engine vibration");
			this->AutoAddShortCheckBox("OriginalRumbleEffect", L"Original Rumble Effect", L"Enable to feel rumble when game originally did");
			this->AutoAddShortCheckBox("DisableConstantEffects", L"Disable Constant Effects", L"Enable to disable constant effect");
			this->AutoAddShortCheckBox("EnableGroundEffects", L"Ground Effects", L"Enable to feel ground effects");

			this->AutoAddLongTrackBarBlock("DamperStrength", L"Damper Strength", 0, 100, L"Strength of damper effect to lower oscillation");
			this->AutoAddLongTrackBarBlock("SpringStrength", L"Spring Strength", 0, 100, L"How strong the spring effect is");

			this->New2ColsPage();

			this->AutoAddLongTextBox(L"Ground Effects", L"Modify ground effects here");

			this->AutoAddLongTrackBarBlock("FFBSandFriction", L"Sand Friction Strength", 0, 100, L"Strength of friction while driving on sand");
			this->AutoAddLongTrackBarBlock("FFBShorelineFriction", L"Shoreline Friction Strength", 0, 100, L"Strength of friction while driving on shoreline");
			this->AutoAddLongTrackBarBlock("FFBUnderwaterFriction", L"Underwater Friction Strength", 0, 100, L"Strength of friction while driving underwater");

			this->New2ColsPage();

			this->AutoAddLongTextBox(L"Ground Sine Effects", L"Modify sine effects here (wheels only)");

			this->AutoAddShortTrackBarBlock("FFBGrassSinePeriod", L"Grass Period", 0, 200, L"Period of Sine Effect while driving on grass");
			this->AutoAddShortTrackBarBlock("FFBGrassFadeSinePeriod", L"Grass Fade Period", 0, 200, L"Fade Period of Sine Effect while driving on rough grass");

			this->AutoAddShortTrackBarBlock("FFBFootpathSinePeriod", L"Footpath Period", 0, 200, L"Period of Sine Effect while driving on footpath");
			this->AutoAddShortTrackBarBlock("FFBFootpathFadeSinePeriod", L"Footpath Fade Period", 0, 200, L"Fade Period of Sine Effect while driving on footpath");

			this->AutoAddShortTrackBarBlock("FFBSandSinePeriod", L"Sand Period", 0, 200, L"Period of Sine Effect while driving on sand");
			this->AutoAddShortTrackBarBlock("FFBSandFadeSinePeriod", L"Sand Fade Period", 0, 200, L"Fade Period of Sine Effect while driving on sand");

			this->AutoAddShortTrackBarBlock("FFBShorelineSinePeriod", L"Shoreline Period", 0, 200, L"Period of Sine Effect while driving on shoreline");
			this->AutoAddShortTrackBarBlock("FFBShorelineFadeSinePeriod", L"Shoreline Fade Period", 0, 200, L"Fade Period of Sine Effect while driving on shoreline");

			this->AutoAddShortTrackBarBlock("FFBUnderwaterSinePeriod", L"Underwater Period", 0, 200, L"Period of Sine Effect while driving underwater");
			this->AutoAddShortTrackBarBlock("FFBUnderwaterFadeSinePeriod", L"Underwater Fade Period", 0, 200, L"Fade Period of Sine Effect while driving underwater");

			this->AutoAddShortTrackBarBlock("FFBStairsSinePeriod", L"Stairs Period", 0, 200, L"Period of Sine Effect while driving on stairs");
			this->AutoAddShortTrackBarBlock("FFBStairsFadeSinePeriod", L"Stairs Fade Period", 0, 200, L"Fade Period of Sine Effect while driving on stairs");

			this->AutoAddShortTrackBarBlock("FFBSubwaySinePeriod", L"Subway Period", 0, 200, L"Period of Sine Effect while driving on subway");
			this->AutoAddShortTrackBarBlock("FFBSubwayFadeSinePeriod", L"Subway Fade Period", 0, 200, L"Fade Period of Sine Effect while driving on subway");

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForce");

			this->AutoAddComponent("AltGlobalForce");

			this->Init();
		}
	};
}
