#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...
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
	random_device rd;
	int T = 500;
	freopen("1.in", "w", stdout);
	while (T--)
	{
		int n =  rd() % 100;
		v.clear();
		for (int i = 0; i < n; i++)
		{
			int x = rd() % 1000;
			x -= 500;
			v.push_back(x);
		}
		if (f(0) * f(1) < 0)
		{
			for (int i = 0; i < n; i++)
			{
				if (i)
					cout << " ";
				cout << v[i];
			}
			cout << endl;
		}
	}
}