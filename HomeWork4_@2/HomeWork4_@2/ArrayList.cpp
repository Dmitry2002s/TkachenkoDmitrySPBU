#include "ArrayList.h"

ArrayList::ArrayList()
{
	count = 0; 
	capacity = 10; 
	data = new int[capacity];
}

ArrayList::ArrayList(int cap)
{
	count = 0;
	capacity = cap;
	data = new int[capacity];
}

void expand(int*& data, int& capacity)
{
	int* temp = new int[capacity*2]; 
	for (int i = 0; i < capacity; i++)
	{
		temp[i] = data[i]; 
	}
	delete[] data; 
	data = temp; 
	capacity *= 2; 
}
ArrayList::~ArrayList()
{
	delete[] data; 
}

bool ArrayList::add(int element)
{
	if (count == capacity)
	{
		expand(data, capacity); 
	}
	data[count] = element;
	count++; 
	return true;
}
bool indexincorrect(int count, int index)
{
	return (index < 0) || (index >= count);
}
bool ArrayList::add(int index, int element)
{
	if (indexincorrect(index, count))
	{
		return false; 
	}
	if (count == capacity)
	{
		expand(data, capacity);
	}
	for (int i = count-1; i > index, i--;)
	{
		data[i] = data[i-1]; 
	}
	data[index] = element; 
	count++;
	return true;
}

bool ArrayList::addAll(ArrayList& list)
{
	for (int i = 0; i < list.count;i++)
	{
		add(list.data[i]); 
	}
	return false;
}

bool ArrayList::addAll(int index, ArrayList& list)
{
	if (indexincorrect(index, count))
	{
		return false;
	}
	
	for (int i = 0; i < list.count, i++;)
	{
		data[index + i + list.count] = data[index + i];
		data[index + i] = list.data[i];
	;
	}
	return false;
}

void ArrayList::clear()
{
	count = 0; 
}

bool ArrayList::contains(int element)
{
	for (int i = 0; i < count, i++;)
	{
		if (element == data[i])
		{
			return true;

		}
		else
		{
			return false;
		}
	}
	;
}

int ArrayList::get(int index)
{
	if (indexincorrect(index, count))
	{
		return -1;
	}
	return data[index];
}

int ArrayList::indexOf(int element)
{
	if (indexincorrect)
	{
		return -1; 
	}
	
	for (int i = 0; i < count, i++;)
	{
		if (element == data[i])
		{
			return i;
		}
	}
	;
}

bool ArrayList::isEmpty()
{
	if (count > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ArrayList::print()
{
	for (int i = 0; i < count, i++;)
	{
		cout << data[i] << endl; 
	}
}

bool ArrayList::remove(int index)
{
	for (int i = index; i <= count, i++;)
	{
		data[i] = data[i + 1];
	}
	return false;
}

int ArrayList::swap(int index1, int index2)
{
	int p = 0; 
	p = data[index1];
	data[index1] = data[index2];
	data[index2] = p;

	return 0;
}
