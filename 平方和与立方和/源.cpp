#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<cmath>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str)&&!str.empty())
	{
		int m=0, n=0;
		int ousum = 0;
		int jisum = 0;
		int k;
		stringstream sstr;

		sstr << str;
		sstr >> m;
		sstr >> n;
		if (m > n)		//±£Ö¤n>m
		{
			int temp;
			temp = n;
			n = m;
			m = temp;
		}
		for (int i = m;i <= n;i++)
		{
			if (i % 2 == 0)
				ousum += pow(i, 2);
			else
				jisum += pow(i, 3);
		}
		cout << ousum << " " << jisum << endl;
	}
	return 0;
}