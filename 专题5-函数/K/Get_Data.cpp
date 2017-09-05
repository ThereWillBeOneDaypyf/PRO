#include<bits/stdc++.h>
using namespace std;

//thanks to pyf ...
//thanks to qhl ...

random_device rd;
char a[52];
char b[10];
map<string, int>unique_name, unique_id;
int id_len;
int mark_cnt;
void get_alpha()
{
	for (int i = 0; i < 26; i ++)
		a[i] = 'a' + i;
	for (int i = 0; i < 26; i++)
		a[i + 26] = 'A' + i;
}
void get_Num()
{
	id_len = rd() % 10 + 8;
	mark_cnt = rd() % 10 + 1;
	for (int i = 0; i < 10; i++)
		b[i] = '0' + i;
}
string get_name()
{
	string s;
	int l = rd() % 20 + 5;
	for (int i = 0; i < l; i++)
	{
		int id = rd() % 52;
		s += a[id];
	}
	return s;
}
string get_id()
{
	string s;
	for (int i = 0; i < id_len; i++)
	{
		int id = rd() % 10;
		s += b[id];
	}
	return s;
}
vector<int> get_mark()
{
	vector<int> v;
	for (int i = 0; i < mark_cnt; i++)
	{
		int mark = rd() % 100;
		v.push_back(mark);
	}
	return v;
}
int main()
{
// 	freopen("1.in", "w", stdout);
// 	int cnt_p = rd() % 40 + 10;
// 	get_Num() , get_alpha();
// 	for (int i = 0; i < cnt_p; i++)
// 	{
// name_begin :
// 		string name = get_name();
// 		if (unique_name.count(name))
// 			goto name_begin;
// id_begin :
// 		string id = get_id();
// 		if (unique_id.count(id))
// 			goto id_begin;
// 		vector<int>v = get_mark();
// 		unique_name[name] = 1, unique_id[id] = 1;
// 		cout << name << '\t' << id;
// 		for (auto temp : v)
// 			cout << '\t' << temp;
// 		cout << endl;
// 	}
// 	freopen("2.in", "w", stdout);
// 	int cnt_p = rd() % 40 + 10;
// 	get_Num() , get_alpha();
// 	for (int i = 0; i < cnt_p; i++)
// 	{
// name_begin :
// 		string name = get_name();
// 		if (unique_name.count(name))
// 			goto name_begin;
// id_begin :
// 		string id = get_id();
// 		if (unique_id.count(id))
// 			goto id_begin;
// 		vector<int>v;
// 		for (int i = 0; i < mark_cnt; i++)
// 			v.push_back(100);
// 		unique_name[name] = 1, unique_id[id] = 1;
// 		cout << name << '\t' << id;
// 		for (auto temp : v)
// 			cout << '\t' << temp;
// 		cout << endl;
// 	}
	freopen("3.in", "w", stdout);
	int cnt_p = 10000;
	get_Num() , get_alpha();
	for (int i = 0; i < cnt_p; i++)
	{
name_begin :
		string name = get_name();
		if (unique_name.count(name))
			goto name_begin;
id_begin :
		string id = get_id();
		if (unique_id.count(id))
			goto id_begin;
		vector<int>v = get_mark();
		unique_name[name] = 1, unique_id[id] = 1;
		cout << name << '\t' << id;
		for (auto temp : v)
			cout << '\t' << temp;
		cout << endl;
	}
}