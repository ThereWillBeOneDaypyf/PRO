#include<bits/stdc++.h>
using namespace std;


int main()
{
	freopen("1.in","w",stdout);
	random_device rd;
	int n,m;
	int T = 10;
	while(T--)
	{
		n = 1e5;
		m = rd() % (1000000000) + 1;
		cout << n << " " << m << endl;
		for(int i = 0;i < n;i ++)
			cout << rd() % 1000 + 1 << " " << rd() % 1000 + 1 << endl;
	}	
}
