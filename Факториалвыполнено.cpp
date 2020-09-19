#include<iostream>
#include<clocale>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
    int i = 1;
    int p = 0;
    int k = 1;
    i = 1;

    cin >> p;
    while (i <= p)
    {
        k = (k * i) + 0;
        i=1+i;
         
    }
    cout << k;
    //cout << i  << endl;
	return EXIT_SUCCESS;
}