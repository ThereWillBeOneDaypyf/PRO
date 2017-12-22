#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;

struct Node
{
	int pos,val,id;
};

int a[N];
long long pre[N];
int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	int n,m;
	int k;
	while(scanf("%d%d%d",&n,&m,&k) == 3)
	{
		for(int i = 1;i <= n;i ++)
			scanf("%d",a + i);
		for(int i = 1;i<=n;i++)
			pre[i] = pre[i - 1] + a[i];
		int ans = 0;
		for(int i = 0;i < n - m;i ++)
			if(pre[i + m + 1] - pre[i] >= m)
				ans ++;
		printf("%d\n",ans);
	}
}
