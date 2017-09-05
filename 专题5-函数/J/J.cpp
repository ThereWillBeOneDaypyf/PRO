#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...
bool judge(int x)
{
	if (x == 2)
		return true;
	if (x == 1 || x == 0)
		return false;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}
int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	string s;
	while (cin >> s)
	{
		map<char, int>m;
		for (int i = 0; i != s.length(); i++)
			m[s[i]] ++;
		vector<int>v;
		for (auto temp : m)
			v.push_back(temp.second);
		sort(v.begin(), v.end());
		if (judge(*v.rbegin() - *v.begin()))
			cout << "Lucky Word" << endl << *v.rbegin() - *v.begin() << endl;
		else
			cout << "No Answer" << endl << 0 << endl;
	}
}