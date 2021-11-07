#include <iostream>
#include <conio.h>
#include <string>
#include "list.cpp"
using std::cin;
using std::cout;

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
char Get_Celem()
{
	std::cout << "Your elem:";
	char elem;
	cin >> elem;
	return elem;
}

int main()
{
	list<char> A;
	list<char> B;
	list<char> C;
	unsigned alternative;
	unsigned Menu;
	unsigned index;
	unsigned num;
	std::cout << "Laboratory work 1. Class:Stroke" << "\n";
	system("pause");
	for (;;)
	{
		system("cls");
		cout << "Select type" << "\n";
		cout << "1.Double" << "\n";
		cout << "2. Int" << "\n";
		cout << "3. Char*" << "\n";
		cout << "Your select:";
		cin >> alternative;
		if (alternative==1)
		{
			list<double> A;
			list<double> B;
			list<double> C;
			break;
		}
		if (alternative == 2)
		{	list<int> A;
			list<int> B;
			list<int> C;
			break;
		}
		if (alternative==3)
		{
			list<char> A;
			list<char> B;
			list<char> C;
			break;
		}
	}
	for (;;)
	{
		system("cls");
		std::cout << "1.Get a character by index" << "\n"; // ������ �� �������
		std::cout << "2.Writing a character by index" << "\n"; // ������ �� �������
		std::cout << "3.Combining storke" << "\n"; // ��������� ������
		std::cout << "4.Repeat the stroke" << "\n"; // ��������� ������ � ���
		std::cout << "5.Add element to the end of the list" << "\n"; // �������� � ������
		std::cout << "6.Add element to the end of the list" << "\n"; // �������� �������
		std::cout << "7.Get a sublist" << "\n"; // �������� ���������
		std::cout << "Esc.Exit" << "\n";  // �����
		std::cout << "First list:" << A << "\n";
		std::cout << "Second list:" << B << "\n";
		std::cout << "Result list:" << C << "\n";
		Menu = _getch();
		if (Menu == 27) break;
		switch (Menu)
		{
		case 49: // доступ по индексу
			for (;;)
			{
				system("cls");
				std::cout << "1." << A << "\n";
				std::cout << "2." << B << "\n";
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49: //������ ������
				{
					system("cls");
					std::cout << "Select index" << "\n";
					std::cout << "1." << A << "\n";
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
						std::cout << "1." << A << "\n";
						std::cout << "2." << B << "\n";
						std::cout << "This is your character:" << A[index - 1] << "\n";
					}
					catch(const char* err)
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
					std::cout << "2." << B << "\n";
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
		case 50: // ������ � �������
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
				case 49: //������ ������
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
				case 50: // ������ ������
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
		case 51: //�������� �������
			for (;;)
			{
				system("cls");
				std::cout << "Select option" << "\n";
				std::cout << "1. 1+2" << "\n"; // ������ � ������
				std::cout << "2. 2+1" << "\n"; // ������ � ������
				std::cout << "Esc.Exit" << "\n";  // �����
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
		case 52: //��������� �������
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
		case 53: //�������� � �����
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

					switch (alternative)
					{
					case 1:
						A = A.append(Get_Delem());
						break;
					case 2:
						A = A.append(Get_Ielem());
						break;
					case 3:
						A = A.append(Get_Celem());
						break;
					}
					break;
				case 50:
					switch (alternative)
					{
					case 1:
						B = B.append(Get_Delem());
						break;
					case 2:
						B = B.append(Get_Ielem());
						break;
					case 3:
						B = B.append(Get_Celem());
						break;
					}
					break;
				}
			}
			break;
		case 54://�������� �������
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
					
					switch (alternative)
					{
					case 1:
						A = A.extend(Get_Delem());
						break;
					case 2:
						A = A.extend(Get_Ielem());
						break;
					case 3: 
						A = A.extend(Get_Celem());
						break;
					}
					break;
				case 50:
					switch (alternative)
					{
					case 1:
						B = B.extend(Get_Delem());
						break;
					case 2:
						B = B.extend(Get_Ielem());
						break;
					case 3:
						B = B.extend(Get_Celem());
						break;
					}
					break;
				}
			}
		case 55: //�������
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
					C = A(select_start(), select_stop());
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