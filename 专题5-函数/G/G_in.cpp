#include<iostream>
#include<string>
#include<random>
#include<fstream>
using namespace std;
char opp[5] = { '+','-','*','/','%' };
int main()
{
	freopen("G.in", "w", stdout);
	random_device rd;
	for(int i = 0;i<1000;i++)
	{
		int t=rd()%5; 
		int n = rd() % 100;
		while(n<10)
			n = rd() % 100;
		cout << n << opp[t];
		n = rd() % 100;
		while (n<10)
			n = rd() % 100;
		cout << n << endl;
	}

	return 0;
}
