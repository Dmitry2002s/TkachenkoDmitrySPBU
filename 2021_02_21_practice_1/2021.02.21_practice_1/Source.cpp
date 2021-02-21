#include <iostream>
#include<clocale> 
using namespace std;

void printBits(int)
{
	cout << sizeof(int) * 8 << endl;
}
void printBits(long)
{
	cout << sizeof(int) * 8 << endl;
}
void printBits(long long)
{
	cout << sizeof(long long)*8 << endl;
}
void printBits(float)
{
	cout << sizeof(float) * 8 << endl;
}
void printBits(double)
{
	cout << sizeof(double) * 8 << endl;
}
void printBits(long double)
{
	cout << sizeof(long double) * 8 << endl; 
}
double average(int n, ...)
{

	double a = 0; 
	int result = 0;
	int p = n; 
	for (int* ptr = &n; n > 0; n--)
	{
		a += *(++ptr);
	}
	return (a / p);
	
}
int quantity(string str) //quantity numbers in string 
{
	int result = 0;
	int k = 0;
	int i = 0;
	if (str[0] != '\0')
	{
		k=1;
	}
	while (str[i] != '\0')
	{
		if (str[i] == ',')
		{
			k++;
		}
		i++;
	}
	return k;
}
double sum(string str)// summ elements string 
{
	int i = 0; 
	double k = 0; 
	double p = 0; 
	while (str[i] != '\0')
	{
		if (str[i] == ',')
		{
			k = k + p;
			p = 0;
		}
		else {
			p = p * 10;
			p = p + str[i] - '0';
		}
		i++;
	}
	k = k + p;
	return k; 
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 1; 
	long l = 1; 
	long long ll = 1; 
	double d = 1; 
	long double ld = 1; 
	float f = 1; 
	cout << "Размер int в битах ="; printBits(a);
		cout << "Размер long  в битах ="; printBits(l);
		cout << "Размер long long  в битах ="; printBits(ll);
		cout << "Размер double в битах ="; printBits(d);
		cout << "Размер long double в битах ="; printBits(ld);
		cout << "Размер float в битах ="; printBits(f);
		cout << "Средняя арифметическое чисел 1,2,3,4,5 = " << average(5, 1, 2, 3, 4, 5) << endl;
		cout << "Средняя арифметическое чисел 13, 24, 31, 45, 51, 1, 1, 1, 54, 12 = " << average(10, 13, 24, 31, 45, 51, 1, 1, 1, 54, 12) << endl; 
		string str;
		cout << "введите через запятую числа , среднее арифметическое которых требуется вычислить  " << endl; 
		cin >> str; 
		cout << "кол-во элементов строки = " << quantity(str) << endl;
		cout << "Сумма элементов строки = " << sum(str) << endl; ;
		cout << "Среднее арифметическое элементов строки = " << sum(str) / quantity(str) << endl; 
	return 0; 
}
