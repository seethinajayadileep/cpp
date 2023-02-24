
#include<bits/stdc++.h>
using namespace std;
void left_shift(int a[],int n)
{
	int temp=a[0];
	for(int i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=temp;
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
	left_shift(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
		t--;
	}
}
