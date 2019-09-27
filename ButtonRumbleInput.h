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
#include <string>
#include "SDL.h"

static bool keepRunning2 = true;
static bool done2 = true;

static DWORD WINAPI Button1(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button1Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button2(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button2Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button3(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button3Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button4(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button4Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button5(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button5Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button6(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button6Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button7(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button7Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button8(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button8Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button9(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button9Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button10(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button10Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button1Device2(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button2Device2(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button3Device2(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button4Device2(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button5Device2(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button6Device2(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button7Device2(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button8Device2(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button9Device2(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Button10Device2(LPVOID lpParam)
{
	done2 = true;
	SDL_Event e1;
	for (int i = 0; i < SDL_NumJoysticks(); i++)
	{
		SDL_Joystick* js2 = SDL_JoystickOpen(i);
		static int SETUP_DEAD_ZONE = 8000;
		while (SDL_PollEvent(&e1))
		{
			if (e1.jaxis.axis == 0)
			{
				if (e1.jaxis.value < -SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 128 + e1.jaxis.value;
				}
				else if (e1.jaxis.value > SETUP_DEAD_ZONE)
				{
					e1.jaxis.value = (e1.jaxis.value / 255);
					e1.jaxis.value = 127 + e1.jaxis.value;
				}
			}
		}
	}
	static int SETUP_DEAD_ZONE = 10000;
	{
		while ((SDL_WaitEvent(&e1)) && (done2))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "0", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "1", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "2", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "3", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "4", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "5", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "6", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "7", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "8", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "9", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "10", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "11", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "12", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "13", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "14", ".\\FFBPlugin.ini");
					done2 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "15", ".\\FFBPlugin.ini");
					done2 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static void CreateButton1Thread()
{
	CreateThread(NULL, 0, Button1, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton2Thread()
{
	CreateThread(NULL, 0, Button2, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton3Thread()
{
	CreateThread(NULL, 0, Button3, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton4Thread()
{
	CreateThread(NULL, 0, Button4, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton5Thread()
{
	CreateThread(NULL, 0, Button5, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton6Thread()
{
	CreateThread(NULL, 0, Button6, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton7Thread()
{
	CreateThread(NULL, 0, Button7, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton8Thread()
{
	CreateThread(NULL, 0, Button8, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton9Thread()
{
	CreateThread(NULL, 0, Button9, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton10Thread()
{
	CreateThread(NULL, 0, Button10, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton1Device2Thread()
{
	CreateThread(NULL, 0, Button1Device2, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton2Device2Thread()
{
	CreateThread(NULL, 0, Button2Device2, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton3Device2Thread()
{
	CreateThread(NULL, 0, Button3Device2, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton4Device2Thread()
{
	CreateThread(NULL, 0, Button4Device2, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton5Device2Thread()
{
	CreateThread(NULL, 0, Button5Device2, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton6Device2Thread()
{
	CreateThread(NULL, 0, Button6Device2, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton7Device2Thread()
{
	CreateThread(NULL, 0, Button7Device2, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton8Device2Thread()
{
	CreateThread(NULL, 0, Button8Device2, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton9Device2Thread()
{
	CreateThread(NULL, 0, Button9Device2, (LPVOID)&keepRunning2, 0, NULL);
}

static void CreateButton10Device2Thread()
{
	CreateThread(NULL, 0, Button10Device2, (LPVOID)&keepRunning2, 0, NULL);
}

namespace FFBPluginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ButtonRumbleInput
	/// </summary>
	public ref class ButtonRumbleInput : public MetroFramework::Forms::MetroForm
	{
	public:
		System::Windows::Forms::Timer^ timer;
		static int count;
		ButtonRumbleInput(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MetroForm ^obj;
		ButtonRumbleInput(MetroForm ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			this->timer = (gcnew System::Windows::Forms::Timer());
			//Set the interval to 0.5 second.
			timer->Interval = 100;
			//Add the tick event handler to set the text periodically
			timer->Tick += gcnew System::EventHandler(this, &ButtonRumbleInput::timer_Tick);
			//Set the initial count to 100;
			count = 6000;
			//Stat counting.
			timer->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ButtonRumbleInput()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	protected:
	private: MetroFramework::Controls::MetroLink^  metroLink1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLink^  metroLink2;
	private: MetroFramework::Controls::MetroLink^  metroLink3;
	private: MetroFramework::Controls::MetroLink^  metroLink4;
	private: MetroFramework::Controls::MetroLink^  metroLink5;
	private: MetroFramework::Controls::MetroLink^  metroLink6;
	private: MetroFramework::Controls::MetroLink^  metroLink7;
	private: MetroFramework::Controls::MetroLink^  metroLink8;
	private: MetroFramework::Controls::MetroLink^  metroLink9;
	private: MetroFramework::Controls::MetroLink^  metroLink10;
	private: MetroFramework::Controls::MetroLink^  metroLink11;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox3;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox4;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox5;
	private: MetroFramework::Controls::MetroLink^  metroLink12;
	private: MetroFramework::Controls::MetroLink^  metroLink13;
	private: MetroFramework::Controls::MetroLink^  metroLink14;
	private: MetroFramework::Controls::MetroLink^  metroLink15;
	private: MetroFramework::Controls::MetroLink^  metroLink16;
	private: MetroFramework::Controls::MetroLink^  metroLink17;
	private: MetroFramework::Controls::MetroLink^  metroLink18;
	private: MetroFramework::Controls::MetroLink^  metroLink19;
	private: MetroFramework::Controls::MetroLink^  metroLink20;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel3;
	private: MetroFramework::Controls::MetroLabel^  metroLabel4;
	private: MetroFramework::Controls::MetroLabel^  metroLabel5;
	private: MetroFramework::Controls::MetroLabel^  metroLabel6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel7;
	private: MetroFramework::Controls::MetroLabel^  metroLabel8;
	private: MetroFramework::Controls::MetroLabel^  metroLabel9;
	private: MetroFramework::Controls::MetroLabel^  metroLabel10;
	private: MetroFramework::Controls::MetroLabel^  metroLabel11;
	private: MetroFramework::Controls::MetroLabel^  metroLabel12;
	private: MetroFramework::Controls::MetroLabel^  metroLabel13;
	private: MetroFramework::Controls::MetroLabel^  metroLabel14;
	private: MetroFramework::Controls::MetroLabel^  metroLabel15;
	private: MetroFramework::Controls::MetroLabel^  metroLabel16;
	private: MetroFramework::Controls::MetroLabel^  metroLabel17;
	private: MetroFramework::Controls::MetroLabel^  metroLabel18;
	private: MetroFramework::Controls::MetroLabel^  metroLabel19;
	private: MetroFramework::Controls::MetroLabel^  metroLabel20;
	private: MetroFramework::Controls::MetroLink^  metroLink21;
	private: MetroFramework::Components::MetroToolTip^  metroToolTip1;

	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->metroToolTip1 = (gcnew MetroFramework::Components::MetroToolTip());
			this->metroTextBox5 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLink2 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink3 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink4 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink5 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink6 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink7 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink8 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink9 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink10 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink11 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox4 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLink12 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink13 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink14 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink15 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink16 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink17 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink18 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink19 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink20 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel7 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel8 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel9 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel10 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel11 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel12 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel13 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel14 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel15 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel16 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel17 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel18 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel19 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel20 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLink21 = (gcnew MetroFramework::Controls::MetroLink());
			this->SuspendLayout();
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ButtonRumbleInput::Form1_FormClosing);
			// 
			// metroToolTip1
			// 
			this->metroToolTip1->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroToolTip1->StyleManager = nullptr;
			this->metroToolTip1->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroToolTip1->SetToolTip(this->metroTextBox5, L" Select Input then move or press Axis or Button");
			this->metroToolTip1->SetToolTip(this->metroTextBox1, L" Button names for device 1, click below to set input for device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox2, L" Button number set in FFBPlugin.ini for device 1 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox3, L" Button names for device 2, click below to set input for device 2 ");
			this->metroToolTip1->SetToolTip(this->metroTextBox4, L" Button number set in FFBPlugin.ini for device 2 ");
			// 
			// metroTextBox1
			// 
			// 
			// 
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(169, 1);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox1->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox1->CustomButton->TabIndex = 1;
			this->metroTextBox1->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox1->CustomButton->UseSelectable = false;
			this->metroTextBox1->CustomButton->Visible = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"Device 1 Select Input" };
			this->metroTextBox1->Location = System::Drawing::Point(3, 83);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ReadOnly = true;
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->SelectionLength = 0;
			this->metroTextBox1->SelectionStart = 0;
			this->metroTextBox1->ShortcutsEnabled = true;
			this->metroTextBox1->Size = System::Drawing::Size(191, 23);
			this->metroTextBox1->TabIndex = 0;
			this->metroTextBox1->TabStop = false;
			this->metroTextBox1->Text = L"Device 1 Select Input";
			this->metroTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox1->UseSelectable = false;
			this->metroTextBox1->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox1->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLink1
			// 
			this->metroLink1->Location = System::Drawing::Point(3, 112);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(191, 23);
			this->metroLink1->Style = MetroFramework::MetroColorStyle::Silver;
			this->metroLink1->TabIndex = 1;
			this->metroLink1->TabStop = false;
			this->metroLink1->Text = L"Button1";
			this->metroLink1->UseSelectable = false;
			this->metroLink1->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink1_Click);
			// 
			// metroTextBox2
			// 
			// 
			// 
			// 
			this->metroTextBox2->CustomButton->Image = nullptr;
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(75, 1);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox2->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox2->CustomButton->TabIndex = 1;
			this->metroTextBox2->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox2->CustomButton->UseSelectable = false;
			this->metroTextBox2->CustomButton->Visible = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"Button Number" };
			this->metroTextBox2->Location = System::Drawing::Point(200, 83);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ReadOnly = true;
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->SelectionLength = 0;
			this->metroTextBox2->SelectionStart = 0;
			this->metroTextBox2->ShortcutsEnabled = true;
			this->metroTextBox2->Size = System::Drawing::Size(97, 23);
			this->metroTextBox2->TabIndex = 2;
			this->metroTextBox2->TabStop = false;
			this->metroTextBox2->Text = L"Button Number";
			this->metroTextBox2->UseSelectable = false;
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLabel1
			// 
			int Button1Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button1Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(234, 112);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(16, 19);
			if (Button1Rumble1 == 99)
			{
				this->metroLabel1->Text = "Not Defined";
			}
			else
			{
				this->metroLabel1->Text = System::Convert::ToString(Button1Rumble1);
			}			
			this->metroLabel1->TabIndex = 3;
			this->metroLabel1->TabStop = false;
			this->metroLabel1->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel1_Click);
			// 
			// metroLink2
			// 			
			this->metroLink2->Location = System::Drawing::Point(3, 141);
			this->metroLink2->Name = L"metroLink2";
			this->metroLink2->Size = System::Drawing::Size(191, 23);
			this->metroLink2->TabIndex = 4;
			this->metroLink2->TabStop = false;
			this->metroLink2->Text = L"Button 2";
			this->metroLink2->UseSelectable = false;
			this->metroLink2->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink2_Click);
			// 
			// metroLink3
			// 
			this->metroLink3->Location = System::Drawing::Point(3, 170);
			this->metroLink3->Name = L"metroLink3";
			this->metroLink3->Size = System::Drawing::Size(191, 23);
			this->metroLink3->TabIndex = 5;
			this->metroLink3->TabStop = false;
			this->metroLink3->Text = L"Button 3";
			this->metroLink3->UseSelectable = false;
			this->metroLink3->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink3_Click);
			// 
			// metroLink4
			// 
			this->metroLink4->Location = System::Drawing::Point(3, 199);
			this->metroLink4->Name = L"metroLink4";
			this->metroLink4->Size = System::Drawing::Size(191, 23);
			this->metroLink4->TabIndex = 6;
			this->metroLink4->TabStop = false;
			this->metroLink4->Text = L"Button 4";
			this->metroLink4->UseSelectable = false;
			this->metroLink4->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink4_Click);
			// 
			// metroLink5
			// 
			this->metroLink5->Location = System::Drawing::Point(3, 228);
			this->metroLink5->Name = L"metroLink5";
			this->metroLink5->Size = System::Drawing::Size(191, 23);
			this->metroLink5->TabIndex = 7;
			this->metroLink5->TabStop = false;
			this->metroLink5->Text = L"Button 5";
			this->metroLink5->UseSelectable = false;
			this->metroLink5->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink5_Click);
			// 
			// metroLink6
			// 
			this->metroLink6->Location = System::Drawing::Point(3, 257);
			this->metroLink6->Name = L"metroLink6";
			this->metroLink6->Size = System::Drawing::Size(191, 23);
			this->metroLink6->TabIndex = 8;
			this->metroLink6->TabStop = false;
			this->metroLink6->Text = L"Button 6";
			this->metroLink6->UseSelectable = false;
			this->metroLink6->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink6_Click);
			// 
			// metroLink7
			// 
			this->metroLink7->Location = System::Drawing::Point(3, 286);
			this->metroLink7->Name = L"metroLink7";
			this->metroLink7->Size = System::Drawing::Size(191, 23);
			this->metroLink7->TabIndex = 9;
			this->metroLink7->TabStop = false;
			this->metroLink7->Text = L"Button 7";
			this->metroLink7->UseSelectable = false;
			this->metroLink7->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink7_Click);
			// 
			// metroLink8
			// 
			this->metroLink8->Location = System::Drawing::Point(3, 315);
			this->metroLink8->Name = L"metroLink8";
			this->metroLink8->Size = System::Drawing::Size(191, 23);
			this->metroLink8->TabIndex = 10;
			this->metroLink8->TabStop = false;
			this->metroLink8->Text = L"Button 8";
			this->metroLink8->UseSelectable = false;
			this->metroLink8->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink8_Click);
			// 
			// metroLink9
			// 
			this->metroLink9->Location = System::Drawing::Point(3, 344);
			this->metroLink9->Name = L"metroLink9";
			this->metroLink9->Size = System::Drawing::Size(191, 23);
			this->metroLink9->TabIndex = 11;
			this->metroLink9->TabStop = false;
			this->metroLink9->Text = L"Button 9";
			this->metroLink9->UseSelectable = false;
			this->metroLink9->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink9_Click);
			// 
			// metroLink10
			// 
			this->metroLink10->Location = System::Drawing::Point(3, 373);
			this->metroLink10->Name = L"metroLink10";
			this->metroLink10->Size = System::Drawing::Size(191, 23);
			this->metroLink10->TabIndex = 12;
			this->metroLink10->TabStop = false;
			this->metroLink10->Text = L"Button 10";
			this->metroLink10->UseSelectable = false;
			this->metroLink10->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink10_Click);
			// 
			// metroLink11
			// 
			this->metroLink11->Location = System::Drawing::Point(3, 431);
			this->metroLink11->Name = L"metroLink11";
			this->metroLink11->Size = System::Drawing::Size(191, 23);
			this->metroLink11->TabIndex = 13;
			this->metroLink11->TabStop = false;
			this->metroLink11->Text = L"Button 1";
			this->metroLink11->UseSelectable = false;
			this->metroLink11->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink11_Click);
			// 
			// metroTextBox3
			// 
			// 
			// 
			// 
			this->metroTextBox3->CustomButton->Image = nullptr;
			this->metroTextBox3->CustomButton->Location = System::Drawing::Point(169, 1);
			this->metroTextBox3->CustomButton->Name = L"";
			this->metroTextBox3->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox3->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox3->CustomButton->TabIndex = 1;
			this->metroTextBox3->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox3->CustomButton->UseSelectable = false;
			this->metroTextBox3->CustomButton->Visible = false;
			this->metroTextBox3->Lines = gcnew cli::array< System::String^  >(1) { L"Device 2 Select Input" };
			this->metroTextBox3->Location = System::Drawing::Point(3, 402);
			this->metroTextBox3->MaxLength = 32767;
			this->metroTextBox3->Name = L"metroTextBox3";
			this->metroTextBox3->PasswordChar = '\0';
			this->metroTextBox3->ReadOnly = true;
			this->metroTextBox3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox3->SelectedText = L"";
			this->metroTextBox3->SelectionLength = 0;
			this->metroTextBox3->SelectionStart = 0;
			this->metroTextBox3->ShortcutsEnabled = true;
			this->metroTextBox3->Size = System::Drawing::Size(191, 23);
			this->metroTextBox3->TabIndex = 14;
			this->metroTextBox3->TabStop = false;
			this->metroTextBox3->Text = L"Device 2 Select Input";
			this->metroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox3->UseSelectable = false;
			this->metroTextBox3->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox3->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox4
			// 
			// 
			// 
			// 
			this->metroTextBox4->CustomButton->Image = nullptr;
			this->metroTextBox4->CustomButton->Location = System::Drawing::Point(75, 1);
			this->metroTextBox4->CustomButton->Name = L"";
			this->metroTextBox4->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox4->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox4->CustomButton->TabIndex = 1;
			this->metroTextBox4->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox4->CustomButton->UseSelectable = false;
			this->metroTextBox4->CustomButton->Visible = false;
			this->metroTextBox4->Lines = gcnew cli::array< System::String^  >(1) { L"Button Number" };
			this->metroTextBox4->Location = System::Drawing::Point(200, 402);
			this->metroTextBox4->MaxLength = 32767;
			this->metroTextBox4->Name = L"metroTextBox4";
			this->metroTextBox4->PasswordChar = '\0';
			this->metroTextBox4->ReadOnly = true;
			this->metroTextBox4->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox4->SelectedText = L"";
			this->metroTextBox4->SelectionLength = 0;
			this->metroTextBox4->SelectionStart = 0;
			this->metroTextBox4->ShortcutsEnabled = true;
			this->metroTextBox4->Size = System::Drawing::Size(97, 23);
			this->metroTextBox4->TabIndex = 15;
			this->metroTextBox4->TabStop = false;
			this->metroTextBox4->Text = L"Button Number";
			this->metroTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox4->UseSelectable = false;
			this->metroTextBox4->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox4->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox5
			// 
			// 
			// 
			// 
			this->metroTextBox5->CustomButton->Image = nullptr;
			this->metroTextBox5->CustomButton->Location = System::Drawing::Point(169, 1);
			this->metroTextBox5->CustomButton->Name = L"";
			this->metroTextBox5->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox5->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox5->CustomButton->TabIndex = 1;
			this->metroTextBox5->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox5->CustomButton->UseSelectable = false;
			this->metroTextBox5->CustomButton->Visible = false;
			this->metroTextBox5->Lines = gcnew cli::array< System::String^  >(1) { L"Set or remove button configuration below" };
			this->metroTextBox5->Location = System::Drawing::Point(3, 48);
			this->metroTextBox5->MaxLength = 32767;
			this->metroTextBox5->Name = L"metroTextBox5";
			this->metroTextBox5->PasswordChar = '\0';
			this->metroTextBox5->ReadOnly = true;
			this->metroTextBox5->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox5->SelectedText = L"";
			this->metroTextBox5->SelectionLength = 0;
			this->metroTextBox5->SelectionStart = 0;
			this->metroTextBox5->ShortcutsEnabled = true;
			this->metroTextBox5->Size = System::Drawing::Size(309, 23);
			this->metroTextBox5->TabIndex = 43;
			this->metroTextBox5->TabStop = false;
			this->metroTextBox5->Text = L"Set or remove button configuration below";
			this->metroTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroTextBox5->UseSelectable = false;
			this->metroTextBox5->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox1->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLink12
			// 
			this->metroLink12->Location = System::Drawing::Point(3, 460);
			this->metroLink12->Name = L"metroLink12";
			this->metroLink12->Size = System::Drawing::Size(191, 23);
			this->metroLink12->TabIndex = 16;
			this->metroLink12->TabStop = false;
			this->metroLink12->Text = L"Button 2";
			this->metroLink12->UseSelectable = false;
			this->metroLink12->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink12_Click);
			// 
			// metroLink13
			// 
			this->metroLink13->Location = System::Drawing::Point(3, 489);
			this->metroLink13->Name = L"metroLink13";
			this->metroLink13->Size = System::Drawing::Size(191, 23);
			this->metroLink13->TabIndex = 17;
			this->metroLink13->TabStop = false;
			this->metroLink13->Text = L"Button 3";
			this->metroLink13->UseSelectable = false;
			this->metroLink13->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink13_Click);
			// 
			// metroLink14
			// 
			this->metroLink14->Location = System::Drawing::Point(3, 518);
			this->metroLink14->Name = L"metroLink14";
			this->metroLink14->Size = System::Drawing::Size(191, 23);
			this->metroLink14->TabIndex = 18;
			this->metroLink14->TabStop = false;
			this->metroLink14->Text = L"Button 4";
			this->metroLink14->UseSelectable = false;
			this->metroLink14->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink14_Click);
			// 
			// metroLink15
			// 
			this->metroLink15->Location = System::Drawing::Point(3, 547);
			this->metroLink15->Name = L"metroLink15";
			this->metroLink15->Size = System::Drawing::Size(191, 23);
			this->metroLink15->TabIndex = 19;
			this->metroLink15->TabStop = false;
			this->metroLink15->Text = L"Button 5";
			this->metroLink15->UseSelectable = false;
			this->metroLink15->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink15_Click);
			// 
			// metroLink16
			// 
			this->metroLink16->Location = System::Drawing::Point(3, 576);
			this->metroLink16->Name = L"metroLink16";
			this->metroLink16->Size = System::Drawing::Size(191, 23);
			this->metroLink16->TabIndex = 20;
			this->metroLink16->TabStop = false;
			this->metroLink16->Text = L"Button 6";
			this->metroLink16->UseSelectable = false;
			this->metroLink16->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink16_Click);
			// 
			// metroLink17
			// 
			this->metroLink17->Location = System::Drawing::Point(3, 605);
			this->metroLink17->Name = L"metroLink17";
			this->metroLink17->Size = System::Drawing::Size(191, 23);
			this->metroLink17->TabIndex = 21;
			this->metroLink17->TabStop = false;
			this->metroLink17->Text = L"Button 7";
			this->metroLink17->UseSelectable = false;
			this->metroLink17->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink17_Click);
			// 
			// metroLink18
			// 
			this->metroLink18->Location = System::Drawing::Point(3, 634);
			this->metroLink18->Name = L"metroLink18";
			this->metroLink18->Size = System::Drawing::Size(191, 23);
			this->metroLink18->TabIndex = 22;
			this->metroLink18->TabStop = false;
			this->metroLink18->Text = L"Button 8";
			this->metroLink18->UseSelectable = false;
			this->metroLink18->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink18_Click);
			// 
			// metroLink19
			// 
			this->metroLink19->Location = System::Drawing::Point(3, 663);
			this->metroLink19->Name = L"metroLink19";
			this->metroLink19->Size = System::Drawing::Size(191, 23);
			this->metroLink19->TabIndex = 23;
			this->metroLink19->TabStop = false;
			this->metroLink19->Text = L"Button 9";
			this->metroLink19->UseSelectable = false;
			this->metroLink19->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink19_Click);
			// 
			// metroLink20
			// 
			this->metroLink20->Location = System::Drawing::Point(3, 692);
			this->metroLink20->Name = L"metroLink20";
			this->metroLink20->Size = System::Drawing::Size(191, 23);
			this->metroLink20->TabIndex = 24;
			this->metroLink20->TabStop = false;
			this->metroLink20->Text = L"Button 10";
			this->metroLink20->UseSelectable = false;
			this->metroLink20->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink20_Click);
			// 
			// metroLink21
			// 
			this->metroLink21->Location = System::Drawing::Point(67, 8);
			this->metroLink21->Name = L"metroLink1";
			this->metroLink21->Size = System::Drawing::Size(173, 23);
			this->metroLink21->TabIndex = 44;
			this->metroLink21->TabStop = false;
			this->metroLink21->Text = L"Go Back To Previous Menu";
			this->metroLink21->UseSelectable = false;
			this->metroLink21->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLink21_Click);
			// 
			// metroLabel2
			// 
			int Button2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(234, 141);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(16, 19);
			if (Button2Rumble1 == 99)
			{
				this->metroLabel2->Text = "Not Defined";
			}
			else
			{
				this->metroLabel2->Text = System::Convert::ToString(Button2Rumble1);
			}
			this->metroLabel2->TabIndex = 25;
			this->metroLabel2->TabStop = false;
			this->metroLabel2->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel2_Click);
			// 
			// metroLabel3
			// 
			int Button3Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button3Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->Location = System::Drawing::Point(234, 170);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(16, 19);
			if (Button3Rumble1 == 99)
			{
				this->metroLabel3->Text = "Not Defined";
			}
			else
			{
				this->metroLabel3->Text = System::Convert::ToString(Button3Rumble1);
			}
			this->metroLabel3->TabIndex = 26;
			this->metroLabel3->TabStop = false;
			this->metroLabel3->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel3_Click);
			// 
			// metroLabel4
			// 
			int Button4Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button4Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->Location = System::Drawing::Point(234, 199);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(16, 19);
			if (Button4Rumble1 == 99)
			{
				this->metroLabel4->Text = "Not Defined";
			}
			else
			{
				this->metroLabel4->Text = System::Convert::ToString(Button4Rumble1);
			}
			this->metroLabel4->TabIndex = 27;
			this->metroLabel4->TabStop = false;
			this->metroLabel4->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel4_Click);
			// 
			// metroLabel5
			// 
			int Button5Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button5Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->Location = System::Drawing::Point(234, 228);
			this->metroLabel5->Name = L"metroLabel5";
			this->metroLabel5->Size = System::Drawing::Size(16, 19);
			if (Button5Rumble1 == 99)
			{
				this->metroLabel5->Text = "Not Defined";
			}
			else
			{
				this->metroLabel5->Text = System::Convert::ToString(Button5Rumble1);
			}
			this->metroLabel5->TabStop = false;
			this->metroLabel5->TabIndex = 28;
			this->metroLabel5->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel5_Click);
			// 
			// metroLabel6
			// 
			int Button6Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button6Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel6->AutoSize = true;
			this->metroLabel6->Location = System::Drawing::Point(234, 257);
			this->metroLabel6->Name = L"metroLabel6";
			this->metroLabel6->Size = System::Drawing::Size(16, 19);
			if (Button6Rumble1 == 99)
			{
				this->metroLabel6->Text = "Not Defined";
			}
			else
			{
				this->metroLabel6->Text = System::Convert::ToString(Button6Rumble1);
			}
			this->metroLabel6->TabStop = false;
			this->metroLabel6->TabIndex = 29;
			this->metroLabel6->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel6_Click);
			// 
			// metroLabel7
			// 
			int Button7Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button7Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel7->AutoSize = true;
			this->metroLabel7->Location = System::Drawing::Point(234, 286);
			this->metroLabel7->Name = L"metroLabel7";
			this->metroLabel7->Size = System::Drawing::Size(16, 19);
			if (Button7Rumble1 == 99)
			{
				this->metroLabel7->Text = "Not Defined";
			}
			else
			{
				this->metroLabel7->Text = System::Convert::ToString(Button7Rumble1);
			}
			this->metroLabel7->TabStop = false;
			this->metroLabel7->TabIndex = 30;
			this->metroLabel7->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel7_Click);
			// 
			// metroLabel8
			// 
			int Button8Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button8Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel8->AutoSize = true;
			this->metroLabel8->Location = System::Drawing::Point(234, 315);
			this->metroLabel8->Name = L"metroLabel8";
			this->metroLabel8->Size = System::Drawing::Size(16, 19);
			if (Button8Rumble1 == 99)
			{
				this->metroLabel8->Text = "Not Defined";
			}
			else
			{
				this->metroLabel8->Text = System::Convert::ToString(Button8Rumble1);
			}
			this->metroLabel8->TabStop = false;
			this->metroLabel8->TabIndex = 31;
			this->metroLabel8->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel8_Click);
			// 
			// metroLabel9
			// 
			int Button9Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button9Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel9->AutoSize = true;
			this->metroLabel9->Location = System::Drawing::Point(234, 344);
			this->metroLabel9->Name = L"metroLabel9";
			this->metroLabel9->Size = System::Drawing::Size(16, 19);
			if (Button9Rumble1 == 99)
			{
				this->metroLabel9->Text = "Not Defined";
			}
			else
			{
				this->metroLabel9->Text = System::Convert::ToString(Button9Rumble1);
			}
			this->metroLabel9->TabStop = false;
			this->metroLabel9->TabIndex = 32;
			this->metroLabel9->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel9_Click);
			// 
			// metroLabel10
			// 
			int Button10Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button10Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel10->AutoSize = true;
			this->metroLabel10->Location = System::Drawing::Point(234, 373);
			this->metroLabel10->Name = L"metroLabel10";
			this->metroLabel10->Size = System::Drawing::Size(16, 19);
			if (Button10Rumble1 == 99)
			{
				this->metroLabel10->Text = "Not Defined";
			}
			else
			{
				this->metroLabel10->Text = System::Convert::ToString(Button10Rumble1);
			}
			this->metroLabel10->TabStop = false;
			this->metroLabel10->TabIndex = 33;
			this->metroLabel10->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel10_Click);
			// 
			// metroLabel11
			// 
			int Button1Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button1Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel11->AutoSize = true;
			this->metroLabel11->Location = System::Drawing::Point(234, 431);
			this->metroLabel11->Name = L"metroLabel11";
			this->metroLabel11->Size = System::Drawing::Size(16, 19);
			if (Button1Device2Rumble1 == 99)
			{
				this->metroLabel11->Text = "Not Defined";
			}
			else
			{
				this->metroLabel11->Text = System::Convert::ToString(Button1Device2Rumble1);
			}			
			this->metroLabel11->TabStop = false;
			this->metroLabel11->TabIndex = 34;
			this->metroLabel11->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel11_Click);
			// 
			// metroLabel12
			// 
			int Button2Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button2Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel12->AutoSize = true;
			this->metroLabel12->Location = System::Drawing::Point(234, 460);
			this->metroLabel12->Name = L"metroLabel12";
			this->metroLabel12->Size = System::Drawing::Size(16, 19);
			if (Button2Device2Rumble1 == 99)
			{
				this->metroLabel12->Text = "Not Defined";
			}
			else
			{
				this->metroLabel12->Text = System::Convert::ToString(Button2Device2Rumble1);
			}
			this->metroLabel12->TabStop = false;
			this->metroLabel12->TabIndex = 35;
			this->metroLabel12->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel12_Click);
			// 
			// metroLabel13
			// 
			int Button3Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button3Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel13->AutoSize = true;
			this->metroLabel13->Location = System::Drawing::Point(234, 489);
			this->metroLabel13->Name = L"metroLabel13";
			this->metroLabel13->Size = System::Drawing::Size(16, 19);
			if (Button3Device2Rumble1 == 99)
			{
				this->metroLabel13->Text = "Not Defined";
			}
			else
			{
				this->metroLabel13->Text = System::Convert::ToString(Button3Device2Rumble1);
			}
			this->metroLabel13->TabStop = false;
			this->metroLabel13->TabIndex = 36;
			this->metroLabel13->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel13_Click);
			// 
			// metroLabel14
			// 
			int Button4Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button4Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel14->AutoSize = true;
			this->metroLabel14->Location = System::Drawing::Point(234, 518);
			this->metroLabel14->Name = L"metroLabel14";
			this->metroLabel14->Size = System::Drawing::Size(16, 19);
			if (Button4Device2Rumble1 == 99)
			{
				this->metroLabel14->Text = "Not Defined";
			}
			else
			{
				this->metroLabel14->Text = System::Convert::ToString(Button4Device2Rumble1);
			}
			this->metroLabel14->TabStop = false;
			this->metroLabel14->TabIndex = 37;
			this->metroLabel14->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel14_Click);
			// 
			// metroLabel15
			// 
			int Button5Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button5Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel15->AutoSize = true;
			this->metroLabel15->Location = System::Drawing::Point(234, 547);
			this->metroLabel15->Name = L"metroLabel15";
			this->metroLabel15->Size = System::Drawing::Size(16, 19);
			if (Button5Device2Rumble1 == 99)
			{
				this->metroLabel15->Text = "Not Defined";
			}
			else
			{
				this->metroLabel15->Text = System::Convert::ToString(Button5Device2Rumble1);
			}
			this->metroLabel15->TabStop = false;
			this->metroLabel15->TabIndex = 38;
			this->metroLabel15->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel15_Click);
			// 
			// metroLabel16
			// 
			int Button6Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button6Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel16->AutoSize = true;
			this->metroLabel16->Location = System::Drawing::Point(234, 576);
			this->metroLabel16->Name = L"metroLabel16";
			this->metroLabel16->Size = System::Drawing::Size(16, 19);
			if (Button6Device2Rumble1 == 99)
			{
				this->metroLabel16->Text = "Not Defined";
			}
			else
			{
				this->metroLabel16->Text = System::Convert::ToString(Button6Device2Rumble1);
			}
			this->metroLabel16->TabStop = false;
			this->metroLabel16->TabIndex = 39;
			this->metroLabel16->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel16_Click);
			// 
			// metroLabel17
			// 
			int Button7Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button7Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel17->AutoSize = true;
			this->metroLabel17->Location = System::Drawing::Point(234, 605);
			this->metroLabel17->Name = L"metroLabel17";
			this->metroLabel17->Size = System::Drawing::Size(16, 19);
			if (Button7Device2Rumble1 == 99)
			{
				this->metroLabel17->Text = "Not Defined";
			}
			else
			{
				this->metroLabel17->Text = System::Convert::ToString(Button7Device2Rumble1);
			}
			this->metroLabel17->TabStop = false;
			this->metroLabel17->TabIndex = 40;
			this->metroLabel17->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel17_Click);
			// 
			// metroLabel18
			// 
			int Button8Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button8Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel18->AutoSize = true;
			this->metroLabel18->Location = System::Drawing::Point(234, 634);
			this->metroLabel18->Name = L"metroLabel18";
			this->metroLabel18->Size = System::Drawing::Size(16, 19);
			if (Button8Device2Rumble1 == 99)
			{
				this->metroLabel18->Text = "Not Defined";
			}
			else
			{
				this->metroLabel18->Text = System::Convert::ToString(Button8Device2Rumble1);
			}
			this->metroLabel18->TabStop = false;
			this->metroLabel18->TabIndex = 41;
			this->metroLabel18->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel18_Click);
			// 
			// metroLabel19
			// 
			int Button9Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button9Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel19->AutoSize = true;
			this->metroLabel19->Location = System::Drawing::Point(234, 663);
			this->metroLabel19->Name = L"metroLabel19";
			this->metroLabel19->Size = System::Drawing::Size(16, 19);
			if (Button9Device2Rumble1 == 99)
			{
				this->metroLabel19->Text = "Not Defined";
			}
			else
			{
				this->metroLabel19->Text = System::Convert::ToString(Button9Device2Rumble1);
			}
			this->metroLabel19->TabStop = false;
			this->metroLabel19->TabIndex = 42;
			this->metroLabel19->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel19_Click);
			// 
			// metroLabel20
			// 
			int Button10Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button10Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel20->AutoSize = true;
			this->metroLabel20->Location = System::Drawing::Point(234, 692);
			this->metroLabel20->Name = L"metroLabel20";
			this->metroLabel20->Size = System::Drawing::Size(16, 19);
			if (Button10Device2Rumble1 == 99)
			{
				this->metroLabel20->Text = "Not Defined";
			}
			else
			{
				this->metroLabel20->Text = System::Convert::ToString(Button10Device2Rumble1);
			}
			this->metroLabel20->TabStop = false;
			this->metroLabel20->TabIndex = 43;
			this->metroLabel20->Click += gcnew System::EventHandler(this, &ButtonRumbleInput::metroLabel20_Click);
			// 
			// ButtonRumbleInput
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(315, 741);
			this->Controls->Add(this->metroLabel20);
			this->Controls->Add(this->metroLabel19);
			this->Controls->Add(this->metroLabel18);
			this->Controls->Add(this->metroLabel17);
			this->Controls->Add(this->metroLabel16);
			this->Controls->Add(this->metroLabel15);
			this->Controls->Add(this->metroLabel14);
			this->Controls->Add(this->metroLabel13);
			this->Controls->Add(this->metroLabel12);
			this->Controls->Add(this->metroLabel11);
			this->Controls->Add(this->metroLabel10);
			this->Controls->Add(this->metroLabel9);
			this->Controls->Add(this->metroLabel8);
			this->Controls->Add(this->metroLabel7);
			this->Controls->Add(this->metroLabel6);
			this->Controls->Add(this->metroLabel5);
			this->Controls->Add(this->metroLabel4);
			this->Controls->Add(this->metroLabel3);
			this->Controls->Add(this->metroLabel2);
			this->Controls->Add(this->metroLink21);
			this->Controls->Add(this->metroLink20);
			this->Controls->Add(this->metroLink19);
			this->Controls->Add(this->metroLink18);
			this->Controls->Add(this->metroLink17);
			this->Controls->Add(this->metroLink16);
			this->Controls->Add(this->metroLink15);
			this->Controls->Add(this->metroLink14);
			this->Controls->Add(this->metroLink13);
			this->Controls->Add(this->metroLink12);
			this->Controls->Add(this->metroTextBox5);
			this->Controls->Add(this->metroTextBox4);
			this->Controls->Add(this->metroTextBox3);
			this->Controls->Add(this->metroLink11);
			this->Controls->Add(this->metroLink10);
			this->Controls->Add(this->metroLink9);
			this->Controls->Add(this->metroLink8);
			this->Controls->Add(this->metroLink7);
			this->Controls->Add(this->metroLink6);
			this->Controls->Add(this->metroLink5);
			this->Controls->Add(this->metroLink4);
			this->Controls->Add(this->metroLink3);
			this->Controls->Add(this->metroLink2);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroTextBox1);
			this->MaximizeBox = false;
			this->ShowIcon = false;
			this->Name = L"ButtonRumbleInput";
			this->Padding = System::Windows::Forms::Padding(0, 60, 0, 0);
			this->Resizable = false;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {

			int Button1Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button1Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button3Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button3Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button4Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button4Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button5Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button5Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button6Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button6Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button7Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button7Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button8Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button8Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button9Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button9Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button10Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button10Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button1Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button1Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button2Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button2Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button3Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button3Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button4Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button4Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button5Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button5Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button6Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button6Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button7Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button7Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button8Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button8Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button9Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button9Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			int Button10Device2Rumble1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Button10Device2Rumble"), 0, TEXT(".\\FFBPlugin.ini"));
			if (!done2)
			{
				if (Button1Rumble1 == 99)
				{
					this->metroLabel1->Text = "Not Defined";
				}
				else
				{
					this->metroLabel1->Text = System::Convert::ToString(Button1Rumble1);
				}
				if (Button2Rumble1 == 99)
				{
					this->metroLabel2->Text = "Not Defined";
				}
				else
				{
					this->metroLabel2->Text = System::Convert::ToString(Button2Rumble1);
				}
				if (Button3Rumble1 == 99)
				{
					this->metroLabel3->Text = "Not Defined";
				}
				else
				{
					this->metroLabel3->Text = System::Convert::ToString(Button3Rumble1);
				}
				if (Button4Rumble1 == 99)
				{
					this->metroLabel4->Text = "Not Defined";
				}
				else
				{
					this->metroLabel4->Text = System::Convert::ToString(Button4Rumble1);
				}
				if (Button5Rumble1 == 99)
				{
					this->metroLabel5->Text = "Not Defined";
				}
				else
				{
					this->metroLabel5->Text = System::Convert::ToString(Button5Rumble1);
				}
				if (Button6Rumble1 == 99)
				{
					this->metroLabel6->Text = "Not Defined";
				}
				else
				{
					this->metroLabel6->Text = System::Convert::ToString(Button6Rumble1);
				}
				if (Button7Rumble1 == 99)
				{
					this->metroLabel7->Text = "Not Defined";
				}
				else
				{
					this->metroLabel7->Text = System::Convert::ToString(Button7Rumble1);
				}
				if (Button8Rumble1 == 99)
				{
					this->metroLabel8->Text = "Not Defined";
				}
				else
				{
					this->metroLabel8->Text = System::Convert::ToString(Button8Rumble1);
				}
				if (Button9Rumble1 == 99)
				{
					this->metroLabel9->Text = "Not Defined";
				}
				else
				{
					this->metroLabel9->Text = System::Convert::ToString(Button9Rumble1);
				}
				if (Button10Rumble1 == 99)
				{
					this->metroLabel10->Text = "Not Defined";
				}
				else
				{
					this->metroLabel10->Text = System::Convert::ToString(Button10Rumble1);
				}
				if (Button1Device2Rumble1 == 99)
				{
					this->metroLabel11->Text = "Not Defined";
				}
				else
				{
					this->metroLabel11->Text = System::Convert::ToString(Button1Device2Rumble1);
				}
				if (Button2Device2Rumble1 == 99)
				{
					this->metroLabel12->Text = "Not Defined";
				}
				else
				{
					this->metroLabel12->Text = System::Convert::ToString(Button2Device2Rumble1);
				}
				if (Button3Device2Rumble1 == 99)
				{
					this->metroLabel13->Text = "Not Defined";
				}
				else
				{
					this->metroLabel13->Text = System::Convert::ToString(Button3Device2Rumble1);
				}
				if (Button4Device2Rumble1 == 99)
				{
					this->metroLabel14->Text = "Not Defined";
				}
				else
				{
					this->metroLabel14->Text = System::Convert::ToString(Button4Device2Rumble1);
				}
				if (Button5Device2Rumble1 == 99)
				{
					this->metroLabel15->Text = "Not Defined";
				}
				else
				{
					this->metroLabel15->Text = System::Convert::ToString(Button5Device2Rumble1);
				}
				if (Button6Device2Rumble1 == 99)
				{
					this->metroLabel16->Text = "Not Defined";
				}
				else
				{
					this->metroLabel16->Text = System::Convert::ToString(Button6Device2Rumble1);
				}
				if (Button7Device2Rumble1 == 99)
				{
					this->metroLabel17->Text = "Not Defined";
				}
				else
				{
					this->metroLabel17->Text = System::Convert::ToString(Button7Device2Rumble1);
				}
				if (Button8Device2Rumble1 == 99)
				{
					this->metroLabel18->Text = "Not Defined";
				}
				else
				{
					this->metroLabel18->Text = System::Convert::ToString(Button8Device2Rumble1);
				}
				if (Button9Device2Rumble1 == 99)
				{
					this->metroLabel19->Text = "Not Defined";
				}
				else
				{
					this->metroLabel19->Text = System::Convert::ToString(Button9Device2Rumble1);
				}
				if (Button10Device2Rumble1 == 99)
				{
					this->metroLabel20->Text = "Not Defined";
				}
				else
				{
					this->metroLabel20->Text = System::Convert::ToString(Button10Device2Rumble1);
				}
			}
			//metroLabel3->Text = Convert::ToString(count--);
		}
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		if (e->CloseReason == CloseReason::UserClosing)
		{
			SDL_Quit();
			Application::Exit();
		}
	}
	private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) //Button 1
	{
		metroLabel1->Text = L"Press Button";
		CreateButton1Thread();
	}
	private: System::Void metroLink2_Click(System::Object^  sender, System::EventArgs^  e) //Button 2
	{
		metroLabel2->Text = L"Press Button";
		CreateButton2Thread();
	}
	private: System::Void metroLink3_Click(System::Object^  sender, System::EventArgs^  e) //Button 3
	{
		metroLabel3->Text = L"Press Button";
		CreateButton3Thread();
	}
	private: System::Void metroLink4_Click(System::Object^  sender, System::EventArgs^  e) //Button 4
	{
		metroLabel4->Text = L"Press Button";
		CreateButton4Thread();
	}
	private: System::Void metroLink5_Click(System::Object^  sender, System::EventArgs^  e) //Button 5
	{
		metroLabel5->Text = L"Press Button";
		CreateButton5Thread();
	}
	private: System::Void metroLink6_Click(System::Object^  sender, System::EventArgs^  e) //Button 6
	{
		metroLabel6->Text = L"Press Button";
		CreateButton6Thread();
	}
	private: System::Void metroLink7_Click(System::Object^  sender, System::EventArgs^  e) //Button 7
	{
		metroLabel7->Text = L"Press Button";
		CreateButton7Thread();
	}
	private: System::Void metroLink8_Click(System::Object^  sender, System::EventArgs^  e) //Button 8
	{
		metroLabel8->Text = L"Press Button";
		CreateButton8Thread();
	}
	private: System::Void metroLink9_Click(System::Object^  sender, System::EventArgs^  e) //Button 9
	{
		metroLabel9->Text = L"Press Button";
		CreateButton9Thread();
	}
	private: System::Void metroLink10_Click(System::Object^  sender, System::EventArgs^  e) //Button 10
	{
		metroLabel10->Text = L"Press Button";
		CreateButton10Thread();
	}
	private: System::Void metroLink11_Click(System::Object^  sender, System::EventArgs^  e) //Button 1 Device 2 
	{
		metroLabel11->Text = L"Press Button";
		CreateButton1Device2Thread();
	}
	private: System::Void metroLink12_Click(System::Object^  sender, System::EventArgs^  e) //Button 2 Device 2
	{
		metroLabel12->Text = L"Press Button";
		CreateButton2Device2Thread();
	}
	private: System::Void metroLink13_Click(System::Object^  sender, System::EventArgs^  e) //Button 3 Device 2
	{
		metroLabel13->Text = L"Press Button";
		CreateButton3Device2Thread();
	}
	private: System::Void metroLink14_Click(System::Object^  sender, System::EventArgs^  e) //Button 4 Device 2
	{
		metroLabel14->Text = L"Press Button";
		CreateButton4Device2Thread();
	}
	private: System::Void metroLink15_Click(System::Object^  sender, System::EventArgs^  e) //Button 5 Device 2
	{
		metroLabel15->Text = L"Press Button";
		CreateButton5Device2Thread();
	}
	private: System::Void metroLink16_Click(System::Object^  sender, System::EventArgs^  e) //Button 6 Device 2
	{
		metroLabel16->Text = L"Press Button";
		CreateButton6Device2Thread();
	}
	private: System::Void metroLink17_Click(System::Object^  sender, System::EventArgs^  e) //Button 7 Device 2
	{
		metroLabel17->Text = L"Press Button";
		CreateButton7Device2Thread();
	}
	private: System::Void metroLink18_Click(System::Object^  sender, System::EventArgs^  e) //Button 8 Device 2
	{
		metroLabel18->Text = L"Press Button";
		CreateButton8Device2Thread();
	}
	private: System::Void metroLink19_Click(System::Object^  sender, System::EventArgs^  e) //Button 9 Device 2
	{
		metroLabel19->Text = L"Press Button";
		CreateButton9Device2Thread();
	}
	private: System::Void metroLink20_Click(System::Object^  sender, System::EventArgs^  e) //Button 10 Device 2
	{
		metroLabel20->Text = L"Press Button";
		CreateButton10Device2Thread();
	}
	private: System::Void metroLabel1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button1Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button2Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button3Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button4Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button5Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button6Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button7Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel8_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button8Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel9_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button9Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel10_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button10Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel11_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button1Device2Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel12_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button2Device2Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel13_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button3Device2Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel14_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button4Device2Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel15_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button5Device2Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel16_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button6Device2Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel17_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button7Device2Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel18_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button8Device2Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel19_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button9Device2Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLabel20_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Button10Device2Rumble", "99", ".\\FFBPlugin.ini");
		done2 = false;
	}
	private: System::Void metroLink21_Click(System::Object^  sender, System::EventArgs^  e) //Go Back
	{
		this->Hide();
		obj->Show();
	}
	};
}
