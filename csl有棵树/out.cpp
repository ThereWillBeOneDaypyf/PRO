#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...

#define INF 0x3f3f3f3f
#define CLR(x,y) memset(x,y,sizeof(x))
#define mp(x,y) make_pair(x,y)
typedef pair<int, int> PII;
typedef long long ll;

const int N = 1e5 + 5;

vector<PII>Q[N * 5]; // root id dep;
vector<int>G[N * 5]; // Map
string s;
int ans_status[N * 5];
int cur_dep_status[N * 5];
int n;
void init()
{
	for (int i = 0; i <= n; i++)
	{
		Q[i].clear();
		G[i].clear();
	}
	CLR(Q, 0);
	CLR(G, 0);
}
void add_edge(int u, int v)
{
	G[u].push_back(v);
}

void dfs(int u, int d)
{
	//取消之前的status对当前根节点影响
	for (int i = 0; i < Q[u].size(); i++)
	{
		int q_id = Q[u][i].first;
		int q_dep = Q[u][i].second;
		ans_status[q_id] ^= cur_dep_status[q_dep];
	}
	cur_dep_status[d] ^= (1 << (s[u - 1] - 'a'));
	for (int i = 0; i < G[u].size(); i++)
	{
		int v = G[u][i];
		dfs(v, d + 1);
	}
//	cur_dep_status[d] ^= (1<<(s[u-1]-'a'));
	for (int i = 0; i < Q[u].size(); i++)
	{
		int q_id = Q[u][i].first;
		int q_dep = Q[u][i].second;
		ans_status[q_id] ^= cur_dep_status[q_dep];
	}
}

int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	int m;
	int cnt = 0;
	while (scanf("%d%d", &n, &m) == 2)
	{
		init();
		for (int i = 2; i <= n; i++)
		{
			int root;
			scanf("%d", &root);
			G[root].push_back(i);
		}
		cin >> s;
		for (int i = 0; i < m; i++)
		{
			int u, d;
			scanf("%d%d", &u, &d);
			Q[u].push_back(mp(i, d));
		}
		dfs(1, 1);
		for (int i = 0; i < m; i++)
		{
			(ans_status[i] & (ans_status[i] - 1)) == 0 ? printf("Yes\n") : printf("No\n");
		}
	}
}