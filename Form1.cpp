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

#include "Form1.h"
#include "SDL.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MetroFramework::Forms;

[STAThread]
int main(int argc, char** argv)
{
	SDL_SetHint(SDL_HINT_JOYSTICK_RAWINPUT, "0");
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_JOYSTICK | SDL_INIT_HAPTIC | SDL_INIT_GAMECONTROLLER) < 0)
	SDL_JoystickEventState(SDL_ENABLE);
	SDL_JoystickUpdate();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FFBPluginGUI::Form1 form;
	Application::Run(%form);

	return 0;
}