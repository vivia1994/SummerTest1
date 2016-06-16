//用筛法求之N内的素数。

#include<iostream>
using namespace std;

bool Prime(int a)
{
	bool flag = true;
	if (a == 2)
		return true;
	else if (a>2)
	{
		for (int i = 2; i <= a / 2; i++)
		{
			if (a % i == 0)
				flag = false;
		}
		return flag;
	}
	else return true;
}

int main()
{
	int N;
	cin >> N;
	if (N >= 2)
	{
		for (int i = 2;i <= N;i++)
		{
			if (Prime(i))
				cout << i << endl;
		}
	}
	
	return 0;
}