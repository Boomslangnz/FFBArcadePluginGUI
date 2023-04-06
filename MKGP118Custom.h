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

	public ref class MKGP118Custom : Helper
	{
	public:
		MKGP118Custom(MetroForm^ obj1)
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

			int effectsY = this->leftColPosY + 30;
			this->AddTextBox(L"Effects Strength", this->leftColX, effectsY, (3 * this->longWidth) + (4 * this->margin), this->textBoxHeight, L"");

			effectsY += this->textBoxOuterHeight;
			this->leftColPosY = effectsY;

			this->AutoAddShortTrackBarBlock("ConstantEffectForSteeringStrength", L"Constant Strength", 128, 999, L"Strength of constant effect similar to spring");
			this->AutoAddShortTrackBarBlock("WeaponRumbleStrength", L"Weapon Strength", 0, 100, L"Strength when using weapons");
			this->AutoAddShortTrackBarBlock("CoinRumbleStrength", L"Coin Strength", 0, 100, L"Strength when picking up coins");
			this->AutoAddShortTrackBarBlock("DriftRumbleControllerStrengthMultiplier", L"Drift Multiplier", 0, 999, L"Division of strength when drifting");
			this->AutoAddShortTrackBarBlock("HitGroundRumbleStrength", L"Hit Ground Strength", 0, 100, L"Strength when kart hits ground");
			this->AutoAddShortTrackBarBlock("BoostRumbleStrength", L"Boost Strength", 0, 100, L"Strength when using boost effect");

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForce");

			this->AutoAddComponent("AltGlobalForce");

			this->leftColPosY = effectsY;
			this->lastItemType = "";

			this->AutoAddShortTrackBarBlock("MainShakeRumbleStrength", L"Main Shake Strength", 0, 100, L"Strength when hitting karts or walls");
			this->AutoAddShortTrackBarBlock("DirtRumbleStrength", L"Dirt Strength", 0, 100, L"Strength when driving over dirt");
			this->AutoAddShortTrackBarBlock("GrassRumbleStrength", L"Grass Strength", 0, 100, L"Strength when driving over grass");
			this->AutoAddShortTrackBarBlock("SandRumbleStrength", L"Sand Strength", 0, 100, L"Strength when driving over sand");
			this->AutoAddShortTrackBarBlock("WaterRumbleWheelStrength", L"Water Friction", 0, 100, L"Strength when driving through water for wheels");
			this->AutoAddShortTrackBarBlock("WaterRumbleControllerStrengthMultiplier", L"Water Rumble", 0, 999, L"Strength when driving through water for rumble");

			this->New2ColsPage();

			this->AutoAddLongTextBox(L"Select Active Effects", L"");
			this->AutoAddShortCheckBox("ConstantEffectForSteering", L"Constant Steering", L"");
			this->AutoAddShortCheckBox("WeaponRumble", L"Weapon Effect", L"");
			this->AutoAddShortCheckBox("CoinRumble", L"Coin Effect", L"");
			this->AutoAddShortCheckBox("DriftRumble", L"Drift Effect", L"");
			this->AutoAddShortCheckBox("HitGroundRumble", L"Hit Ground Effect", L"");
			this->AutoAddShortCheckBox("BoostRumble", L"Boost Effect", L"");
			this->AutoAddShortCheckBox("MainShakeRumble", L"Main Shake Effect", L"");
			this->AutoAddShortCheckBox("DirtRumble", L"Dirt Effect", L"");
			this->AutoAddShortCheckBox("GrassRumble", L"Grass Effect", L"");
			this->AutoAddShortCheckBox("SandRumble", L"Sand Effect", L"");
			this->AutoAddShortCheckBox("WaterRumble", L"Water Effect", L"");
			this->AutoAddShortCheckBox("TileRumble", L"Tile Effect", L"");
			this->AutoAddShortCheckBox("CarpetRumble", L"Carpet Effect", L"");
			this->AutoAddShortCheckBox("SpeedBumpRumble", L"Speed Bump Effect", L"");
			this->AutoAddShortCheckBox("RoughTrackRumble", L"Rough Track Effect", L"");
			this->AutoAddShortCheckBox("BridgeRumble", L"Bridge Effect", L"");
			this->AutoAddShortCheckBox("MenuRumble", L"Menu Effect", L"");

			this->leftColPosY = effectsY;
			this->lastItemType = "";

			this->AutoAddShortTrackBarBlock("TileRumbleStrength", L"Tile Strength", 0, 100, L"Strength when driving over tiles");
			this->AutoAddShortTrackBarBlock("CarpetRumbleStrength", L"Carpet Strength", 0, 100, L"Strength when driving over carpet");
			this->AutoAddShortTrackBarBlock("SpeedBumpRumbleStrength", L"Speed Bump", 0, 100, L"Strength when driving over speed bumps");
			this->AutoAddShortTrackBarBlock("RoughTrackRumbleStrength", L"Rough Track", 0, 100, L"Strength when driving over rough part of track");
			this->AutoAddShortTrackBarBlock("BridgeRumbleStrength", L"Bridge Strength", 0, 100, L"Strength when driving over bridge");
			this->AutoAddShortTrackBarBlock("MenuRumbleStrength", L"Menu Strength", 0, 100, L"Strength when moving through menu");

			this->Init();
		}
	};
}