#include <iostream>
#include <conio.h>
#include <string>
#include "list.cpp"
using std::cin;
using std::cout;

size_t select_start()
{
	cout << "Select index first element:";
	size_t start;
	cin >> start;
	return start;
}
size_t select_stop()
{
	cout << "Select index last element:";
	size_t stop;
	cin >> stop;
	return stop;
}
double Get_Delem()
{
	double elem;
	for (;;)
	{
		std::cout << "Your elem:";
		cin >> elem;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Enter the double number!" << "\n";
			system("pause");
			cout << "\n";
		}
		else break;
	}
	return elem;
}
int Get_Ielem()
{
	int elem;
	for (;;)
	{
		std::cout << "Your elem:";
		cin >> elem;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Enter the integer number!" << "\n";
			system("pause");
			cout << "\n";
		}
		else break;
	}
	return elem;
}
char Get_Celem()
{
	std::cout << "Your elem:";
	char elem;
	cin >> elem;

	return elem;
}

int main()
{
	unsigned alternative;
	unsigned Menu;
	unsigned index;
	unsigned num;	
	list<double> DA;
	list<double> DB;
	list<double> DC;
	list<int> IA;
	list<int> IB;
	list<int> IC;	
	list<char> CA;
	list<char> CB;
	list<char> CC;
	std::cout << "Laboratory work 1. Class:Stroke" << "\n";
	for (;;)
	{
		system("cls");
		cout << "Select data type" << "\n";
		cout << "1.Double" << "\n";
		cout << "2.Int" << "\n";
		cout << "3.Char" << "\n";
		cout << "Your select";
		cin >> alternative;
		if (alternative >= 1 && alternative <= 3)
		{
			break;
		}
	}
	system("pause");
	for (;;)
	{
		system("cls");
		std::cout << "1.Get a character by index" << "\n"; // Доступ по индексу
		std::cout << "2.Writing a character by index" << "\n"; // ЗАпись по индексу
		std::cout << "3.Combining storke" << "\n"; // Сложение списков
		std::cout << "4.Repeat the stroke" << "\n"; // Умножение списков на число
		std::cout << "5.Add element to the end of the list" << "\n"; // Добавление вконец
		std::cout << "6.Add element to the begin of the list" << "\n"; // Добавление вначало
		std::cout << "7.Get a sublist" << "\n"; // Подлист с начало и концом пользователя
		std::cout << "Esc.Exit" << "\n";  // Выход
		switch (alternative)
		{
		case 1:
			std::cout << "First list:" << DA << "\n";
			std::cout << "Second list:" << DB << "\n";
			std::cout << "Result list:" << DC << "\n";
			break;
		case 2:
			std::cout << "First list:" << IA << "\n";
			std::cout << "Second list:" << IB << "\n";
			std::cout << "Result list:" << IC << "\n";
			break;
		case 3:
			std::cout << "First list:" << CA << "\n";
			std::cout << "Second list:" << CB << "\n";
			std::cout << "Result list:" << CC << "\n";
			break;
		}
		Menu = _getch();
		if (Menu == 27) break;
		switch (Menu)
		{
		case 49: // доступ по индексу
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1:" << DA << "\n";
					std::cout << "2:" << DB << "\n";
					break;
				case 2:
					std::cout << "1:" << IA << "\n";
					std::cout << "2:" << IB << "\n";
					break;
				case 3:
					std::cout << "1:" << CA << "\n";
					std::cout << "2:" << CB << "\n";
					break;
				}
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49: //������ ������
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "1:" << DA << "\n";
						break;
					case 2:
						std::cout << "1:" << IA << "\n";
						break;
					case 3:
						std::cout << "1:" << CA << "\n";
						break;
					}
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
					try
					{
						switch (alternative)
						{
						case 1:
							std::cout << "1:" << DA << "\n";
							std::cout << "2:" << DB << "\n";
							std::cout << "This is your character:" << DA[index - 1] << "\n";
							break;
						case 2:
							std::cout << "1:" << IA << "\n";
							std::cout << "2:" << IB << "\n";
							std::cout << "This is your character:" << IA[index - 1] << "\n";
							break;
						case 3:
							std::cout << "1:" << CA << "\n";
							std::cout << "2:" << CB << "\n";
							std::cout << "This is your character:" << CA[index - 1] << "\n";
							break;
						}
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
				case 50: // ������ ������
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "2:" << DB << "\n";
						break;
					case 2:
						std::cout << "2:" << IB << "\n";
						break;
					case 3:
						std::cout << "2:" << CB << "\n";
						break;
					}
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
					try
					{
						switch (alternative)
						{
						case 1:
							std::cout << "1:" << DA << "\n";
							std::cout << "2:" << DB << "\n";
							std::cout << "This is your character:" << DB[index - 1] << "\n";
							break;
						case 2:
							std::cout << "1:" << IA << "\n";
							std::cout << "2:" << IB << "\n";
							std::cout << "This is your character:" << IB[index - 1] << "\n";
							break;
						case 3:
							std::cout << "1:" << CA << "\n";
							std::cout << "2:" << CB << "\n";
							std::cout << "This is your character:" << CB[index - 1] << "\n";
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					system("pause");
				
				}
				}
			}
			break;
		case 50: // Запись по индексу
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1:" << DA << "\n";
					std::cout << "2:" << DB << "\n";
					break;
				case 2:
					std::cout << "1:" << IA << "\n";
					std::cout << "2:" << IB << "\n";
					break;
				case 3:
					std::cout << "1:" << CA << "\n";
					std::cout << "2:" << CB << "\n";
					break;
				}
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49: //������ ������
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "1:" << DA << "\n";
						break;
					case 2:
						std::cout << "1:" << IA << "\n";
						break;
					case 3:
						std::cout << "1:" << CA << "\n";
						break;
					}
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
					try
					{
						char character;//Под типы данных
						std::cout << "Your characte:";
						std::cin >> character;
						switch (alternative)
						{
						case 1:
							DA[index - 1] = character;
							break;
						case 2:
							IA[index - 1] = character;
							break;
						case 3:
							CA[index - 1] = character;
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					std::cout << "New list: ";
					switch (alternative)
					{
					case 1:
						cout << DA << "\n";
						break;
					case 2:
						cout << IA << "\n";
						break;
					case 3:
						cout << CA << "\n";
						break;
					}
					system("pause");
					break;
				}
				case 50: // ������ ������
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "1:" << DB << "\n";
						break;
					case 2:
						std::cout << "1:" << IB << "\n";
						break;
					case 3:
						std::cout << "1:" << CB << "\n";
						break;
					}
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
						switch (alternative)
						{
						case 1:
							DB[index - 1] = character;
							break;
						case 2:
							IB[index - 1] = character;
							break;
						case 3:
							CB[index - 1] = character;
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					std::cout << "New list: ";
					switch (alternative)
					{
					case 1:
						cout << DB << "\n";
						break;
					case 2:
						cout << IB << "\n";
						break;
					case 3:
						cout << CB << "\n";
						break;
					}
					system("pause");
					break;
				}
				break;
				}
			}
		case 51: //Сложение списков
			for (;;)
			{
				system("cls");
				std::cout << "Select option" << "\n";
				std::cout << "1. 1+2" << "\n"; // ������ � ������
				std::cout << "2. 2+1" << "\n"; // ������ � ������
				std::cout << "Esc.Exit" << "\n";  // �����
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << CA << "\n";
					std::cout << "2." << CB << "\n";
					break;
				}
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:
					switch (alternative)
					{
					case 1:
						DC = DA + DB;
						break;
					case 2:
						IC = IA + IB;
						break;
					case 3:
						CC = CA + CB;
						break;
					}
					break;
				case 50:
					switch (alternative)
					{
					case 1:
						DC = DB + DA;
						break;
					case 2:
						IC = IB + IA;
						break;
					case 3:
						CC = CB + CA;
						break;
					}
					break;
				}
			}
			break;
		case 52: //Умножение списков
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << CA << "\n";
					std::cout << "2." << CB << "\n";
					break;
				}
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
					switch (alternative)
					{
					case 1:
						DC = DA * index;
						break;
					case 2:
						IC = IA * index;
						break;
					case 3:
						CC = CA * index;
						break;
					}
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
					switch (alternative)
					{
					case 1:
						DC = DB * index;
						break;
					case 2:
						IC = IB * index;
						break;
					case 3:
						CC = CB * index;
						break;
					}
					break;
				}
			}
			break;
		case 53: //Добавление вконце
			for (;;)
			{
				system("cls");
				std::cout << "Select list" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << CA << "\n";
					std::cout << "2." << CB << "\n";
					break;
				}
				std::cout << "Esc.Exit" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:

					switch (alternative)
					{
					case 1:
						DA = DA.append(Get_Delem());
						break;
					case 2:
						IA = IA.append(Get_Ielem());
						break;
					case 3:
						CA = CA.append(Get_Celem());
						break;
					}
					break;
				case 50:
					switch (alternative)
					{
					case 1:
						DB = DB.append(Get_Delem());
						break;
					case 2:
						IB = IB.append(Get_Ielem());
						break;
					case 3:
						CB = CB.append(Get_Celem());
						break;
					}
					break;
				}
			}
			break;
		case 54://Добавление вначало
			for (;;)
			{
				system("cls");
				std::cout << "Select list" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << CA << "\n";
					std::cout << "2." << CB << "\n";
					break;
				}
				std::cout << "Esc.Exit" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:

					switch (alternative)
					{
					case 1:
						DA = DA.extend(Get_Delem());
						break;
					case 2:
						IA = IA.extend(Get_Ielem());
						break;
					case 3:
						CA = CA.extend(Get_Celem());
						break;
					}
					break;
				case 50:
					switch (alternative)
					{
					case 1:
						DB = DB.extend(Get_Delem());
						break;
					case 2:
						IB = IB.extend(Get_Ielem());
						break;
					case 3:
						IB = IB.extend(Get_Celem());
						break;
					}
					break;
				}
			}
			break;
		case 55: //Подлист
			for (;;)
			{
				system("cls");
				std::cout << "Select ctroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << CA << "\n";
					std::cout << "2." << CB << "\n";
					break;
				}
				std::cout << "Esc.Exit" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:
					switch (alternative)
					{
					case 1:
						DC = DA(select_start(), select_stop());
						break;
					case 2:
						IC = IA(select_start(), select_stop());
						break;
					case 3:
						CC = CA(select_start(), select_stop());
						break;
					}
					break;
				case 50:
					switch (alternative)
					{
					case 1:
						DC = DB(select_start(), select_stop());
						break;
					case 2:
						DC = DB(select_start(), select_stop());
						break;
					case 3:
						DC = DB(select_start(), select_stop());
						break;
					}
					break;
				}
			}
			break;
		}
	}
	return 0;
		
}