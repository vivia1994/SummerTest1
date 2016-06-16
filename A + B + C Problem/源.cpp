//����lower_bound()��first��last�е�ǰ�պ�������ж��ֲ��ң�
//���ش��ڻ����val�ĵ�һ��Ԫ��λ�á�
//	�������Ԫ�ض�С��val���򷵻�last��λ��  
//  _First Ҫ�����������ʼλ��
//	_Last Ҫ��������Ľ���λ��
//	_Val �����������ҵ�ֵ
//	_Comp �Զ���ı�ʾС�ڹ�ϵ�ĺ������󣬸���ĳ��Ԫ���Ƿ�����С�ڹ�ϵ������true����false

#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, sum;
	string line;
	vector<int> v;
	while (cin >> n >> sum)
	{

		int tmp;
		for (int x = 0;x < n;x++)
		{
			cin >> tmp;
			if (tmp <= sum - 2)
				v.push_back(tmp);		//n������ѹջ
		}
		sort(v.begin(), v.end());

		bool f = false;
		//v.size()��unsigned int����
		for (int i = 0;i < v.size() && !f;i++)
			for (int j = i + 1;j < v.size() && !f;j++)
			{
				int tempresult = sum - v[i] - v[j];            //�����������ö��ַ�
				int p = lower_bound(v.begin()+j+1, v.end()-j-1, tempresult) -v.begin();//������ʼλ�ã��õ��±�
				if (p > j && p < n && v[p] == tempresult)
				{
					f = true;
					cout << "YES" << endl;
				}
			}
		if (!f)
			cout << "NO" << endl;
		v.clear();
		
	}
	return 0;
}