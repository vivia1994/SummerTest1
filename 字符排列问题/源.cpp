//��һ����������ĸ����n��1 <= n <= 20��������һ��������Ǵ����е�n����ĸ��
//��������ȫ���к���
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
	// ����������
	//next_permutation��ͬʱ�Ὣstr��ɴ�С��������
	while (next_permutation(str.begin(), str.end()))
	{
		count++;
	}
	cout << count;
	//cout << str;
	return 0;
}