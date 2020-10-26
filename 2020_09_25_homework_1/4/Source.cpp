#include<iostream>

using namespace std;
int main(int argc, char* argv[])
{
	int a = 2;
	int p = 1;
	int n = 1;
	int k = 1;
	int b = 0;
	int c = 1;

	cin >> p;
	while (p > 1)
	{
		b = 0;
		while (n <= p)
		{

			k = p % n;

			if (k == 0)
			{
				b++;

			}
			n++;
			;
		}
		if (b == 2)
		{
			cout << p;
		}
		p--;
	}




	return EXIT_SUCCESS;
}