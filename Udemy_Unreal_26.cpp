// Udemy_Unreal_24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void PrintIntroduction()
{
	cout << "This is ASCII art." << endl;
	cout << "  ___ ___         .__  .__            __      __            .__       .___" << endl;
	cout << " /   |   \\   ____ |  | |  |   ____   /  \\    /  \\___________|  |    __| _/" << endl;
	cout << "/    ~    \\_/ __ \\|  | |  |  /  _ \\  \\   \\/\\/   /  _ \\_  __ \\  |   / __ | " << endl;
	cout << "\\    Y    /\\  ___/|  |_|  |_(  <_> )  \\        (  <_> )  | \\/  |__/ /_/ | " << endl;
	cout << " \\___|_  /  \\___  >____/____/\\____/    \\__/\\  / \\____/|__|  |____/\\____ | " << endl;
	cout << "       \\/       \\/                          \\/                         \\/ " << endl;
	cout << "           ______________ ___ .___  _________ .___  _________             " << endl;
	cout << "           \\__    ___/   |   \\|   |/   _____/ |   |/   _____/             " << endl;
	cout << "             |    | /    ~    \\   |\\_____  \\  |   |\\_____  \\              " << endl;
	cout << "             |    | \\    Y    /   |/        \\ |   |/        \\             " << endl;
	cout << "             |____|  \\___|_  /|___/_______  / |___/_______  /             " << endl;
	cout << "                           \\/             \\/              \\/              " << endl;
	cout << "              ________  _______________   ____.___ _______                " << endl;
	cout << "              \\______ \\ \\_   _____/\\   \\ /   /|   |\\      \\               " << endl;
	cout << "               |    |  \\ |    __)_  \\   Y   / |   |/   |   \\              " << endl;
	cout << "               |    `   \\|        \\  \\     /  |   /    |    \\             " << endl;
	cout << "              /_______  /_______  /   \\___/   |___\\____|__  /             " << endl;
	cout << "                      \\/        \\/                        \\/   " << endl;
}

void PlayGame()
{
	PrintIntroduction();
}

int main()
{
	PlayGame();

	return 0;
}
