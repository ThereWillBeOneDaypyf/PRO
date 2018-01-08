#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;

long long pre_sum[N];
long long sufix_sum[N];
char x[N];
int main()
{
//	freopen("1.in","r",stdin);
//	freopen("1.out","w",stdout);
	int ka = 0;
	int n;
	while (cin >> n)
	{
		string s;
		char tar[3];
		memset(pre_sum, 0, sizeof(pre_sum));
		memset(sufix_sum, 0, sizeof(sufix_sum));
		for(int i = 0;i < 3;i++)
			cin >> tar[i];
		cin >> s;
		for(int i = 1;i <= n;i++)
			x[i] = s[i - 1];
		for(int i = 1;i <= n;i++)
		{
			if(x[i] == tar[0])
				pre_sum[i] = 1;
			if(x[i] == tar[2])
				sufix_sum[i] = 1;
		}
		for(int i = 1;i <= n;i++)
			pre_sum[i] += pre_sum[i - 1];
		for(int i = n;i >= 1;i--)
			sufix_sum[i] += sufix_sum[i + 1];
		long long ans = 0;
		for(int i = 1;i <= n;i++)
			if (x[i] == tar[1])
				ans += pre_sum[i - 1] * sufix_sum[i + 1];
		cout << ans << endl;
	}
}
