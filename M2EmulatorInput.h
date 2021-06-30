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

	public ref class M2EmulatorInput : Helper
	{
	public:
		M2EmulatorInput(MetroForm ^obj1)
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

			this->AutoAddLongTextBox(L"Game Options", L"");

			this->AutoAddShortCheckBox("DaytonaAIMultiplayerHack", L"Multiplayer AI Hack", L"Enable hack to allow AI car positions while using network on Daytona USA");
			this->AutoAddShortCheckBox("DaytonaForcePanoramicAttract", L"Panoramic Hack", L"Hack to force panoramic mode for 2p etc on Daytona USA");
			this->AutoAddShortCheckBox("EnableOutputs", L"Enable Outputs", L"Enable Outputs with Output Blaster");
			this->AutoAddShortCheckBox("InputDeviceWheelEnable", L"Enable Input Support", L"");
			this->AutoAddShortCheckBox("InputDeviceWheelReverseAxis", L"Reverse Pedal Axis", L"");
			this->AutoAddShortCheckBox("InputDeviceCombinedPedals", L"Combined Pedals", L"Enable if using combined pedal axis");

			this->AutoAddShortTrackBarBlock("SteeringDeadzone", L"Steering Deadzone", 0, 100, L"Set steering deadzone to set deadzone on device");
			this->AutoAddShortTrackBarBlock("PedalDeadzone", L"Pedal Deadzone", 0, 100, L"Set pedal deadzone to set deadzone on device");

			this->AutoAddLongTextBox(L"FFB Dynamic Strength Adjustment", L"");

			this->AutoAddShortCheckBox("EnableFFBStrengthDynamicAdjustment", L"Enable Adjustment", L"Enable to modify strength while playing");
			this->AutoAddShortCheckBox("EnableFFBStrengthPersistence", L"Enable To Make Persistent", L"Enable to save adjusment permanently");
			this->AutoAddShortCheckBox("EnableFFBStrengthTextToSpeech", L"Enable Text To Speech", L"Enable to hear strength via speaker");

			this->AutoAddLongTrackBarBlock("StepFFBStrength", L"Step FFB Strength", 0, 100, L"Set how far strength changes each button press");

			this->AutoAddShortTextBox(L"Device 1 Select Inputs", L"Button names for FFB Dynamic Strength Adjustment");
			this->AutoAddShortTextBox(L"Buttons", L"Button number set in FFBPlugin.ini for FFB Dynamic Strength Adjustment");

			this->AutoAddLongInputSelect("Button", "IncreaseFFBStrength", L"Increase FFB Strength");
			this->AutoAddLongInputSelect("Button", "DecreaseFFBStrength", L"Decrease FFB Strength");
			this->AutoAddLongInputSelect("Button", "ResetFFBStrength", L"Reset FFB Strength");

			this->New2ColsPage();

			this->AddTextBox(L"Set or remove axis/button configuration below", this->leftColX, this->minPosY, (3.035 * this->longWidth) + (3 * this->margin), this->textBoxHeight, L"Select Input then move or press Axis or Button");

			this->leftColPosY = this->minPosY + this->textBoxOuterHeight;

			this->AutoAddShortTextBox(L"Device 1 Select Inputs", L"Axis/Button for device 1, click below to set input for device 1");
			this->AutoAddShortTextBox(L"Axis & Buttons", L"Axis/Button number set in FFBPlugin.ini for device 1");

			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelSteeringAxis", L"Steering Axis");
			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelAcclAxis", L"Accelerator Axis");
			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelBrakeAxis", L"Brake Axis");
			this->AutoAddLongInputSelect("Button", "ExitButton", L"Exit Button");
			this->AutoAddLongInputSelect("Button", "TestButton", L"Test Button");
			this->AutoAddLongInputSelect("Button", "ServiceButton", L"Service Button");
			this->AutoAddLongInputSelect("Button", "Coin1Button", L"Coin 1 Button");
			this->AutoAddLongInputSelect("Button", "Coin2Button", L"Coin 2 Button");
			this->AutoAddLongInputSelect("Button", "StartButton", L"Start Button");
			this->AutoAddLongInputSelect("Button", "VR1Button", L"VR1 Button");
			this->AutoAddLongInputSelect("Button", "VR2Button", L"VR2 Button");
			this->AutoAddLongInputSelect("Button", "VR3Button", L"VR3 Button");
			this->AutoAddLongInputSelect("Button", "VR4Button", L"VR4 Button");
			this->AutoAddLongInputSelect("Button", "Shift1Button", L"Shift 1");
			this->AutoAddLongInputSelect("Button", "Shift2Button", L"Shift 2");
			this->AutoAddLongInputSelect("Button", "Shift3Button", L"Shift 3");
			this->AutoAddLongInputSelect("Button", "Shift4Button", L"Shift 4");
			this->AutoAddLongInputSelect("Button", "ShiftUpButton", L"Shift Up");
			this->AutoAddLongInputSelect("Button", "ShiftDownButton", L"Shift Down");

			this->AutoAddShortComboBoxBlock(
				"DpadUp",
				"ExitButton|TestButton|ServiceButton|Coin1Button|Coin2Button|StartButton|VR1Button|VR2Button|VR3Button|VR4Button|Shift1Button|Shift2Button|Shift3Button|Shift4Button|ShiftUpButton|ShiftDownButton|",
				L"Dpad Up",
				L"Exit Button|Test Button|Service Button|Coin 1 Button|Coin 2 Button|Start Button|VR1 Button|VR2 Button|VR3 Button|VR4 Button|Shift 1|Shift 2|Shift 3|Shift 4|Shift Up|Shift Down|Select no input",
				L"Choose what happens when you press up on dpad on device 1"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadDown",
				"ExitButton|TestButton|ServiceButton|Coin1Button|Coin2Button|StartButton|VR1Button|VR2Button|VR3Button|VR4Button|Shift1Button|Shift2Button|Shift3Button|Shift4Button|ShiftUpButton|ShiftDownButton|",
				L"Dpad Down",
				L"Exit Button|Test Button|Service Button|Coin 1 Button|Coin 2 Button|Start Button|VR1 Button|VR2 Button|VR3 Button|VR4 Button|Shift 1|Shift 2|Shift 3|Shift 4|Shift Up|Shift Down|Select no input",
				L"Choose what happens when you press down on dpad on device 1"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadLeft",
				"ExitButton|TestButton|ServiceButton|Coin1Button|Coin2Button|StartButton|VR1Button|VR2Button|VR3Button|VR4Button|Shift1Button|Shift2Button|Shift3Button|Shift4Button|ShiftUpButton|ShiftDownButton|",
				L"Dpad Left",
				L"Exit Button|Test Button|Service Button|Coin 1 Button|Coin 2 Button|Start Button|VR1 Button|VR2 Button|VR3 Button|VR4 Button|Shift 1|Shift 2|Shift 3|Shift 4|Shift Up|Shift Down|Select no input",
				L"Choose what happens when you press left on dpad on device 1"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadRight",
				"ExitButton|TestButton|ServiceButton|Coin1Button|Coin2Button|StartButton|VR1Button|VR2Button|VR3Button|VR4Button|Shift1Button|Shift2Button|Shift3Button|Shift4Button|ShiftUpButton|ShiftDownButton|",
				L"Dpad Right",
				L"Exit Button|Test Button|Service Button|Coin 1 Button|Coin 2 Button|Start Button|VR1 Button|VR2 Button|VR3 Button|VR4 Button|Shift 1|Shift 2|Shift 3|Shift 4|Shift Up|Shift Down|Select no input",
				L"Choose what happens when you press right on dpad on device 1"
			);

			this->New2ColsPage();

			this->leftColPosY = this->minPosY + this->textBoxOuterHeight;

			this->AutoAddShortTextBox(L"Device 2 Select Inputs", L"Button names for device 2, click below to set input for device 2");
			this->AutoAddShortTextBox(L"Buttons", L"Button number set in FFBPlugin.ini for device 2");

			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelSteeringAxisDevice2", L"Steering Axis");
			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelAcclAxisDevice2", L"Accelerator Axis");
			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelBrakeAxisDevice2", L"Brake Axis");
			this->AutoAddLongInputSelect("Button", "ExitButtonDevice2", L"Exit Button");
			this->AutoAddLongInputSelect("Button", "TestButtonDevice2", L"Test Button");
			this->AutoAddLongInputSelect("Button", "ServiceButtonDevice2", L"Service Button");
			this->AutoAddLongInputSelect("Button", "Coin1ButtonDevice2", L"Coin 1 Button");
			this->AutoAddLongInputSelect("Button", "Coin2ButtonDevice2", L"Coin 2 Button");
			this->AutoAddLongInputSelect("Button", "StartButtonDevice2", L"Start Button");
			this->AutoAddLongInputSelect("Button", "VR1ButtonDevice2", L"VR1 Button");
			this->AutoAddLongInputSelect("Button", "VR2ButtonDevice2", L"VR2 Button");
			this->AutoAddLongInputSelect("Button", "VR3ButtonDevice2", L"VR3 Button");
			this->AutoAddLongInputSelect("Button", "VR4ButtonDevice2", L"VR4 Button");
			this->AutoAddLongInputSelect("Button", "Shift1ButtonDevice2", L"Shift 1");
			this->AutoAddLongInputSelect("Button", "Shift2ButtonDevice2", L"Shift 2");
			this->AutoAddLongInputSelect("Button", "Shift3ButtonDevice2", L"Shift 3");
			this->AutoAddLongInputSelect("Button", "Shift4ButtonDevice2", L"Shift 4");
			this->AutoAddLongInputSelect("Button", "ShiftUpButtonDevice2", L"Shift Up");
			this->AutoAddLongInputSelect("Button", "ShiftDownButtonDevice2", L"Shift Down");

			this->AutoAddShortComboBoxBlock(
				"DpadUpDevice2",
				"ExitButtonDevice2|TestButtonDevice2|ServiceButtonDevice2|Coin1ButtonDevice2|Coin2ButtonDevice2|StartButtonDevice2|VR1ButtonDevice2|VR2ButtonDevice2|VR3ButtonDevice2|VR4ButtonDevice2|Shift1ButtonDevice2|Shift2ButtonDevice2|Shift3ButtonDevice2|Shift4ButtonDevice2|ShiftUpButtonDevice2|ShiftDownButtonDevice2|",
				L"Dpad Up",
				L"Exit Button|Test Button|Service Button|Coin 1 Button|Coin 2 Button|Start Button|VR1 Button|VR2 Button|VR3 Button|VR4 Button|Shift 1|Shift 2|Shift 3|Shift 4|Shift Up|Shift Down|Select no input",
				L"Choose what happens when you press up on dpad on device 2"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadDownDevice2",
				"ExitButtonDevice2|TestButtonDevice2|ServiceButtonDevice2|Coin1ButtonDevice2|Coin2ButtonDevice2|StartButtonDevice2|VR1ButtonDevice2|VR2ButtonDevice2|VR3ButtonDevice2|VR4ButtonDevice2|Shift1ButtonDevice2|Shift2ButtonDevice2|Shift3ButtonDevice2|Shift4ButtonDevice2|ShiftUpButtonDevice2|ShiftDownButtonDevice2|",
				L"Dpad Down",
				L"Exit Button|Test Button|Service Button|Coin 1 Button|Coin 2 Button|Start Button|VR1 Button|VR2 Button|VR3 Button|VR4 Button|Shift 1|Shift 2|Shift 3|Shift 4|Shift Up|Shift Down|Select no input",
				L"Choose what happens when you press down on dpad on device 2"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadLeftDevice2",
				"ExitButtonDevice2|TestButtonDevice2|ServiceButtonDevice2|Coin1ButtonDevice2|Coin2ButtonDevice2|StartButtonDevice2|VR1ButtonDevice2|VR2ButtonDevice2|VR3ButtonDevice2|VR4ButtonDevice2|Shift1ButtonDevice2|Shift2ButtonDevice2|Shift3ButtonDevice2|Shift4ButtonDevice2|ShiftUpButtonDevice2|ShiftDownButtonDevice2|",
				L"Dpad Left",
				L"Exit Button|Test Button|Service Button|Coin 1 Button|Coin 2 Button|Start Button|VR1 Button|VR2 Button|VR3 Button|VR4 Button|Shift 1|Shift 2|Shift 3|Shift 4|Shift Up|Shift Down|Select no input",
				L"Choose what happens when you press left on dpad on device 2"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadRightDevice2",
				"ExitButtonDevice2|TestButtonDevice2|ServiceButtonDevice2|Coin1ButtonDevice2|Coin2ButtonDevice2|StartButtonDevice2|VR1ButtonDevice2|VR2ButtonDevice2|VR3ButtonDevice2|VR4ButtonDevice2|Shift1ButtonDevice2|Shift2ButtonDevice2|Shift3ButtonDevice2|Shift4ButtonDevice2|ShiftUpButtonDevice2|ShiftDownButtonDevice2|",
				L"Dpad Right",
				L"Exit Button|Test Button|Service Button|Coin 1 Button|Coin 2 Button|Start Button|VR1 Button|VR2 Button|VR3 Button|VR4 Button|Shift 1|Shift 2|Shift 3|Shift 4|Shift Up|Shift Down|Select no input",
				L"Choose what happens when you press right on dpad on device 2"
			);

			this->New2ColsPage();

			this->leftColPosY = this->minPosY + this->textBoxOuterHeight;

			this->AutoAddShortTextBox(L"Keyboard Select Inputs", L"Keyboard Names, click below to set input for keyboard");
			this->AutoAddShortTextBox(L"Keys", L"Key name set in FFBPlugin.ini for keyboard");

			this->leftColPosY += 3 * this->inputSelectOuterHeight;

			this->AutoAddLongInputSelect("Key", "ExitButtonKeyBrd", L"Exit Button");
			this->AutoAddLongInputSelect("Key", "TestButtonKeyBrd", L"Test Button");
			this->AutoAddLongInputSelect("Key", "ServiceButtonKeyBrd", L"Service Button");
			this->AutoAddLongInputSelect("Key", "Coin1ButtonKeyBrd", L"Coin 1 Button");
			this->AutoAddLongInputSelect("Key", "Coin2ButtonKeyBrd", L"Coin 2 Button");
			this->AutoAddLongInputSelect("Key", "StartButtonKeyBrd", L"Start Button");
			this->AutoAddLongInputSelect("Key", "VR1ButtonKeyBrd", L"VR1 Button");
			this->AutoAddLongInputSelect("Key", "VR2ButtonKeyBrd", L"VR2 Button");
			this->AutoAddLongInputSelect("Key", "VR3ButtonKeyBrd", L"VR3 Button");
			this->AutoAddLongInputSelect("Key", "VR4ButtonKeyBrd", L"VR4 Button");
			this->AutoAddLongInputSelect("Key", "Shift1ButtonKeyBrd", L"Shift 1");
			this->AutoAddLongInputSelect("Key", "Shift2ButtonKeyBrd", L"Shift 2");
			this->AutoAddLongInputSelect("Key", "Shift3ButtonKeyBrd", L"Shift 3");
			this->AutoAddLongInputSelect("Key", "Shift4ButtonKeyBrd", L"Shift 4");
			this->AutoAddLongInputSelect("Key", "ShiftUpButtonKeyBrd", L"Shift Up");
			this->AutoAddLongInputSelect("Key", "ShiftDownButtonKeyBrd", L"Shift Down");

			this->Init();
		}
	};
}
