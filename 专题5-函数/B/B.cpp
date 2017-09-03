#include<bits/stdc++.h>
using namespace std;
//thanks to pyf ...
//thanks to qhl ...

#define eps 1e-8
vector<double>v;
double f(double x)
{
	double cur = 1;
	double ans = 0;
	for (auto temp : v)
	{
		ans += 1.0 * temp * cur;
		cur *= x;
	}
	return ans;
}
int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	string s;
	int ka = 0;
	while (getline(cin, s))
	{
		stringstream ss(s);
		double a;
		v.clear();
		while (ss >> a)
			v.push_back(a);
		reverse(v.begin(), v.end());
		double l = 0.0, r = 1.0;
		while (l + eps <= r)
		{
			double mid = (l + r) / 2;
			double ans_l = f(l), ans_r = f(r), ans_mid = f(mid);
			if (ans_l * ans_mid <= 0)
				r = mid;
			else
				l = mid;
		}
		cout << "Case " << ++ka << ": ";
		cout << l << endl;
	}
}