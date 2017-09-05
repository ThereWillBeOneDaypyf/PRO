#include<iostream>
#include<random>
#include<fstream>
using namespace std;
int main()
{
	freopen("E.in", "w", stdout);
	random_device rd;
	int t = 1000;
	while (t--)
	{
		int n = rd() % 9;
		n++;
		for (int i = 0; i < n; i++)
		{
			int x = rd() % 9;
			x ++;
			cout << x;
		}
			
		cout << " ";
		n = rd() % 35;
		n+=2;
		cout << n << endl;
	}
	return 0;
}
