#include<bits/stdc++.h>
using namespace std;
void missing_repeat(int a[],int n)
{
	sort(a,a+n);
	int k=a[0];
	int b[2],count,r;
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			k++;
		}
		else
		{
			if(k-1==a[i])
			{
				r=a[i];
				
			}
			else
			{
				count=k;
			}
			
		}
	
	}
	cout<<count<<r;
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
	
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		missing_repeat(a,n);
		
	
		t--;
	}
}
