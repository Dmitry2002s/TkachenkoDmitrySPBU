#include<iostream>
#include<clocale>
using namespace std;

void printMenu()
{
    cout << "MENU" << endl;
    cout << "0 - Выход из программы" << endl;
    cout << "1 - Добавить в массив n случайных чисел в промежутке от a до b " << endl;
    cout << "2 - Развернуть массив" << endl;
    cout << "3 - Поменять элементы массива местами в парах." << endl;
    cout << "4 - Циклический сдвиг вправо на 1" << endl;
    cout << "5 - Развернуть две половинки массива. n - индекс элемента, разделяющего половинки" << endl;
    cout << "6 - показать массив " << endl; 
   
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

int sumArray(int* arr, int lenght)
{
    int result = 0;
    for (int i = 0; i < lenght; i++)
    {
        result += arr[i];

    }
    return result;
}

void inversion(int cap, int* arr, int count)
{
    int temp = 0;

    for (int i = 0;i < (count / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[count - 1 - i];
        arr[count - 1 - i] = temp;

    }

}
int minElement(int count, int* arr)
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

    for (int i = 0;i < count; i += 2)
    {
        if ((i + 1) == count)
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
        arr[i]=arr[i] >> 1;
    }
}
void n_turn(int count, int* arr,int k)
{
    int temp = 0;

    for (int i = 0;i <= ((k-1) / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[(k)-1 - i];
        arr[(k) -1- i] = temp;

    }
    int i = count;
    int p = k - 1;
    for (;i > (count+p)/2+1 ; i--)
    {
        temp = arr[i-1];
        arr[i-1] = arr[count - i + p + 2];
        arr[count - i + p+2] = temp;
    }
}
    void processChoice(int*& arr, int& count, int& cap, int choice)
    {
        switch (choice)
        {
        case 1:
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

        case 2:
        {
            inversion(cap, arr, count);
        }
        break;

        case 3:
        {
            duoinversion(arr, count);
            cout << "Элементы поменяны местами в парах!" << endl;
            system("pause");
        }
        break;

        case 4:
        {
            shift(arr, count);
            cout << "Элементы сдвинуты" << endl;

        }
        break;
        case 5:
        {
            cout << "введите номер элемента" << endl;
            int k = 0; 
            cin >> k;
            k = k-1;
            n_turn(count, arr,k);
            
        }
        case 6:
        {
            printArray(arr, count, cap);
            system("pause");
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