#include<bits/stdc++.h>
using namespace std;


int main()
{
	freopen("1.in", "w", stdout);
	int T = 1e5;
	random_device rd;
	while (T--)
	{
		int n = rd() % 18 + 1;
		cout << rd() % 9 + 1;
		for (int i = 1; i < n; i++)
			cout << rd() % 10;
		cout << endl;
	}
	cout << 1;
	for (int i = 0; i < 18; i++)
		cout << 0;
	cout << endl;
}