#include<iostream>
#include<clocale>
#include<ctime>
#include"Header.h"
#include "Header.cpp"

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