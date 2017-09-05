#include<bits/stdc++.h>
using namespace std;


//thanks to pyf ...
//thanks to qhl ...

long long f(int x, vector<int>v)
{
	long long base = 1;
	long long ans = 0;
	for (auto cur : v)
	{
		ans += base * cur;
		base *= x;
	}
	return ans;
}

int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	int p, q, r;
	while (cin >> p >> q >> r)
	{
		vector<int> pp, qq, rr;
		int Max = 0;
		while (p)
		{
			Max = max(Max, p % 10);
			pp.push_back(p % 10);
			p /= 10;
		}
		while (q)
		{
			Max = max(Max, q % 10);
			qq.push_back(q % 10);
			q /= 10;
		}
		while (r)
		{
			Max = max(Max, r % 10);
			rr.push_back(r % 10);
			r /= 10;
		}
		int i;
		for (i = Max + 1; i != 17; i++)
		{
			if (f(i, pp) * f(i, qq) == f(i, rr))
				break;
		}
		if (i == 17)
			cout << 0 << endl;
		else
			cout << i << endl;
	}
}