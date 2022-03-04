#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int* ptrArr;
	int n;
	cout << "Enter size of your array: ";
	cin >> n;

	if (n > 0)
	{
		ptrArr = new (nothrow) int[n];
		if (ptrArr != nullptr)
		{
			for (size_t i = 0; i < n; i++)
			{
				ptrArr[i] = pow(2, i);
			}

			for (size_t m = 0; m < n; m++)
			{
				cout << ptrArr[m] << ' ';
			}

			delete[] ptrArr;
			ptrArr = nullptr;
		}
		else
		{
			cout << "Error! Can not allocate memory!";
		}
	}
	return 0;
}
