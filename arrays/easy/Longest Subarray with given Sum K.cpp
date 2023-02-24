#include<bits/stdc++.h>
using namespace std;
void longest(int a[],int n,int sum)
{
	int max1=0, sum1;
	for(int i=0;i<n;i++)
	{ sum1=0;
		for(int j=i;j<n;j++)
		{
		 sum1+=a[j];
		 if(sum==sum1)
		 {
		 	max1=max(max1,(j-i+1));
		 }
		}
	}
	cout<<max1;
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
		int sum;
		cin>>sum;
		longest(a,n,sum);
		
	
		t--;
	}
}
