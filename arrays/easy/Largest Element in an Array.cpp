#include<bits/stdc++.h>
using namespace std;
int max(int a[],int n)
{ int max1;
	sort(a,a+n);
	max1=a[n-1];
	return max1;
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
		cout<<max(a,n);
		t--;
	}
}
