#include<bits/stdc++.h>
using namespace std;


using namespace std;


//thanks to pyf ...
//thanks to qhl ...

int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	int n;
	while (cin >> n)
	{
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			string s;
			double a;
			int b ;
			cin >> s >> a >> b;
			if (a >= 37.5 && b)
			{
				cout << s << endl;
				cnt ++;
			}
		}
		cout << cnt << endl;
	}
}