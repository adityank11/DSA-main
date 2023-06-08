// class Solution {                   Leetcode
// private:
// bool check(int a[26],int b[26])
// {
//   for(int i=0;i<26;i++)
//   {
//       if(a[i]!=b[i]) return false;
//   }
//   return true;
// }
// public:
//     bool checkInclusion(string s1, string s2) {
//         //store freq for string s1
//         int count1[26] = {0}; 
//         for(int i=0;i<s1.length();i++)
//         {
//             int index = s1[i] - 'a';
//             count1[index]++;
//         }
        
//         int i = 0;
//         int count2[26] = {0};
//         int window = s1.length();
        
//         //first window
//         while(i<window && i<s2.length())
//         {
//            int index = s2[i] - 'a';
//            count2[index]++;
//            i++;
//         }
//         if(check(count1,count2)) return true;
        
//         while(i<s2.length())
//         {
//             char newChar = s2[i];
//             int newIndex = newChar - 'a';
//             count2[newIndex]++;

//             char oldChar = s2[i-window];
//             int oldIndex = oldChar - 'a';
//             count2[oldIndex]--;

//             i++;

//             if(check(count1,count2)) return true;
//         }
//         return false;
//     }
// };