#include<bits/stdc++.h>
using namespace std;
int isduplicate(int a[],int n)
{
	map<int,int> mpp;
	for(int i=0;i<n;i++)
	{
		mpp[a[i]]++;
	}
	int k=0;
	for(auto x:mpp)
	{
		
		a[k++]=x.first;
	}
	return k;
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
		int k=isduplicate(a,n);
		for(int i=0;i<k;i++)
		{
			cout<<a[i];
		}
		t--;
	}
}
