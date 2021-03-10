#include<iostream>

using namespace std;
int index(char i)
{
	int k = 0;
	switch (i){
	case '+':return k = 1;
	case '-':return k = 2;
	case '/':return k = 3;
	case '%':return k = 4;
	case '*':return k = 5;
	default:return k = 0;
	break;
	}
}
template <typename T1, typename T2>
T1 rem(T1 a, T2 b)
{
	int c = 0;
	while ((a - b) >= 0)
	{
		a = a - b;
		c++;
	}
	cout << "Remains = " << a << endl;
	return (c);
}
template <typename T1, typename T2>
T1 diff(T1 a, T2 b)
{
	return a - b;
}
template <typename T1, typename T2>
T1 div(T1 a, T2 b)
{
	return a / b;
}
template <typename T1, typename T2>
T1 mult(T1 a, T2 b)
{
	return a * b;
}
template <typename T1, typename T2>
T1 summ(T1 a, T2 b)
{
	return a + b;
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
		return summ(a, b);
};
	if (k == 2) 
	{
		return diff(a, b);
	};
	if (k == 3) 
	{
		return div(a, b);
};
	if (k == 4) 
	{ 
		return rem(a, b);
	};

	if (k == 5)
	{
		return mult(a, b);
	};
	if (k == 0)
	{
		cout << "Error - action selected incorrectly" << endl;
	}
	return 0;
}


int main()
{
	cout << "it is resultat   = " << operation(954.0, 3.0);
	return 0;
}