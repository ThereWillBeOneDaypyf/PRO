#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	freopen("E.in","r",stdin);
	freopen("E.out", "w", stdout);
	int a, b, cnt = 1;
	int ans[100000];
	while (cin >> a >> b)
	{
		cout << "Case " << cnt++ << ": ";
		int j = 0;
		while (a>0)
		{
			ans[j++] = a%b;
			a /= b;
		}
		for (int i = j - 1; i >= 0; i--)
		{
			if (ans[i] >= 0 && ans[i] <= 9)
				cout << ans[i];
			else
				cout << char(ans[i] - 10 + 65);
		}
		cout << endl;
	}
	return 0;
}
