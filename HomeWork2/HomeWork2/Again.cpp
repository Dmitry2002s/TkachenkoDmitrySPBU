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
    cout << "7 - Добавить n случайных элементов" << endl;
    cout << "8 - Развернуть массив" << endl; 
    cout << "9 - Поменять местами элементы массива в парах " << endl; 
}

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

void printArray(int* arr, int count,int cap)
{
    cout << "[" << count << "/" << cap << "]" << endl; 
    cout << "{";
    for (int i = 0; i < count;i++)
    {
        cout << arr[i] << (i != count - 1 ? ", " : "");
    }
    cout << "}" << endl; 
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

void inversion(int cap, int* arr,int count )
{
    int temp = 0;
   
    for (int i = 0;i < (count / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[count - 1 - i];
        arr[count - 1 - i] = temp;

    }
    
}
int minElement (int count, int* arr)
{
    int i = 0;
    int p = 0;
    for (i = 0; i < count;i++)
    {

        if (arr[i] < arr[p])
        {
            p = i;

        }

    }
    p = arr[p];
   return p;
}
int maxElementN(int count, int* arr)
{
    int i = 0; 
    int p = 0;
    for (i = 0; i < count;i++)
    {

        if (arr[p] < arr[i])
        {
            p = i;
            
        }
       
    }
    p += 1;
   return p;
}
void duoinversion(int* arr, int count)
{

    int temp = 0;

    for (int i = 0;i < count; i+=2)
    {
        if ((i+1) == count)
        {
            break;
       }
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;

    }

}
void shift(int* arr, int count)
{
    for (int i = 0; i < count;i++)
    {
        arr[i] >> 1;
    }
}

void processChoice(int*& arr, int& count, int& cap, int choice)
{
    switch (choice)
    {
    case 1:
    {
        int x = 0;
        cout << "введите значение" << endl; 
        cin >> x; 
        addElement(arr, count, cap, x);
    }
        break;
    case 2:
    {
        printArray(arr, count, cap) ;
        system("pause");

    }
    break;
       
    case 3 :
    { 
        int p = 0;
        p=maxElementN(count, arr);

        cout << "Номер Максимального элемента равен " << "{" << p << "}" << endl;
        system("pause");
    }
    break;
    case 4:
    {
        int p = 0; 
        p = minElement(count, arr);
            cout << "Минимальный элемент равен"<< endl << "{" << p << "}" << endl; 
            system("pause");
    }
    break; 
    case 5:
    {
       
        cout << "Сумма массива равна= " << sumArray(arr, count) << endl; 
        system("pause");
    }
    break;
    case 6:
    {
        inversion(cap, arr,count);
        printArray(arr, count, cap);
        inversion(cap, arr, count); 
        system("pause");
    }
    break;
    case 7:
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
    case 8: 
    {
        inversion(cap, arr, count);
    }
    break;
    case 9: 
   {
       duoinversion(arr, count);
       cout << "Элементы поменяны местами в парах!" << endl; 
       system("pause");
   }
    }
    
    break;

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