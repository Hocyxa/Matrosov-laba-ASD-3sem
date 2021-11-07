#include <iostream>
#include <conio.h>
#include "string.cpp"
using std::cin;
using std::cout;

char* newstroke()
{
	char str[100];
	gets_s(str);
	char* newstr = new char(strlen(str) + 1);
	strcpy(newstr, str);
	return newstr;
}

int main()
{
	string A;
	string B;
	string C;
	unsigned Menu;
	unsigned index;
	unsigned num;
	std::cout << "Laboratory work 1. Class:Stroke" << "\n";
	system("pause");
	for (;;)
	{
		system("cls");
		std::cout << "1.Get a character by index" << "\n"; // ?????? ?? ???????
		std::cout << "2.Writing a character by index" << "\n"; // ?????? ?? ???????
		std::cout << "3.Combining storke" << "\n"; // ????????? ??????
		std::cout << "4.Repeat the stroke" << "\n"; // ????????? ?????? ? ???
		std::cout << "5.Replace stroke" << "\n"; // ???????????? ??????
		std::cout << "6.Get a substring" << "\n"; // ???????? ?????????
		std::cout << "Esc.Exit" << "\n";  // ?????
		std::cout << "First stroke:" << A << "\n";
		std::cout << "Second stroke:" << B << "\n";
		std::cout << "Result stroke:" << C << "\n";
		Menu = _getch();
		if (Menu == 27) break;
		switch (Menu)
		{
		case 49: // ?????? ?? ???????
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				std::cout << "1. " << A << "\n";
				std::cout << "2. " << B << "\n";
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49: //?????? ??????
				{
					system("cls");
					std::cout << "Select index" << "\n";
					std::cout << "1. " << A << "\n";
					std::cout << "Your index:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try {
						std::cout << "This is your character:" << A[index - 1] << "\n";
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					system("pause");
					break;
				}
				case 50: // ?????? ??????
				{
					system("cls");
					std::cout << "Select index" << "\n";
					std::cout << "2. " << B << "\n";
					std::cout << "Your index:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try {
						std::cout << "This is your character:" << B[index - 1] << "\n";
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					system("pause");
					break;
				}
				}
			}
			break;
		case 50: // ?????? ? ???????
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				std::cout << "1. " << A << "\n";
				std::cout << "2. " << B << "\n";
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49: //?????? ??????
				{
					system("cls");
					std::cout << "Select index" << "\n";
					std::cout << "1. " << A << "\n";
					std::cout << "Your index:";
					std::cin >> index;
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try {
						char character;
						std::cout << "Your characte:";
						std::cin >> character;
						A[index - 1] = character;
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					std::cout << "New stoke: " << A << "\n";
					system("pause");
					break;
				}
				case 50: // ?????? ??????
				{
					system("cls");
					std::cout << "Select index" << "\n";
					std::cout << "2. " << B << "\n";
					std::cout << "Your index:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try {
						char character;
						std::cout << "Your characte:";
						std::cin >> character;
						B[index - 1] = character;
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					std::cout << "New stoke: " << B << "\n";
					system("pause");
					break;
				}
				}
			}
			break;
		case 51: //???????? ???????
			for (;;)
			{
				system("cls");
				std::cout << "Select option" << "\n";
				std::cout << "1. 1+2" << "\n"; // ?????? ? ??????
				std::cout << "2. 2+1" << "\n"; // ?????? ? ??????
				std::cout << "Esc.Exit" << "\n";  // ?????
				std::cout << "First stroke:" << A << "\n";
				std::cout << "Second stroke:" << B << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:
					C = A + B;
					break;
				case 50:
					C = B + A;
					break;
				}
			}
			break;
		case 52: //????????? ???????
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				std::cout << "1. " << A << "\n";
				std::cout << "2. " << B << "\n";
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();

				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:
					std::cout << "Your coefficient:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					C = A * index;
					break;
				case 50:
					std::cout << "Your coefficient:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					C = B * index;
					break;
				}
			}
			break;
		case 53: //??????????
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				std::cout << "1." << A << "\n";
				std::cout << "2." << B << "\n";
				std::cout << "Esc.Exit" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:
					std::cout << "Your stroke:";
					A = newstroke();
					break;
				case 50:
					std::cout << "Your stroke:";
					B = newstroke();
					break;
				}
			}
			break;
		case 54:
			for (;;)
			{
				system("cls");
				std::cout << "Select ctroke" << "\n";
				std::cout << "1." << A << "\n";
				std::cout << "2." << B << "\n";
				std::cout << "Esc.Exit" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:
					std::cout << "Select index:";
					std::cin >> index;
					std::cout << "Select number of characters:";
					std::cin >> num;
					C = C.substring(index, num, A);
					break;
				case 50:
					std::cout << "Select index:";
					std::cin >> index;
					std::cout << "Select number of characters:";
					std::cin >> num;
					C = C.substring(index, num, B);
					break;
				}
			}
			break;
		}
	}
	return 0;
}