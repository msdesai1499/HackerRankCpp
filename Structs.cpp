#include<bits/stdc++.h>
using namespace std;
struct stud
	{
		int age,std;
		string fname,lname;
	};
int main()
{
	
	stud s1;
	cin>>s1.age>>s1.fname>>s1.lname>>s1.std;
	cout<<s1.age<<" "<<s1.fname<<" "<<s1.lname<<" "<<s1.std;
	return 0;
}
