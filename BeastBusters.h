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

	public ref class BeastBusters : Helper
	{
	public:
		BeastBusters(MetroForm^ obj1)
		{
			this->obj = obj1;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddDevice2Selector();
			this->AutoAddDevice3Selector();

			this->AutoAddLongTextBox(L"Options", L"");

			this->AutoAddComponent("EnableRumbleDevice2");

			this->AutoAddComponent("ReverseRumbleDevice2");

			this->AutoAddComponent("EnableRumbleDevice3");

			this->AutoAddComponent("ReverseRumbleDevice3");

			this->AutoAddLongTextBox(L"Modify how rumble works", L"You can modify each motor for how you want effect");

			this->AutoAddShortTrackBarBlock("RumbleStrengthLeftMotorBBusters", L"L Rumble Motor Strength", 0, 100, L"Strength of Left Rumble Motor");
			this->AutoAddShortTrackBarBlock("RumbleStrengthRightMotorBBusters", L"R Rumble Motor Strength", 0, 100, L"Strength of Right Rumble Motor");

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForceHeader");
			this->AutoAddShortTrackBarBlock("MinForceBBusters", L"Min Force", 0, 100, L"Minimum overrall force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("MaxForceBBusters", L"Max Force", 0, 100, L"Maximum overrall force strength that will be applied to device");

			this->AutoAddComponent("GlobalForceHeaderDevice2");
			this->AutoAddShortTrackBarBlock("MinForceBBustersDevice2", L"Min Force", 0, 100, L"Minimum overrall force strength that will be applied to device 2");
			this->AutoAddShortTrackBarBlock("MaxForceBBustersDevice2", L"Max Force", 0, 100, L"Maximum overrall force strength that will be applied to device 2");

			this->AutoAddComponent("GlobalForceHeaderDevice3");
			this->AutoAddShortTrackBarBlock("MinForceBBustersDevice3", L"Min Force", 0, 100, L"Minimum overrall force strength that will be applied to device 3");
			this->AutoAddShortTrackBarBlock("MaxForceBBustersDevice3", L"Max Force", 0, 100, L"Maximum overrall force strength that will be applied to device 3");

			this->Init();
		}
	};
}
