#include<iostream>
#include<clocale>
using namespace std;
void printMenu()
{
	{
		cout << "�������� ��������" << endl;
		cout << "1 - �������� ����� � ������" << endl;
		cout << "2 - ������� ������ �� �����" << endl;
		cout << "3 - ����� ����� ������������� �������� �������" << endl;
		cout << "4 - ����� ����������� ������� �������" << endl;
		cout << "5 - ��������� ����� ��������� �������" << endl;
		cout << "6 - ������� ������ � �������� �������" << endl;
		cout << "0 - ����� �� ���������" << endl;
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
	cout << "������� �����, ������� ������ ��������\n\n";
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
			cout << "����� ��������� � ������� ";
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