#include<iostream>
#include<vector>
using namespace std;


void print(vector<int> ans)
{
    cout<<"{";
    for (int i = 0; i < ans.size(); i++)
    {
        if(i==ans.size()-1) cout<<ans[i];
        else cout<<ans[i]<<",";
    }
    cout<<"}";
    cout<<"\n";
}

void subsequences(vector<int> &ans,vector<int> &nums,int idx,int n,int curr_sum ,int given_sum)
{
   if(idx>=n)
   {
     if(curr_sum==given_sum)
     {
       print(ans);
     }
     return;
   }
   ans.push_back(nums[idx]); //pick 
   curr_sum+=nums[idx];
   subsequences(ans,nums,idx+1,n,curr_sum,given_sum);
   ans.pop_back();
   curr_sum-=nums[idx];
   // don't pick
   subsequences(ans,nums,idx+1,n,curr_sum,given_sum);
}

int main()
{
    vector<int> ans;
    vector<int> nums = {1,1,2};
    int given_sum = 4;
    int curr_sum = 0;
    int n = nums.size();
    subsequences(ans,nums,0,n,curr_sum,given_sum);
    return 0;
}