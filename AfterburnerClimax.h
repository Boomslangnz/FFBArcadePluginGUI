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

	public ref class AfterburnerClimax : Helper
	{
	public:	
		AfterburnerClimax(MetroForm ^obj1)
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

			this->AutoAddComponent("OptionsHeader");
			this->AutoAddComponent("EnableRumble");
			this->AutoAddComponent("ReverseRumble");
			this->AutoAddComponent("Logging");
			this->AutoAddComponent("ResetFeedback");
			this->AutoAddComponent("BeepWhenHook");
			this->AutoAddComponent("ForceShowDeviceGUIDMessageBox");

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForceHeader");
			this->AutoAddComponent("MinForce");
			this->AutoAddComponent("MaxForce");

			this->AutoAddLongTextBox(L"Effects Configuration", L"");
			this->AutoAddShortTrackBarBlock("Rumble1Strength", L"Rumble 1 Strength", 0, 100, L"Strength of rumble effect 1");
			this->AutoAddShortTrackBarBlock("Rumble2Strength", L"Rumble 2 Strength", 0, 100, L"Strength of rumble effect 2");
			this->AutoAddShortTrackBarBlock("Rumble1Length", L"Rumble 1 Length", 16, 1000, L"Length of rumble effect 1 feedback");
			this->AutoAddShortTrackBarBlock("Rumble2Length", L"Rumble 2 Length", 16, 1000, L"Length of rumble effect 2 feedback");

			this->Init();
		}
	};
}