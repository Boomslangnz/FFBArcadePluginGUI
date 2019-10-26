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

	public ref class Machstorm : Helper
	{
	public:
		Machstorm(MetroForm ^obj1)
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

			this->AutoAddComponent("GlobalForce");

			this->New2ColsPage();

			this->AutoAddShortTrackBarBlock("Power1RumbleStrength", L"Power 1 Strength", 0, 100, L"Strength of effect 1");
			this->AutoAddShortTrackBarBlock("Power1RumbleLength", L"Power 1 Length", 16, 1000, L"Length of effect 1");
			this->AutoAddShortTrackBarBlock("Power2RumbleStrength", L"Power 2 Strength", 0, 100, L"Strength of effect 2");
			this->AutoAddShortTrackBarBlock("Power2RumbleLength", L"Power 2 Length", 16, 1000, L"Length of effect 2");
			this->AutoAddShortTrackBarBlock("Power3RumbleStrength", L"Power 3 Strength", 0, 100, L"Strength of effect 3");
			this->AutoAddShortTrackBarBlock("Power3RumbleLength", L"Power 3 Length", 16, 1000, L"Length of effect 3");
			this->AutoAddShortTrackBarBlock("Power4RumbleStrength", L"Power 4 Strength", 0, 100, L"Strength of effect 4");
			this->AutoAddShortTrackBarBlock("Power4RumbleLength", L"Power 4 Length", 16, 1000, L"Length of effect 4");
			this->AutoAddShortTrackBarBlock("Power5RumbleStrength", L"Power 5 Strength", 0, 100, L"Strength of effect 5");
			this->AutoAddShortTrackBarBlock("Power5RumbleLength", L"Power 5 Length", 16, 1000, L"Length of effect 5");
			
			this->New2ColsPage();

			this->AutoAddShortTrackBarBlock("Power6RumbleStrength", L"Power 6 Strength", 0, 100, L"Strength of effect 6");
			this->AutoAddShortTrackBarBlock("Power6RumbleLength", L"Power 6 Length", 16, 1000, L"Length of effect 6");
			this->AutoAddShortTrackBarBlock("Power7RumbleStrength", L"Power 7 Strength", 0, 100, L"Strength of effect 7");
			this->AutoAddShortTrackBarBlock("Power7RumbleLength", L"Power 7 Length", 16, 1000, L"Length of effect 4");
			this->AutoAddShortTrackBarBlock("Power8RumbleStrength", L"Power 8 Strength", 0, 100, L"Strength of effect 8");
			this->AutoAddShortTrackBarBlock("Power8RumbleLength", L"Power 8 Length", 16, 1000, L"Length of effect 8");
			this->AutoAddShortTrackBarBlock("Power9RumbleStrength", L"Power 9 Strength", 0, 100, L"Strength of effect 9");
			this->AutoAddShortTrackBarBlock("Power9RumbleLength", L"Power 9 Length", 16, 1000, L"Length of effect 9");
			this->AutoAddShortTrackBarBlock("Power10RumbleStrength", L"Power 10 Strength", 0, 100, L"Strength of effect 10");
			this->AutoAddShortTrackBarBlock("Power10RumbleLength", L"Power 10 Length", 16, 1000, L"Length of effect 10");

			this->Init();
		}
	};
}
