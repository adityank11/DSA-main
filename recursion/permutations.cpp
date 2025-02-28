#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums,vector<vector<int>> &ans,int index)
{
    if(index>=nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index],nums[j]);
        solve(nums,ans,index+1);
        swap(nums[index],nums[j]);
    }
}

int main()
{
    vector<vector<int>> ans;
    int index = 0;
    vector<int> nums = {1,3,5};
    solve(nums,ans,index);
    for(int i=0;i<ans.size();i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout<<ans[i][j] <<" ";
        }
        cout<<"\n";
    }
    return 0;
}
