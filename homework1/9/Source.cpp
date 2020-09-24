#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a = 2;
	int c = 2;
	int b = 2;
	int p = 1;
	cin >> p;
	p--;
	c = a << p;
	c = c - 1;
	cout << c;


	return EXIT_SUCCESS;
}