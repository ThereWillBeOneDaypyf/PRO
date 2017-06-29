#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 8;

int Max = 0;

vector<int>G[N];

void init()
{
	for (int i = 0; i < N; i++)
		G[i].clear();
}
void dfs(int u, int fa, int d)
{
	Max = max(d, Max);
	for (int i = 0 ; i < G[u].size(); i++)
	{
		int v = G[u][i];
		if (v == fa)
			continue;
		dfs(v, u, d + 1);
	}
}
int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	int n;
	while (cin >> n)
	{
		init();
		Max = 0;
		for (int i = 1; i < n; i++)
		{
			int u, v;
			cin  >> u >> v;
			G[u].push_back(v);
			G[v].push_back(u);
		}
		dfs(0, 0, 0);
		cout << Max << endl;
	}
}