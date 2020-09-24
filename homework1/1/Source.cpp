#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;
	int k = a * a;
	int x = 0;

	x = k * (k + a + 1) + a + 1;
	 
	cout << x << endl;



	return EXIT_SUCCESS;
}