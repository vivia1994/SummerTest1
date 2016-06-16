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
		for (int i = 0;i < 10;i++)
		{
			cin >> k;
			v.push_back(k);
		}
		Sort(v);
		while (!v.empty())
		{
			if (v.size() != 1)
			{
				cout << v.back() << " ";
				v.pop_back();
			}
			else {
				cout << v.back();
				v.pop_back();
			}
		}
	return 0;
}
