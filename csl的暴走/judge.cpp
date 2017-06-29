#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

int vis[N];
vector<int> G[N];
void init()
{
	for (int i = 0 ; i < N; i++)
		G[i].clear();
}
void dfs(int u)
{
	vis[u] = 1;
	for (int i = 0 ; i < G[u].size(); i++)
	{
		int v = G[u][i];
		if (!vis[v])
			dfs(v);
	}
}
bool judge(int n)
{
	int cnt = 0;
	for (int i = 0 ; i < n; i++)
	{
		if (!vis[i])
		{
			if (i != 0)
				return false;
			cnt ++;
			dfs(i);
		}
		if (cnt > 1)
			return false;
	}
	return true;
}
int main()
{
	freopen("2.in", "r", stdin);
	freopen("judge.out", "w", stdout);
	int n, m;
	while (cin >> n)
	{
		init();
		for (int i = 1; i < n; i++)
		{
			int u, v;
			cin >> u >> v;
			G[u].push_back(v);
			G[v].push_back(u);
		}
		if (judge(n))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}