#include<bits/stdc++.h>
using namespace std;
int i=1;
/*
Print name N times using recursion
*/
int print(int n)
{
	if(i>n)
	return 0;
	cout<<"name"<<endl;
	i++;
	print(n);
}
/*Print 1 to N using recursion
*/
int print2(int n)
{
	if(i>n)
	return 0;
	cout<<i<<endl;
	i++;
	print2(n);
}
/*Print N to 1 using recursion*/
int print3(int i,int n)
{
	if(i>=n)
	return 0;
	cout<<n-i<<endl;
	
	print3(i+1,n);
}
/* Sum of first N numbers*/
int print4(int sum,int n)
{
	if(n)
	{
	  sum+=n;
	  
	  print4(sum,n-1);
	
	}
	else
	{
	return sum;
	}
}
/*Factorial of N numbers*/
int print5(int pro,int n)
{
	if(n)
	{
	  pro*=n;
	  
	  print5(pro,n-1);
	
	}
	else
	{
	return pro;
	}
}
/*Reverse an array	*/

int print6(int a[],int n,int i)
{
	int mid=n/2;//2
	if(mid>i)
	{
		int temp=a[i];
		a[i]=a[n-i-1];//4//3
		a[n-i-1]=temp;//0//1
		
		print6(a,n,i+1);
	}
	else
	{
		for(int i=0;i<n;i++)
{
	cout<<a[i];
}
}
}
/*Fibonacci Number*/
string print7(char a[],int n,int i)
{ 
	int mid=n/2;//2
	if(mid>i)
	{ 
       if(a[i]==a[n-i-1])	
	   {
	  
	   print7(a,n,i+1);
	   
	  }
		   else{
		   	
		   	
		  cout<<"not palindrome";
		   }	
		
	
	}
	else
	{
		cout<<"palindrome";
}

}
/*Fibonacci Number*/
void print8(int fib1,int fib2,int n)
{
	if(n)
	{cout<<fib2<<" "<<" "; 
	int total=fib1+fib2;
	  
	
		print8(fib2,total,n-1);
	}
	
}

int main()
{ 



print8( 1,0,5);
}
