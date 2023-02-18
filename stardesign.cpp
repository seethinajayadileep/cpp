#include<bits/stdc++.h>
using namespace std;
/*
pattern 1
 *****
 *****
 *****
 *****
 *****
 */
void print1(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
}
/*
pattern -2
*
**
***
****
*****
*/
void print2(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
}
/* 
pattern -3
1
12
123
1234
12345
*/
void print3(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
}
/*
pattern -4
1
22
333
4444
55555
*/
void print4(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	
}
/*
pattern-5
*****
****
***
**
*
*/
void print5(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n-i+1;j>0;j--)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
}
/*pattern-6
12345
2345
345
45
5
*/
void print6(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=n-i+1;j>0;j--)
		{
			cout<<n-j+1<<" ";
		}
		cout<<endl;
	}
	
}
/* pattern-7
     *
    ***
   *****
  *******
 *********
 */
void print7(int n)
{
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=n-i+1;j++)
	{
		cout<<" ";
	}
	for(int j=1;j<=(2*i)-1;j++)
	{
		cout<<"*";
	}
	for(int j=1;j<=n-i+1;j++)
	{
		cout<<" ";
	}
	cout<<endl;
	}
}
/*
pattern -8
 *********
  *******
   *****
    ***
     *
    */
    
void print8(int n)
{
	for(int i=1;i<=n;i++)
	{
	 for(int j=0;j<i-1;j++)
	 {
	 	cout<<" ";
	 }
	 for(int j=1;j<=(2*n)-(i+i)+1;j++)
	 {
	 	cout<<"*";
	 }
	 for(int j=0;j<i-1;j++)
	 {
	 	cout<<" ";
	 }
	cout<<endl;
	}
}
/*pattern 9
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
    */
void print9(int n)
{
		for(int i=1;i<=n;i++)
	{
	for(int j=1;j<n-i+1;j++)
	{
		cout<<" ";
	}
	for(int j=1;j<=(2*i)-1;j++)
	{
		cout<<"*";
	}
	for(int j=1;j<n-i+1;j++)
	{
		cout<<" ";
	}
	cout<<endl;
	}
		for(int i=1;i<=n;i++)
	{
	 for(int j=0;j<i-1;j++)
	 {
	 	cout<<" ";
	 }
	 for(int j=1;j<=(2*n)-(i+i)+1;j++)
	 {
	 	cout<<"*";
	 }
	 for(int j=0;j<i-1;j++)
	 {
	 	cout<<" ";
	 }
	cout<<endl;
	}
	
}
/*
pattern -10
*
**
***
****
*****
****
***
**
*
*/
void print10(int n)
{
	for(int i=1;i<=(n*2)-1;i++)
	{int k=i;
		if(k>5)
		{
			k=((n*2))-k;
		}
		for(int j=1;j<=k;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
/* pattern11
1
01
101
0101
10101
*/
void print11(int n)
{
	for(int i=1;i<=n;i++)
	{
		int k=1;
		if(i%2==0)
		{
			k=0;
		}
		for(int j=1;j<=i;j++)
		{
			cout<<k;
			if(k==1)
			{
				k=0;
			}
			else
			{
				k=1;
			}
		}
		cout<<endl;
	}
}
/* pattern-12
1      1
12    21
123  321
12344321
*/
void print12(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j;
		}
		for(int j=1;j<=(n*2)-(i*2);j++)
		{
			cout<<" ";
		}
		for(int j=i;j>0;j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
/* pattern  -13
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
void print13(int n)
{int k=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<k++<<" ";
		}
		cout<<endl;
	}

	}
	
	/* pattern-14
A
AB
ABC
ABCD
ABCDE
*/
void print14(int n)
{
	for(int i=0;i<n;i++)
	{
		for(char j='A';j<='A'+i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}

	}
/*
pattern 15
ABCDE
ABCD
ABC
AB
A
*/
void print15(int n)
{
	for(int i=0;i<n;i++)
	{
		for(char j='A';j<=(n-i)-1+'A';j++)
		{
			cout<<j;
		}
		cout<<endl;
	}

	}
	/* pattern16
A
BB
CCC
DDDD
EEEEE
*/	
void print16(int n)
{

	for(int  i=0;i<n;i++)
	{  char k='A'  ;
	k=k+i;
		for(int j=0;j<=i;j++)
		{
			cout<<k;
		}
		cout<<endl;
	}

	}
	/* pattern 18
	 A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/
void print17(int n)
{ char k='A';
for(int i=1;i<=n;i++)
{int m=0;
	for(int j=0;j<=n-i-1;j++)
	{
		cout<<" ";
		m++;
	}
	for(int j=0;j<(i*2)-1;j++)
	{ if(m>=5)
	{
		k--;
		
	 } 
	 else
	 {
	 k='A';
	k+=j;
}
		cout<<k;
	m++;
	}
		for(int j=0;j<=n-i-1;j++)
	{
		cout<<" ";
	}
	cout<<endl;
}
}
/*
E
DE
CDE
BCDE
ABCDE
*/
void print18(int n)	
{
char k='A';
	for(int i=0;i<n;i++)
	{ k=k+(n-i)-1;
		for(int j=0;j<=i;j++)
		{
			cout<<k;
			k++;
		}
		k='A';
		cout<<endl;
	}

}
/*
pattern -19
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
void print19(int n)
{
	for(int i=0;i<n;i++)
	{
		
		for(int j=n;j>i;j--)
		{
			cout<<"*";
		}
		for( int j=0;j<i*2;j++)
		{
			cout<<" ";
		}
		for(int j=n;j>i;j--)
		{
			cout<<"*";
		}
	
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		for( int j=0;j<((n-i)*2)-2;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
	
		cout<<endl;
	}
}
/* pattern-20
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
void print20(int n)
{
	for(int i=1;i<=2*n;i++)
	{ int k=i;
		if(k>n)
		{
			k=(2*n)-k;
		}
		for(int j=1;j<=k;j++)
		{
			cout<<"*";
		}
		for(int j=1;j<=(n*2)-(k*2);j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=k;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
/*
pattern-21
*****
*   *
*   *
*   *
*****
*/

void print21(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1||j==1||i==n||j==n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
		}
			
		}
		cout<<endl;
	}
}
void print22(int n)
{
for(int i=0;i<(n*2)-1;i++)
{
	for(int j=0;j<(n*2)-1;j++)
	{
		int top=i;
		int down=j;
		int left=((2*n)-2)-i;
		int right=((2*n)-2)-j;
		cout<<(n-min(min(top,down),min(left,right)));
		
	}
	cout<<endl;
}
}
/*
pattern -23
    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
    void printDiamond(int n) {
        // code here
      for(int i=1;i<=n*2;i++)
      {int  k=i;
      if(k>n)
      {
          k=(2*n)-k+1;
      }
          for(int j=1;j<=n-k;j++)
          {
              cout<<" ";
          }
          for(int j=1;j<=k;j++)
          {
              cout<<"* ";
          }
       
          cout<<endl;
      }
    }
    

int main()
{
	
	print22(5);
}
