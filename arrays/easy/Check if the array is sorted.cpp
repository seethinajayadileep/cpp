#include<bits/stdc++.h>
using namespace std;

int issort(int a[],int n)
{ int k=0;
  for(int i=0;i<n-1;i++)
  {
  	if(a[i]<=a[i+1])
  	{
  		k++;
	  }
	  else
	  {
	  	return 0;
	  }
  }
  return 1;
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
		cout<<issort(a,n);
		t--;
	}
}
