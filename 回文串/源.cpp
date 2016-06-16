#include<iostream>
#include<sstream>
#include<string>
using namespace std;

bool HWC(string line)
{
	for (int i = 0;i < line.size();i++)
	{
		if (line[i] != line[line.size() - i - 1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string line;
	char ch;
	getline(cin, line);
	if(HWC(line))
		cout << "Y";
	else
		cout << "N";
	return 0;
}