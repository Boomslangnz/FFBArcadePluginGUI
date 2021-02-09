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

	public ref class ChaseBombers : Helper
	{
	public:
		ChaseBombers(MetroForm^ obj1)
		{
			this->obj = obj1;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddLongTrackBarBlock("FeedbackLengthCBombers", L"Feedback Length", 16, 10000, L"Length of a feedback command");

			this->AutoAddLongTextBox(L"Force Spring Effect", L"Force Spring effect over using default game spring");

			this->AutoAddShortCheckBox("EnableForceSpringEffectCBombers", L"Force Spring Effect", L"Forces spring effect to work all the time");
			this->AutoAddShortTrackBarBlock("ForceSpringStrengthCBombers", L"Forced Spring Strength", 0, 100, L"How strong the spring effect is when forced on");

			this->AutoAddComponent("GlobalForceHeader");
			this->AutoAddShortTrackBarBlock("MinForceCBombers", L"Min Force", 0, 100, L"Minimum overrall force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("MaxForceCBombers", L"Max Force", 0, 100, L"Maximum overrall force strength that will be applied to device");

			this->New2ColsPage();

			this->AutoAddLongTextBox(L"Modify how sine effect works", L"You can modify how you want effect");

			this->AutoAddShortTrackBarBlock("SinePeriodCBombers", L"Sine Period", 0, 100, L"Period of Sine Effect");
			this->AutoAddShortTrackBarBlock("SineFadePeriodCBombers", L"Sine Fade Period", 0, 100, L"Fade Period of Sine Effect");
			this->AutoAddShortTrackBarBlock("SineStrengthCBombers", L"Sine Strength", 0, 100, L"Strength of Sine Effect");

			this->AutoAddLongTextBox(L"Modify how rumble works", L"You can modify each motor for how you want effect");

			this->AutoAddShortTrackBarBlock("RumbleStrengthLeftMotorCBombers", L"L Rumble Motor Strength", 0, 100, L"Strength of Left Rumble Motor");
			this->AutoAddShortTrackBarBlock("RumbleStrengthRightMotorCBombers", L"R Rumble Motor Strength", 0, 100, L"Strength of Right Rumble Motor");

			this->Init();
		}
	};
}