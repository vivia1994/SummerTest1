//第一行输入是字母个数n，1 <= n <= 20。接下来一行输入的是待排列的n个字母。
//排序函数，全排列函数
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	string str;
	int count = 1;
	cin >> n;
	cin >> str;
	sort(str.begin(), str.end());		
	// 必须先排序
	//next_permutation，同时会将str变成从小到大排列
	while (next_permutation(str.begin(), str.end()))
	{
		count++;
	}
	cout << count;
	//cout << str;
	return 0;
}