#include<bits/stdc++.h>
using namespace std;
void zero(int a[],int n)
{
	int temp[n]={0};
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
		
		temp[k++]=a[i];
	}
	}
	for(int i=0;i<n;i++)
	{
		a[i]=temp[i];
	}
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
	
	zero(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
		t--;
	}
}
