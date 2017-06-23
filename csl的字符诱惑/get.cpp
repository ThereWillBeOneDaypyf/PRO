#include<bits/stdc++.h>
using namespace std;


int main()
{
	freopen("1.in","w",stdout);
	int cnt = 1000;
	while(cnt--)
	{
		int n = rand() % 1000;
		cout << n << endl;
		for(int i = 0; i<n;i++)
		{
			int flag  = rand() % 2;
			if(!flag)
				cout << "X++" << endl;
			else
				cout << "--X" << endl;
		}
	}
}
