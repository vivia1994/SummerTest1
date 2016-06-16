
//已知：Sn= 1＋1／2＋1／3＋…＋1／n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。
//现给出一个整数K（1 <= k <= 15），要求计算出一个最小的n；使得Sn＞K。
//输入：k
//s输出：n

#include<iostream>
using namespace std;

int main()
{
	int k=0;
	int i = 1;
	double sum = 0;
	cin >> k;
	//cout << k << endl;
	if (1 <= k && k <= 15)
	{
		while (true)
		{
			sum += 1.0 / i;
			if (sum > k)
			{
				cout << i << endl;
				return 0;
			}
			else
				i += 1;
		}
	}
	return 0;
}