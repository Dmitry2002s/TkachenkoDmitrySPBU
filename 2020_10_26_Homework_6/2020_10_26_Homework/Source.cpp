#include<iostream>
#include "Header.h"
#include<clocale> 
using namespace std;
void processChoice(ArrayList& a, int choice)
{

	switch (choice)
	{
	default:
	case 1:
	{
		int x = 0;
		cin >> x;
		a.add(x);
	}
	break;
	case 2:
	{
		cout << a.toString() << endl;

		system("pause");
	}
	break;
	case 3:
	{
		int index = 0;
		for (int i = 0; i < a.length() / 2; i++)
		{

			if (a.get(i) == a.get(a.length() - 1 - i))
			{
				index = 1;
			}
			else
			{
				index = 0; 
				cout << "������ �� �����������" << endl;
				break;
			}

		}
		if (index == 1) {
			cout << "������ ����������� " << endl;
		}
		system("pause");
	}
	break;
	case 4:
	{
		cout << "����� ������� ��" << endl;
		int k = 0; 
		cin >> k; 
		int p = a.length();
		if (k < 0)
		{
			k = -k;
			for (int i = 0; i < k;i++)
			{

				a.add(a.get(i));

			}
			for (int i = 0; i < k; i++)
			{
				a.remove(0);
			}
		}
		else 
		{
			for (int i = 0; i < k;)
			{
				
				a.add(0, a.get(a.length()-1));
			
				a.remove(a.length()-1);
				i++;
			}
		}
	}
	
	break; 

	case 5:
	{
		for (int p = 0; p < a.length();p++)
		{
			int index = 1;
			for (int i = 0; i < a.length() / 2; i++)
			{
				if (i == p)
				{
					i++; 
					if (a.get(i) == a.get(a.length() - i))
					{
				}
					else
					{
						index = 0; //cout << "������ �� �����������" << endl;
						break;
					}
				}
				if (a.length() - 1 == p)
				{
					if (a.get(i) == a.get(a.length() - 2 - i))
					{
					
					}
					else
					{
						index = 0; //cout << "������ �� �����������" << endl;
						break;
					}
				}
				else {
					if (a.get(i) == a.get(a.length() - 1 - i))
					{
					
					}
					else
					{
						index = 0; //cout << "������ �� �����������" << endl;
						
					}
				}

			}
			if (index == 1) {
				cout << "������ ����� ���� �����������,���� ������� �������" << "    " << p+1 << endl;
				
			}
		}
		system("pause");
	}
	case 0:
	{
	
	}
	}
	
}
void printMenu()
{
	cout << "����" << endl; 
	cout << "1 - �������� �������, ��������� � ����������;"<< endl; 
	cout << "2 - ������� ������" <<endl;
	cout << "3 - ���������, �������� �� ������ ������������" <<endl;
	cout << "4 - ����������� ����� ������� �� n ���������. n>0 - ����� ������, n<0 - ����� �����" <<endl;
	cout << "5 - ���������, ����� �� ������ ����� ������������, ���� �� ���� ������� ���� �������." <<endl;
}
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	ArrayList a; 
	int c = 0; 
	
	do

	{
		system("cls");
		printMenu();
		cin >> c;
		processChoice(a,c);

	} while (c != 0);
	return EXIT_SUCCESS;
}