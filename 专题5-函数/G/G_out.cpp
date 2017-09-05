#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	freopen("G.in","r",stdin);
	freopen("G.out", "w", stdout);
	int a, b, c;
	char op;
	while(cin >> a >> op >> b)
	{
		switch (op)
		{
			case '+':c = a + b; break;
			case '-':c = a - b; break;
			case '*':c = a*b; break;
			case '/':c = a / b; break;
			case '%':c = a%b; break;
		}
		cout << c << endl;
	} 

	return 0;
}
