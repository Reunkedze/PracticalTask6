#include <iostream>
#include <fstream>

using namespace std;

string text;

int main()
{
	string nameInput1;
	string nameInput2;
	string nameOutput;
	cout << "Enter first input file name: ";
	cin >> nameInput1;
	cout << "Enter second input file name: ";
	cin >> nameInput2;
	cout << "Enter output file name: ";
	cin >> nameOutput;
	ifstream fin1(nameInput1);
	ifstream fin2(nameInput2);
	ofstream fout(nameOutput);
	if (fin1.is_open() || fin2.is_open())
	{
		while (!fin1.eof())
		{
			getline(fin1, text);
			cout << text << endl;
		}
		while (!fin2.eof())
        {
            getline(fin2, text);
            cout << text << endl;
        }
	}
	fout << text;
	fout.close();
	fin1.close();
	fin2.close();
	return 0;
}
