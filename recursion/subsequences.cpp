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

void subsequences(vector<int> &ans,vector<int> &nums,int idx,int n)
{
   if(idx>=n)
   {
     print(ans);
     return;
   }
   ans.push_back(nums[idx]);
   subsequences(ans,nums,idx+1,n);
   ans.pop_back(); // backtracking
   subsequences(ans,nums,idx+1,n);
}

int main()
{
    vector<int> ans;
    vector<int> nums = {3,1,2};
    int n = nums.size();
    subsequences(ans,nums,0,n);
    return 0;
}