#include<iostream>
#include<clocale>
using namespace std;
int a = 0;
int x = 0;
void arr(int*arr, )
{
	int* arr = new int[10];
	for (int i = 0; i< count; i++)
	{
		temp[i] = a[i];
		delete a[];
		a = temp;
	}
}
void printArray(int* arr, int count, int cap)
{
	cout << "[" << count << "/" << cap << "]";
	cout << "{";
	for (int i = 0; i < count; ++i)
	{
		cout << arr[i] << (i != count - 1 ? ", " : "");
	}
	cout << "}" << endl;
}
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
void expandArray(int* arr, int cap)
{
	int newCapacity = cap * 2;

	int* temp = new int[newCapacity];
	for (int i = 0; i < cap; ++i)
	{
		temp[i] = arr[i];
	}

	cap = newCapacity;
	delete[] arr;
	arr = temp;
}
int sumArray(int*& arr, int& length)
{ 
	int cap = 10;
	int* a = new int[cap];
	cout << "Введите элементы массива, завершите ввод элементом '0'v\n\n";
	int count = 0;
	int result = 0;
	for (int i = 0; i < length; ++i)
	{
		result += arr[i];
		
	}
	return result;
}

int main(int argc, char* argv[])
{
	while (true)
	{

		setlocale(LC_ALL, "Russian");
		int choice = -1;

		while (choice != 0)
		{
			int a = 0;
			system("cls");
			printMenu();
			cin >> choice;
			switch (choice)
			{
			case 1: cout << "!" << endl;


				break;
			case 2:

				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				cout << "сумма равна";
				break;
			case 0:
				exit(0);
				break;

			}

			cout << "Нажмите любую клавишу,чтобы продолжить" << endl;
			cin >> a;
		}


		return 0;
	}
}