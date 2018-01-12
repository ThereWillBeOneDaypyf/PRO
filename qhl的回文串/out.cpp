#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	int n;
	while(scanf("%d",&n) == 1)
	{
		if((n & (n - 1)) == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}
}
