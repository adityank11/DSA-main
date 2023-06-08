
// class Solution {                     Brute-force
// public:
//     vector<int> findDuplicates(vector<int>& nums) 
//     {
//       map<int,int> freq;
//       for(int i=0;i<nums.size();i++)
//       {
//           freq[nums[i]]++;
//       }
//       vector<int> ans;
//       for(auto x: freq)
//       {
//           if(x.second==2) {ans.push_back(x.first);}
//       }
//       return ans;
//     }
// };


// class Solution {                                 Optimized solution
// public:
//   vector<int> findDuplicates(vector<int>& nums) 
//   {
//     vector<int> ans;
//     for(int i= 0; i<nums.size();i++)
//     {
//       if(nums[i]!=(i+1))
//       {
//         while(nums[i]!=nums[nums[i]-1])
//         {
//             swap(nums[i],nums[nums[i]-1]);
//         }
//       }
//     }
//      for(int i = 0; i < nums.size(); i++)
//      {
//       if(i+1!=nums[i])
//         {
//         ans.push_back(nums[i]);
//         }
//       }
//       return ans;
//   }
// };