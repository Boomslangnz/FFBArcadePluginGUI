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

	public ref class WMMT3 : Helper
	{
	public:
		WMMT3(MetroForm^ obj1)
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

			this->AutoAddLongTrackBarBlock("DamperStrength", L"Damper Strength", 0, 100, L"Strength of damper effect to lower oscillation");

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForce");

			this->AutoAddComponent("AltGlobalForce");

			this->New2ColsPage();

			this->AutoAddLongTrackBarBlock("SpringStrength", L"Spring Strength", 0, 100, L"Strength of spring effect");
			this->AutoAddLongTrackBarBlock("ViosityStrength", L"Friction Strength", 0, 100, L"Strength of friction effect");
			this->AutoAddLongTrackBarBlock("ReflectStrength", L"Road Effect Strength", 0, 100, L"Strength of road effects");
			this->AutoAddLongTrackBarBlock("CenterOffsetStrength", L"Center Offset Strength", 0, 100, L"Strength of drifting etc");

			this->Init();
		}
	};
}