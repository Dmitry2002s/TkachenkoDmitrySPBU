#include<iostream>
using namespace std;
void printMenu()
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