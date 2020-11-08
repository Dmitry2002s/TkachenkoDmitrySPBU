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
				cout << "массив не симметричен" << endl;
				break;
			}

		}
		if (index == 1) {
			cout << "Массив симметричен " << endl;
		}
		system("pause");
	}
	break;
	case 4:
	{
		cout << "Сдвиг массива на" << endl;
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
						index = 0; //cout << "массив не симметричен" << endl;
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
						index = 0; //cout << "массив не симметричен" << endl;
						break;
					}
				}
				else {
					if (a.get(i) == a.get(a.length() - 1 - i))
					{
					
					}
					else
					{
						index = 0; //cout << "массив не симметричен" << endl;
						
					}
				}

			}
			if (index == 1) {
				cout << "Массив может быть симметричен,если удалить элемент" << "    " << p+1 << endl;
				
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
	cout << "Меню" << endl; 
	cout << "1 - добавить элемент, введенный с клавиатуры;"<< endl; 
	cout << "2 - вывести массив" <<endl;
	cout << "3 - проверить, является ли массив симметричным" <<endl;
	cout << "4 - циклический сдвиг массива на n элементов. n>0 - сдвиг вправо, n<0 - сдвиг влево" <<endl;
	cout << "5 - проверить, может ли массив стать симметричным, если из него удалить один элемент." <<endl;
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