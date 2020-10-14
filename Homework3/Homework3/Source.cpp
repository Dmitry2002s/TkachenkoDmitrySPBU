#include<iostream>
#include<clocale>
#include<ctime>

using namespace std;

void printMenu()
{
	cout << "МЕНЮ" << endl;
	cout << "0 - Выход из программы" << endl;
	cout << "1 - Ввести несколько элементов с клавиатуры" << endl;
	cout << "2 - Добавить в массив n случайных чисел в промежутке от a до b(n, a, b вводится с клавиатуры)" << endl;
	cout << "3 - Вывести массив на экран" << endl;
	cout << "4 - Поиск индекса элемента" << endl;
	cout << "5 - Добавление массива к массиву" << endl;
	cout << "6 - Объединение массивов" << endl;
	cout << "7 - Вставка элемента в массив (1 массив) " << endl;
	cout << "8 - Удаление нескольких подряд идущих элементов массива" << endl;
	cout << "9 - Поиск подпоследовательности" << endl;
}

/// <summary>
/// Инициализация массива
/// </summary>
/// <param name="capacity"> вместительность массива </param>
/// <returns> указатель на начало массива</returns>
int* initArray(int capacity = 10)
{
	int* arr = new int[capacity + 2]{ 0 };
	*(arr + 1) = capacity;
	arr += 2;
	return arr;
	//return (new int[capacity + 2]{ 0, capacity }) + 2;
}

/// <summary>
/// Освобождение памяти из-под массива
/// </summary>
/// <param name="arr">Указатель</param>
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
/// Функция поиска первого вхождения элемента в массиве.
/// </summary>
/// <param name="arr">Массив с элементами</param>
/// <param name="element">Искомый элемент</param>
/// <param name="start">Место начала поиска</param>
/// <returns>индекс первого найденного элемента или -1, если элемент не найден</returns>
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
/// Добавление массива элементов.
/// </summary>
/// <param name="arr">Массив, к которому добавляются элементы, расширяется только если не хватило места для элементов из добавляемого массива</param>
/// <param name="addedArr">Массив с добавляемыми элементами</param>

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
/// Объединение двух массивов в один.
/// {a1, a2, a3, a4, a5} {b1, b2, b3, b4, b5, b6, b7, b8}
/// </summary>
/// <param name="a">Массив, элементы которого должны стоять на четных местах в результирующем массиве</param>
/// <param name="b">Массив, элементы которого должны стоять на нечетных местах в результирующем массиве</param>
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
/// Извлечение элемента из массива. Все элементы, стоящие после него, должны быть сдвинуты на 1 влево.
/// </summary>
/// <param name="a">Массив с данными</param>
/// <param name="index">Индекс извлекаемого элемента</param>
/// <returns>элемент, стоявший под индексом index, если index был некорректен - вернуть -1</returns>
int extract(int* a, int index)
{
	for (int i = (*(a - 2)); i > 0;i--)

	{
		
		*(a+i) = *(a + i - 1);
	}
	
	return index;
}

/// <summary>
/// Вставка элемента в массив. У вставляемого элемента в итоге должен быть индекс index, все последующие элементы сдвигаются на 1 вправо.
/// </summary>
/// <param name="a">Модифицируемый массив</param>
/// <param name="index">Индекс вставленного элемента</param>
/// <param name="element">Значение элемента</param>
/// <returns>Возвращается 0, если все хорошо и индекс был корректен, 1 - если индес был некорректен</returns>
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
/// Удалить последовательность элементов из массива
/// </summary>
/// <param name="a">Модифицируемый массив</param>
/// <param name="startIndex">Начало удаляемого куска</param>
/// <param name="count">Количество удаялемых элементов</param>
/// <returns>0, если все прошло хорошо, 1, если входные данные были некорректными</returns>
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
/// Поиск подпоследовательности в массиве
/// </summary>
/// <param name="a">Массив, в котором ищем подпоследовательность</param>
/// <param name="b">Искомая подпоследовательность</param>
/// <returns>Индекс начала подпоследовательности или -1, если таковой нет</returns>
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
			cout << "номер начала подпоследовательности равен" << "[" << i << "]" << endl;
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
		cout << "Подпоследовательность не найдена" << endl; 
	}
}
void processChoice(int*& arr1, int*& arr2, int*& addedArray, int choice)
{
	switch (choice)
	{
	case 1:
	{

		cout << "выберите массив(1 либо 2)" << endl;
		int c = 0;
		cin >> c;
		int x = 1;
		cout << "введите элемент" << endl;



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

		cout << "Сколько добавить элементов?" << endl;
		cin >> n;

		cout << "min = ?" << endl;
		cin >> min;

		cout << "max = ?" << endl;
		cin >> max;
		int c = 0;
		cout << "К какому массиву добавить элементы?" << endl;
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
		cout << "Какой массив вы хотите отобразить?" << endl;
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
		cout << "Индекс какого элемента требуется вывести?" << endl;
		int x = 0;
		cin >> x;
		cout << "В каком массиве?\n";
		int c = 0;
		cin >> c;
		switch (c)
		{
		case 1:
		{
			
			cout << "индекс элемента равен [" << search(arr1[-1], arr1, x) << "]";
			break;
		}
		case 2:
		{
			
			cout << "индекс элемента равен [" << search(arr2[-1], arr2, x) << "]";
			break;
		}
		case 3:
		{
			
			cout << "индекс элемента равен ["<< search(addedArray[-1], addedArray, x)<< "]";
			break;
		}
		}

	}

	case 5:
	{
		add(arr1, arr2);
		cout << "Массив 2 добавлен к массиву 1\n";
		break;
	}
	case 6:
	{
		;
		printArray(unify(arr1, arr2));
		cout << "Объединено!" << endl;
		break;
	}
	case 7:
	{
		if (*(arr1 - 2) == *(arr1 - 1))
		{
			expandArray(arr1);
		}
		(*(arr1 - 2) += 1);
		cout << "на какую позицию вставить элемент?" << endl;
		int p = 0;
		cin >> p;
		p--;
		extract(arr1, p);
		int x = 0;
		cout << "Какой элемент вставить?" << endl;
		cin >> x;

		*(arr1 + p) = x;
		break;
	}
	case 8:
	{
		cout << "В каком массиве проводить удаление? " << endl;
		int c = 0;
		cin >> c;

		int x = 0;
		cout << "c какого элемента удалять?" << endl;
		cin >> x;
		cout << "Сколько элементов удалить?" << endl;
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