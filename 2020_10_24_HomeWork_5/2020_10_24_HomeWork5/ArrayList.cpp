#include "ArrayList.h"


ArrayList::~ArrayList()
{
	delete[] str; 
}

void ArrayList::expand()
{
	int* p = new int[capacity * 2];
	for (int i = 0; i < count; i++)
	{
		p[i] = data[i];
	}
	delete[] data; 
	data = p; 
}

int ArrayList::numLength(int number)
{
	
	int length = 1; 
	if (number > 9)
	{
		number /= 10; 
		length++; 
	}
	if (number < 0)
	{
		length = 2;
	}
	if (number < -9)
	{
		number /= 10;
		length++; 
	}
	return length;
}

void ArrayList::addSymbolToStr(int& index, char symbol)
{
	str[index] = symbol;
	++index; 
}

void ArrayList::addNumberToStr(int& index, int number)
{
	int length = numLength(number); 
	if (number < 0)
	{
		int digit = number % 10;

		int a = 0;
		str[index - 1] = '-' + digit;;
		index++; 
		number = digit * (-1); 
	}
	for (int i = 0; i < length; i++)
	{
		int digit = number % 10;

			str[index + length - i - 1] = '0' + digit;
			number /= 10;
	}
	
	index++; 

}

bool ArrayList::add(int element)
{
	if (count == capacity)
	{
		expand();
	}
	data[count++] = element;
	return true;
}

bool ArrayList::add(int index, int element)
{
	if (count == capacity)
	{
		expand();
	}
	data[index] = element;
	return true;
}

bool ArrayList::addAll(ArrayList& list)
{
	for (int i = 0; i < count; i++)
	{
		add(list.data[i]);
	}
	return false;
}

bool ArrayList::addAll(int index, ArrayList& list)
{
	for (int i = 0; i < count; i++)
	{
		add(index,list.data[i]);
		index++; 
	}
	
	return false;
}

void ArrayList::clear()
{
	count = 0; 
}

bool ArrayList::contains(int element)
{
	int p = 0; 
	for (int i = 0; i < count;i++)
	{
		if (element == data[i])
		{
			p++     ;
		}
		
	}
	if (p > 0)
	{
		return true;
	}
		return false; 
	
}
bool indexincorrect(int count, int index)
{
	return (index < 0) || (index >= count);
}
int ArrayList::get(int index)
{
	if (indexincorrect(count, index))
	{
		return -1; 
	}
	
	return data[index];
}

bool ArrayList::set(int index, int element)
{
	if (indexincorrect)
	{
		return -1; 
	}
	data[index] = element; 

	return false;
}

int ArrayList::indexOf(int element)
{
	for (int i = 0; i < count; i++)
	{
		if (data[i] == element)
		{
			return i; 
		}

	}
	return -1;
}

bool ArrayList::isEmpty()
{
	if (indexincorrect)
	{
		return true;
	}
	if (count > 0)
	{
		return false;
	}
}

char* ArrayList::toString()
{
	int index = 0; 
	addSymbolToStr(index, '[');
	addNumberToStr(index, count);
	addSymbolToStr(index, '/');
	addNumberToStr(index, capacity);
	addSymbolToStr(index, ']');
	addSymbolToStr(index, ' ');
	addSymbolToStr(index, '{');
	for (int i = 0; i < count, i++;)
	{
		addNumberToStr(index, i);
		addSymbolToStr(index, ',');
	}
	addSymbolToStr(index, '}');

	return nullptr;
}

bool ArrayList::remove(int index)
{
	if (indexincorrect)
	{
		return false; 
	}
	else
	{
		if (index < count)
		{
			data[index] = data[index + 1];
			index++;
		}
		count--; 
		return true;
	};
	
}

bool ArrayList::swap(int index1, int index2)
{
	int p = 0; 
	p = data[index1]; 
	data[index1] = data[index2];
	data[index2] = p;
	return false;
}

int ArrayList::length()
{

	return count;
}
