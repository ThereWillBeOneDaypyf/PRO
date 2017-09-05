#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...

int main()
{
	freopen("1.in", "w", stdout);
	random_device rd;
	int T = 20;
	while (T--)
	{
		int n = rd() % 10000 + 100;
		for (int i = 0; i < n; i++)
		{
			if (i)
				cout << " ";
			auto x = rd();
			if (T >= 10)
				x %= 100;
			else
				x %= 1000000;
			cout << x;
		}
		cout << endl;
	}
}