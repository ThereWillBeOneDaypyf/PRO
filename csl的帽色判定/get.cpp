#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...


int main()
{
	freopen("1.in", "w", stdout);
	random_device rd;
	const int n = 1e4 + 5000 ;
	int m;
	m = n;
	int T = 5;
	while (T--)
	{
		cout << n << endl << m << endl;
		int first = n / 2;
		for (int i = 0; i < n / 2; i++)
			cout << rd() % 100 + 1 << endl;
		for (int i = n / 2; i < n; i++)
			cout << rd() % 1000 + 1 << endl;
		for (int i = 0; i < m; i++)
			cout << rd() % n << endl << rd() % n << endl;
	}
}