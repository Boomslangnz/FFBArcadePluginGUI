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
#include <string>
#include "SDL.h"
static bool keepRunning3 = true;
static bool done3 = true;

static DWORD WINAPI Gear1(LPVOID lpParam)
{
	done3 = true;
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
		while ((SDL_WaitEvent(&e1)) && (done3))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "0", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "1", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "2", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "3", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "4", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "5", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "6", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "7", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "8", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "9", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "10", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "11", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "12", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "13", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "14", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Gear1", "15", ".\\FFBPlugin.ini");
					done3 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Gear2(LPVOID lpParam)
{
	done3 = true;
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
		while ((SDL_WaitEvent(&e1)) && (done3))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "0", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "1", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "2", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "3", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "4", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "5", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "6", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "7", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "8", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "9", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "10", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "11", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "12", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "13", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "14", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Gear2", "15", ".\\FFBPlugin.ini");
					done3 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Gear3(LPVOID lpParam)
{
	done3 = true;
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
		while ((SDL_WaitEvent(&e1)) && (done3))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "0", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "1", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "2", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "3", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "4", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "5", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "6", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "7", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "8", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "9", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "10", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "11", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "12", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "13", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "14", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Gear3", "15", ".\\FFBPlugin.ini");
					done3 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Gear4(LPVOID lpParam)
{
	done3 = true;
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
		while ((SDL_WaitEvent(&e1)) && (done3))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "0", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "1", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "2", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "3", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "4", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "5", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "6", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "7", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "8", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "9", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "10", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "11", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "12", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "13", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "14", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Gear4", "15", ".\\FFBPlugin.ini");
					done3 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Gear5(LPVOID lpParam)
{
	done3 = true;
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
		while ((SDL_WaitEvent(&e1)) && (done3))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "0", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "1", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "2", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "3", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "4", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "5", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "6", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "7", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "8", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "9", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "10", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "11", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "12", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "13", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "14", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Gear5", "15", ".\\FFBPlugin.ini");
					done3 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static DWORD WINAPI Gear6(LPVOID lpParam)
{
	done3 = true;
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
		while ((SDL_WaitEvent(&e1)) && (done3))
		{
			if (e1.type == SDL_JOYBUTTONDOWN)
			{
				if (e1.jbutton.button == 0)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "0", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 1)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "1", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 2)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "2", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 3)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "3", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 4)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "4", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 5)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "5", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 6)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "6", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 7)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "7", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 8)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "8", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 9)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "9", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 10)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "10", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 11)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "11", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 12)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "12", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 13)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "13", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 14)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "14", ".\\FFBPlugin.ini");
					done3 = false;
				}
				else if (e1.jbutton.button == 15)
				{
					WritePrivateProfileStringA("Settings", "Gear6", "15", ".\\FFBPlugin.ini");
					done3 = false;
				}
			}
		}
		Sleep(300);
	}
	return 0;
}

static void CreateGear1Thread()
{
	CreateThread(NULL, 0, Gear1, (LPVOID)&keepRunning3, 0, NULL);
}
static void CreateGear2Thread()
{
	CreateThread(NULL, 0, Gear2, (LPVOID)&keepRunning3, 0, NULL);
}
static void CreateGear3Thread()
{
	CreateThread(NULL, 0, Gear3, (LPVOID)&keepRunning3, 0, NULL);
}
static void CreateGear4Thread()
{
	CreateThread(NULL, 0, Gear4, (LPVOID)&keepRunning3, 0, NULL);
}
static void CreateGear5Thread()
{
	CreateThread(NULL, 0, Gear5, (LPVOID)&keepRunning3, 0, NULL);
}
static void CreateGear6Thread()
{
	CreateThread(NULL, 0, Gear6, (LPVOID)&keepRunning3, 0, NULL);
}

namespace FFBPluginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Outrun2Input
	/// </summary>
	public ref class Outrun2Input : public MetroFramework::Forms::MetroForm
	{
	public:
		System::Windows::Forms::Timer^ timer;
		static int count;
		Outrun2Input(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MetroForm ^obj;
		Outrun2Input(MetroForm ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			this->timer = (gcnew System::Windows::Forms::Timer());
			//Set the interval to 0.5 second.
			timer->Interval = 100;
			//Add the tick event handler to set the text periodically
			timer->Tick += gcnew System::EventHandler(this, &Outrun2Input::timer_Tick);
			//Set the initial count to 100;
			count = 6000;
			//Stat counting.
			timer->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Outrun2Input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox1;
	protected:
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox2;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox3;
	private: MetroFramework::Controls::MetroCheckBox^  metroCheckBox4;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox3;
	private: MetroFramework::Controls::MetroLink^  metroLink1;
	private: MetroFramework::Controls::MetroLink^  metroLink2;
	private: MetroFramework::Controls::MetroLink^  metroLink3;
	private: MetroFramework::Controls::MetroLink^  metroLink4;
	private: MetroFramework::Controls::MetroLink^  metroLink5;
	private: MetroFramework::Controls::MetroLink^  metroLink6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel3;
	private: MetroFramework::Controls::MetroLabel^  metroLabel4;
	private: MetroFramework::Controls::MetroLabel^  metroLabel5;
	private: MetroFramework::Controls::MetroLabel^  metroLabel6;
	private: MetroFramework::Controls::MetroLink^  metroLink7;
	private: MetroFramework::Components::MetroToolTip^  metroToolTip1;

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
			this->metroCheckBox1 = (gcnew MetroFramework::Controls::MetroCheckBox());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink2 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink3 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink4 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink5 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLink6 = (gcnew MetroFramework::Controls::MetroLink());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLink7 = (gcnew MetroFramework::Controls::MetroLink());
			this->SuspendLayout();
			// 
			// metroToolTip1
			// 
			this->metroToolTip1->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroToolTip1->StyleManager = nullptr;
			this->metroToolTip1->Theme = MetroFramework::MetroThemeStyle::Light;
			// 
			// metroCheckBox1
			// 
			int ChangeGearsViaPlugin = GetPrivateProfileInt(TEXT("Settings"), TEXT("ChangeGearsViaPlugin"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroCheckBox1->AutoSize = true;
			this->metroCheckBox1->Location = System::Drawing::Point(6, 53);
			this->metroCheckBox1->Name = L"metroCheckBox1";
			this->metroCheckBox1->Size = System::Drawing::Size(129, 15);
			this->metroCheckBox1->TabIndex = 0;
			this->metroCheckBox1->Checked = ChangeGearsViaPlugin;
			this->metroCheckBox1->TabStop = false;
			this->metroCheckBox1->Text = L"Enable Gear Change";
			this->metroToolTip1->SetToolTip(this->metroCheckBox1, L"Enable to change gears");
			this->metroCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &Outrun2Input::metroCheckBox1_CheckedChanged);
			// 
			// metroTextBox1
			// 
			// 
			// 
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(287, 1);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox1->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox1->CustomButton->TabIndex = 1;
			this->metroTextBox1->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox1->CustomButton->Visible = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"Set or remove button configuration below" };
			this->metroTextBox1->Location = System::Drawing::Point(3, 101);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ReadOnly = true;
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->SelectionLength = 0;
			this->metroTextBox1->SelectionStart = 0;
			this->metroTextBox1->ShortcutsEnabled = true;
			this->metroTextBox1->Size = System::Drawing::Size(309, 23);
			this->metroTextBox1->TabIndex = 4;
			this->metroTextBox1->TabStop = false;
			this->metroTextBox1->Text = L"Set or remove button configuration below";
			this->metroTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox1, L" Select Input then press Button");
			this->metroTextBox1->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox1->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox2
			// 
			// 
			// 
			// 
			this->metroTextBox2->CustomButton->Image = nullptr;
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(134, 1);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox2->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox2->CustomButton->TabIndex = 1;
			this->metroTextBox2->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox2->CustomButton->Visible = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"Device Select Input" };
			this->metroTextBox2->Location = System::Drawing::Point(3, 130);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->SelectionLength = 0;
			this->metroTextBox2->SelectionStart = 0;
			this->metroTextBox2->ShortcutsEnabled = true;
			this->metroTextBox2->Size = System::Drawing::Size(156, 23);
			this->metroTextBox2->TabIndex = 5;
			this->metroTextBox2->TabStop = false;
			this->metroTextBox2->Text = L"Device Select Input";
			this->metroTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox2, L" Button names for device, click below to set input for device");
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox3
			// 
			// 
			// 
			// 
			this->metroTextBox3->CustomButton->Image = nullptr;
			this->metroTextBox3->CustomButton->Location = System::Drawing::Point(125, 1);
			this->metroTextBox3->CustomButton->Name = L"";
			this->metroTextBox3->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox3->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox3->CustomButton->TabIndex = 1;
			this->metroTextBox3->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox3->CustomButton->Visible = false;
			this->metroTextBox3->Lines = gcnew cli::array< System::String^  >(1) { L"Button Number" };
			this->metroTextBox3->Location = System::Drawing::Point(165, 130);
			this->metroTextBox3->MaxLength = 32767;
			this->metroTextBox3->Name = L"metroTextBox3";
			this->metroTextBox3->PasswordChar = '\0';
			this->metroTextBox3->ReadOnly = true;
			this->metroTextBox3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox3->SelectedText = L"";
			this->metroTextBox3->SelectionLength = 0;
			this->metroTextBox3->SelectionStart = 0;
			this->metroTextBox3->ShortcutsEnabled = true;
			this->metroTextBox3->Size = System::Drawing::Size(147, 23);
			this->metroTextBox3->TabIndex = 6;
			this->metroTextBox3->TabStop = false;
			this->metroTextBox3->Text = L"Button Number";
			this->metroTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->metroToolTip1->SetToolTip(this->metroTextBox3, L" Button number set in FFBPlugin.ini for device");
			this->metroTextBox3->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox3->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroLink1
			// 			
			this->metroLink1->Location = System::Drawing::Point(3, 159);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(156, 23);
			this->metroLink1->TabIndex = 7;
			this->metroLink1->TabStop = false;			
			this->metroLink1->Text = L"Gear 1";
			this->metroLink1->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLink1_Click);
			// 
			// metroLink2
			// 
			this->metroLink2->Location = System::Drawing::Point(3, 188);
			this->metroLink2->Name = L"metroLink2";
			this->metroLink2->Size = System::Drawing::Size(156, 23);
			this->metroLink2->TabIndex = 8;
			this->metroLink2->TabStop = false;
			this->metroLink2->Text = L"Gear 2";
			this->metroLink2->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLink2_Click);
			// 
			// metroLink3
			// 
			this->metroLink3->Location = System::Drawing::Point(3, 217);
			this->metroLink3->Name = L"metroLink3";
			this->metroLink3->Size = System::Drawing::Size(156, 23);
			this->metroLink3->TabIndex = 9;
			this->metroLink3->TabStop = false;
			this->metroLink3->Text = L"Gear 3";
			this->metroLink3->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLink3_Click);
			// 
			// metroLink4
			// 
			this->metroLink4->Location = System::Drawing::Point(3, 246);
			this->metroLink4->Name = L"metroLink4";
			this->metroLink4->Size = System::Drawing::Size(156, 23);
			this->metroLink4->TabIndex = 10;
			this->metroLink4->TabStop = false;
			this->metroLink4->Text = L"Gear 4";
			this->metroLink4->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLink4_Click);
			// 
			// metroLink5
			// 
			this->metroLink5->Location = System::Drawing::Point(3, 275);
			this->metroLink5->Name = L"metroLink5";
			this->metroLink5->Size = System::Drawing::Size(156, 23);
			this->metroLink5->TabIndex = 11;
			this->metroLink5->TabStop = false;
			this->metroLink5->Text = L"Gear 5";
			this->metroLink5->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLink5_Click);
			// 
			// metroLink6
			// 
			this->metroLink6->Location = System::Drawing::Point(3, 304);
			this->metroLink6->Name = L"metroLink6";
			this->metroLink6->Size = System::Drawing::Size(156, 23);
			this->metroLink6->TabIndex = 12;
			this->metroLink6->TabStop = false;
			this->metroLink6->Text = L"Gear 6";
			this->metroLink6->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLink6_Click);
			// 
			// metroLabel1
			// 
			int Gear11 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear1"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(225, 159);
			this->metroLabel1->Name = L"metroLabel1";
			if (Gear11 == 99)
			{
				this->metroLabel1->Text = "Not Defined";
			}
			else
			{
				this->metroLabel1->Text = System::Convert::ToString(Gear11);
			}			
			this->metroLabel1->Size = System::Drawing::Size(0, 0);
			this->metroLabel1->TabIndex = 13;
			this->metroLabel1->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLabel1_Click);
			// 
			// metroLabel2
			// 
			int Gear21 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear2"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(225, 188);
			this->metroLabel2->Name = L"metroLabel2";
			if (Gear21 == 99)
			{
				this->metroLabel2->Text = "Not Defined";
			}
			else
			{
				this->metroLabel2->Text = System::Convert::ToString(Gear21);
			}			
			this->metroLabel2->Size = System::Drawing::Size(0, 0);
			this->metroLabel2->TabIndex = 14;
			this->metroLabel2->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLabel2_Click);
			// 
			// metroLabel3
			// 
			int Gear31 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear3"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->Location = System::Drawing::Point(225, 217);
			this->metroLabel3->Name = L"metroLabel3";
			if (Gear31 == 99)
			{
				this->metroLabel3->Text = "Not Defined";
			}
			else
			{
				this->metroLabel3->Text = System::Convert::ToString(Gear31);
			}			
			this->metroLabel3->Size = System::Drawing::Size(0, 0);
			this->metroLabel3->TabIndex = 15;
			this->metroLabel3->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLabel3_Click);
			// 
			// metroLabel4
			// 
			int Gear41 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear4"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->Location = System::Drawing::Point(225, 246);
			this->metroLabel4->Name = L"metroLabel4";
			if (Gear41 == 99)
			{
				this->metroLabel4->Text = "Not Defined";
			}
			else
			{
				this->metroLabel4->Text = System::Convert::ToString(Gear41);
			}			
			this->metroLabel4->Size = System::Drawing::Size(0, 0);
			this->metroLabel4->TabIndex = 16;
			this->metroLabel4->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLabel4_Click);
			// 
			// metroLabel5
			// 
			int Gear51 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear5"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->Location = System::Drawing::Point(225, 275);
			this->metroLabel5->Name = L"metroLabel5";
			if (Gear51 == 99)
			{
				this->metroLabel5->Text = "Not Defined";
			}
			else
			{
				this->metroLabel5->Text = System::Convert::ToString(Gear51);
			}			
			this->metroLabel5->Size = System::Drawing::Size(0, 0);
			this->metroLabel5->TabIndex = 17;
			this->metroLabel5->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLabel5_Click);
			// 
			// metroLabel6
			// 
			int Gear61 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear6"), 0, TEXT(".\\FFBPlugin.ini"));
			this->metroLabel6->AutoSize = true;
			this->metroLabel6->Location = System::Drawing::Point(225, 304);
			this->metroLabel6->Name = L"metroLabel6";
			if (Gear61 == 99)
			{
				this->metroLabel6->Text = "Not Defined";
			}
			else
			{
				this->metroLabel6->Text = System::Convert::ToString(Gear61);
			}			
			this->metroLabel6->Size = System::Drawing::Size(0, 0);
			this->metroLabel6->TabIndex = 18;
			this->metroLabel6->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLabel6_Click);
			// 
			// metroLink7
			// 
			this->metroLink7->Location = System::Drawing::Point(67, 8);
			this->metroLink7->Name = L"metroLink7";
			this->metroLink7->Size = System::Drawing::Size(173, 23);
			this->metroLink7->TabIndex = 19;
			this->metroLink7->TabStop = false;
			this->metroLink7->Text = L"Go Back To Previous Menu";
			this->metroLink7->Click += gcnew System::EventHandler(this, &Outrun2Input::metroLink7_Click);
			// 
			// Outrun2Input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(315, 358);
			this->Controls->Add(this->metroLabel6);
			this->Controls->Add(this->metroLabel5);
			this->Controls->Add(this->metroLabel4);
			this->Controls->Add(this->metroLabel3);
			this->Controls->Add(this->metroLabel2);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroLink7);
			this->Controls->Add(this->metroLink6);
			this->Controls->Add(this->metroLink5);
			this->Controls->Add(this->metroLink4);
			this->Controls->Add(this->metroLink3);
			this->Controls->Add(this->metroLink2);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroTextBox3);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroTextBox1);
			this->Controls->Add(this->metroCheckBox1);
			this->MaximizeBox = false;
			this->Name = L"Outrun2Input";
			this->Padding = System::Windows::Forms::Padding(0, 60, 0, 0);
			this->Resizable = false;
			this->ShowIcon = false;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Outrun2Input::Form1_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {

			int Gear1 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear1"), 0, TEXT(".\\FFBPlugin.ini"));
			int Gear2 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear2"), 0, TEXT(".\\FFBPlugin.ini"));
			int Gear3 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear3"), 0, TEXT(".\\FFBPlugin.ini"));
			int Gear4 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear4"), 0, TEXT(".\\FFBPlugin.ini"));
			int Gear5 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear5"), 0, TEXT(".\\FFBPlugin.ini"));
			int Gear6 = GetPrivateProfileInt(TEXT("Settings"), TEXT("Gear6"), 0, TEXT(".\\FFBPlugin.ini"));
			if (!done3)
			{
				if (Gear1 == 99)
				{
					this->metroLabel1->Text = "Not Defined";
				}
				else
				{
					this->metroLabel1->Text = System::Convert::ToString(Gear1);
				}
				if (Gear2 == 99)
				{
					this->metroLabel2->Text = "Not Defined";
				}
				else
				{
					this->metroLabel2->Text = System::Convert::ToString(Gear2);
				}
				if (Gear3 == 99)
				{
					this->metroLabel3->Text = "Not Defined";
				}
				else
				{
					this->metroLabel3->Text = System::Convert::ToString(Gear3);
				}
				if (Gear4 == 99)
				{
					this->metroLabel4->Text = "Not Defined";
				}
				else
				{
					this->metroLabel4->Text = System::Convert::ToString(Gear4);
				}
				if (Gear5 == 99)
				{
					this->metroLabel5->Text = "Not Defined";
				}
				else
				{
					this->metroLabel5->Text = System::Convert::ToString(Gear5);
				}
				if (Gear6 == 99)
				{
					this->metroLabel6->Text = "Not Defined";
				}
				else
				{
					this->metroLabel6->Text = System::Convert::ToString(Gear6);
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
	private: System::Void metroCheckBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) //Enable Gear Change
	{
		if (metroCheckBox1->Checked)
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ChangeGearsViaPlugin"), TEXT("1"), TEXT(".\\FFBPlugin.ini"));
		}
		else
		{
			WritePrivateProfileString(TEXT("Settings"), TEXT("ChangeGearsViaPlugin"), TEXT("0"), TEXT(".\\FFBPlugin.ini"));
		}

	}
	private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) //Gear 1
	{
		metroLabel1->Text = L"Press Button";
		CreateGear1Thread();
	}
	private: System::Void metroLink2_Click(System::Object^  sender, System::EventArgs^  e) //Gear 2
	{
		metroLabel2->Text = L"Press Button";
		CreateGear2Thread();
	}
	private: System::Void metroLink3_Click(System::Object^  sender, System::EventArgs^  e) //Gear 3
	{
		metroLabel3->Text = L"Press Button";
		CreateGear3Thread();
	}
	private: System::Void metroLink4_Click(System::Object^  sender, System::EventArgs^  e) //Gear 4
	{
		metroLabel4->Text = L"Press Button";
		CreateGear4Thread();
	}
	private: System::Void metroLink5_Click(System::Object^  sender, System::EventArgs^  e) //Gear 5
	{
		metroLabel5->Text = L"Press Button";
		CreateGear5Thread();
	}
	private: System::Void metroLink6_Click(System::Object^  sender, System::EventArgs^  e) //Gear 6
	{
		metroLabel6->Text = L"Press Button";
		CreateGear6Thread();
	}
	private: System::Void metroLabel1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Gear1", "99", ".\\FFBPlugin.ini");
		done3 = false;
	}
	private: System::Void metroLabel2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Gear2", "99", ".\\FFBPlugin.ini");
		done3 = false;
	}
	private: System::Void metroLabel3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Gear3", "99", ".\\FFBPlugin.ini");
		done3 = false;
	}
	private: System::Void metroLabel4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Gear4", "99", ".\\FFBPlugin.ini");
		done3 = false;
	}
	private: System::Void metroLabel5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Gear5", "99", ".\\FFBPlugin.ini");
		done3 = false;
	}
	private: System::Void metroLabel6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WritePrivateProfileStringA("Settings", "Gear6", "99", ".\\FFBPlugin.ini");
		done3 = false;
	}
	private: System::Void metroLink7_Click(System::Object^  sender, System::EventArgs^  e) //Go Back
	{
		this->Hide();
		obj->Show();
	}
	};
}
