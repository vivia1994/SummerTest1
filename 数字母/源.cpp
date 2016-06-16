#include<iostream>
#include<string>
using namespace std;
int main()
{
	int count = 0;
	string str;
	cin >> str;
	for (int i = 0;i < str.size();i++)
	{
		if ((str[i] <= 'Z'&&str[i] >= 'A') || (str[i] <= 'z'&&str[i] >= 'a'))
		{
			count += 1;
		}
	}
	cout << count;
	return 0;
}
