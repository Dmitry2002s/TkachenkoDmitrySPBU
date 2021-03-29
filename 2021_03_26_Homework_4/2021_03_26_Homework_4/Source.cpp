#include <iostream>
using namespace std; 
void swap(int& a, int& b);
void fillArray(int* a, int len);
void printArray(int* a, int len);
void mixArray(int* a, int len); 
bool isSorted(int* a, int len, bool ascending = true);
void bubbleSort(int* a, int len);
void insertionSort(int* a, int len);
void selectionSort(int* a, int len);
void ascending(int* a, int len);
void descending(int* a, int len);
int main()
{
	int len = 12; 
	int* a = new int[len];
	fillArray(a, len);
	printArray(a, len);
	cout << "bubble sort" << endl; 
	mixArray(a, len);
	printArray(a, len);
	bubbleSort(a, len);
	printArray(a, len);
	cout << "insertion sort" << endl; 
	mixArray(a, len);
	printArray(a, len);
	insertionSort(a, len);
	printArray(a, len);
	cout << "selection sort" << endl; 
	mixArray(a, len);
	printArray(a, len);
	selectionSort(a, len);
	printArray(a, len);
	ascending(a, len);
	cout << "ascending " << endl; 
	printArray(a, len);
	descending(a, len);
	cout << "descending " << endl;
	printArray(a, len);
	cout << endl << endl << endl;
	cout << "Test with array length = 5" << endl; 
	int* b = new int[5];
	fillArray(b, 5);
	cout << "bubble sort" << endl;
	bubbleSort(b, 5);
	mixArray(b, 5);
	cout << "insertion sort" << endl;
	insertionSort(b, 5);
	mixArray(b, 5);
	cout << "selection sort" << endl;
	selectionSort(b, 5);

	delete[] b;
	cout << endl << endl << endl; 
	cout << "Test with array length = 10" << endl;
	int* c = new int[10];
	fillArray(c, 10);
	cout << "bubble sort" << endl;
	bubbleSort(c, 10);
	mixArray(c, 10);
	cout << "insertion sort" << endl;
	insertionSort(c, 10);
	mixArray(c, 10);
	cout << "selection sort" << endl;
	selectionSort(c, 10);

	mixArray(c, 10);

	delete[] c;
	cout << endl << endl << endl;
	cout << "Test with array length = 15" << endl;
	int* d = new int[15];
	fillArray(d, 15);
	cout << "bubble sort" << endl;
	bubbleSort(d, 15);
	mixArray(d, 15);
	cout << "insertion sort" << endl;
	insertionSort(d, 15);
	mixArray(d, 15);
	cout << "selection sort" << endl;
	selectionSort(d, 15);

	delete[] d;
	cout << endl << endl << endl;
	cout << "Test with array length = 20" << endl;
	int* w = new int[20];
	fillArray(w, 20);
	cout << "bubble sort" << endl;
	bubbleSort(w, 20);
	mixArray(w, 20);
	cout << "insertion sort" << endl;
	insertionSort(w, 20);
	mixArray(w, 20);
	cout << "selection sort" << endl;
	selectionSort(w, 20);
	cout << endl << endl << endl;
	cout << "Test with array length = 100" << endl;
	int* q = new int[100];
	fillArray(q, 100);
	cout << "bubble sort" << endl;
	bubbleSort(q, 100);
	mixArray(q, 100);
	cout << "insertion sort" << endl;
	insertionSort(q, 100);
	mixArray(q, 100);
	cout << "selection sort" << endl;
	selectionSort(q, 100);
	delete[] q; 

	cout << "Test with array length = 100000" << endl;
	int* z = new int[100000];
	fillArray(z,100000);
	cout << "bubble sort" << endl;
	bubbleSort(z, 100000);
	mixArray(z, 100000);
	cout << "insertion sort" << endl;
	insertionSort(z, 100000);
	mixArray(z, 100000);
	cout << "selection sort" << endl;
	selectionSort(z, 100000);
	delete[] z;
	return 0; 

}
void swap(int& a, int& b)
{
	int c = a; 
	a = b; 
	b = c; 
}
void fillArray(int* a, int len)
{
	for (int i = 0; i < len;++i)
	{
		a[i] = rand() % 90 + 10; 
	}
}
void inputArray(int* a, int len)
{
	for (int i = 0;i < len;++i)
	{
		cin >> a[i];
	}
}
void printArray(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		cout << a[i] << ' '; 
	}
	cout << endl; 
}
void mixArray(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		swap(a[i], a[rand() % len]);
	}
}
bool isSorted(int* a, int len, bool ascending)
{
	for (int i = 0; i < len - 1; ++i)
	{
		if (a[i] > a[i + 1] == ascending)
		{
			return false; 
		}
	}
	return true; 
}
void bubbleSort(int* a, int len)
{
	int s = 0; 
	int k = 0; 
	for (int i = 0; i < len-1;++i)
	{
		for (int j = 0; j < len - i-1;++j)
		{
			s++; 
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				k++; 
			}
		}
	}
	cout << "number of swaps = " << k << endl;
	cout << "number of comparisons = " << s << endl;
}
void insertionSort(int* a, int len)
{
	int s = 0;
	int k = 0;
	for (int i = 1; i < len; ++i)
	{
		int t = a[i];
		int j = i; 
		s++; 
		while (j > 0 && a[j - 1] > t)
		{
			k++; 
			a[j] = a[j - 1];
			--j; 
		}
		k++;
		a[j] = t;
	}
	cout << "number of swaps = " << k << endl;
	cout << "number of comparisons = " << s << endl;

}
void selectionSort(int* a, int len)
{
	int s = 0; 
	int k = 0;
	for (int i = 0; i < len - 1; ++i)
	{
		int index = i; 
		for (int j = i + 1; j < len; ++j)
		{
			s++; 
			if (a[j] < a[index])
			{
				index = j;
			}
		}
		k++;
		swap(a[i], a[index]);
	}
	cout << "number of swaps = " << k << endl;
	cout << "number of comparisons = " << s << endl; 
 }

void ascending(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		a[i] = i+1; 
	}
}

void descending(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		a[i] = len - i;
	}
}
