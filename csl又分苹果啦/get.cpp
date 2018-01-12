#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in", "w", stdout);
	random_device rd;
	int T = 1000;
	while (T--)
	{
		int n;
		n = rd() % 100 + 1;
		cout << n << endl;
		for (int i = 0; i < n; i++)
		{
			if (i)
				cout << " ";
			cout << rd() % 100 + 1;
		}
		cout << endl;
	}
}