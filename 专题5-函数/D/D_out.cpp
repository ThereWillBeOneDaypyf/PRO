#include <iostream>
#include <string>
#include <string.h>
#include<stdio.h>
#include<algorithm>
#include<fstream>
using namespace std;
int a[205];
int trans(string s, int j)
{
	int k = j;
	for (int i = 0; i < s.length(); i++)
	{
		int b = 0;
		while (s[i] != ' '&&s[i]!='\0'&&i<s.length())
		{
			b = b * 10 + (s[i] - '0');
			i++;
		}
		a[k] = b;
		k++;
	}
	return k;
}
int main()
{
	freopen("D.out.txt", "w", stdout);
	int t = 0;
	char s[1005];
	while (1)
	{
		int j = 0;
		gets_s(s);
		//getchar();
		if (s[0]=='\0') break;
		j = trans(s, j);
		gets_s(s);
		j = trans(s, j);
		sort(a, a + j);
		cout << "Case " << ++t << ":";
		for (int i = 0; i < j; i++)
			cout << " " << a[i];
		cout << endl;
	}
	return 0;
}