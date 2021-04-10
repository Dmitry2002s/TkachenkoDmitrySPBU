#include<iostream>
#include<fstream>
#include<string>
using namespace std; 
void FillArray(int* a, int c)
{
	for (int i = 0; i < c; i++)
	{
		a[i] = rand() % 100;
	}
}
void PrintArray(int* a, int c)
{
	for (int i = 0; i < c; i++)
	{
		cout << a[i] << " "; 
	}
}
void CountingSort(int* a, int* c, int n, int k)
{
    for (int i = 0; i < k; i++) {
        c[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        c[a[i]] = c[a[i]] + 1;
    }
    int i = 0;
    for (int j = 0; j < k; j++) {
        while (c[j] != 0) {
            a[i] = j;
            c[j]--;
            i++;
        }
    }
}

int* merge(int* a, int* c, int n, int k)
{
    int* p = new int[n + k]; 
    for (int i = 0; i < k; i++) {
        p[i] = 0;
    }
    int* s = new int[100]{ 0 };
    for (int i = 0; i < n; i++) {
        s[a[i]] = s[a[i]] + 1;
    }
    for (int i = 0; i < n; i++) {
        s[c[i]] = s[c[i]] + 1;
    }
    int i = 0; 
    for (int j = 0; j < 100; j++) {
        while (s[j] != 0) {
            p[i] = j;
            s[j]--;
            i++;
        }
    }
    return p; 
}
void QuickSort(int* a, int c)
{
    int left = 0; 
    int right = c - 1; 
    int mid = 0; 
    if (c % 2 == 0)
    {
        mid = c / 2;
    }
    else {
        mid = c / 2 + 1; 
    }
    for (int left = 0; left < mid; left++)
    {
        while (a[left] < 50)
        {
            left++; 
        }
        while (a[right] > 50)
        {
            if (right - 1 == mid)
            {
                break; 
            }
            else right--;
        }
        int k = a[left];
        a[left] = a[right];
        a[right] = k; 
    }
}
int main()
{
   
	int c = 30; 
	int* A = new int[c]; 
    int* C = new int[100];

	FillArray(A, c);
    FillArray(C, 100);
    cout << "Array A not sorted = " << endl;
    PrintArray(A, c);
    CountingSort(A, C, c, 100);
    cout << endl <<"Hop , this array sorted (CountingSort ) " << endl;
    PrintArray(A, c);
    cout << endl << endl << endl; 
    FillArray(A, c);
    cout << "Array A not sorted = " << endl;
    PrintArray(A, c);
    cout << endl; 
    QuickSort(A, c); 
    PrintArray(A, c);
    cout << endl << "Hop , this array sorted (QuickSort ) - not works  " << endl;
    int* P = new int[c];
    FillArray(P, c);
    cout << endl << endl << endl; 
    cout << "A   "; 
    PrintArray(A, c);
    cout << endl; 
    cout << "P   ";
    PrintArray(P, c);
    cout << "merge " << endl; 
    PrintArray(merge(A, P, c, c), 2*c);
    delete[] A; 
    delete[] C; 
    delete[] P;
    
    return 0; 
}