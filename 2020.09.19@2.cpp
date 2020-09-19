#include<iostream>
#include<clocale>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	int a = 0;
	int b = 0;
	int p = 0; 
	cin >> a >> b;
	while (a>=b)
	{
		a = a - b;
		p++;
	

		
	 }
	cout << p;
	return EXIT_SUCCESS;
}