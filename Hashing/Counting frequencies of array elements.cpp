#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        
        // Code here

        // pair se hoga

         map<int,int> m;

         for(int i = 0 ;i<nums.size();i++){

             m[nums[i]]++;

         }

         vector< pair <int,int> > vect;

         for(auto i : m){

             vect.push_back(make_pair(i.second,i.first));

         }

         sort(vect.begin(),vect.end());

         reverse(vect.begin(),vect.end());

         vector<int> v;

         int i = 0;

         while(i<k){

             v.push_back(vect[i].second);

             i++;

         }

         return v;

        

        // 

    


        
    }
};
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    {  
        // code here
        map<int,int> mpp;
        for(auto x:arr)
        {
        	mpp[x]++;
		}
		for(int i=1;i<=P;i++)
		{
			cout<<mpp[i]<<" ";
		}
        
    }
};
int main()
{
  vector<int> a={2, 3, 2 ,3 ,5};
  Solution s1;
  s1.frequencyCount(a,5,5);
  
}
