#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...

const int N = 1e3 + 8;

int Map[N][N];
int ans[N][N];
int xdir[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int ydir[8] = {1, 0, -1, 0, 1, -1, 1, -1};
int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	int ka = 0;
	string s;
	while (getline(cin, s))
	{
		stringstream ss(s);
		int x;
		vector<int>v;
		int n = 0;
		while (ss >> x)
			v.push_back(x);
		int m = v.size();
		for (int i = 0; i < v.size(); i++)
			Map[n][i] = v[i];
		n ++;
		while (getline(cin, s))
		{
			if (s.size() == 0)
				break;
			stringstream sss(s);
			v.clear();
			while (sss >> x)
				v.push_back(x);
			for (int i = 0; i < v.size(); i++)
				Map[n][i] = v[i];
			n ++;
		}
		cout << "Case " << ++ka << ":" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				ans[i][j] = Map[i][j];
				for (int k = 0; k < 8; k++)
				{
					int tx = i + xdir[k];
					int ty = j + ydir[k];
					if (tx < 0 || tx >= n || ty < 0 || ty >= m)
						continue;
					ans[i][j] += Map[tx][ty];
				}
				if (j)
					cout << " ";
				cout << ans[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
