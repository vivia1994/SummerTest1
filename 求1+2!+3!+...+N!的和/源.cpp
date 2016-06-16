#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

typedef vector<int> long_int;

//1：将输入字符串转换为数字
//2：逆序压栈
long_int ChangeToLongInt(string str)
{
	long_int r;
	for (int i = str.size() - 1;i >= 0; i--)
	{
		if (str[i] < '0' || str[i] > '9')		//非数字
			return r;
		r.push_back(str[i] - '0');
	}
	return r;
}

//构造,逆序压栈
long_int ChangeToLongInt(int n, size_t znum)
{
	string str;
	long_int r;
	stringstream sstr;
	sstr << n;
	while (znum-- > 0)
	{
		sstr << "0";
	}
	sstr >> str;
	r = ChangeToLongInt(str);
	return r;
}

//3：各位相加（考虑进位问题）
long_int LongIntAdd(long_int a, long_int b)
{
	long_int sum;
	int flag = 0;		//进位标志
	for (size_t i = 0;i < a.size() || i<b.size() || flag != 0;i++)
	{
		int t = (i < a.size() ? a[i] : 0) + (i < b.size() ? b[i] : 0) + flag;
		flag = t / 10;
		t %= 10;
		sum.push_back(t);
	}
	return sum;
}


//4：转换为字符串输出(逆序)
string LongIntToString(long_int sum)
{
	string r;
	stringstream sstr;
	while (!sum.empty())
	{
		sstr << sum.back();
		sum.pop_back();
	}
	sstr >> r;
	return r;
}

//乘法
long_int LongIntMulti(long_int a, long_int b)
{
	long_int r;
	for (size_t i = 0;i < a.size();i++)
		for (size_t j = 0;j < b.size();j++)
		{
			long_int tmp = ChangeToLongInt(a[i] * b[j], i + j);
			r = LongIntAdd(r, tmp);
		}
	return r;
}

int main()
{
	int N;
	cin >> N;
	long_int r = ChangeToLongInt("0");
	long_int tmp= ChangeToLongInt("1");
	for (int i = 1;i <= N;i++)
	{
		tmp = LongIntMulti(tmp, ChangeToLongInt(i,0));
		r = LongIntAdd(r, tmp);
	}
	cout << LongIntToString(r)<<endl;
	return 0;
}