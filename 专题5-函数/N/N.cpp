#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...
const int N = 1e6;
vector<int>v[N];
map<string, int>id;

int main()
{
	// freopen("1.in", "r", stdin);
	// freopen("1.out", "w", stdout);
	freopen("2.in", "r", stdin);
	freopen("2.out", "w", stdout);
	string s;
	int cnt = 0;
	int row = 0;
	while (getline(cin , s))
	{
		row ++;
		for (auto &op : s)
			if (!isalnum(op))
				op = ' ';
			else
				op = tolower(op);
		stringstream ss(s);
		while (ss >> s)
		{
			if (!id.count(s))
				id[s] = cnt ++;
			v[id[s]].push_back(row);
		}
	}
	cout << id.size() << " " << "word";
	if (id.size() > 1)
		cout << "s";
	cout << endl;
	for (auto temp : id)
	{
		cout << temp.first << " (" << v[temp.second].size() << ")";
		for (auto it = v[temp.second].begin() ; it != v[temp.second].end() ; it++)
		{
			if (it != v[temp.second].begin())
				cout << ",";
			cout << " " << *it;
		}
		cout << endl;
	}
}