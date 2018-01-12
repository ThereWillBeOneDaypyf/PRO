#include<bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

long long pow_mod(long long x)
{
	if (x == 0)
		return 1;
	long long temp = pow_mod(x / 2);
	temp = temp * temp % MOD;
	if (x % 2)
		temp = temp * 2 % MOD;
	return temp % MOD;
}

int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	long long n;
	while (cin >> n)
	{
		assert(n <= 1e18);
		long long res = pow_mod(n - 1);
		n %= MOD;
		res = res * n % MOD;
		cout << res << endl;
	}
}