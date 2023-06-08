#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> arr,int size)
{
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
}


// class Solution {   Brute force solution
// public:
//     void rotate(vector<int>& nums, int k) 
//     {
//         int n = nums.size();
//         k = k % n;
//         while(k>0)
//         {
//             int last = nums[n-1];
//             for(int i=n-1;i>0;i--)
//             {
//                 nums[i]=nums[i-1];
//             }
//             nums[0] = last;
//             k--;
//         }
//     }
// };

 void reverse(vector<int> &nums,int s,int e)   //optimized
    {
     while(s<e)
     {
       swap(nums[s],nums[e]);
       s++;
       e--;
     }
    }
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size(); 
        int s = 0;
        int e = n-1; 
        k = k%n;
        reverse(nums,s,e);
        reverse(nums,s,k-1);
        reverse(nums,k,e);
    }

int main()
{
    vector<int> arr1 = {2,5,6,9,8};
    print(arr1,arr1.size());
    rotate(arr1,7);
    print(arr1,arr1.size());
    return 0;
}