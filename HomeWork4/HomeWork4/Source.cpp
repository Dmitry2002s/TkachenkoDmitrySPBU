#include<iostream>
#include<clocale>
#include<ctime>
#include"Header.h"
#include "Header.cpp"

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



int main()
{
	::ArrayList;
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	int choice = 0;
	do
	{
		system("cls");
		printMenu();
		int choice = 0;
		cin >> choice;
		processChoice(choice);
		system("pause");
	} while (choice != 0);

	return EXIT_SUCCESS;
}