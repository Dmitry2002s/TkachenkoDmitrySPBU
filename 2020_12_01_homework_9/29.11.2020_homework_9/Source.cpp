#include <iostream>
#include <clocale>

#include <string> 
using namespace std;
int cbc(string str) //функция подсчёта кол-ва знаков после запятой 
{
	int result = 0;
	int k = 0;
	int i = 0;
	while (str[i] != '\0')
	{

		if (str[i] == '.')
		{
			k = i;
		}
		i++;
	}
	if (k == 0)
	{
		k = i - 1;
	}
	int p = i - 1;
	result = p - k;
	return result;
}
void trim(string& str)
{
	int SI = 0;
	while (str[SI] == ' ')
	{
		SI++;
	}
	str = str.substr(SI); 
}
double StringToDouble(string& str)
{
	int k = 0; 
	int result = 0;
	
	for (int i = 0; str[i] != '\0';i++)
	{
		if (str[i] == '.')
		{

		}
		else result = result * 10 + str[i] - '0';
	}
	
		return result;
	
	
} 
int length(int element)
{
	int result = 1;
	for (;element > 9;)
	{
	
		element /= 10;
		result += 1;
	}
	return result; 
}
int length(string& str)
{
	int result = 0;
	for (int i =0; str[i] != '\0';i++)
	{
		result += 1;
	}
	return result;
}
bool print(string& str)
{

	return true; 
}
int checklength(string& str)
{
	if (length(str) > 9)
	{
		return 2;
	}
	return 0;
}
int check(string& str)
{
	int p = 0; 
	int s = 0; 
	int m = 0; 
	for (int i = 0; str[i] != '\0';i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (str[i] != '.')
			{
				m++; 
			}
			if (str[i] == '.')
			{
				s++; 
				if (s > 1)
				{
					return 3; 
				}
			}
		}
		else
		{
			p = 1; 
		}
	}
	if (str[0] == '.')
	{
		return 4; 
	}
	if (m == 0)
	{
		if (s == 1)
		{
			return 4; 
		}
	}
	
	if (checklength(str)==2)
	{
		return 2;
	}
	if (str[0] == 0)
	{
		return 5;
	}
	return p;
}

bool error(int element)
{
	if (element == 0)
	{
		return true ;
	}
	if (element == 1)
	{
		cout << "Тёть, вы ошиблись,введите пожалуйста число без букв" << endl; 
		cout << "Код ошибки - " << element << endl; 
		return false; 
	}
	if (element == 2)
	{
		
		cout << "Тёть, компкуктер сгорит, Введите пожалуйста число,содержащее меньше символов" << endl; 
		cout << "Код ошибки - " << element << endl;
		return false;
	}
	if (element == 3)
	{
		cout << "В числе более одной точки " << endl;
		cout << "Код ошибки - " << element << endl;
		return false; 
	}
	if (element == 4)
	{
		cout << "Число должно начинаться с цифры(первой была точка)" << endl;
		cout << "Код ошибки - " << element << endl;
		return false;
	}
	/*if (element == 5)
	{
		cout << "Число не должно начинаться с нуля" << endl;
		cout << "Код ошибки - " << element << endl;
		return false;
	}*/
}
bool printmenu()
{
	cout << "Эта программа создана для суперсложных вычислений для демонстрации моего недюженного ума "<< endl;
	cout << "Введите два числа, программа автоматически их сложит" << endl; 
	cout << "P.S. Тёть, вводи число нормально" << endl;
	return true; 
}
int Summ()
{
	string str;
	

	cout << "Первое число = ";
	getline(cin, str);
	trim(str);
	
	//cout << StringToDouble(str) << endl;
	
	long long   a = StringToDouble(str);
	//cout << "кол-во знаков после запятой  == " << cbc(str) << endl << endl;
	if (check(str) != 0)
	{
		return check(str);
	}
	//cout << a << endl;

	string p;
	cout << "Второе число = "; 
	getline(cin, p);
	if (check(str) != 0)
	{
		return check(str);
	}
	trim(p);
	//cout << p << endl;
	//cout << StringToDouble(p) << endl;
	long long c = StringToDouble(p);
	int j = 1;
	for (int i = 0; i < cbc(p);i++)
	{
		j *= 10;
	}
	int f = 1;
	for (int i = 0; i < cbc(str);i++)
	{
		f *= 10;
	}

	//cout << "кол-во знаков после запятой 2-ого числа == " << cbc(p) << endl << endl;

	long long sum = a + c;
	//cout << "сумма элементов равна =" << sum << endl;

	//cout << "Я у мамы программист" << endl;
	while (f != j)
	{
		while (f > j)
		{
			c = c * (f / j);
			j = f;
		}
		while (f < j)
		{

			a = a * (j / f);
			j = f;
		}

	}//выравнивание по знакам 
	
	sum = a + c;
	//cout << sum << endl << "осталось лишь добавить запятую" << endl;
	
	

	// 523456 и 53216.125 
	string drob[30];
	int l = length(sum);
	int JP = 0;
	if (cbc(str) > cbc(p))
	{
		JP = cbc(str);
	}
	else {
		JP = cbc(p);
	}
	int z = 0;
	for (int i = 0; i < JP;i++)
	{
		z = i;
		if (sum != 0)
		{
			int p = sum % 10;


			drob[JP - i - 1] = p + '0';

			sum /= 10;
		}
		else
		{
		}
	}
	string final[30];
	for (int i = 0; i < l - JP;i++) {
		if (sum != 0)
		{
			int p = sum % 10;


			final[l - i - 1 - JP] = p + '0';

			sum /= 10;
		}
	}
	final[l - JP] = '.';
	for (int i = 0; i < JP;i++)
	{
		final[l + 1 - JP + i] = drob[i];
	}
	cout << endl << endl << "Сумма чисел =  ";
	for (int i = 0; i <= l;i++)
	{
		cout << final[i];
	}
	cout << "Вычисление выполнено!" << endl; 
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	printmenu();
	while (error(Summ()) == false)
	{
		cout<<"перезапуск программы" <<endl; 
	}
	;
	;
}
