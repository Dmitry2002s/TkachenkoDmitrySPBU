#include<iostream>
using namespace std;
#include"ArrayList.h"
#include <clocale>
int main()
{
	setlocale(LC_ALL, "Russian");
	ArrayList list1, list2;
	list1.add(3);list1.add(4);list1.add(5);list1.add(6);
	cout << list1 << endl; 
	list1.add(0, 2); list1.add(0, 1); 
	cout << list1 << endl; 
	list2.add(1);list2.add(2);list2.add(3);list2.add(4);list2.add(5);list2.add(6);list2.add(7);
	cout << "list 2 = " << list2 << endl; 
	list1.addAll(list2);
	cout << "list1+list2 =" << list1 << endl; 
	list1.addAll(0, list2);
	cout << "Добавление к list1 в позицию 0 list2 " << list1 << endl; 
	list1.clear();
	cout << list1 << endl;
	cout << list2.contains(3) << endl; 
	cout << list2.contains(9999) << endl; 
	cout << "list2[2] = " << list2.get(2) << endl; 
	cout << list2.set(0, 32) << list2 << endl; 
	cout << "list2 =" << list2 << endl; 
	cout << "5 = list2[" <<list2.indexOf(5) << "]" << endl; 
	cout << list1 << "проверка списка на пустоту = " << list1.isEmpty() << endl; 
	list1.add(3); 
	cout << list1 << "проверка списка на пустоту = " << list1.isEmpty() << endl;
	list1.remove(0); 
	cout << "list1 =" << list1 << endl;
	cout << "list2 =" << list2 << endl;
	list2.swap(0, 6); 
	cout << "swap (0,6) " << list2 << endl;
	cout << "list1=" << list1; 

	cout << "list1 = list2" << endl;
	list1 = list2;
	cout << list1 << endl;
	list1 -= 4;
	cout << "list1 -= 4" << endl;
	cout << "list1= " << list1;
	cout << list1 << endl;
	list1 + 3;
	cout << "list1 + 3" << endl; 
	cout << list1 << endl;
	3 + list1;
	list1.add(3);
	cout << "3+list1" << endl; 
	cout << list1 << endl;
	cout << list1 << endl;
	cout << list1 << endl;

	/*
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << "list3 = list1 + 5" << endl; 
		list3 = list1 + 5;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << endl;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << "list3 = list1 + list2";
	list3 = list1 + list2;
	cout << "list1 = " << list1 << endl;
	cout << "list2 = " << list2 << endl;
	cout << "list3 = " << list3 << endl;
	cout << endl;
	cout << list2 - 2 <<endl ; 
	cout << 20 - list2 << endl;
	cout << "list 2 =" << list2 << endl;
	list2 -= 18; list2 -= 15; list2 -= 14; list2 -= 13; list2 -= 12;
	cout << "list 2 =" << list2 << endl; 
	//è òàê äàëåå*/

	return 0;
}