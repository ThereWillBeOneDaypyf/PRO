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
	freopen("1.in", "w", stdout);
	random_device rd;
	int T;
	T = 10000;
	while (T--)
	{
		int d = rd() % 25 + 2;
		int len1 = rd() % 3 + 1;
		int len2 = rd() % 3 + 1;
		int a = 0, b = 0;
		int base  = 1;
		for (int i = 0; i < len1; i++)
		{
			a += (rd() % min(d, 9) + 1) * base;
			b += (rd() % min(d, 9) + 1) * base;
			base *= 10;
		}
		cout << a << " " << b << " ";
		vector<int> pp, qq, rr;
		int p = a, q = b;
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
		int c = f(d, pp) * f(d, qq);
		vector<int>r;
		while (c)
		{
			r.push_back(c  % d);
			c /= d;
		}
		reverse(r.begin(), r.end());
		for (auto x : r)
			cout << x;
		cout << endl;
	}
}