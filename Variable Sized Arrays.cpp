#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int n;
	int t;
	cin>>n;
	cin>>t;
	vector<vector<int> > v;
	for(int i=0;i<n;i++)
	{
	int l;
	cin>>l;
	vector<int> v1;
	for(int j=0;j<l;j++)
	{
		int m;
		cin>>m;
	v1.push_back(m);
	}
	v.push_back(v1);
	}
for (int i=0;i<t;i++)
{
		
int y,z;
cin>>y>>z;
cout<<v[y][z]<<endl;
}
	
	return 0;
}
