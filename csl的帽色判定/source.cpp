#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

struct Node
{
	int id, clr;
	bool operator < (const Node &rhs) const
	{
		return clr < rhs.clr ;
	}
} a[N];

int fa[N];

void init()
{
	for (int i = 0; i < N; i++)
		fa[i] = i;
}
int find(int x)
{
	if (x != fa[x])
		fa[x] = find(fa[x]);
	return fa[x];
}
void merge(int a, int b)
{
	a = find(a);
	b = find(b);
	if (a != b)
		fa[a] = b;
}

int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	//freopen("2.in", "r", stdin);
	//freopen("2.out", "w", stdout);
	int n, m;
	while (cin >> n >> m)
	{
		init();
		for (int i = 0 ; i < n; i++)
		{
			cin >> a[i].clr;
			a[i].id = i;
		}
		sort(a, a + n);
		for (int i = 1; i < n; i++)
		{
			if (a[i].clr == a[i - 1].clr)
				merge(a[i].id, a[i - 1].id);
		}
		for (int i = 0; i < m; i++)
		{
			int a, b;
			cin >> a >> b;
			if (find(a) == find(b))
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	}
}