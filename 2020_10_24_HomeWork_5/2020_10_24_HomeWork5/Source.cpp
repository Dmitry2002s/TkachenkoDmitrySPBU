#include <iostream>
#include "ArrayList.h"
#include <clocale>
using namespace std;

void processChoice(ArrayList& a, int choice)
{
	switch (choice)
	{
	case 1:
	{
		int i = 0; 
		if (i < 10)
		{
			a.add(rand() % rand() % 10);
			i++;
		}
		
	}
	break;
	case 2:
	{
		
		int k = 0; 
		for (int i = 0; i < 10; i++)
		{
			a.add((rand() % (100))*(-1));

		} 
	}
	break;
	case 3:
	{
		int max = 0; 
		
		for (int i = 0; i < a.length();i++)
		{
			if (a.get(i) > max)
			{
				max = a.get(i);
			}
		}
		int min = max; 
		for (int i = 0; i < a.length();i++)
		{
			if (a.get(i) < min)
			{
				min = a.get(i);
			}
		}
		swap(min, max);
	}
	break;
	case 4:
	{
	
		for (int i=0; i < (a.length())/2 ;i++)
		{
			int p = a.get(rand() % a.length());
			int k = a.get(rand() % a.length());
			swap(k, p);
		}
		break;}
	case 5:
	{

		int b = a.length(); 
		for (int i = 0; i < b; i++)
		{
			if (a.get(i)<0)
			{
				a.remove(i); 
				a.add(i, 0);
			}
		}
	}
	
	break;
	}
}
void printmenu()
{
	cout << "����" << endl; 

	cout << "1-�������� � ������ 10 ��������� ������������� ���������� ����� � ������� ������" << endl;
	cout << "2-�������� � ������ 10 ��������� ������������� ���������� ����� � ������� ������" << endl;
	cout << "3-�������� ������� ������ ����������� � ��������� ������������ ������� � ������� ������" << endl;
	cout << "4-���������� ��� �������� ������� � ������� ������." << endl;
	cout << "5-�������� ������ ������������� ������� ������� �� 0." << endl;

}
int main()
{
	setlocale(LC_ALL, "Russian");
	ArrayList a; 
	printmenu();
	int x = 0; 
	cin >> x; 
	processChoice(a, x); 
	return EXIT_SUCCESS;
}