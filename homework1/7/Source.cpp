#include<iostream>

using namespace std;
int main(int argc, char* argv[])
{
	int a = 2;
	int c = 0;
	int p = 0;
	cin >> a;
	c = a;
	int b = 1;

	cin >> p;
	while (b < p)
	{
		c = c * a;
		b++;
	}

	cout << c;


	return EXIT_SUCCESS;
}