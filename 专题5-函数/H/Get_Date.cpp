#include<bits/stdc++.h>
using namespace std;


//thanks to pyf ...
//thanks to qhl ...
char a[26];
int main()
{
	freopen("1.in", "w", stdout);
	random_device rd;
	for (int i = 0; i < 26; i++)
		a[i] = 'a' + i;
	int T = 50;
	while (T--)
	{
		int n = rd() % 1000;
		cout << n << endl;
		for (int i = 0; i < n; i++)
		{
			int len = rd() % 10 + 1;
			for (int j = 0; j < len; j++)
			{
				int id = rd() % 26;
				cout << a[id];
			}
			cout << " ";
			cout << rd() % 10 + 30 << "." << rd() % 100 << " ";
			cout << rd() % 2 << endl;
		}
	}
}