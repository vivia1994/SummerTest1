#include<iostream>
#include<sstream>
#include<string>
#include<cmath>
using namespace std;

int WS(int M)
{
	int count = 0;
	while (M!=0)
	{
		count += 1;
		M = M / 10;
	}
	return count;
}
bool HWS(int M)
{
	int div = pow(10, WS(M) - 1);
	while (M != 0)
	{
		if (M % 10 != M / div)
			return false;
		M = (M %div) / 10;//¿ÉÅÂ
		div /= 100;
	}
	return true;
}
int TurnM(int M)
{
	int k = pow(10, WS(M) - 1);
	int temp=0;
	do
	{
		temp += M % 10*k; 
		M /= 10; 
		k /= 10;
	} while (M != 0);
	return temp;
}

int main()
{
	int L;
	cin >> L;		//LÐÐÊý×Ö
	for (int i =0 ;i < L;i++) {
		int M;
		int count = 0;
		cin >> M;
		for (count = 1;count <= 8;count++) {
			int temp = M + TurnM(M);
			if (HWS(temp))
			{
				cout << count << endl;
				break;
			}
			M = temp;
		}
		if(count == 9)
			cout << 0 << endl;
	}
	return 0;
}