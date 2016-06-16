//函数lower_bound()在first和last中的前闭后开区间进行二分查找，
//返回大于或等于val的第一个元素位置。
//	如果所有元素都小于val，则返回last的位置  
//  _First 要查找区间的起始位置
//	_Last 要查找区间的结束位置
//	_Val 给定用来查找的值
//	_Comp 自定义的表示小于关系的函数对象，根据某个元素是否满足小于关系而返回true或者false

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
				v.push_back(tmp);		//n个数字压栈
		}
		sort(v.begin(), v.end());

		bool f = false;
		//v.size()是unsigned int类型
		for (int i = 0;i < v.size() && !f;i++)
			for (int j = i + 1;j < v.size() && !f;j++)
			{
				int tempresult = sum - v[i] - v[j];            //第三个数字用二分法
				int p = lower_bound(v.begin()+j+1, v.end()-j-1, tempresult) -v.begin();//减掉初始位置，得到下标
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