#include<iostream>

using namespace std;
int main(int argc, char* argv[])
{
	int a = 0;
	int d = 0;
	int c = 0;
	int b = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int p = 0;
	cin >> p;


	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10;b++)
		{
			for (c = 0; c < 10;c++)
			{
				if (p == a + b + c)
				{
					k++;
				}
			}
		}
	}
	k = k * k;
	cout << k;

	return EXIT_SUCCESS;
}