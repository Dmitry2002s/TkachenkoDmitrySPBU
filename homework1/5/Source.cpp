#include<iostream>
#include<math.h>

using namespace std;
int main(int argc, char* argv[])
{
	int a = 2;
	int p = 1;
	int n = 1;
	int k = 1;
	int b = 0;
	int c = 0;

	cin >> p;
	while (n <= sqrt(p) )
	{
		k = p % n;
		c = p / n;
		if (c == n)
		{
			b--;
		}
		n++;
		if (k == 0)
		{
			b++;b++;
			
		}
	}
    if(p==1)
	{
		b = 1;
	}
	cout << b;


	return EXIT_SUCCESS;
}