#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > v;
int n,m;
int judge(int tar,int cnt)
{
	int c = 0;
	int sum = m;
	int ans = 0;
	for(auto temp : v)
	{
		if(temp.second >= tar && temp.first <= sum)
		{
			sum -= temp.first;
			ans += temp.second;
			c ++;
		}
		if(c == cnt)
			break;
	}
	if(c < cnt)
		return -1;
	else
		return ans;

}
int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	while(cin >> n >> m)
	{
		v.clear();
		for(int i = 0;i < n;i++)
		{
			int c,s;
			cin >> c >> s;
			v.push_back(make_pair(c,s));
		}
		sort(v.begin(),v.end());
		int temp = m;
		int cnt = 0;
		for(auto x : v)
		{
			if(x.first <= temp)
			{
				cnt ++;
				temp -= x.first;
			}
			else
				break;
		}
		int l = 0, r = 1e9 + 7;
		int mid;
		int ans = 0;
		while(l <= r)
		{
			mid = (l + r) / 2;
			int fuck = 0;
			if((fuck = judge(mid,cnt)) != -1)
			{
				l = mid + 1;
				ans = max(ans,fuck);
			}
			else
				r = mid - 1;
		}
		cout << cnt << " " << ans << endl;
	}
}
