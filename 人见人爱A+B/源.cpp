#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
//A+B
void ABPlus(vector<int> &v)
{
	for (int i = v.size()-1;i >=(v.size()/2);i--)
	{
		v[i] = v[i] + v[i - (v.size()/2)];
		if (v[i] >= 60 && v[i] < 120 && i != (v.size()/2))
		{
			v[i]  %= 60;
			v[i - 1] += 1;
		}
	}
}
int main()
{
	int N;

	string line;

//	vector<int> sum;

	cin >> N;
	getline(cin, line);

	for(int k=0;k<N;k++)
	{
		int tmp=0;
		stringstream sstr;
		vector<int> v;
		string str;
		getline(cin, str);
		sstr << str;
		while (sstr >> tmp)
		{
			v.push_back(tmp);
		}//Êý×ÖÑ¹Õ»
		//cout << v.size() << endl;
		ABPlus(v);
		for (int i = (v.size()/2);i <=v.size()-1;i++)
		{
			if (i == v.size() - 1)
				cout << v[i] << endl;
			else
				cout << v[i] << " ";
		}
		v.clear();
	}
	return 0;
}