#include<bits/stdc++.h>
using namespace std;
int linear_search(int a[],int n,int k)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int a[20];
	int t;
	cin>>t;
	while(t)
	{int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
	
	int key=0;
	cin>>key;
   cout<<linear_search(a,n,key);
   t--;
}
}
