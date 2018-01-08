#include<bits/stdc++.h>
using namespace std;


int main()
{
	freopen("1.in", "w", stdout);
	random_device rd;
	int T = 10;
	while (T--)
	{
		int n = rd() % 15 + 1;
		int m = rd() % 1000 + 1;
		cout << n << " " << m << endl;
		for (int i = 0; i < n; i ++)
		{
			if (i)
				cout << " ";
			cout << rd() % m + 1;
		}
		cout << endl;
	}
}