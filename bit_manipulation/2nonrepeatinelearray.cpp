// class Solution
// {
// public:
//     vector<int> singleNumber(vector<int> nums) 
//     {
//         // Code here.
//         vector<int> ans;
//         int k = 0;
//         int n = nums.size();
//         for(int i=0;i<n;i++)
//         {
//             k = k ^ nums[i];
//         }
//         int pos = 0;
//         // check which bit is set
//         while(k)
//         {
//            if(k & 1)
//            {
//                break;
//            }
//            pos++;
//            k = k >> 1;
//         }
//         int xor1 = 0;
//         int xor2 = 0;
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i] & 1<<pos) xor1 = xor1 ^ nums[i];
//             else xor2 = xor2 ^ nums[i];
//         }
//         ans.push_back(xor1);
//         ans.push_back(xor2);
//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };