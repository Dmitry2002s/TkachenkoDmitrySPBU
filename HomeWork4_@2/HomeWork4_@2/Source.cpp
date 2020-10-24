#include<iostream>
#include<clocale>
#include<ctime>
#include"ArrayList.h"

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
		a.print();
	}
	break;
	case 2:
	{
		int element = 0; 
		cin >> element; 
		a.add(element);
	}
	break;
	case 3:
	{
		int element = 0;
		cout << "Какой элемент вы хотите добавить? " << endl; 
		cin >> element;
		int index = 0; 
		cout << "В какую позицию добавить элемент? " << endl; 
		cin >> index; 
		a.add(index,element);
	}
	break;
	case 4:
	{
		cout << "Укажите индекс удаляемого элемента" << endl; 
		int s = 0; 
		cin >> s; 
		a.remove(s);
	}
	break;
	case 5:
	{
		cout << "Какой элемент требуется найти? " << endl; 
		int s = 0; 
		cin >> s; 
		a.indexOf(s);
	}
	break;
	case 6:
	{
		ArrayList list; 
		for (int i = 0; i < 10, i++;)
		{
			list.add(rand() % 10);
		}
		a.addAll(list);
	}
	break;
	case 7:
	{
		ArrayList list;
		for (int i = 0; i < 10, i++;)
		{
			list.add(rand() % 10);
		}
		int index = 0;
		cout << "В какую позицию добавить элемент" << endl; 
		cin >> index; 
		a.addAll(index, list);
	}
	break;
	}
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	ArrayList a;

	int choice = 0;
	do
	{
		system("cls");
		printMenu();
		cin >> choice;
		processChoice(a, choice);
		system("pause");
	} while (choice != 0);

	return EXIT_SUCCESS;
}