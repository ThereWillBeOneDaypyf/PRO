#include<bits/stdc++.h>
using namespace std;

const int N = 1e4;

int dp[N];
int a[N];
int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	int n, m;
	while (cin >> n >> m)
	{
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= n; i ++)
			cin >> a[i];
		for (int i = 1; i <= n; i++)
		{
			dp[i] = 1;
			for (int j = 1; j < i; j++)
				if (a[i] >= a[j])
					dp[i] = max(dp[i], dp[j] + 1);
		}
		int Max = 0;
		for (int i = 1; i <= n; i++)
			Max = max(dp[i], Max);
		if (Max + m >= n)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}