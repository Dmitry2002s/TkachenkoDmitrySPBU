#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;
	int k = a * a;
	int b = k * k;
	int c = b / a;
	int d = b / (k);
	
	int x = b + c + d + a + 1;

	cout << "a = " << a << ", x = " << x << endl;



	return EXIT_SUCCESS;
}