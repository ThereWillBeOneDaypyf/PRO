#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","w",stdout);
	int cnt = 1;
	while(cnt --)
	{
		int n = rand() % 100  ;
		int m = rand() % 100 * 4500;
		cout << n << endl << m << endl;
		for(int i  =0;i<n;i++)
			cout << rand() % 1000 << endl;
		for(int i = 0 ; i < m ; i++)
		{
			int l = rand() % n;
			int r = rand() % n;
			if(l > r)
				swap(l,r);
			cout << l << endl << r << endl;
		}
	}
}
