#include<iostream>
#include<clocale>
using namespace std;
void printMenu()
{
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
}

void expandArray(int*& arr, int& cap)
{
	int newCapacity = cap * 2;

	int* temp = new int[newCapacity];
	for (int i = 0; i < cap; ++i)
	{
		temp[i] = arr[i];
	}

	newCapacity =cap ;
	;
	
}
void addNumber(int& cou, int& cap, int*& a)
{
	cout << "Введите число, которое хотите добавить\n\n";
	int x = 0;
	cin >> x;
	cout << endl;
	a[cou] = x;
	cou++;
	 
}
void printArray(int* arr, int cou, int cap)
{
	cout << "[" << cou << "/" << cap << "]"; 
	cout << "{";
	for (int i = 0; i < cou; ++i)
	{
		cout << arr[i] << (i != cou - 1 ? ", " : "");
	}
	cout << "}" << endl;
}
int main()
{
	int x = 0;
	int* arr = 0;
	int cou = 0;
	int cap = 10; 
	int* a = new int[cap];
	setlocale(LC_ALL, "Russian");
	int choice = -1;
	while (choice != 0)
	{
		system("cls");
		printMenu();
		
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			
			addNumber(cou, cap, *&a);
			
			
		}
			break;
		case 2:
		{
			cout << "Число элементов в массиве ";
			printArray(arr,cou,cap);
			
		}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;


		}
	}
	return 0;delete[] arr;
}