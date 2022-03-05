#include <iostream>

using namespace std;

int** ptrArr; // Указатель на одномерный массив указателей на int
const size_t m = 4; // Количество элементов m x n
const size_t n = 4;

int** arraySelection()
{
	// 1. Выделение памяти
	int** arr = new int* [m]; // Выделение памяти под одномерный массив указателей
	for (size_t i = 0; i < m; i++)
	{
		arr[i] = new int[n]; // Выделяем массив под одномерный int массив
	}
	return arr;
}

void arrayWork(int** arr)
{
	// 2. Работа с массивом

	for (size_t i = 0; i < m; i++)
	{
		for (size_t t = 0; t < n; t++)
		{
			arr[i][t] = rand();
			cout << arr[i][t] << ' ';
			size_t spaces = 0;
			
			for (size_t number = arr[i][t]; number / 10 > 0; number /= 10)
			{
				spaces++;
			}

			for (size_t i = 0; i < (6 - spaces); i++)
			{
				cout << ' ';
			}
		}
		cout << endl;
	}
}

int** releaseArray(int** arr)
{
	// 3. Освобождение памяти
	for (size_t i = 0; i < m; i++) {
		delete[] ptrArr[i]; // Освобождаем i-тый одномерный int массив
	}
	delete[] ptrArr; // Удаляем массив указателей
	ptrArr = nullptr;
	return arr;
}

int main()
{
	ptrArr = arraySelection();
	arrayWork(ptrArr);
	releaseArray(ptrArr);
	
	return 0;
}
