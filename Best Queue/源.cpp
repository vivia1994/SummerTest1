#include<iostream>
#include<vector>
#include<sstream>
#include<cmath>

#include<algorithm>
using namespace std;
bool myfunction(int i, int j) { return (i<j); }//Ωµ–Úsort


//Ωªªª≈≈–Ú
 void Sort(vector<int> &v)
{
	int temp;
	for (int i = v.size() - 1;i > 0;i--)
		for (int j = 0;j < v.size() - 1;j++)
		{
			if (v[j] < v[j + 1])
			{
				temp = v[j];
				v[j] = v[j + 1]-1;
				v[j + 1] = temp+1;
			}
		}
}

int main()
{

	int T,N;
	int a;
	cin >> T;

	while (T-- > 0) 
	{
		vector<int> v;
		vector<int> tmp;
		vector<int> v1;

		cin >> N;
		while(N--)
		{
			cin >> a;
			v.push_back(a);
		}

		Sort(v);//Ωªªª≈≈–Ú
		int i;
		for ( i = 0;i < v.size()-1;i++)
		{
			if (v[i] < v[i + 1])
			{
				cout << "Impossible" << endl;
				break;
			}
		}
		if (i == v.size() - 1)
		{
			for (i = 0;i < v.size();i++)
			{
				if(i==v.size()-1)
					cout << v[i] << endl;
				else
					cout << v[i] << " ";
			}
		}
	}	
	return 0;
}