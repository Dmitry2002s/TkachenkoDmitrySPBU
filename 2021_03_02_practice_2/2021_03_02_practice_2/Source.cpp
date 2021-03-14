#include<iostream>

using namespace std;
int index(char i)
{
	int k = 0;
	switch (i){
	case '+':return k = 0;
	case '-':return k = 1;
	case '/':return k = 2;
	case '%':return k = 3;
	case '*':return k = 4;
	default:return k = -1;
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
T1 calculate(T1 a, T2 b)
{
	char i;
	cout << "select an action (+,-,*,/,%)" << endl;
	cin >> i;
	cout << "enter a number1 " << endl;
	cin >> a;
	cout << "enter a number2 " << endl;
	cin >> b;
	int k = index(i);

	cout << "index operation= " << k << endl; 
	T1(*operation[5])(T1, T2) { summ, diff, div, rem, mult };
	return operation[index(i)](a, b);
}


int main()
{
	cout << "it is resultat   = " << calculate(954.0, 3.0);
	return 0;
}