#include<iostream>

using namespace std;
int k = 0;
template <typename T1, typename T2>
T1 number1(T1 a,T2 b)
{
	T1 c; 
	operation(a, b) = c;
	return c;
}
int index(char i)
{
	int k = 0;
	switch (i)
	{
	default:
		return k = 0;
	case '+':
	{
		return k = 1;
	}
	case '-':
	{
		return k = 2;

	}
	case '/':
	{
		return k = 3;

	}
	case '%':
	{
		return k = 4;

	}
	case '*':
	{
		return k = 5;

	}
	cout << "lol , you are durak" << endl;
	break;
	}
}
template <typename T1, typename T2>
T1 operation(T1 a, T2 b)
{
	char i;
	cin >> i;

	int k = index(i);

	cout << "index operation= " << k << endl; ;
	if (k == 1)
	{
		return (a + b);
	}
	if (k == 2)
	{
		return (a - b);
	}
	if (k == 3)
	{
		return (a / b);
	}
	if (k == 4)
	{
		return (a % b);
	}
	if (k == 5)
	{
		return (a * b);
	}
	return a;
}

int main()
{
		
	cout << "it is resultat   = " <<operation(954, 3);
	return 0;
}