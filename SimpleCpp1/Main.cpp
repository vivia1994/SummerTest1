
//��֪��Sn= 1��1��2��1��3������1��n����Ȼ��������һ������K����n�㹻���ʱ��Sn����K��
//�ָ���һ������K��1 <= k <= 15����Ҫ������һ����С��n��ʹ��Sn��K��
//���룺k
//s�����n

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