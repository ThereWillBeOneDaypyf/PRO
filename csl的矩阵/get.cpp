#include<bits/stdc++.h>
using namespace std;
random_device rd;
int getNum(int cnt)
{
	long long cur = 0;
	int x = rd() % 9 + 1;
	cur += x;
	for (int i = 1; i < cnt; i++)
	{
		x = rd() % 10;
		cur *= 10;
		cur += x;
	}
	return cur;
}

int main()
{
	freopen("1.in", "w", stdout);
	int T;
	T = 10;

	while (T--)
	{
		int n = getNum(5), m = getNum(5);
		long long temp = min(rd() % (1LL * n * m), (long long)1e5);
		cout << n << " " << m << " " << rd() % min(n, m) + 1 << " " << temp << endl;;
	}
	cout << 100000 << " " << 100000 << " " << 3448 << endl;;
	cout << 100000 << " " << 100000 << " " << 0 << endl;
}