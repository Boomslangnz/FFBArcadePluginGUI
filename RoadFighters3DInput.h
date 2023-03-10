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

	public ref class RoadFighters3DInput : Helper
	{
	public:
		RoadFighters3DInput(MetroForm ^obj1)
		{
			this->obj = obj1;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddDevice1Selector();
			this->AutoAddDevice2Selector();

			this->AutoAddLongTextBox(L"FFB Dynamic Strength Adjustment", L"");

			this->AutoAddShortCheckBox("EnableFFBStrengthDynamicAdjustment", L"Enable Adjustment", L"Enable to modify strength while playing");
			this->AutoAddShortCheckBox("EnableFFBStrengthPersistence", L"Enable To Make Persistent", L"Enable to save adjusment permanently");
			this->AutoAddShortCheckBox("EnableFFBStrengthTextToSpeech", L"Enable Text To Speech", L"Enable to hear strength via speaker");

			this->AutoAddShortTrackBarBlock("StepFFBStrength", L"Step FFB Strength", 0, 100, L"Set how far strength changes each button press");

			this->AutoAddLongTextBox(L"Game Options", L"");
			
			this->AutoAddShortCheckBox("InputDeviceWheelEnable", L"Enable Input Support", L"");
			this->AutoAddShortCheckBox("SequentialGears", L"Sequential Gears", L"Enable sequential gears");
			this->AutoAddShortCheckBox("InputDeviceWheelReverseAxis", L"Reverse Pedal Axis", L"");
			this->AutoAddShortCheckBox("InputDeviceCombinedPedals", L"Combined Pedals", L"Enable if using combined pedal axis");
			this->AutoAddShortCheckBox("HackToSkipMenuError", L"Hack to skip error menu", L"");
			this->AutoAddShortCheckBox("Only2D", L"2D Only", L"");
			this->AutoAddShortCheckBox("HackToCloseLibmovieErrorAuto", L"Auto Close Libmovie Error", L"");

			this->AutoAddShortTrackBarBlock("SteeringDeadzone", L"Steering Deadzone", 0, 100, L"Set steering deadzone to set deadzone on device");
			this->AutoAddShortTrackBarBlock("PedalDeadzone", L"Pedal Deadzone", 0, 100, L"Set pedal deadzone to set deadzone on device");
			this->AutoAddLongComboBoxBlock("CabinetID", "1|2|3|4", L"Cabinet ID", L"1|2|3|4", L"");

			this->New2ColsPage();

			this->AddTextBox(L"Set or remove axis/button configuration below", this->leftColX, this->minPosY, (2 * this->longWidth) + (2 * this->margin), this->textBoxHeight, L"Select Input then move or press Axis or Button");

			this->leftColPosY = this->minPosY + this->textBoxOuterHeight;

			this->AutoAddShortTextBox(L"Device 1 Select Inputs", L"Axis/Button for device 1, click below to set input for device 1");
			this->AutoAddShortTextBox(L"Axis & Buttons", L"Axis/Button number set in FFBPlugin.ini for device 2");

			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelSteeringAxis", L"Steering Axis");
			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelAcclAxis", L"Accelerator Axis");
			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelBrakeAxis", L"Brake Axis");
			this->AutoAddLongInputSelect("Button", "ExitButton", L"Exit Button");
			this->AutoAddLongInputSelect("Button", "TestButton", L"Test Button");
			this->AutoAddLongInputSelect("Button", "ServiceButton", L"Service Button");
			this->AutoAddLongInputSelect("Button", "CreditButton", L"Credit Button");
			this->AutoAddLongInputSelect("Button", "ViewButton", L"View Button");
			this->AutoAddLongInputSelect("Button", "ThreeDimensionalButton", L"3D Button");
			this->AutoAddLongInputSelect("Button", "leverUp", L"Lever Up");
			this->AutoAddLongInputSelect("Button", "leverDown", L"Lever Down");
			this->AutoAddLongInputSelect("Button", "leverLeft", L"Lever Left");
			this->AutoAddLongInputSelect("Button", "leverRight", L"Lever Right");
			this->AutoAddLongInputSelect("Button", "Gear1Button", L"Gear 1");
			this->AutoAddLongInputSelect("Button", "Gear2Button", L"Gear 2");
			this->AutoAddLongInputSelect("Button", "Gear3Button", L"Gear 3");
			this->AutoAddLongInputSelect("Button", "Gear4Button", L"Gear 4");
			this->AutoAddLongInputSelect("Button", "Gear5Button", L"Gear 5");
			this->AutoAddLongInputSelect("Button", "Gear6Button", L"Gear 6");
			this->AutoAddLongInputSelect("Button", "IncreaseFFBStrength", L"Increase FFB Strength");
			this->AutoAddLongInputSelect("Button", "DecreaseFFBStrength", L"Decrease FFB Strength");
			this->AutoAddLongInputSelect("Button", "ResetFFBStrength", L"Reset FFB Strength");

			this->AutoAddShortComboBoxBlock(
				"DpadUp",
				"ExitButton|TestButton|ServiceButton|CreditButton|ViewButton|ThreeDimensionalButton|leverUp|leverDown|leverLeft|leverRight|",
				L"Dpad Up",
				L"Exit Button|Test Button|Service Button|Credit Button|View Button|3D Button|lever Up|lever Down|lever Left|lever Right|Select no input",
				L"Choose what happens when you press up on dpad on device 1"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadDown",
				"ExitButton|TestButton|ServiceButton|CreditButton|ViewButton|ThreeDimensionalButton|leverUp|leverDown|leverLeft|leverRight|",
				L"Dpad Down",
				L"Exit Button|Test Button|Service Button|Credit Button|View Button|3D Button|lever Up|lever Down|lever Left|lever Right|Select no input",
				L"Choose what happens when you press down on dpad on device 1"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadLeft",
				"ExitButton|TestButton|ServiceButton|CreditButton|ViewButton|ThreeDimensionalButton|leverUp|leverDown|leverLeft|leverRight|",
				L"Dpad Left",
				L"Exit Button|Test Button|Service Button|Credit Button|View Button|3D Button|lever Up|lever Down|lever Left|lever Right|Select no input",
				L"Choose what happens when you press left on dpad on device 1"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadRight",
				"ExitButton|TestButton|ServiceButton|CreditButton|ViewButton|ThreeDimensionalButton|leverUp|leverDown|leverLeft|leverRight|",
				L"Dpad Right",
				L"Exit Button|Test Button|Service Button|Credit Button|View Button|3D Button|lever Up|lever Down|lever Left|lever Right|Select no input",
				L"Choose what happens when you press right on dpad on device 1"
			);

			this->New2ColsPage();

			this->leftColPosY = this->minPosY + this->textBoxOuterHeight;

			this->AutoAddShortTextBox(L"Device 2 Select Inputs", L"Button names for device 2, click below to set input for device 2");
			this->AutoAddShortTextBox(L"Buttons", L"Button number set in FFBPlugin.ini for device 2");

			this->leftColPosY += 3 * this->inputSelectOuterHeight;

			this->AutoAddLongInputSelect("Button", "ExitButtonDevice2", L"Exit Button");
			this->AutoAddLongInputSelect("Button", "TestButtonDevice2", L"Test Button");
			this->AutoAddLongInputSelect("Button", "ServiceButtonDevice2", L"Service Button");
			this->AutoAddLongInputSelect("Button", "CreditButtonDevice2", L"Credit Button");
			this->AutoAddLongInputSelect("Button", "ViewButtonDevice2", L"View Button");
			this->AutoAddLongInputSelect("Button", "ThreeDimensionalButtonDevice2", L"3D Button");
			this->AutoAddLongInputSelect("Button", "leverUpDevice2", L"Lever Up");
			this->AutoAddLongInputSelect("Button", "leverDownDevice2", L"Lever Down");
			this->AutoAddLongInputSelect("Button", "leverLeftDevice2", L"Lever Left");
			this->AutoAddLongInputSelect("Button", "leverRightDevice2", L"Lever Right");
			this->AutoAddLongInputSelect("Button", "Gear1ButtonDevice2", L"Gear 1");
			this->AutoAddLongInputSelect("Button", "Gear2ButtonDevice2", L"Gear 2");
			this->AutoAddLongInputSelect("Button", "Gear3ButtonDevice2", L"Gear 3");
			this->AutoAddLongInputSelect("Button", "Gear4ButtonDevice2", L"Gear 4");
			this->AutoAddLongInputSelect("Button", "Gear5ButtonDevice2", L"Gear 5");
			this->AutoAddLongInputSelect("Button", "Gear6ButtonDevice2", L"Gear 6");

			this->AutoAddShortComboBoxBlock(
				"DpadUpDevice2",
				"ExitButtonDevice2|TestButtonDevice2|ServiceButtonDevice2|CreditButtonDevice2|ViewButtonDevice2|ThreeDimensionalButtonDevice2|leverUpDevice2|leverDownDevice2|leverLeftDevice2|leverRightDevice2|",
				L"Dpad Up",
				L"Exit Button|Test Button|Service Button|Credit Button|View Button|3D Button|lever Up|lever Down|lever Left|lever Right|Select no input",
				L"Choose what happens when you press up on dpad on device 2"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadDownDevice2",
				"ExitButtonDevice2|TestButtonDevice2|ServiceButtonDevice2|CreditButtonDevice2|ViewButtonDevice2|ThreeDimensionalButtonDevice2|leverUpDevice2|leverDownDevice2|leverLeftDevice2|leverRightDevice2|",
				L"Dpad Down",
				L"Exit Button|Test Button|Service Button|Credit Button|View Button|3D Button|lever Up|lever Down|lever Left|lever Right|Select no input",
				L"Choose what happens when you press down on dpad on device 2"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadLeftDevice2",
				"ExitButtonDevice2|TestButtonDevice2|ServiceButtonDevice2|CreditButtonDevice2|ViewButtonDevice2|ThreeDimensionalButtonDevice2|leverUpDevice2|leverDownDevice2|leverLeftDevice2|leverRightDevice2|",
				L"Dpad Left",
				L"Exit Button|Test Button|Service Button|Credit Button|View Button|3D Button|lever Up|lever Down|lever Left|lever Right|Select no input",
				L"Choose what happens when you press left on dpad on device 2"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadRightDevice2",
				"ExitButtonDevice2|TestButtonDevice2|ServiceButtonDevice2|CreditButtonDevice2|ViewButtonDevice2|ThreeDimensionalButtonDevice2|leverUpDevice2|leverDownDevice2|leverLeftDevice2|leverRightDevice2|",
				L"Dpad Right",
				L"Exit Button|Test Button|Service Button|Credit Button|View Button|3D Button|lever Up|lever Down|lever Left|lever Right|Select no input",
				L"Choose what happens when you press right on dpad on device 2"
			);

			this->Init();
		}
	};
}
