//算法
#include<iostream>
#include<vector>
#include<sstream>
#include<cmath>
#include<set>
using namespace std;
set<string> s;

bool IsEqual(string str1, string str2)
{
	if (str1 == str2)
		return true;
	if (str1.size() >= str2.size())
	{
		return false;
	}
	if (s.find(str2) != s.end())		//打表，去掉重复的str2中的子串
		return false;

	for (int i = 0;i < str2.size();i++)
	{
		string temp;
		temp = str2;
		temp.erase(i, 1);
		if (IsEqual(str1, temp))
			return true;
	}
	s.insert(str2);		//将重复的子串插入集合s
	return false;
}

string ERASE(string str1, string str2)	//擦除str2中str1无的字符
{
	for (auto &c : str2)
	{
		if (str1.find(c) == string::npos)
			c = '$';
	}
	while (str2.find('$') != string::npos)
	{
		str2.erase(str2.find('$'),1);
	}
	return str2;
}
int main()
{
	
	string str1;
	string str2;
	while (cin >> str1 >> str2)
	{
		str2=ERASE(str1, str2);
		//cout << str2;
		if (IsEqual(str1, str2))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}