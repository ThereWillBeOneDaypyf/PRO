#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in", "w", stdout);
	int n, m;
	int T = 50;
	random_device rd;
	while (T--)
	{
		n = 1000;
		m = rd() % 100;
		cout << n << " " << m << endl;
		for (int i = 0; i < n; i++)
		{
			if (i)
				cout << " ";
			cout << rd() % 1000 + 1;
		}
		cout << endl;
	}
	T = 25;
	while (T--)
	{
		n = 100;
		m = rd() % 100;
		cout << n << " " << m << endl;
		for (int i = 0; i < n; i ++)
		{
			if (i)
				cout << " ";
			cout << rd() % 1000 + 1;
		}
		cout << endl;
	}
	T = 25;
	while (T--)
	{
		n = rd() % 1000 + 1;
		m = rd() % n;
		int Max = 1;
		cout << n << " " << m << endl;
		for (int i = 0; i < n; i ++)
		{
			if (i)
				cout << " ";
			int flag = rd() % n;
			int cur ;
			if (flag < m)
				cur = rd() % (1000 - Max) + Max;
			else
				cur = rd() % Max;
			Max = max(Max, cur);
			cout << cur;
		}
		cout << endl;
	}
	cout << 1000 << " " << 1000 << endl;
	for (int i = 0; i < 1000; i++)
	{
		if (i)
			cout << " ";
		cout << rd() % 1000 + 1;
	}
	cout << endl;
}