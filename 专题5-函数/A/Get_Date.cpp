#include<bits/stdc++.h>
using namespace std;
//thanks to pyf ...
//thanks to qhl ...

int main()
{
	freopen("1.in", "w", stdout);
	random_device rd;
	const int base = 3.7;
	int T = 100;
	while (T--)
	{
		int a = rd() % 100, b = rd() % 100, c = rd() % 100;
		a ++, b ++ , c++;
		cout << 1.0 * a / base << " " << 1.0 * b / base << " " << 1.0 * c / base << endl;
	}
}