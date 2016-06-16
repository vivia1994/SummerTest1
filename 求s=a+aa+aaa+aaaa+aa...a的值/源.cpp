#include<iostream>
#include<cmath>
using namespace std;
int AAnd(int a,int i)
{
	int sum = a;
	if (i == 1)
		return sum;
	else 
	{
		for (int j = 2;j <= i;j++)
		{
			sum += a *pow(10, j-1);
		}
		return sum;
	}
}

int main()
{
	int a, n;	//n:¼Ón´Î
	int sum=0;
	cin >> a;
	cin >> n;
	for (int k = 1;k <= n;k++)
	{
		sum += AAnd(a, k);
	}
	cout << sum;
	return 0;
}