#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...
char a[26];
int main()
{
	random_device rd;
	freopen("1.in", "w", stdout);
	int T = 1000;
	for (int i = 0; i < 26; i++)
		a[i] = 'a' + i;
	while (T--)
	{
		int n = rd() % 100 + 1;
		for (int i = 0; i < n; i++)
			cout << a[rd() % 26];
		cout << endl;
	}
}