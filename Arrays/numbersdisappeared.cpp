// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) 
//     {
//         sort(nums.begin(),nums.end());
//         vector<int> ans;
//         for(int i= 1;i<=nums.size();i++)
//         {
//             if(!binary_search(nums.begin(),nums.end(),i))
//             {
//                 ans.push_back(i);
//             }
//         }

//         return ans;
//     }
// }; or use hashset for(i...){if(!s.count(i)) ans[j] = i;}