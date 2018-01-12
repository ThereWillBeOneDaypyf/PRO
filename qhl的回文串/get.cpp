#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","w",stdout);
	int T = 1 << 20;
	random_device rd;
	while(T--)
	{
		cout << rd() % (1 << 26) << endl;
	}
	for(int i = 0;i < 26;i++)
		cout << (1 << i) << endl;
}
