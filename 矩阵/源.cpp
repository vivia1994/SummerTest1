//�� i �У��� j �е�Ԫ�� Aij = 2 * i * j + 3 * i + 3 * j + 3����� k С�����֡�

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool myfunction(int i, int j) 
{ 
	return (i<j); 
}//����
int main()
{
	int N, M , k;
	vector<int> v;

	cin >> N >> M;
	cin >> k;
	for(int i=0;i<N;i++)
		for (int j = 0;j < M;j++)
		{
			v.push_back(2 * (i+1) * (j+1) + 3 * (i + 1) + 3 * (j + 1) + 3);
		}
	sort(v.begin(), v.end(),myfunction);
	cout << v[k - 1] << endl;
	return 0;
}