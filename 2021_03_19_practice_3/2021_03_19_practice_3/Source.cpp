#include<iostream>
#include<fstream>
#include<string>
using namespace std; 
bool isSign(char c); 
bool isDigit(char c); 
bool isE(string str, int& index);
bool isDot(string str, int& index);
bool isNatural(string str, int& index);
bool isExp(string str, int& index);
bool isMantis(string str, int& index);
bool isReal(string str, int& index);
bool isWhole(string str, int& index);
bool isID(char c);
bool isletter(char c);
bool ismultiplier(string str, int& index);
bool isterm(string str, int& index);
int main()
{
	/*	ifstream fin("in.txt");
		ofstream fout("out.txt");
		while(!fin.eof())
		{
			string str;
			int index = 0;
			fin >> str;
			cout << str << " -> is ";
			fout << str << " -> is ";
			if (!isReal(str, index))
			{
				cout << "not";
				fout << "not";
			}
		}
		cout << "real" << endl;
		fout << "real" << endl;

	fout.close();
	fin.close();
	return 0;
	}*/
	int index = 0; 
	int k = 0; 
	string a; 
	getline(cin, a);
	cout << "test Whole= " << isWhole(a, index) << endl; 
	cout << "test exp= " << isExp(a, index) << endl;
	cout << "test E" << isE(a, index) << endl; 
	return 0; 
}
bool isSign(char c)
{
	return c == '+' || c == '-';
}
bool isDigit(char c)
{
	return c >= '0' && c <= '9';
}
bool isE(string str, int& index)
{
	if (str[index] == 'E')
	{
		++index; 
		return true; 
	}
	return false; 
}
bool isDot(string str, int& index)
{
	if (str[index] == '.')
	{
		++index; 
		return true; 
	}
	return false; 
}
bool isNatural(string str, int& index)
{
	if (!isDigit(str[index]))
	{
		return false; 
	}
	while (isDigit(str[++index]))
		return true; 
}
bool isExp(string str, int& index)
{
	return isterm(str, index) || (isSign(str[index]));
}
bool isReal(string str, int& index)
{
	if (isSign(str[index]))
	{
		++index; 
	}
	if ((isMantis(str, index)) && isExp(str, index) && str[index] == '\0')
	{
		return true; 
	}
	return false; 
}
bool isMantis(string str, int& index)
{
	if (isNatural(str, index) && isDot(str, index) && isNatural(str, index))
	{
		return true; 
	}
	return false; 
}
bool isWhole(string str, int& i)
{
	if (str[i] == '\0')
	{
		return true;
	}
		if (isSign(str[i]))
		{
			i++;
		}
		if (!isDigit(str[i]))
		{
			return false;
		}
		if (isDot(str, i))
		{
			return false;
		}
		return isWhole(str, ++i );
	}
	

bool isID(char c)
{
	return isletter(c) || c >= 'a' && c <= 'z';
}
bool isletter(char c)
{
	return c == 'x' || c == 'z' || c == 'y';
}
bool ismultiplier(string str, int& index)
{

	return isWhole(str, index) || isID(str[index]) || isExp(str, index);
}
bool isterm(string str, int& index)
{
	if (str[index] == '\0')
	{
		return true; 
	}
	if (str[index] == '*')
	{
		return isterm(str, ++index);
	}
	if (!ismultiplier(str, index) )
	{
		return false ;
	}
	
	return isterm(str, index);
}