/*������������������ ������ ���� �������
��������, ��� ��� ������� � ��������� ��������� ��������:
1). � ������ �������.
2). �� ������� �� 1 ��������.
3). �� ������� �� ���������� ���������.
*/
#include <iostream>
#include "LinkedList.h"
#include <clocale>
using namespace std; 
int main()
{
	setlocale(LC_ALL, "Russian");
	LinkedList list; 
	
	cout << list << endl;
	list.addToHead(1);
	list.addToHead(2);
	list.addToHead(3);
	list.addToHead(4);
	list.addToHead(5);
	list.addToHead(6);
	list.addToHead(7);
	list.addToHead(8);
	list.addToHead(1);
	list.addToTail(9);
	cout << list << endl;
	cout << "add 5" << endl;
	list += 5;
	cout << list << endl;
	cout  << "length = "<< list.length() << endl;
	cout << list << endl; 
	cout << "���������� �� ������� 8 � ������ _"  <<  list.contains(8) << endl; 
	cout << "���������� �� ������� 839742734 � ������ _" << list.contains(839742734) << endl;
	cout << "������ ��������,������� 2 - "  << list.indexOf(2) << endl; 
	cout << list << endl; 
	cout << "�������� �������� � �������� 4" << endl;
	list.extract(4);
	cout << list << endl;
	cout << "�������� �������� � �������� 0" << endl;
	list.extract(0);
	cout << list << endl; 
	cout << "�������� �������� � �������� 8" << endl;
	list.extract(8);
	cout << list << endl;
	cout << "�������� �������� � �������� 8" << endl;
	list.extract(8);
	cout << list << endl;
	cout << "-=3" << endl;
	list -= 3;
	cout << list << endl;
	cout << "-=0" << endl;
	list -= 0;
	cout << list << endl;
	cout << "-=9" << endl;
	list -= 9;
	cout << list << endl;
	cout << "-=5" << endl;
	list -= 5;
	cout << "list"<< list << endl;
	LinkedList list1;
	list1.addToHead(2); 
	list1.addToHead(4);
	list1.addToHead(5);
	list1.addToHead(6);
	list1.addToHead(13);
	list1.addToHead(24);
		cout << "list1" << list1 << endl; 
		cout << "list1 =list2" << endl;
	list = list1;
	cout << "list " << list << endl; 
	cout << "list1" << list1 << endl; 
	cout << list << endl;
	cout << "���������� � list ���� ��������� " << endl; 
	for (int i = 0; i < 10; i++)
	{
		list.addToHead(i);
	}
	cout << list << endl;
	cout << "Swap ���� ��������� 2 � 6 " << endl;
	list.swap(2, 6);
	cout << list << endl; 
	cout << "Swap ���� ��������� 0 � 9 " << endl;
	 
	list.swap(0, 9);
	cout << list; 
	///��������� ����.  


	return 0; 
} 