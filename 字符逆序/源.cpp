
#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
	string strf;
	stringstream sstr;
	vector<char> ch;
	char c;
	getline(cin, strf);
	sstr << strf;
	while (!sstr.eof()) {
		c = sstr.get();
		ch.push_back(c);
	}
	ch.pop_back();
	while (!ch.empty())
	{
		cout << ch.back();
		ch.pop_back();
	}
	return 0;
}