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

	public ref class OutRunners : Helper
	{
	public:
		OutRunners(MetroForm^ obj1)
		{
			this->obj = obj1;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddDevice2Selector();

			this->AutoAddLongTextBox(L"Options", L"");

			this->AutoAddComponent("EnableRumbleDevice2");
			this->AutoAddComponent("ReverseRumbleDevice2");
			this->AutoAddComponent("AlternativeFFBDevice2");

			this->AutoAddLongTrackBarBlock("FeedbackLengthORunners", L"Feedback Length", 16, 1000, L"Length of a feedback command");

			this->AutoAddLongTextBox(L"Force Spring Effect", L"Force Spring effect over using default game spring");

			this->AutoAddShortCheckBox("EnableForceSpringEffectORunners", L"Force Spring Effect", L"Forces spring effect to work all the time");
			this->AutoAddShortTrackBarBlock("ForceSpringStrengthORunners", L"Forced Spring Strength", 0, 100, L"How strong the spring effect is when forced on");

			this->AutoAddLongTextBox(L"Modify how sine effect works", L"You can modify how you want effect");

			this->AutoAddShortTrackBarBlock("SinePeriodORunners", L"Sine Period", 0, 100, L"Period of Sine Effect");
			this->AutoAddShortTrackBarBlock("SineFadePeriodORunners", L"Sine Fade Period", 0, 100, L"Fade Period of Sine Effect");
			this->AutoAddShortTrackBarBlock("SineStrengthORunners", L"Sine Strength", 0, 100, L"Strength of Sine Effect");	

			this->AutoAddLongTextBox(L"Modify how rumble works", L"You can modify each motor for how you want effect");

			this->AutoAddShortTrackBarBlock("RumbleStrengthLeftMotorORunners", L"L Rumble Motor Strength", 0, 100, L"Strength of Left Rumble Motor");
			this->AutoAddShortTrackBarBlock("RumbleStrengthRightMotorORunners", L"R Rumble Motor Strength", 0, 100, L"Strength of Right Rumble Motor");

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForceHeader");
			this->AutoAddShortTrackBarBlock("MinForceORunners", L"Min Force", 0, 100, L"Minimum overrall force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("MaxForceORunners", L"Max Force", 0, 100, L"Maximum overrall force strength that will be applied to device");

			this->AutoAddComponent("AltGlobalForceHeader");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceLeftORunners", L"Min Force Left", -100, 100, L"Minimum overrall left force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceLeftORunners", L"Max Force Left", -100, 100, L"Maximum overrall left force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceRightORunners", L"Min Force Right", -100, 100, L"Minimum overrall right force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceRightORunners", L"Max Force Right", -100, 100, L"Maximum overrall right force strength that will be applied to device");

			this->AutoAddComponent("GlobalForceHeaderDevice2");
			this->AutoAddShortTrackBarBlock("MinForceORunnersDevice2", L"Min Force", 0, 100, L"Minimum overrall force strength that will be applied to device 2");
			this->AutoAddShortTrackBarBlock("MaxForceORunnersDevice2", L"Max Force", 0, 100, L"Maximum overrall force strength that will be applied to device 2");

			this->AutoAddComponent("AltGlobalForceHeaderDevice2");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceLeftORunnersDevice2", L"Min Force Left", -100, 100, L"Minimum overrall left force strength that will be applied to device 2");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceLeftORunnersDevice2", L"Max Force Left", -100, 100, L"Maximum overrall left force strength that will be applied to device 2");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceRightORunnersDevice2", L"Min Force Right", -100, 100, L"Minimum overrall right force strength that will be applied to device 2");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceRightORunnersDevice2", L"Max Force Right", -100, 100, L"Maximum overrall right force strength that will be applied to device 2");

			this->Init();
		}
	};
}