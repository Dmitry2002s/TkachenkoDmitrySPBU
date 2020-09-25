#include<iostream>

using namespace std;
int main(int argc, char* argv[])
{
	int a = 2;
	int p = 1;
	int n = 1;
	int k = 1;
	int b = 1;
	int c = 1;

	cin >> p;
	while (n <= (p/2) )
	{
		k = p % n;
		n++;
		if (k == 0)
		{
			b++;
		}
	}

	cout << b;


	return EXIT_SUCCESS;
}