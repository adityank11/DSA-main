// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int s = 0;
//         int e = arr.size()-1;
//         int m = s+ (e-s)/2;
//         while(s<e)
//         {
//            (arr[m]<arr[m+1])? s = m + 1 : e = m;
//            m = s+ (e-s)/2;
//         }

//         return s;     
//     }
// };