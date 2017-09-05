#include<bits/stdc++.h>
using namespace std;


//thanks to pyf ...
//thanks to qhl ...

int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	string s1, s2;
	int ka = 0;
	while (getline(cin, s1))
	{
		getline(cin, s2);
		stringstream ss1(s1), ss2(s2);
		int x;
		vector<int>v;
		while (ss1 >> x)
			v.push_back(x);
		while (ss2 >> x)
			v.push_back(x);
		sort(v.begin(), v.end());
		cout << "Case " << ++ ka << ":";
		for (auto it = v.begin(); it != v.end() ; it ++)
			cout << " " << *it;
		cout << endl;
	}
}