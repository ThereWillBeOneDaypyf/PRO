#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...

int main()
{
	freopen("1.in", "w", stdout);
	random_device rd;
	int T = 100;
	while (T--)
	{
		int l1 = rd() % 1000;
		int l2 = rd() % 1000;
		for (int i = 0; i != l1; i++)
		{
			if (i)
				cout << " ";
			cout << rd() % 100000;
		}
		cout << endl;
		for (int i = 0; i != l2; i++)
		{
			if (i)
				cout << " ";
			cout << rd() % 100000;
		}
		cout << endl;
	}
}