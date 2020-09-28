#include<iostream>
using namespace std;
void expandArray(int*& arr, int& capacity)
{
	int newCapacity = capacity * 2;

	int* temp = new int[newCapacity];
	for (int i = 0; i < capacity; ++i)
	{
		temp[i] = arr[i];
	}

	capacity = newCapacity;
	delete[] arr;
	arr = temp;
}
int main(int argc, char* argv[]);
int n = 0;


	while (n = 1)
	{

	}
	return EXIT_SUCCESS;
}