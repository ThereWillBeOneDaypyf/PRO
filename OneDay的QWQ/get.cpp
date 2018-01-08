#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","w",stdout);
	char x[26];
	for(int i = 0;i < 26;i++)
		x[i] = 'A' + i;
	int T = 5;
	random_device rd;
	while(T--)
	{
		int n = 1e6;
		cout << n << endl;
		cout << x[rd() % 26] << " " << x[rd() % 26] << " " << x[rd() % 26]<< endl;;	
		string s = "";
		for(int i = 0;i < n;i++)
			s += x[rd() % 26];
		cout << s << endl;
	}
	T = 1;
	while(T--)
	{
		int n = 1e6;
		cout << n << endl;
		cout << "A A A" << endl;
		string s = "";
		for(int i = 0;i < n;i++)
			s += 'A';
		cout << s << endl;
	}
	T = 2;
	while(T--)
	{
		int n = 1e6;
		cout << n << endl;
		cout << "A B A" << endl;
		string s = "";
		char tar[2] = {'A','B'};
		for(int i = 0;i < n;i++)
			s += tar[rd() % 2];
		cout << s << endl;
	}
	T = 3;
	while(T--)
	{
		int n = 1e6;
		cout << n << endl;
		string s = "";
		char tar[3] = {'A','B','C'};
		cout << 'A' << " " << 'B' << " " << 'C' << endl;
		for(int i = 0;i < n;i++)
			s += tar[rd() % 3];
		cout << s << endl;
	}
}
