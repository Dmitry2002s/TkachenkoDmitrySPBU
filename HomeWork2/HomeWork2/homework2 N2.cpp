#include<iostream>
using namespace std;
void printMenu()
{
	cout << "Выберите действие" << endl;
	cout << "1 - Добавить число в массив" << endl;
	cout << "2 - Вывести массив на экран" << endl;
	cout << "3 - Найти номер максимального элемента массива" << endl;
	cout << "4 - Найти минимальный элемент массива" << endl;
	cout << "5 - Посчитать сумму элементов массива" << endl;
	cout << "6 - Вывести массив в обратном порядке" << endl;
	cout << "0 - Выйти из программы" << endl;
}
void arr(int a, int *count, int temp)
{
	int* array = new int[10];
	for (int *i = 0; i < count; i++)
	{
		array[i] = a[i];
		delete array[i];
		a = temp;
	}
}


int main()
	int choice = -1;
	while (choice != 0)
	{
		system("cls");
		printMenu();
		cin >> choice;
		switch (choice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		}
	}
	return 0;
}