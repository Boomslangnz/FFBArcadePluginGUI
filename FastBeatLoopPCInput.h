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

	public ref class FastBeatLoopPCInput : Helper
	{
	public:
		FastBeatLoopPCInput(MetroForm^ obj1)
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

			this->AutoAddComponent("OptionsHeader");

			this->AutoAddShortCheckBox("InputDeviceWheelEnable", L"Enable Input Support", L"");
			//this->AutoAddShortCheckBox("InputDeviceWheelReverseAxis", L"Reverse Pedal Axis", L"");
			this->AutoAddShortCheckBox("InputDeviceCombinedPedals", L"Combined Pedals", L"Enable if using combined pedal axis");

			this->AutoAddShortTrackBarBlock("SteeringDeadzone", L"Steering Deadzone", 0, 100, L"Set steering deadzone to set deadzone on device");
			this->AutoAddShortTrackBarBlock("PedalDeadzone", L"Pedal Deadzone", 0, 100, L"Set pedal deadzone to set deadzone on device");

			this->New2ColsPage();

			this->AddTextBox(L"Set or remove axis/button configuration below", this->leftColX, this->minPosY, (2 * this->longWidth) + (2 * this->margin), this->textBoxHeight, L"Select Input then move or press Axis or Button");

			this->leftColPosY = this->minPosY + this->textBoxOuterHeight;

			this->AutoAddShortTextBox(L"Device 1 Select Inputs", L"Axis/Button for device 1, click below to set input for device 1");
			this->AutoAddShortTextBox(L"Axis & Buttons", L"Axis/Button number set in FFBPlugin.ini for device 2");

			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelSteeringAxis", L"Steering Axis");
			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelAcclAxis", L"Accelerator Axis");
			this->AutoAddLongInputSelect("Axis", "InputDeviceWheelBrakeAxis", L"Brake Axis");
			this->AutoAddLongInputSelect("Button", "ExitButton", L"Exit Button");
			this->AutoAddLongInputSelect("Button", "ConfirmButton", L"Confirm Button");
			this->AutoAddLongInputSelect("Button", "CancelButton", L"Cancel Button");
			this->AutoAddLongInputSelect("Button", "SaveDeleteButton", L"Save Delete Button");			
			this->AutoAddLongInputSelect("Button", "ViewButton", L"View Button");
			this->AutoAddLongInputSelect("Button", "ShiftUp", L"Shift Up");
			this->AutoAddLongInputSelect("Button", "ShiftDown", L"Shift Down");

			this->AutoAddShortComboBoxBlock(
				"DpadUp",
				"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUpGame|DpadDownGame|DpadLeftGame|DpadRightGame|",
				L"Dpad Up",
				L"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUp|DpadDown|DpadLeft|DpadRight|Select no input",
				L"Choose what happens when you press up on dpad on device 1"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadDown",
				"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUpGame|DpadDownGame|DpadLeftGame|DpadRightGame|",
				L"Dpad Down",
				L"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUp|DpadDown|DpadLeft|DpadRight|Select no input",
				L"Choose what happens when you press down on dpad on device 1"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadLeft",
				"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUpGame|DpadDownGame|DpadLeftGame|DpadRightGame|",
				L"Dpad Left",
				L"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUp|DpadDown|DpadLeft|DpadRight|Select no input",
				L"Choose what happens when you press left on dpad on device 1"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadRight",
				"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUpGame|DpadDownGame|DpadLeftGame|DpadRightGame|",
				L"Dpad Right",
				L"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUp|DpadDown|DpadLeft|DpadRight|Select no input",
				L"Choose what happens when you press right on dpad on device 1"
			);

			this->New2ColsPage();

			this->leftColPosY = this->minPosY + this->textBoxOuterHeight;

			this->AutoAddShortTextBox(L"Device 2 Select Inputs", L"Button names for device 2, click below to set input for device 2");
			this->AutoAddShortTextBox(L"Buttons", L"Button number set in FFBPlugin.ini for device 2");

			this->leftColPosY += 3 * this->inputSelectOuterHeight;

			this->AutoAddLongInputSelect("Button", "ExitButtonDevice2", L"Exit Button");
			this->AutoAddLongInputSelect("Button", "ConfirmButtonDevice2", L"Confirm Button");
			this->AutoAddLongInputSelect("Button", "CancelButtonDevice2", L"Cancel Button");
			this->AutoAddLongInputSelect("Button", "SaveDeleteButtonDevice2", L"Save Delete Button");
			this->AutoAddLongInputSelect("Button", "ViewButtonDevice2", L"View Button");
			this->AutoAddLongInputSelect("Button", "ShiftUpDevice2", L"Shift Up");
			this->AutoAddLongInputSelect("Button", "ShiftDownDevice2", L"Shift Down");

			this->AutoAddShortComboBoxBlock(
				"DpadUpDevice2",
				"ExitButtonDevice2|ConfirmButtonDevice2|CancelButtonDevice2|SaveDeleteButtonDevice2|ViewButtonDevice2|ShiftUpDevice2|ShiftDownDevice2|DpadUpGameDevice2|DpadDownGameDevice2|DpadLeftGameDevice2|DpadRightGameDevice2|",
				L"Dpad Up",
				L"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUp|DpadDown|DpadLeft|DpadRight|Select no input",
				L"Choose what happens when you press up on dpad on device 2"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadDownDevice2",
				"ExitButtonDevice2|ConfirmButtonDevice2|CancelButtonDevice2|SaveDeleteButtonDevice2|ViewButtonDevice2|ShiftUpDevice2|ShiftDownDevice2|DpadUpGameDevice2|DpadDownGameDevice2|DpadLeftGameDevice2|DpadRightGameDevice2|",
				L"Dpad Down",
				L"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUp|DpadDown|DpadLeft|DpadRight|Select no input",
				L"Choose what happens when you press down on dpad on device 2"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadLeftDevice2",
				"ExitButtonDevice2|ConfirmButtonDevice2|CancelButtonDevice2|SaveDeleteButtonDevice2|ViewButtonDevice2|ShiftUpDevice2|ShiftDownDevice2|DpadUpGameDevice2|DpadDownGameDevice2|DpadLeftGameDevice2|DpadRightGameDevice2|",
				L"Dpad Left",
				L"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUp|DpadDown|DpadLeft|DpadRight|Select no input",
				L"Choose what happens when you press left on dpad on device 2"
			);
			this->AutoAddShortComboBoxBlock(
				"DpadRightDevice2",
				"ExitButtonDevice2|ConfirmButtonDevice2|CancelButtonDevice2|SaveDeleteButtonDevice2|ViewButtonDevice2|ShiftUpDevice2|ShiftDownDevice2|DpadUpGameDevice2|DpadDownGameDevice2|DpadLeftGameDevice2|DpadRightGameDevice2|",
				L"Dpad Right",
				L"ExitButton|ConfirmButton|CancelButton|SaveDeleteButton|ViewButton|ShiftUp|ShiftDown|DpadUp|DpadDown|DpadLeft|DpadRight|Select no input",
				L"Choose what happens when you press right on dpad on device 2"
			);

			this->Init();
		}
	};
}
