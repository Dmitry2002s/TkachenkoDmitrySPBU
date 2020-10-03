#include<iostream>
#include<clocale>

using namespace std;

void printMenu()
{
    cout << "MENU" << endl;
    cout << "0 - Выход из программы" << endl;
    cout << "1 - Добавить элемент в массив" << endl;
    cout << "2 - Отобразить массив " << endl;
    cout << "3 - Найти номер максимального элемента массива" << endl;
    cout << "4 - Найти минимальный элемент массива" << endl;
    cout << "5 - Посчитать сумму элементов массива" << endl;
    cout << "6 - Вывести массив в обратном порядке" << endl; 
}

void expandArray(int*& arr, int& capacity)
{
    int newCapacity = capacity * 2; 
    int* temp = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            temp[i] = arr[i];
        }
  
    delete[] arr;
        arr = temp;
        capacity = newCapacity;
}

void addElement(int*& arr, int& count, int& cap, int& capacity, int x)
{
    if (count = cap)
    {
        expandArray(*&arr, capacity);
    }
    arr[count] = x;
    count++; 
}

void addRandomElements(int*& arr, int& count, int& cap, int n, int min, int max)
{
    //q
}

void printArray(int* arr, int count,int cap)
{
    cout << "[" << count << "/" << cap << "]";
    cout << "{";
    for (int i = 0; i < count;i++)
    {
        cout << arr[i] << (i != count - 1 ? ", " : "");
    }
}

int sumArray(int* arr, int lenght)
{
    int result = 0;
    for (int i = 0; i < lenght; i++)
    {
        result += arr[i];

    }
    return result;
}


void processChoice(int*& arr, int& count, int cap, int choice,int& capacity)
{
    switch (choice)
    {
    case 1:
    {
        int x = 0; 
        cin >> x; 
        addElement(*&arr, count, cap, capacity);
    }
        break;
    case 2:
    {
        printArray(arr, count, cap) ;
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
    do
    {
        system("cls");
        printMenu();
        cin >> choice;
        processChoice(arr, count, capacity, choice, cap);
        
    } while (choice != 0);
    delete[] arr;
    return 0;
}