
//���룺��һ����һ��������N�����Ϊ100��֮���Ƕ����ַ�������������N����
//ÿһ���ַ������ܺ��пո��ַ���������1000��

//������Ƚ������е�ǰN���ַ��������ܺ��пո�ԭ�������
//�ٽ����µ��ַ����������пո��Կո��س��ָ����ΰ��������ÿ�����֮�����һ�����С�

/*char c = cin.get();
�������Զ�ȡ�������ַ������ж� 
if(c == '\n')
�����ж��Ƿ�Ϊ�س�����*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int N;
	string nstring;	//N���ַ���
	cin >> N;
	getline(cin, nstring);
	for(int i=0;i<N && getline(cin, nstring);i++)
	{
		cout << nstring <<endl << endl;
	}
	while (cin >> nstring)
	{
		cout << nstring << endl << endl;
	}
	return 0;
}