#pragma once
#include "Header.h"
using namespace std;
struct Arraylist ;
int* ArrayList::initArray(int capacity)
{
	int* arr = new int[capacity + 2]{ 0 };
	*(arr + 1) = capacity;
	arr += 2;
	return arr;
	//return (new int[capacity + 2]{ 0, capacity }) + 2;
}
bool ArrayList::addtoindex(int element, int index, int* data, int count)
{
	*(data + index) = element;
	count++;
	return false;
}
bool ArrayList::add(int element, int* data, int count)
{
	addtoindex(element, *(data + count), data, count);
	return false; 
}

void ArrayList::print(int* arr)
{
    for (int i = 0; i < *(arr - 2);i++)
	{
		cout << i << endl;
	}
	;
}



bool ArrayList::expand(int* arr, int count)
{
	int* temp = initArray(2 * (count));
	for (int i = 0; i < (count);i++)
	{
		*(temp + i) = *(arr + i);
	}
	deleteArray(arr);
	arr = temp;
	return false;
}

ArrayList::ArrayList(int capacity)
{
	
}

void ArrayList::deleteArray(int* arr)
{

	arr -= 2;
	delete[] arr;
	///delete[](arr - 2);
}
void ArrayList::processChoice(int choice)
{
	switch (choice)
	{
	case 1:
	   {
		cout << "Пиписька\n";
	
	   }
	}
	
}