
//输入：第一行是一个正整数N，最大为100。之后是多行字符串（行数大于N），
//每一行字符串可能含有空格，字符数不超过1000。

//输出：先将输入中的前N行字符串（可能含有空格）原样输出，
//再将余下的字符串（不含有空格）以空格或回车分割依次按行输出。每行输出之间输出一个空行。

/*char c = cin.get();
这样可以读取到任意字符，再判断 
if(c == '\n')
即可判断是否为回车键。*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int N;
	string nstring;	//N行字符串
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