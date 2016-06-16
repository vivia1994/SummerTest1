#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	string line;
	//string temp;
	char ch;
	while (getline(cin, line) && line != "End of file")
	{
		for (auto &ch : line)
			ch = toupper(ch);
		cout << line << endl;
	}
	return 0;
}