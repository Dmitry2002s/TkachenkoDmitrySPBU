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
			printf("%4d", matrix[i][j]);
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
bool check(int k, int m, int** matrix)
{
	if (matrix[k][m] == 0)
	{
		return true; 
	}
	return false; 

}
bool question5(int** matrix, int p)
{

	int k = 0; 
	int m = 0; 
	int s = 1; 
	int q = p; 
	int l = p * p+1; 
	for (int i = 0; i < q - 1;++i)
	{
		matrix[k][m] = s;
		m++;
		s++;
	}
	for (int i = 0; i < q - 1;i++)
	{
		matrix[k][m] = s;
		k++;
		s++;
	}
	for (int i = 0; i < q - 1;i++)
	{

		matrix[k][m] = s;
		m--;
		s++;

	}
	;
	for (int i = 0; i < q - 1;i++)
	{

		matrix[k][m] = s;
		k--;
		s++;
	}
	k = 1; 
	q--;
	for (int b=0; b < 6; b++)
	{
		
		for (int i = 0; i < q - 1;++i)
		{
			
			m++;
			matrix[k][m] = s;
			s++;
			if (s > l)
			{
				return false;
			}
			
		}
		q--;
		for (int i = 0; i < q - 1;i++)
		{
			
			k++;
			matrix[k][m] = s;
			s++;
			if (s > l)
			{
				return false;
			}
		}
		
		for (int i = 0; i < q - 1;i++)
		{

			

			m--;
			matrix[k][m] = s;
			s++;
			if (s > l)
			{
				return false;
			}
		}
		q--;
		for (int i = 0; i < q - 1;i++)
		{

			
			k--;
			matrix[k][m] = s;
			s++;
			if (s > l)
			{
				return false;
			}
		}
		
		
	}
	 ///   //////  / / / // 
	
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
 
	cout <<"Пау " <<n; 
;

}