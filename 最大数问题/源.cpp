#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

void Sort(vector<int> &v)
{
	int temp;
	for (int i = v.size() - 1;i > 0;i--)
		for (int j = 0;j < i;j++)
		{
			if (v[j] > v[j + 1])
			{
				temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
}
int main()
{
	int k;
	vector<int> v;
	while (cin >> k)
	{
		if (k != -1)
			v.push_back(k);
		else
			break;
	}
	Sort(v);
	cout << v.back();
	return 0;
}
