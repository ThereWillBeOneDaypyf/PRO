#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...


int main()
{
	freopen("1.in","w",stdout);
	int cnt = 20;
	while(cnt--)
	{
		int n = rand() % 100;
		int m = rand() % 100;
		cout << n << endl  << m << endl;
		int part1 = rand() % n;
		for(int i = 0;i<part1;i++)
			cout << rand() % 100 << endl << rand() % 1000 * 100 << endl;
		for(int i = part1 ;i<n;i++)
			cout << rand() % 100 << endl << rand()%1000 << endl;
	}
}
