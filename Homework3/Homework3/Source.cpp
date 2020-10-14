#include<iostream>
#include<clocale>
#include<ctime>

using namespace std;

void printMenu()
{
	cout << "����" << endl;
	cout << "0 - ����� �� ���������" << endl;
	cout << "1 - ������ ��������� ��������� � ����������" << endl;
	cout << "2 - �������� � ������ n ��������� ����� � ���������� �� a �� b(n, a, b �������� � ����������)" << endl;
	cout << "3 - ������� ������ �� �����" << endl;
	cout << "4 - ����� ������� ��������" << endl;
	cout << "5 - ���������� ������� � �������" << endl;
	cout << "6 - ����������� ��������" << endl;
	cout << "7 - ������� �������� � ������ (1 ������) " << endl;
	cout << "8 - �������� ���������� ������ ������ ��������� �������" << endl;
	cout << "9 - ����� ���������������������" << endl;
}

/// <summary>
/// ������������� �������
/// </summary>
/// <param name="capacity"> ��������������� ������� </param>
/// <returns> ��������� �� ������ �������</returns>
int* initArray(int capacity = 10)
{
	int* arr = new int[capacity + 2]{ 0 };
	*(arr + 1) = capacity;
	arr += 2;
	return arr;
	//return (new int[capacity + 2]{ 0, capacity }) + 2;
}

/// <summary>
/// ������������ ������ ��-��� �������
/// </summary>
/// <param name="arr">���������</param>
void deleteArray(int* arr)
{
	
	arr -= 2;
	delete[] arr;
	///delete[](arr - 2);
}

void expandArray(int*& arr)
{
	int* temp = initArray(2 * (*(arr - 1)));
	for (int i = 0; i < *(arr - 1); ++i)
	{
		*(temp + i) = *(arr + i);
	}
	*(temp - 2) = *(arr - 2);
	deleteArray(arr);
	arr = temp;
}

void addElement(int*& arr, int element)
{
	if (*(arr - 2) >= *(arr - 1))
	{
		expandArray(arr);
	}
	*(arr + *(arr - 2)) = element;
	++(*(arr - 2));

}

void addRandomElements(int*& arr, int n, int min, int max)
{
	for (int i = 0; i < n; ++i)
	{
		addElement(arr, rand() % (max - min + 1) + min);
	}
}

void printArray(int* arr)
{
	cout << "[" << *(arr - 2) << "/" << *(arr - 1) << "] {";
	for (int i = 0; i < *(arr - 2); ++i)
	{
		cout << *(arr + i) << (i == *(arr - 2) - 1 ? "}\n" : ", ");
	}
}

/// <summary>
/// ������� ������ ������� ��������� �������� � �������.
/// </summary>
/// <param name="arr">������ � ����������</param>
/// <param name="element">������� �������</param>
/// <param name="start">����� ������ ������</param>
/// <returns>������ ������� ���������� �������� ��� -1, ���� ������� �� ������</returns>
int search(int capacity, int* arr, int element)
{
	
	int k = 0; 
	for (int i = 0; i <= *(arr-2);i++)
	{
		if (*(arr + i) == element)
		{
			k= i; 
		}
	}
	return k; 
}

/// <summary>
/// ���������� ������� ���������.
/// </summary>
/// <param name="arr">������, � �������� ����������� ��������, ����������� ������ ���� �� ������� ����� ��� ��������� �� ������������ �������</param>
/// <param name="addedArr">������ � ������������ ����������</param>

void add(int*& arr, int* addedArr)
{
	for (int i = 0; i < *(arr-1) + *(addedArr-2);i++)
	{
		if (*(arr - 1) < *((arr - 2) + *(addedArr - 2)))
		{
			expandArray(arr);
		}
		*(arr + *(arr - 2) + i) = *(addedArr + i);

		
	}
	 
}

/// <summary>
/// ����������� ���� �������� � ����.
/// {a1, a2, a3, a4, a5} {b1, b2, b3, b4, b5, b6, b7, b8}
/// </summary>
/// <param name="a">������, �������� �������� ������ ������ �� ������ ������ � �������������� �������</param>
/// <param name="b">������, �������� �������� ������ ������ �� �������� ������ � �������������� �������</param>
/// <returns>
/// result[-1] = a[-2] + b[-2]
/// {a1, b1, a2, b2, a3, b3, a4, b4, a5, b5, b6, b7, b8}
///</returns>
int* unify(int* a, int* b)
{
	int* temp = initArray(*(a - 1));

	*(temp - 2) = *(a - 2) + *(b - 2);
	if (*(temp - 1) <= *(temp - 2))
	{
		expandArray(temp);
	}
	for (int i = 0; i <= *(a - 2);i++)

	{
		temp[2 * i] = a[i];
		
	}
	for (int i = 0; i <= *(b - 2);i++)
	{
		temp[2 * i + 1] = b[i];
	}
	return temp;
	temp -= 2;
	delete[] temp;
	
	/// <summary>
	/// int* temp = initArray(2 * (*(arr - 1)));
	///for (int i = 0; i < *(arr - 1); ++i)
	///{
	///	*(temp + i) = *(arr + i);
	///}
	///*(temp - 2) = *(arr - 2);
	///deleteArray(arr);
	///arr = temp;
	///
	/// </summary>
	/// <param name="a"></param>
	/// <param name="b"></param>
	/// <returns></returns>
	
}


/// <summary>
/// ���������� �������� �� �������. ��� ��������, ������� ����� ����, ������ ���� �������� �� 1 �����.
/// </summary>
/// <param name="a">������ � �������</param>
/// <param name="index">������ ������������ ��������</param>
/// <returns>�������, �������� ��� �������� index, ���� index ��� ����������� - ������� -1</returns>
int extract(int* a, int index)
{
	for (int i = (*(a - 2)); i > 0;i--)

	{
		
		*(a+i) = *(a + i - 1);
	}
	
	return index;
}

/// <summary>
/// ������� �������� � ������. � ������������ �������� � ����� ������ ���� ������ index, ��� ����������� �������� ���������� �� 1 ������.
/// </summary>
/// <param name="a">�������������� ������</param>
/// <param name="index">������ ������������ ��������</param>
/// <param name="element">�������� ��������</param>
/// <returns>������������ 0, ���� ��� ������ � ������ ��� ���������, 1 - ���� ����� ��� �����������</returns>
int insert(int*& a, int index, int element)
{
	*(a - 2) += 1;
	if (*(a - 2) == *(a - 1))
	{
		expandArray(a);
	}
	for (int i = (*(a-2)-index); i >= 1; i--)

	{
		*(a + index + i + 1) = *(index + a + i);

	}
	*(a + index) = element;
	return 0;
}

/// <summary>
/// ������� ������������������ ��������� �� �������
/// </summary>
/// <param name="a">�������������� ������</param>
/// <param name="startIndex">������ ���������� �����</param>
/// <param name="count">���������� ��������� ���������</param>
/// <returns>0, ���� ��� ������ ������, 1, ���� ������� ������ ���� �������������</returns>
int deleteGroup(int* a, int startIndex, int count)
{

	int i = startIndex; 
	if (startIndex <= count + startIndex,count--)
	{
		*((a - 2) - count) = *((a - 2) - (2 * count));
	}
	if (*(a - 2) > 0)
	{
		*(a - 2) -= count;
	}
		return 0; 
}

/// <summary>
/// ����� ��������������������� � �������
/// </summary>
/// <param name="a">������, � ������� ���� ���������������������</param>
/// <param name="b">������� ���������������������</param>
/// <returns>������ ������ ��������������������� ��� -1, ���� ������� ���</returns>
///int subSequence(int* a, int* b)

void subSequence(int* a, int* b)
{ 
	int i = 0; 
	int p = 0; 
	int k = 0; 
	for (int i=0; i < *(a-2); i++)
	{ 
		if(*(a + i) == *(b + p))
		{
			p++;
		}
		if(p==*(b-2))
		{
			cout << "����� ������ ��������������������� �����" << "[" << i << "]" << endl;
			k++;
			break;
		}
		else
		{
			k = 0;
		}
	}
	if (k == 0)
	{
		cout << "��������������������� �� �������" << endl; 
	}
}
void processChoice(int*& arr1, int*& arr2, int*& addedArray, int choice)
{
	switch (choice)
	{
	case 1:
	{

		cout << "�������� ������(1 ���� 2)" << endl;
		int c = 0;
		cin >> c;
		int x = 1;
		cout << "������� �������" << endl;



		cin >> x;

		switch (c)
		{
		case 1:

		{
			addElement(arr1, x);
		}
		break;
		case 2:
		{
			addElement(arr2, x);
		}
		break;
		}

	}
	break;
	case 2:
	{
		int n = 0;
		int min = 0;
		int max = 0;

		cout << "������� �������� ���������?" << endl;
		cin >> n;

		cout << "min = ?" << endl;
		cin >> min;

		cout << "max = ?" << endl;
		cin >> max;
		int c = 0;
		cout << "� ������ ������� �������� ��������?" << endl;
		cin >> c;
		switch (c)
		{
		case 1:
		{
			addRandomElements(arr1, n, min, max);
			break;
		}
		case 2:
		{
			addRandomElements(arr2, n, min, max);
			break;
		}
		case 3:
			addRandomElements(addedArray, n, min, max);
			break;

		}

	}
	break;
	case 3:
	{
		cout << "����� ������ �� ������ ����������?" << endl;
		int c = 0;

		cin >> c;
		switch (c)
		{
		case 1:
		{
			printArray(arr1);
			break;
		}
		case 2:
		{
			printArray(arr2);
			break;
		}
		case 3:
		{
			printArray(addedArray);
			break;
		}
		}
		break;
	}
	case 4:
	{
		cout << "������ ������ �������� ��������� �������?" << endl;
		int x = 0;
		cin >> x;
		cout << "� ����� �������?\n";
		int c = 0;
		cin >> c;
		switch (c)
		{
		case 1:
		{
			
			cout << "������ �������� ����� [" << search(arr1[-1], arr1, x) << "]";
			break;
		}
		case 2:
		{
			
			cout << "������ �������� ����� [" << search(arr2[-1], arr2, x) << "]";
			break;
		}
		case 3:
		{
			
			cout << "������ �������� ����� ["<< search(addedArray[-1], addedArray, x)<< "]";
			break;
		}
		}

	}

	case 5:
	{
		add(arr1, arr2);
		cout << "������ 2 �������� � ������� 1\n";
		break;
	}
	case 6:
	{
		;
		printArray(unify(arr1, arr2));
		cout << "����������!" << endl;
		break;
	}
	case 7:
	{
		if (*(arr1 - 2) == *(arr1 - 1))
		{
			expandArray(arr1);
		}
		(*(arr1 - 2) += 1);
		cout << "�� ����� ������� �������� �������?" << endl;
		int p = 0;
		cin >> p;
		p--;
		extract(arr1, p);
		int x = 0;
		cout << "����� ������� ��������?" << endl;
		cin >> x;

		*(arr1 + p) = x;
		break;
	}
	case 8:
	{
		cout << "� ����� ������� ��������� ��������? " << endl;
		int c = 0;
		cin >> c;

		int x = 0;
		cout << "c ������ �������� �������?" << endl;
		cin >> x;
		cout << "������� ��������� �������?" << endl;
		int p = 0;
		cin >> p;
		p++;
		switch (c)

		{
		case 1:
			deleteGroup(arr1, x, p);
			break;
		case 2:
			deleteGroup(arr2, x, p);
		}

	}
	case 9:
	   {
		subSequence(arr1, arr2);
	    break;
	   }
	}
}
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	
	int* a = initArray(10);
	int* b = initArray(10);
	int* addedArray = initArray(10);
	int choice = 0;
	do
	{
		system("cls");
		printMenu();
		cin >> choice;
		processChoice(a, b,addedArray, choice);
		system("pause");
	} while (choice != 0);

	deleteArray(a);
	deleteArray(b);
	return EXIT_SUCCESS;
}