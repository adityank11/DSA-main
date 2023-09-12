#include<iostream>
#include<vector>
using namespace std;

void subarrays(vector<vector<int>> &ans, vector<int> nums)
{
  for (int i = 0; i < nums.size(); i++)
  {
     vector<int> inter;
     for (int j = i; j < nums.size(); j++)
     {
        inter.push_back(nums[j]);
        ans.push_back(inter);
     }
  }
}


int main()
{
    vector<vector<int>> ans;
    vector<int> nums = {1,2,3,4,5};
    subarrays(ans,nums);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
       cout<<"\n"; 
    }
    
    return 0;
}


