#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...
int Map[1000][1000];
int main()
{
	freopen("1.in", "w", stdout);
	random_device rd;
	int T = 100;
	while (T--)
	{
		int n = rd() % 100, m = rd() % 100;
		n ++, m ++;
		for (int i = 0 ; i < n; i++)
			for (int j = 0; j < m; j++)
				Map[i][j] = rd() % 2;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (j)
					cout << " ";
				cout << Map[i][j];
			}
			cout << endl;
		}
		if (T)
			cout << endl;
	}
	return 0;
}