#include<iostream>
#include <vector>
#include<string>

using namespace std;
int main()
{
 vector<string> a;

 string c, b="";
getline(cin,c);
for( int i=0;i<c.length();i++)
{
    if(c[i]!=' ')
    {
        b=b+c[i];
        
        
    }
    else
    {
        a.push_back(b);
        b="";
    }
}
a.push_back(b);
 for(int i=0;i<a.size();i++)
{
    cout<<a[i];
    cout<<endl;
}
	return 0;
}



