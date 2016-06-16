/**�߾��ȼ���
�ӷ���
1���������ַ���ת��Ϊ����
2������ѹջ
3����λ��ӣ����ǽ�λ���⣩
4��ת��Ϊ�ַ������(����)
�˷���
*/


#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

typedef vector<int> long_int;

//1���������ַ���ת��Ϊ����
//2������ѹջ
long_int ChangeToLongInt(string str)
{
	long_int r;
	for (int i = str.size()-1;i >= 0 ; i--)
	{
		if (str[i] < '0' || str[i] > '9')		//������
			return r;
		r.push_back( str[i] - '0');
	}
	return r;
}

//����,����ѹջ
long_int ChangeToLongInt(int n,size_t znum)
{
	string str;
	long_int r;
	stringstream sstr;
	sstr << n;
	while (znum-- > 0)
	{
		sstr << "0";
	}
	sstr >>str;
	r = ChangeToLongInt(str);
	return r;
}

//3����λ��ӣ����ǽ�λ���⣩
long_int LongIntAdd(long_int &a, long_int &b)
{
	long_int sum;
	int flag = 0;		//��λ��־
	for (size_t i = 0;i < a.size() || i<b.size() || flag!=0;i++)
	{
		int t = (i < a.size() ? a[i] : 0) + (i < b.size() ? b[i] : 0) + flag;
		flag = t / 10;
		t %= 10;
		sum.push_back(t);
	}
	return sum;
}


//4��ת��Ϊ�ַ������(����)
string LongIntToString(long_int sum)
{
	string r;
	stringstream sstr;
	while(!sum.empty())
	{
		sstr << sum.back();
		sum.pop_back();
	}
	sstr >> r;
	return r;
}

//�˷�
long_int LongIntMulti(long_int &a, long_int &b)
{
	long_int r;
	for (int i = 0;i < a.size();i++)
		for (int j =0 ;j < b.size();j++)
		{
			long_int tmp = ChangeToLongInt(a[i] * b[j], i + j);
			r = LongIntAdd(r, tmp);
	}
	return r;
}

int main()
{
	int n;
	cin >> n;
	long_int sum = ChangeToLongInt("0");		//��ʼ��
	long_int num = ChangeToLongInt("1");
	for (int i = 1; i <= n; ++i)
	{
		num = LongIntMulti(num, ChangeToLongInt(i, 0));
		sum = LongIntAdd(sum, num);
	}
	cout << LongIntToString(sum);
	return 0;
}