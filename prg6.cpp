#include<bits/stdc++.h>
using namespace std;
void max(int arr[])
{
	int max=0,i;
	for(i=0;i<4;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		
	}
	cout<<max;
}
int main()
{
	int arr[4];
	for(int i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	max(arr);
	
return 0;

}
