#include <iostream>
#include <conio.h>
#include "list.cpp"
using std::cin;
using std::cout;

char* newstroke()
{
	char str[100];
	std::cin >> str;
	char* newstr = new char (strlen(str)+1);
	strcpy(newstr, str);
	return newstr;
}
size_t select_start()
{
	cout << "Select first element:";
	size_t start;
	cin >> start;
	return start;
}
size_t select_stop()
{
	cout << "Select last element:";
	size_t stop;
	cin >> stop;
	return stop;
}
double Get_Delem()
{
	std::cout << "Your elem:";
	double elem;
	cin >> elem;
	return elem;
}
int Get_Ielem()
{
	std::cout << "Your elem:";
	int elem;
	cin >> elem;
	return elem;
}

int main()
{
	list<double> A;
	list<double> B;
	list<double> C;
	unsigned Menu;
	unsigned index;
	unsigned num;
	std::cout << "Laboratory work 1. Class:Stroke" << "\n";
	system("pause");
	for (;;)
	{
		system("cls");
		std::cout << "1.Get a character by index" << "\n"; // Чтение по индексу
		std::cout << "2.Writing a character by index" << "\n"; // ЗАпись по индексу
		std::cout << "3.Combining storke" << "\n"; // Соеденить строки
		std::cout << "4.Repeat the stroke" << "\n"; // Повторить строку н раз
		std::cout << "5.Add element to the end of the list" << "\n"; // Добавить в корнец
		std::cout << "6.Add element to the end of the list" << "\n"; // Добавить вначало
		std::cout << "7.Get a sublist" << "\n"; // Получить подстроку
		std::cout << "Esc.Exit" << "\n";  // Выйти
		std::cout << "First stroke:" << A << "\n";
		std::cout << "Second stroke:" << B << "\n";
		std::cout << "Result stroke:" << C << "\n";
		Menu = _getch();
		if (Menu == 27) break;
		switch (Menu)
		{
		case 49: // Чтение по индексу
			for(;;)
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
				case 49: //Первая строка
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
				case 50: // Вторая строка
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
		case 50: // Запись о индексу
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
				case 49: //Первая строка
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
						std::cout<<"Your characte:";
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
				case 50: // Вторая строка
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
		case 51: //Сложение строчек
			for (;;)
			{
				system("cls");
				std::cout << "Select option" << "\n";
				std::cout << "1. 1+2" << "\n"; // Первую с второй
				std::cout << "2. 2+1" << "\n"; // Вторую с первой
				std::cout << "Esc.Exit" << "\n";  // Выйти
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
		case 52: //Умножение строчек
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
		case 53: //Добавить в конец
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
					A=A.append(Get_Delem());
					break;
				case 50:
					B =B.append(Get_Delem());
					break;
				}
			}
			break;
		case 54://Добавить вначало
			for (;;)
			{
				system("cls");
				std::cout << "Select list" << "\n";
				std::cout << "1." << A << "\n";
				std::cout << "2." << B << "\n";
				std::cout << "Esc.Exit" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:
					A = A.extend(Get_Delem());
					break;
				case 50:
					B = B.extend(Get_Delem());
					break;
				}
			}
		case 55: //подлист
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
					C=A(select_start(), select_stop());
					break;
				case 50:
					C = B(select_start(), select_stop());
					break;
				}
			}
			break;
		}
	}
	return 0;
}