//输入数据有多组，每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开
//输出格式
#include<iostream>
#include<vector>
#include<sstream>
#include<cmath>
#include<iomanip>
using namespace std;

double Result(vector<double> v)
{
	double sum = 0;
	sum = pow(2, v[0] - v[2]) + pow(2, v[1] - v[3]);
	return sqrt(sum);
}
int main()
{
	string str;
	double d;
	vector<double> v;
	
	while (getline(cin, str))
	{
		stringstream sstr;
		double  sum = 0;
		sstr << str;
		while (sstr >> d)
		{
			v.push_back(d);
		}
		sum =pow(abs(v[0] - v[2]),2.)+ pow(abs(v[1] - v[3]), 2.);	//额
		//sum =(v[0] - v[2])*(v[0] - v[2]) + (v[1] - v[3])*(v[1] - v[3]);
		cout<< setiosflags(ios::fixed) << setprecision(2)<<sqrt(sum) << endl;
		//setiosflags(ios::fixed)主要是将流的格式设置为：
		//fixed(将一个浮点数表示为一个定点整数和小数点和小数部分的格式)。
		//setprecision(4)表示小数部分的精度为4位
		while (!v.empty())
			v.pop_back();
	}
	
	return 0;
}