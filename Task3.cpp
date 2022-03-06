#include <iostream>
#include <fstream>

using namespace std;

string text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

int main()
{
	string name1;
	string name2;
	cin >> name1;
	cin >> name2;
	ofstream fout1(name1);
	ofstream fout2(name2);
	fout1 << text;
	fout2 << text;
	fout1.close();
	fout2.close();
	return 0;
}
