#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
const int MOD = 1e9 + 7;

long long f[N];

void init()
{
	f[0] = 1;
	for(int i = 1;i < N;i++)
	{
		f[i] = f[i - 1] * 3;
		f[i] %= MOD;
	}
}


int main()
{
	freopen("1.in","r", stdin);
	freopen("1.out","w",stdout);
	int n;
	init();
	while(scanf("%d",&n) == 1)
		printf("%lld\n",f[n]);
}
