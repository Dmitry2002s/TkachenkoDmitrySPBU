#include <iostream>
#include <clocale>
#include <math.h>
#include <string>

using namespace std;

void trim(string& str)
{
	int p = 0; 
	int SI = 0;
	int l = 0; 
	while (str[SI] == ' ')
	{
		SI++;
	}
	if (p==0)
	{
		if (str[SI] == '0');
		{
			l++;

		}
		
	}
	str = str.substr(SI);
}
double MyFunction(double x, int n)
{
	double c = 1; 
	int p = 0; 
	double xn = 1; 
	double f = xn; 
	p = 1 - x;
		for (int i = 0; i <= n;++i)
		{
			f = f* x; 
			if (i % 2 == 1) {
				c = c + f;
				; 
			}
			if (i % 2 == 0)
			{
				c = c - f;
				; 
			}
		}
		
	return c;
}
double MyFunction2(double x, int n)
{
	double c = 1;
	int p = 0;
	double xn = 1;
	double f = xn;
	p = 1 - x;
	for (int i = 0; i <= n;++i)
	{
		f = f * x;
		c = c + f; 
	}

	return c;
}
int length(string& str)
{
	int result = 0;
	for (int i = 0; str[i] != '\0';i++)
	{
		result += 1;
	}
	return result;
}
int checklength(string& str)
{
	if (length(str) > 9)
	{
		return 2;
	}
	return 0;
}
int check(string& str)
{
	int p = 0;
	int s = 0;
	int m = 0;
	for (int i = 0; str[i] != '\0';i++)
	{
		if (str[i] == '-'|| str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9' || str[i] == '.')
		{
			if (str[i] != '.')
			{
				m++;
			}
			if (str[i] == '.')
			{
				s++;
				if (s > 1)
				{
					return 3;
				}
			}
		}
		else
		{
			p = 1;
		}
	}
	if (str[0] == '.')
	{
		return 4;
	}
	if (m == 0)
	{
		if (s == 1)
		{
			return 4;
		}
	}

	if (checklength(str) == 2)
	{
		return 2;
	}
	if (str[0] == 0)
	{
		return 5;
	}
	return p;
}
double StringToDouble(string& str)
{
	int k = 0;
	double  result = 0;
	int l = 1;

	if (str[0] == '-')
	{
		for (int i = 0; str[i] != '\0';i++)
		{
			if (str[i] == '.')
			{

			}
			if (str[i] == '-')
			{

			}
			else result = result * 10 + str[i] - '0';
		}
		result = -result;
	}
	else
	{
		for (int i = 0; str[i] != '\0';i++)
	{
		if (str[i] == '.')
		{

		}
		else result = result * 10 + str[i] - '0';
	}
}
	return result;


}
int cbc(string str) //ôóíêöèÿ ïîäñ÷¸òà êîë-âà çíàêîâ ïîñëå çàïÿòîé 
{
	int result = 0;
	int k = 0;
	int i = 0;
	while (str[i] != '\0')
	{

		if (str[i] == '.')
		{
			k = i;
		}
		i++;
	}
	if (k == 0)
	{
		k = i - 1;
	}
	int p = i - 1;
	result = p - k;
	return result;
}
int znak(int k)
{
	int result = k; 
	int p = 1; 
	for (int i = 0; i < k;i++)
	{
		p *= 10;
	}
	return p; 
}
int kait()
{
	
	string str;

	cout << "число = ";
	getline(cin, str);
	trim(str);
	if (check(str) != 0)
	{
		cout << "Ошибка" << endl;
		return -1;
	}
	
	double x = StringToDouble(str) / znak(cbc(str));
	if (str[0] == '-')
	{
		x = x - 2;;
	}
	
	if (x < -1 || x>1)
	{
		if (x == -3)
		{
			x = -1; 
	}
		else {
			return -1;
		}

	}
	
	cout <<"число"<< x << endl; 
	double xn = 0;
	cout << "Число знаков после запятой" << endl; 
	int  n= 0;
	cin >> n; 
	if (n < 0)
	{
		return -1;
	}
	
	
	cout << "результат = "  <<MyFunction(x, n) << endl;


		;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	
	int p = 0; 
	while (p == 0) {
		if (kait() != -1)
		{
			cout << "great" << endl;
			p++;
			return 0;
		}
		else
		{
			cout << "Введите число из разрешённых [-1;1]" << endl; 
		}
	}
}