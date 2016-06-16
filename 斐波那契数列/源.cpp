#include<iostream>
#include<string>
using namespace std;

int F(int i)
{
	if (i == 1)
		return 1;
	if (i == 2)
		return 1;
	return F(i - 1) + F(i - 2);
}
int main()
{
	int N;
	cin >> N;
	for (int i = 1;i <=N;i++)
	{
		if(i==N)
			cout << F(i);
		else
			cout << F(i)<<" ";
	}
	return 0;
}
