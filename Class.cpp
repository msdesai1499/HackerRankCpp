#include<bits/stdc++.h>
#include<sstream>
#include<string>
using namespace std;

class Student
{
int age,std;
string fname,lname;
public:
void setAge(int age)
{
	this->age=age;
}
void setStd(int std)
{
	this->std=std;
}
void setFname(string fname)
{
	this->fname=fname;
}
void setLname(string lname)
{
	this->lname=lname;
}
int getAge()
{
	return age;
}
int getStd()
{
	return std;
}
string getFname()
{
	return fname;
}
string getLname()
{
	return lname;
}
string to_String()
{
	stringstream ss;
	char c=',';
	ss<<age<<c<<fname<<c<<lname<<c<<std;
	return ss.str();
}

	
};
int main()
{
	int age,std;
	string fname,lname;
	cin>>age>>fname>>lname>>std;
	Student s;
	s.setAge(age);
	s.setFname(fname);
	s.setLname(lname);
	s.setStd(std);
	cout<<s.getAge()<<endl;
	cout<<s.getLname()<<", "<<s.getFname()<<endl;
	cout<<s.getStd()<<endl<<endl;
	cout<<s.to_String();
	
	return 0;
}
