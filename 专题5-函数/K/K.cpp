#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...

struct Node
{
	string iid, name;
	vector<int> mark;
	int sum;
	double aver;
	int rank;
	int id;
};
int main()
{
	// freopen("1.in", "r", stdin);
	// freopen("1.out", "w", stdout);
	// freopen("2.in", "r", stdin);
	// freopen("2.out", "w", stdout);
	freopen("3.in", "r", stdin);
	freopen("3.out", "w", stdout);
	vector<Node>vv;
	string s;
	int cnt = 0;
	while (getline(cin, s))
	{
		Node v;
		v.id = cnt++;
		stringstream ss(s);
		ss >> v.iid >> v.name;
		int x;
		v.sum = 0;
		while (ss >> x)
		{
			v.mark.push_back(x);
			v.sum += x;
		}
		v.aver = 1.0 * v.sum / (double) v.mark.size();
		vv.push_back(v);
	}
	sort(vv.begin(), vv.end(), [](Node a, Node b) {return a.sum > b.sum;});
	for (int i = 0; i != vv.size(); i++)
	{
		if (i && vv[i].sum == vv[i - 1].sum)
			vv[i].rank = vv[i - 1].rank;
		else
			vv[i].rank = i + 1;
	}
	sort(vv.begin(), vv.end(), [](Node a, Node b) {return a.id < b.id;});
	for (auto temp : vv)
	{
		cout << temp.iid << '\t' << temp.name;
		for (auto m : temp.mark)
			cout << '\t' << m;
		cout << '\t' << temp.aver << '\t' << temp.rank << endl;
	}
}