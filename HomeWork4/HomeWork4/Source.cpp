#include<iostream>
#include<clocale>
#include<ctime>
#include"Header.h"




using namespace std;

void printMenu()
{
	cout << "����" << endl;
	cout << "0 - ����� �� ���������" << endl;
	cout << "1 - ������� ������ �� �����" << endl;
	cout << "2 - �������� �������" << endl;
	cout << "3 - �������� ������� � �������" << endl;
	cout << "4 - ������� ������� �� �������" << endl;
	cout << "5 - ����� �������" << endl;
	cout << "6 - �������� ��������� ���������" << endl;
	cout << "7 - �������� ��������� ���������, ������� � ��������� �������" << endl;
}

void processChoice(ArrayList& a, int choice)
{
	switch (choice)
	{
	case 1:
	{
	}
	break;
	case 2:
	{
	}
	break;
	case 3:
	{
	}
	break;
	case 4:
	{
	}
	break;
	case 5:
	{
	}
	break;
	case 6:
	{
	}
	break;
	case 7:
	{
	}
	break;
	}
}

int main()
{
	int* a = ArrayList::initArray(count);
	ArrayList;
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int* a = ;
	int choice = 0;
	do
	{
		int a = 0; 
		system("cls");
		printMenu();
		int choice = 0;
		cin >> choice;
		processChoice(a,choice);
		system("pause");
	} while (choice != 0);

	return EXIT_SUCCESS;
}