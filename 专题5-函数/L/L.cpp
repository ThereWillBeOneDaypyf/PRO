#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...
struct Node
{
	int val, id;
};
int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	int ka = 0;
	vector<Node>v;
	string s;
	while (getline(cin, s))
	{
		stringstream ss(s);
		int x;
		v.clear();
		int cnt = 0;
		while (ss >> x)
		{
			v.push_back((Node) {x, cnt++});
		}
		sort(v.begin(), v.end(), [](Node a, Node b) {return a.val < b.val;});
		auto e = unique(v.begin(), v.end(), [](Node a, Node b) {return a.val == b.val;});
		sort(v.begin(), e, [](Node a, Node b) {return a.id < b.id;});
		cout << "Case " << ++ ka << ":";
		for (auto it = v.begin(); it != e; it ++)
			cout << " " << (*it).val;
		cout << endl;
	}
}