#include<iostream>
#include<clocale>
using namespace std;
void expandArray(int*& arr, int& cap)
{
    int newCapacity = cap * 2;
    int* temp = new int[cap];
    for (int i = 0; i < cap; i++)
    {
        temp[i] = arr[i];
    }

    delete[] arr;
    arr = temp;
    cap = newCapacity;
}
void addElement(int*& arr, int& count, int& cap, int x)
{

    if (count == cap)
    {
        expandArray(arr, cap);
    }
    arr[count] = x;
    count++;
}
void addRandomElements(int*& arr, int& count, int& cap, int n, int min, int max)
{
    for (int i = 0; i < n;i++)
        addElement(arr, count, cap, rand() % (max - min + 1) + min);
}
void printArray(int* arr, int count, int cap)
{
    cout << "[" << count << "/" << cap << "]" << endl;
    cout << "{";
    for (int i = 0; i < count;i++)
    {
        cout << arr[i] << (i != count - 1 ? ", " : "");
    }
    cout << "}" << endl;
}
void printMenu()
{
    cout << "����" << endl; 
    cout << "�������� �������� " << endl;
    cout << "_______________________________________________--" << endl;
    cout << "1 -���������� ������" << endl;
    cout << "2 - �������� ������� � ������" << endl;
    cout << "3 - �������� n ��������� �� min �� max" << endl;
    cout << "4- ��������� ������� �������������� �����������" << endl;
    cout << "_______________________________________________--" << endl; 




}
int Factorial(int* arr, int count,int cap)
{
    int k = 0;
    int f = 1; 
    for (int i = 0; i < count;i++)
    {
        
        f = 1;
        for (int n = 1; n <= arr[i];n++)
        { 
            f = f * n;

        }
        k = k + f;
    }
    int m = 0; 
    m = k / count; 
    return m;
}
void processChoice(int*& arr, int& count, int& cap, int choice)
{
    switch (choice)
    {
    case 1:
    {
        printArray(arr, count, cap);
        system("pause");
    }
    break;

    case 2:
    {
        int x = 0;
        cout << "������� �����" << endl;
        cin >> x; 
         

        addElement(arr, count, cap, x);
    }
    break;

    case 3:
    {
        
            int n = 0;
            cout << "n=";
            cin >> n;
            int min = 0;
            cout << "min=";
            cin >> min;
            int max = 0;
            cout << "max=";
            cin >> max;
            addRandomElements(arr, count, cap, n, min, max);
        
    }
    break;

    case 4:
    {
        int m = 0; 
        m=Factorial(arr, count,cap);
        cout << "������� �������������� ����������� =" << m << endl;
        system("pause");
        
    }
    break;
    case 5:
    {
        

    }
    case 6:
    {
       
    }
    break;

    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int choice = 0;
    int capacity = 10;
    int count = 0;
    int* arr = new int[capacity];
    int k = 0;
    do

    {
        system("cls");
        printMenu();
        cin >> choice;
        processChoice(arr, count, capacity, choice);

    } while (choice != 0);
    delete[] arr;
    return 0;
}