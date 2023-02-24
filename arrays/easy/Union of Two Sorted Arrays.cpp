#include<bits/stdc++.h>
using namespace std;


void union1(int a[],int n,int b[],int m)
{   map<int,int> mpp;
	for(int i=0;i<n;i++)
	{
		mpp[a[i]]++;
	}
	for(int j=0;j<m;j++)
	{
		mpp[b[j]]++;
	}
	for(auto x:mpp)
	{
		cout<<x.first;
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
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			
		}
		union1(a,n,b,m);
		t--;
	}
}
