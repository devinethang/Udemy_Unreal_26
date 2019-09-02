// Udemy_Unreal_24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void PrintIntroduction()
{
	cout << "This is ascii art." << endl;
	cout << "H   H EEEEE L     L      OOO       W   W  OOO  RRRR  L     DDDD  !!" << endl;
	cout << "H   H E     L     L     O   O      W W W O   O R   R L     D   D !!" << endl;
	cout << "HHHHH EEEEE L     L     O   O      W W W O   O RRRR  L     D   D !!" << endl;
	cout << "H   H E     L     L     O   O, ,    W W  O   O R   R L     D   D" << endl;
	cout << "H   H EEEEE LLLLL LLLLL  OOO, ,     W W   OOO  R   R LLLLL DDDD  !!" << endl;
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
