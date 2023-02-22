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


int main()
{
	vector<int> a={1,1,1,2,2,3};
	Solution s1;
	cout<<s1.topK(a,2);
}

