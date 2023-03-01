#include<bits/stdc++.h>
using namespace std;


void stockBuySell(int price[], int N){
    //Code here
    int k=0;
    int max1=INT_MIN;
    int min1=INT_MAX;
    for(int i=0;i<N/2;i++)
    {
        if(price[i]<price[i+1])
        {
            k++;
        }
       
        min1=min(price[i],min1);
    }
    bool day=false;
     for(int i=0;i<N/2;i++)
    {
        if(min1==price[i])
        {
        day=true;
        }
        if(day)
        {
        	max1=max(price[i],max1);
		}
       
        
    }
    
    
    if(k>N/2)
{
    cout<<"0";
}
else
{
    
    cout<<min1<<"buy";
    cout<<max1<<"sell";
}
  k=0;
     max1=INT_MIN;
     min1=INT_MAX;
    for(int i=N/2;i<N;i++)
    {
        if(price[i]<price[i+1])
        {
            k++;
        }
       
        min1=min(price[i],min1);
    }
    day=false;
     for(int i=N/2;i<N;i++)
    {
        if(min1==price[i])
        {
        day=true;
        }
        if(day)
        {
        	max1=max(price[i],max1);
		}
       
        
    }
        if(k>=N/2)
{
    cout<<"0";
}
else
{
    
    cout<<min1<<"buy";
    cout<<max1<<"sell";
}
}
int main()
{
	int p[10],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	stockBuySell(p,n);
}
