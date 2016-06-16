#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

bool IsHave(vector<int> v, int k)
{
	for (int i = 0;i < v.size();i++)
	{
		if (k == v[i])
			return true;
	}
	return false;
}

void Sort(vector<int> &v)
{
	int temp;
	for (int i = v.size() - 1;i > 0;i--)
		for (int j = 0;j < i;j++)
		{
			if (v[j] < v[j+1])
			{
				temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
		}
}
int main()
{
	int N,k;
	string str;
	vector<int> v;

	cin >> N;
	for (int i = 0;i < N;i++)
	{
		cin >> k;
		if (!IsHave(v, k))
		{
			v.push_back(k);
		}
	}
	Sort(v);
	cout << v.size() << endl;
	while (!v.empty())
	{
		if (v.size() != 1)
		{
			cout << v.back() << " ";
			v.pop_back();
		}
		else {
			cout << v.back() ;
			v.pop_back();
		}
	}
	return 0;
}
