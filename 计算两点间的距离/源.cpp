//���������ж��飬ÿ��ռһ�У���4��ʵ����ɣ��ֱ��ʾx1,y1,x2,y2,����֮���ÿո����
//�����ʽ
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
		sum =pow(abs(v[0] - v[2]),2.)+ pow(abs(v[1] - v[3]), 2.);	//��
		//sum =(v[0] - v[2])*(v[0] - v[2]) + (v[1] - v[3])*(v[1] - v[3]);
		cout<< setiosflags(ios::fixed) << setprecision(2)<<sqrt(sum) << endl;
		//setiosflags(ios::fixed)��Ҫ�ǽ����ĸ�ʽ����Ϊ��
		//fixed(��һ����������ʾΪһ������������С�����С�����ֵĸ�ʽ)��
		//setprecision(4)��ʾС�����ֵľ���Ϊ4λ
		while (!v.empty())
			v.pop_back();
	}
	
	return 0;
}