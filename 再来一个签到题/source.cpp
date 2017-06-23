#include<bits/stdc++.h>
using namespace std;


const int N = 1e5 + 7;

long long a[N];

int main()
{
	int n,m;
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	while(cin >> n >> m)
	{
		memset(a,0,sizeof(a));
		for(int i = 1;i<=n;i++)
			cin >> a[i];
		for(int i = 1;i<=n;i++)
		{
			a[i] += a[i-1];
		}
		for(int i = 0;i<m;i++)
		{
			int l,r;
			cin >> l >> r;
			cout << a[r] - a[l-1] << endl;
		}
	}
}
