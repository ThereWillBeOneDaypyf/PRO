#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

int dp[N];

int main()
{
	// freopen("1.in", "r", stdin);
	// freopen("1.out", "w", stdout);
	int n;
	while (cin >> n)
	{
		int sum = 0;
		vector<int> v;
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
			sum += x;
		}
		assert(sum <= 1e4);
		for (auto x : v)
		{
			for (int j = sum / 2; j >= x; j--)
			{
				dp[j] = max(dp[j], dp[j - x] + x);
			}
		}
		assert(dp[sum / 2] <= sum - dp[sum / 2]);
		cout << dp[sum / 2] << " " << sum - dp[sum / 2] << endl;
	}
}
// int main()
// {
// 	int n;
// 	while(cin >> n)
// 	{
// 		vector<int> v;
// 		int sum = 0;
// 		for(int i = 0;i < n;i++)
// 		{
// 			int x;
// 			cin >> x;
// 			v.push_back(x);
// 			sum += x;
// 		}
// 		sort(v.begin(),v.end());
// 		reverse(v.begin(),v.end());
// 		int cur = 0;
// 		for(auto x : v)
// 		{
// 			if(cur + x <= sum / 2)
// 				cur += x;
// 		}
// 		cout << cur << " " << sum - cur << endl;
// 	}
// }