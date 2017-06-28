#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...


int main()
{
	freopen("2.in", "w", stdout);
	random_device rd;
	const int n = 1e4 + 5000 ;
	int m;
	m = n;
	int T = 4;
	cout << n << endl << m << endl;
	for (int i = 0; i < n; i++)
		cout << 1 << endl;
	for (int i = 0; i < m; i++)
		cout << rd() % n << endl << rd() % n << endl;
	while (T--)
	{
		cout << n << endl << m << endl;
		for (int i = 0; i < n / 2; i++)
			cout << rd() % 5 + 1 << endl;
		for (int i = n / 2; i < n; i++)
			cout << rd() % 10 + 1 << endl;
		for (int i = 0; i < m; i++)
			cout << rd() % n << endl << rd() % n << endl;
	}
}