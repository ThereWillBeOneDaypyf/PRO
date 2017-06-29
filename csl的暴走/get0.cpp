#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 8;

int fa[N];

void init(int n)
{
	for (int i = 0; i < n; i++)
		fa[i] = i;
}
int find(int x)
{
	if (fa[x] != x)
		fa[x] = find(fa[x]);
	return fa[x];
}
void merge(int a, int b)
{
	a = find(a);
	b = find(b);
	if (a != b)
		fa[a] = fa[b];
}

int main()
{
	freopen("1.in", "w", stdout);
	const int n = 1e5 - 100;
	int T =  5;
	random_device rd;
	while (T--)
	{
		init(n);
		cout << n << endl;
		for (int i = 1; i < n; i++)
		{
			int u = rd() % n, v = rd() % n;
			while (find(u) == find(v))
				v = (v + 1) % n;
			cout << u << endl << v << endl;
			merge(u, v);
		}
	}
}