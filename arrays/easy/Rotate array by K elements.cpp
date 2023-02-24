#include<bits/stdc++.h>
using namespace std;
void left_shift(int a[],int n,int k)
{
	int temp[n];
	for(int i=0;i<k;i++)
	{
		temp[i]=a[n-k+i];
		
		
	}
	int j=0;
	for(int i=k;i<n;i++)
	{
		temp[i]=a[j];
		j++;
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
		int k;
		cin>>k;
	left_shift(a,n,k);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
		t--;
	}
}
