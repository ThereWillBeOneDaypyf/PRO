#include<bits/stdc++.h>
using namespace std;
random_device rd;
long long getNum(int cnt)
{
	long long cur = 0;
	int x = rd() % 9 + 1;
	cur += x;
	for (int i = 1; i < cnt; i++)
	{
		x = rd() % 10;
		cur *= 10;
		cur += x;
	}
	return cur;
}
int main()
{
	freopen("1.in", "w", stdout);
	int T = 5;
	while (T--)
	{
		int n = 1e5;
		int m = 1e5;
		cout << n << " " << m << endl;
		for (int i = 0; i < n; i++)
		{
			if (i)
				cout << " ";
			cout << getNum(5);
		}
		cout << endl;
		cout << 1;
		for (int i = n; i >= 2; i --)
			cout << " " << i;
		cout << endl;
	}
	T = 5;
	while (T--)
	{
		int n = 1e5;
		int m = 1e5;
		cout << n << " " << m << endl;
		for (int i = 0; i < n; i++)
		{
			if (i)
				cout << " ";
			cout << getNum(18);
		}
		cout << endl;
		cout << 1;
		for (int i = n; i >= 2; i --)
			cout << " " << i;
		cout << endl;
	}
}


