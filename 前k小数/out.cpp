#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

long long pre_sum[N];

int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	int n, m;
	int T = 0;
	while (cin >> n >> m)
	{
		map<long long, int> cnt;
		for (int i = 0; i < n; i++)
		{
			long long x;
			cin >> x;
			assert(x <= 1e18);
			cnt[x] ++;
		}
		int len = 0;
		memset(pre_sum, 0, sizeof(pre_sum));
		for (auto it : cnt)
			pre_sum[++ len] = it.second;
		for (int i = 1; i <= len; i++)
			pre_sum[i] += pre_sum[i - 1];
		for (int i = 0; i < m; i++)
		{
			int k;
			cin >> k;
			assert(min(k, len) <= 1e5);
			cout << pre_sum[min(k, len)] << endl;
		}
	}
}