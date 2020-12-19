#include <iostream>
#include <clocale>
using namespace std;
int** initMatrix(int p)
{
	int** data = new int* [p] {0};
	for (int i = 0; i < p; i++)
	{
		data[i] = new int[p] {0};
	}
	return data; 
}
bool freeMatrix(int** matrix, int p)
{
	for (int i = 0; i < p;i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return true; 
}

bool printMatrix(int** matrix, int p)
{
	cout << "_____________________________" << endl;
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < p; j++)
		{
			printf("%3d", matrix[i][j]);
		}
		cout << endl; 
	}
	cout << "_____________________________" << endl; 
	return true; 
}
bool question1(int** matrix, int p)
{
	int k = 1; 
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < p; j++)
		{
			
			matrix[i][j] = j+k;
		}
		k++;
	}
	return true; 
}
bool question2(int** matrix, int p)
{
	int k = 2*p-1;
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < p; j++)
		{

			matrix[i][j] = k-j;
		}
		k--;
	}
	return true;
}
bool question3(int** matrix, int p)
{

	int k = 1; 
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < p; j++)
		{

			matrix[i][j] = k;
			k++; 
		}
		k = 1;
	}
	return true;
}
bool question4(int** matrix, int p)
{
	int m = 0; 
	int k = 0;
	int s = 1; 
	for (int k = 0; k < p; k++)
	{
		for (int i = m; i < p; i++)
		{

			matrix[i][k] = s;
		}
		for (int j = m; j < p; j++)
		{

			matrix[k][j] = s;
		}
		s++;
		m++;
	}
	return true;
}
bool question5(int** matrix, int p)
{

	int m = 0;
	int k = 0;
	int s = 1;
	int g = p;
	int i = 0; 
	int a = 0;
	
		for (; k < p; k++)
		{
			matrix[i+a][k+a] = s;
			s++;
		}
		k--;
		for (; i < p; i++)
		{
			matrix[i+a][k+a] = s;
			s++;
		}
		i--;
		for (; k >= 0; k--)
		{
			matrix[i-a][k-a] = s;
			s++;
		}
		k++;
		for (int i = p - 2; i > 0; i--)
		{
			matrix[i-a][k-a] = s;
			s++;
		}
		a++;
	
	return true;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	 int n = 5; 

	 cin >> n; 
	 const int f = n; 
	 int** p = initMatrix(f); 
	 printMatrix(p, n);
	 question1(p, n);
		 printMatrix(p, n);
		 question2(p, n);
		 printMatrix(p, n);
		 question3(p, n);
		 printMatrix(p, n);
		 question4(p, n);
		 printMatrix(p, n);
		 freeMatrix(p, n);
		p = initMatrix(f);
	question5(p, n);
    printMatrix(p, n);
	 freeMatrix(p, n);
 
	cout <<"��� " <<n; 
;

}