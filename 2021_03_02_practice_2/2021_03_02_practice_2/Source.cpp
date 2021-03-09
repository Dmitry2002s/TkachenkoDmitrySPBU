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
		cout << "lol , you are durak" << endl;
		break;
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

	break;
	}
}
template <typename T1, typename T2>
T1 operation(T1 a, T2 b)
{
	char i;
	cout << "select an action (+,-,*,/,%)" << endl;

	cin >> i;
	cout << "enter a number1 " << endl; 
	cin >> a; 
	cout << "enter a number2 " << endl;
	cin >> b; 
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
	if (k == 0)
	{
		cout << "Error - action selected incorrectly" << endl; 
		return 0; 
	}
	return a;
}

int main()
{
	cout << "it is resultat   = " <<operation(954, 3);
	return 0;
}