// class Solution {
//   public:
//     int findPosition(int n) {
//         // code here
//         int pos = 0, c = 0;
//         while(n!=0)
//         {
//             if(n&1==1)
//             {
//                 c++;
//             }
//             pos++;
//             n = n>>1;
//         }
        
//         if(c==1) return pos;
//         else return -1;
        
//     }
// };