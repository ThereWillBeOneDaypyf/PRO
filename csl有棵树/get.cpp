#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

vector<int> G[N];
int D = 1;
void dfs(int u, int d)
{
	D = max(D, d);
	for (auto v : G[u])
		dfs(v, d + 1);
}

int main()
{
	freopen("1.in", "w", stdout);
	random_device rd;
	int T = 10;
	while (T--)
	{
		for (int i = 0; i < N; i++)
			G[i].clear();
		int n, m;
		D = 1;
		n = rd() % 100000 + 1;
		m = rd() % 100000 + 1;
		cout << n << " " << m << endl;
		cout << 1;
		G[1].push_back(2);
		for (int i = 3; i <= n; i++)
		{
			int anc = rd() % i + 1;
			G[anc].push_back(i);
			cout << " " << anc;
		}
		cout << endl;
		for (int i = 1; i <= n; i ++)
		{
			int move = rd() % 26;
			char op = 'a' + move;
			cout << op;
		}
		cout << endl;
		dfs(1, 1);
		for (int i = 0; i < m; i ++)
			cout << rd() % n + 1 << " " << rd() % D + 1 << endl;
	}
}