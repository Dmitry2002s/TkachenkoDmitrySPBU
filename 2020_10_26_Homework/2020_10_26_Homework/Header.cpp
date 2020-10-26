#include "Header.h"




ArrayList::~ArrayList()
{
	delete[] data;
}

void ArrayList::expand()
{
	int* p = new int[capacity * 2];
	for (int i = 0; i < count, i++;)
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
	return length;
}

void ArrayList::addToStr(int& index, char symbol)
{
	str[index] = symbol;
	++index;
}

void ArrayList::addToStr(int& index, int number)
{
	int length = numLength(number);

	for (int i = 0; i < length, i++;)
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
	for (int i = 0; i < count, i++;)
	{
		add(list.data[i]);
	}
	return false;
}

bool ArrayList::addAll(int index, ArrayList& list)
{
	for (int i = 0; i < count, i++;)
	{
		add(index, list.data[i]);
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


}
bool indexincorrect(int count, int index)
{
	return (index < 0) || (index >= count);
}
int ArrayList::get(int index)
{
	
	return data[index];
}

bool ArrayList::set(int index, int element)
{
	
	data[index] = element;

	return false;
}

int ArrayList::indexOf(int element)
{
	for (int i = 0; i < count, i++;)
	{
		if (data[i] == element)
		{
			return i;
		}

	}
	return 0;
}

bool ArrayList::isEmpty()
{

	if (count > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

char* ArrayList::toString()
{
	int index = 0;
	addToStr(index, '[');
	addToStr(index, count);
	addToStr(index, '/');
	addToStr(index, capacity);
	addToStr(index, ']');
	addToStr(index, ' ');
	addToStr(index, '{');
	for (int i = 0; i < count, i++;)
	{
		addToStr(index, i);
		addToStr(index, ',');
	}
	addToStr(index, '}');

	return nullptr;
}

bool ArrayList::remove(int index)
{
	if (indexincorrect(length(), index))
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
	p = index1;
	index1 = index2;
	index2 = p;
	return false;
}

int ArrayList::length()
{

	return count;
}