#include<bits/stdc++.h>
using namespace std;

int ans = 10000;
int n, m;
void dfs(int pos, int cnt, vector<int> ret, vector<int> v)
{
	if (pos >= n)
	{
		ans = min(ans, (int)ret.size());
		return;
	}
	ret.push_back(m - v[pos]);
	dfs(pos + 1, cnt + 1, ret, v);
	ret.pop_back();
	for (auto &x : ret)
	{
		if (x >= v[pos])
		{
			x -= v[pos];
			dfs(pos + 1, cnt, ret, v);
			x += v[pos];
		}
	}
}

int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	while (cin >> n >> m)
	{
		vector<int> v;
		for (int i = 0; i < n; i ++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		ans = 10000;
		vector<int> ret;
		dfs(0, 0, ret, v);
		cout << ans << endl;
	}
}