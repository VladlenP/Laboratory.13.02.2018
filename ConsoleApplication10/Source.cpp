#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

void main()
{
	int a;
	setlocale(LC_ALL, "RU");
	cout << "Введите номер задания" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		cout << "Задание 1:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		//1.	Дан квадратный массив из n элементов. Найти произведение элементов первой строки
		const int A = 5;
		int summ = 1;
		int n[A][A], i, j;
		for (i = 0; i < 5; i++)
		{

			for (j = 0; j < 5; j++)
			{
				n[i][j] = 1 + rand() % 5;
				cout << n[i][j] << " ";
			}
			cout << endl;
		}
		for (i = 0; i < A; i++)
		{

			summ *= n[0][i];

		}
		cout << endl;
		cout << summ << endl;
		break;
	}
	case 2:
	{
		cout << "Задание 2:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		//2.	Дана целочисленная квадратная матрица. Написать программу упорядочения ее строк по возрастанию сумм их элементов
		int a[5][5], aa[5][2] = { { 0 },{ 0 } }, m = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				a[i][j] = 10 + rand() % 90;
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				aa[i][0] += a[i][j];
			}
			aa[i][1] = i;
		}

		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 4; j > i; j--)
			{
				if (aa[j][0] < aa[j - 1][0])
				{
					m = aa[j][0];
					aa[j][0] = aa[j - 1][0];
					aa[j - 1][0] = m;
					m = aa[j][1];
					aa[j][1] = aa[j - 1][1];
					aa[j - 1][1] = m;
				}
			}
		}

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << a[aa[i][1]][j] << " ";
			}
			cout << endl;
		}
		break;
	}
	case 3:
	{
		cout << "Задание 3:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		//3.	Дана целочисленная матрица размера 5×10. Найти минимальное значение среди сумм элементов всех ее строк
		int matrix[5][10];
		int matrix1[5][1];
		int summ = 0;
		int min;
		int minNum[5];


		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				matrix[i][j] = rand() % 100 + 1;
			}
		}


		for (int i = 0; i < 5; i++)
		{
			min = matrix[i][0];

			for (int j = 1; j < 10; j++)
			{
				if (matrix[i][j] < min)
				{

					min = matrix[i][j];
				}
			}

			minNum[i] = min;
		}

		cout << "Полученная матрица: " << endl;


		for (int i = 0; i < 5; i++)
		{

			for (int j = 0; j < 10; j++)
			{
				cout << matrix[i][j] << " ";
				matrix1[i][0] += matrix[i][j];
			}

			cout << endl;
		}

		cout << "Сформированный масив: ";

		for (int i = 0; i < 5; i++)
		{
			cout << minNum[i] << " ";
		}
		cout << endl;

		break;
	}
	case 4:
	{
		cout << "Задание 4:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		//4.	В произвольной матрице - отсортировать по убыванию элементы последовательности, расположенные после второго отрицательного числа.
		int a[5][10], aa[5][10] = { { 0 },{ 0 } }, k = 0, tmp;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				a[i][j] = -20 + rand() % 40;
				cout << "[" << a[i][j] << "]" << " ";

			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			k = 0;
			for (int j = 0; j < 10; j++)
			{
				if (a[i][j] < 0)
					k++;
				if (k > 2)
				{
					for (int g = j + 1; g > 10; g--)
					{
						for (int l = 9; l > j + 1; l--)
						{
							if (a[i][l] < a[i][l - 1])
							{
								tmp = a[i][l];
								a[i][l] = a[i][l - 1];
								a[i][l - 1] = tmp;
							}
						}
					}
				}
			}
		}
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << "[" << a[i][j] << "]" << " ";
			}
			cout << endl;
		}
		break;
	}
	case 5:
	{
		cout << "Задание 5:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		//5.	Дан массив A(n,m). Удалить строки массива, не имеющие ни одного повторяющегося элемента
		int a[5][10], m, k = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				a[i][j] = 10 + rand() % 30;
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		for (int i = 0; i < 5; i++)
		{
			m = a[i][0];
			k = 0;
			for (int j = 0; j < 10; j++)
			{
				if (m == a[i][j])
					k++;
			}
		}
		break;
	}
	case 6:
	{
		cout << "Задание 6:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		int a[5][5], min;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				a[i][j] = 10 + rand() % 90;
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		min = a[0][0];
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (i == j)
				{
					if (min < a[i][j])
						min = a[i][j];
				}
			}
		}
		cout << min << endl;
		break;
	}
	case 7:
	{
		cout << "Задание 7:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		int a[3][3] = { { 1,2,3 },{ 8,9,4 },{ 7,6,5 } };
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		break;
	}
	case 8:
	{
		cout << "Задание 8:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		int a[5][5], x, k = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				a[i][j] = 1 + rand() % 20;
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		cin >> x;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (a[i][j] == x)
					k++;
			}
		}
		cout << "Число элементов " << k << endl;
		break;
	}
	case 9:
	{
		cout << "Задание 5:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		int a[5][5];
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				a[i][j] = -20 + rand() % 40;
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		cout << "--------------------" << endl;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (a[0][j] < 0)
					a[0][j] = 0;
			}
		}
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		break;
	}
	case 10:
	{
		cout << "Задание 10:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		int a[5][10];
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				a[i][j] = 10 + rand() % 90;
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		for (int j = 0; j < 5; j++)
		{
			if (j % 2 == 0)
			{
				for (int h = 0; h < 5; h++)
				{
					for (int i = 4; i > h; i--)
					{
						if (a[i - 1][j] > a[i][j])
						{
							int temp = a[i - 1][j];
							a[i - 1][j] = a[i][j];
							a[i][j] = temp;
						}
					}
				}
			}
			else if (j % 2 != 0)
			{
				for (int h = 0; h < 5; h++)
				{
					for (int i = 4; i > h; i--)
					{
						if (a[i - 1][j] < a[i][j])
						{
							int temp = a[i - 1][j];
							a[i - 1][j] = a[i][j];
							a[i][j] = temp;
						}
					}
				}
			}
		}
		cout << endl << "После сортировки:" << endl;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		break;
	}
	case 11:
	{
		cout << "Задание 11:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		int a[5][7], b[35] = { 0 }, k = 0, sum = 0, i, j;
		for (int i = 0; i < 5; i++)
		{
			for (j = 0; j < 7; j++)
			{
				a[i][j] = 1 + rand() % 50;
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 7; j++)
			{
				if ((a[i][j] >= 1) && (a[i][j] <= 20))
				{
					b[k] = a[i][j];
					sum += b[k];
					k++;

				}
			}
		}
		cout << "---------------------" << endl;
		for (i = 0; i < 35; i++)
		{
			if (b[i] != 0)
				cout << b[i] << " ";
		}
		cout << endl << "Среднее = " << (float)sum / k << endl;
		break;
	}
	case 13:
	{
		cout << "Задание 13:" << endl;
		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		int a[20], i, j;
		for (i = 0; i < 7; i++)
		{
			a[i]= 1 + rand() % 20;
			cout << a[i] << " ";
		}
		cout << endl;


		break;
	}
	break;
	}


}