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
	freopen("2.in", "w", stdout);
	const int n = 1e5 - 100;
	cout << n << endl;
	for (int i = 0; i < n - 1; i++)
		cout << n - 1 << endl << i << endl;
	cout << n << endl;
	for (int i = 1; i < n; i++)
		cout << 0 << endl << i << endl;
	cout << 15000 << endl;
	for (int i = 1; i < 15000; i++)
		cout << i - 1 << endl << i << endl;
}