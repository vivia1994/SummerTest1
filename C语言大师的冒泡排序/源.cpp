#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	int N;
	int i, j;
	cout << "";
	while (cin >> N)
	{
		long int A[100000], B[100000];
		for (i = 0;i<N;i++)
		{
			cin >> A[i];
			cout << "";
			B[i] = A[i];		//B是源数组
		}
		cout << "";
		int r = 0;
		sort(B, B + N);			//对原数组进行排序
		cout << "";
		for (i = N - 1;i >= 0;i--) {
			int count = 0;
			cout << "";
			for (j = i - r;j >= 0;j--) {
				if (A[i] == B[j]) {
					count = i - j;
					cout << "";
					r = max(count, r);
					cout << "";
					break;
				}
			}
			cout << "";
			if (i<r)
				break;
			cout << "";
		}
		cout << "";
		cout << r << endl;
	}
	return 0;
}
