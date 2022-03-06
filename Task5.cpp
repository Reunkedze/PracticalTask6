#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string searchWord;
    cout << "Enter search word: ";
    cin >> searchWord;
    string text;
    ifstream fin("file.txt");
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            getline(fin, text);
        }
    }
    if (text.find(searchWord) != string::npos)
    {
        cout << searchWord << " found";
    }
    else
    {
        cout << "Can not find " << searchWord;
    }
    fin.close();
    return 0;
}
