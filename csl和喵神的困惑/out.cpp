#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	int c[105],v[105],dp[1005];
	int n,m;
	while(cin >> n >> m)
	{
		for(int i =0 ;i<n;i++)
			cin >>  v[i] >> c[i];
		memset(dp,0,sizeof(dp));
		for(int i =0 ;i<n;i++)
		{
			if(c[i] * v[i] >= m)
			{
				for(int j = v[i] ; j <= m;j++)
				{
					dp[j] = max(dp[j],dp[j-v[i]]+v[i]);
				}
			}
			else
			{
				for(int k = 0; k< c[i] ; k++)
					for(int j = m ; j >= v[i] ;j--)
						dp[j] = max(dp[j],dp[j-v[i]] + v[i]);
			}
		}
		cout << dp[m] << endl;
	}
}
