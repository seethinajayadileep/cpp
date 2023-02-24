
#include<bits/stdc++.h>
using namespace std;

int max2(int a[],int n)
{ int max2;
	sort(a,a+n);
	max2=a[n-2];
	return max2;
}
int max20(int a[],int n)
{ int max1=INT_MIN,max2=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(max1<a[i])
		{
			max1=a[i];
		}
		if(a[i]<max1&&a[i]>max2)
		{
			max2=a[i];
		}
		
	}
return max2;
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
		cout<<max20(a,n);
		t--;
	}
}
