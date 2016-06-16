#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
	
	vector<int>v;
	int n;
	while (cin >> n)
	{
		if (n == 0)
			cout << "          0-->0" << endl;
		else
		{
			for (int i = abs(n);i;i = i / 2)
			{
				if(i % 2==1)
					v.push_back(1);
				else
					v.push_back(0);
			}
			cout.width(11);
			cout << n << (n < 0 ? "-->-" : "-->");
			while(!v.empty())
			{
				//reverse(v.begin(), v.end());		//·­×ªº¯Êý
				cout << v.back();
				v.pop_back();
			}
			cout << endl;
		}
	}
	return 0;
}