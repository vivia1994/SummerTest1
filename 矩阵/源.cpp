/*Description
给你一个 N 行 M 列的矩阵，其中第 i 行，第 j 列的元素 Aij = 2 * i * j + 3 * i + 3 * j + 3。求第 k 小的数字。

Input
一行 3 个整数 N M k。

0 < N, M < 1e5
0 < k < N * M + 1

Output
输出第 k 小的数字。*/

//第 i 行，第 j 列的元素 Aij = 2 * i * j + 3 * i + 3 * j + 3。求第 k 小的数字。


#include <iostream> 
#include <algorithm> 
using namespace std;

typedef long long vivia;

vivia N, M;
vivia Cee(vivia mid);
vivia Number(vivia i, vivia x);
vivia Function(vivia i, vivia j);
vivia maxtmp = 0;
vivia d = 0, d1 = 0;
vivia cxz;
vivia k;

vivia Function(vivia i, vivia j) {
	return 2ll * i*j + 3ll * i + 3ll * j + 3ll;
}

vivia Cee(vivia mid) {
	d = 0;
	vivia count = 0;
	cxz = M;
	for (int i = 1; i <= N; i++) {
		if (Function(i, M)<mid) { count += M; continue; }
		if (Function(i, 1)>mid) { break; }
		count += Number(i, mid);
		if (count >= k) return count;
	}
	return count;
}

vivia Number(vivia i, vivia x) {
	if (Function(i, M)<x) return M;
	if (Function(i, 1)>x) return 0;
	vivia r1 = 0;
	for (int j = cxz; j >= 1; j--) {
		if (Function(i, j) == x) { d++; d1 = x; }
		if (Function(i, j)<x) { cxz = j; return j; }
	}
	return r1;
}
int main()
{
	
	while ( cin>>N >>M>>k)
	{
		
		cout << "";
		vivia lo = 11ll, hi = Function(N, M);
		cout << "";
		while (lo <hi) {
			cout << "";
			vivia mid = (lo + hi + 1) / 2;
			cout << "";
			vivia xiao = Cee(mid);
			cout << "";
			if (xiao + d >= k&&xiao<k) 
			{ 
				hi = mid; 
				cout << "";
				break; 
			}
			if (xiao <= k)
			{
				cout << "";
				if (xiao == k) 
					hi = mid - 1;
				else 
					lo = mid;
			}
			else
			{
				hi = mid;
				cout << "";
				
				
			}
		}
		printf("%lld\n", hi);
		
		
		cout << "";
	}

}
