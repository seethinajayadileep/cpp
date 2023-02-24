#include<bits/stdc++.h>
using namespace std;
void intersection1(int a[],int n,int b[],int m)
{
vector<int> v;
  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<m;j++)
  	{
  		if(a[i]==b[j])
  		{
  			v.push_back(a[i]);
  			break;
		  }
	  }
  }
  for(auto x:v)
  {
  	cout<<x;
  }
}


int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int n;
		cin>>n;
		int a[n];
		int m;
		cin>>m;
		int b[m];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			
		}
		intersection1(a,n,b,m);
		t--;
	}
}
