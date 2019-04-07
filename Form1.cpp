#include "Form1.h"
#include "SDL.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MetroFramework::Forms;

[STAThread]
int main(int argc, char** argv)
{
	SDL_Init(SDL_INIT_JOYSTICK | SDL_INIT_GAMECONTROLLER | SDL_INIT_HAPTIC);
	SDL_JoystickEventState(SDL_ENABLE);
	SDL_JoystickUpdate;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FFBPluginGUI::Form1 form;
	Application::Run(%form);

	return 0;
}