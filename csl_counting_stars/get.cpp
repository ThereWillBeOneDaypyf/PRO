#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","w",stdout);
	random_device rd;
	int T = 10;
	while(T--)
	{
		int n = rd() % 1000000 + 1;
		int m = rd() % n + 1;
		int k = (rd() % n  + 1)* 100;
		cout << n << " " << m << " " << k << endl;
		for(int i = 1;i <= n;i ++)
			cout << rd() % 1000 << endl;
	}
}
