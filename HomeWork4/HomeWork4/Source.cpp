#include<iostream>
#include<clocale>
#include<ctime>
#include"Header.h"




using namespace std;

void printMenu()
{
	cout << "МЕНЮ" << endl;
	cout << "0 - Выход из программы" << endl;
	cout << "1 - Вывести массив на экран" << endl;
	cout << "2 - Добавить элемент" << endl;
	cout << "3 - Добавить элемент в позицию" << endl;
	cout << "4 - Удалить элемент по индексу" << endl;
	cout << "5 - Найти элемент" << endl;
	cout << "6 - Добавить несколько элементов" << endl;
	cout << "7 - Добавить несколько элементов, начиная с некоторой позиции" << endl;
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