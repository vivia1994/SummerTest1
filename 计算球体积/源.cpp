//π值：atan(1) * 4
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const double pi = atan(1) * 4;
int main()
{
	double r;
	
	//(4/3)πr³
	while (cin >> r)
	{
		double result = 0;
		result = (4.0 / 3)*pi *pow(r, 3);
		cout << setiosflags(ios::fixed) << setprecision(3) << result<<endl;
	}
	return 0;
}