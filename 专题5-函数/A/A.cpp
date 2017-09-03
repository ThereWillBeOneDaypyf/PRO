#include<bits/stdc++.h>
using namespace std;


//thanks to pyf ...
//thanks to qhl ...

int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	int ka = 0;
	double a, b, c;
	while (cin >> a >> b >> c)
	{
		vector<double>v;
		v.push_back(a), v.push_back(b), v.push_back(c);
		sort(v.begin(), v.end());
		cout << "Case " << ++ka << ": ";
		if (v[0] + v[1] > v[2])
		{
			double C = v[0] + v[1] + v[2];
			double ratio = sqrt(1.0 - 1.0 * (a * a + b * b - c * c) / 2.0 / a / b);
			double S = a * b * ratio / 2;
			cout << C << ", "  << S << endl;
		}
		else
			cout << "Not triangle" << endl;
	}
}