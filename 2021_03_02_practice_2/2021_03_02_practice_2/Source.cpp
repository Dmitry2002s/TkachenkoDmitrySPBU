#include<iostream>
#include<string>

using namespace std;
int index(char i)
{
	int k = 0;
	switch (i) {
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
T1 calculate(T1 a, T2 b, char op)
{
	T1(*operation[5])(T1, T2) { summ, diff, div, rem, mult };
	return operation[index(op)](a, b);
}
bool isInt(string str)
{return str.find('.') == -1;}

bool isDouble(string str)
{return str.find('.') != -1;}

int main(int argc , char* argv[])
{
	
	string  op; 
	string op1;
	string op2;
	if (strcmp(argv[1], "--operator") == 0) 
	{
		op = argv[2]; op1 = argv[4]; op2 = argv[6];
	}
	if (strcmp(argv[3], "--operator") == 0)
	{
		op = argv[4]; op1 = argv[2]; op2 = argv[6];
	}
	if (strcmp(argv[5], "--operator") == 0)
	{
		op = argv[6]; op1 = argv[4]; op2 = argv[2];
	}
	cout << op1 << " ";
	cout << op << " ";
	cout << op2 << " = ";
cout  << calculate(stod(op1), stod(op2),op[0]);
	return 0;
}