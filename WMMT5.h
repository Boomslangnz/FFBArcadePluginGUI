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

#include <Windows.h>
#include "Helper.h"

namespace FFBPluginGUI {

	public ref class WMMT5 : Helper
	{
	public:
		WMMT5(MetroForm^ obj)
		{
			this->obj = obj;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddDeviceSelector();
			this->AutoAddLongTrackBarBlock("FeedbackLength", L"Feedback Length", 16, 1000, L"Length of a feedback command");

			this->AutoAddLongTextBox(L"Options", L"");
			this->AutoAddShortCheckBox("EnableRumble", L"Enable Rumble", L"Enable or disable rumble");
			this->AutoAddShortCheckBox("ReverseRumble", L"Reverse Rumble", L"Reverse the rumble if works incorrectly to liking");
			this->AutoAddShortCheckBox("Logging", L"Enable Logging", L"Enable or disable FFBlog.txt to collect log data");
			this->AutoAddShortCheckBox("ResetFeedback", L"Reset Feedback", L"When a command contradicts a prior command, clear the prior command");
			this->AutoAddShortCheckBox("BeepWhenHook", L"Beep When Hook", L"Beep will occur when FFBPlugin hooks application");
			this->AutoAddShortCheckBox("ForceShowDeviceGUIDMessageBox", L"GUID MessageBox", L"Messagebox will appear when launching application to show guid number");
			this->AutoAddShortCheckBox("AlternativeFFB", L"Alternative FFB", L"Use if wheel rotates incorrectly");

			this->New2ColsPage();

			this->AutoAddLongTextBox(L"Global force", L"Global FFB force which affects all effects");
			this->AutoAddShortTrackBarBlock("MinForce", L"Min Force", 0, 100, L"Minimum overrall force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("MaxForce", L"Max Force", 0, 100, L"Maximum overrall force strength that will be applied to device");

			this->AutoAddLongTextBox(L"Global force for alternative FFB", L"Global FFB force if using Alternative FFB");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceLeft", L"Min Force Left", -100, 100, L"Minimum overrall left force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceLeft", L"Max Force Left", -100, 100, L"Maximum overrall left force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMinForceRight", L"Min Force Right", -100, 100, L"Minimum overrall right force strength that will be applied to device");
			this->AutoAddShortTrackBarBlock("AlternativeMaxForceRight", L"Max Force Right", -100, 100, L"Maximum overrall right force strength that will be applied to device");

			this->New2ColsPage();

			this->AutoAddLongTextBox(L"Effects strength", L"");
			this->AutoAddShortTrackBarBlock("SpringStrength", L"Spring", 0, 150, L"");
			this->AutoAddShortTrackBarBlock("FrictionStrength", L"Friction", 0, 150, L"");
			this->AutoAddShortTrackBarBlock("JointsAndStripesStrength", L"Joints & Stripes", 0, 150, L"Strength when going over a joint or some stripes");
			this->AutoAddShortTrackBarBlock("CollisionsStrength", L"Collisions", 0, 150, L"Strength when hitting a car or a wall");
			this->AutoAddShortTrackBarBlock("TiresSlipStrength", L"Tires Slip", 0, 150, L"Strength of vibrations when sliding");
			this->AutoAddShortTrackBarBlock("HighSpeedVibrationsStrength", L"High Speed", 0, 150, L"Strength of vibrations at high speed\n(it's adviced to use the same value as tire slip strength)");

			this->Init();
		}
	};
}