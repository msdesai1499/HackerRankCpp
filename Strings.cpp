#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int la=a.size();
	int lb=b.size();
	string c=a+b;
	cout<<la<<" "<<lb<<endl;
	cout<<c<<endl;
	string x,y;
	x=a[0];
	y=b[0];
	a.erase(a.begin());
	b.erase(b.begin());
	a.insert(0,y);
	b.insert(0,x);
	cout<<a<<" "<<b;
	return 0;
}
