// #include <bits/stdc++.h> 
// bool isPossible(vector<int> arr, int n, int m,int mid)
// {
//    int pages = 0;
//    int student_count = 1;
//    for(int i=0;i<n;i++)
//    {
//       if(pages+arr[i]<=mid)
//       {
//         pages+=arr[i];
//       }
//       else
//       {
//         student_count++;
//         if(student_count>m || arr[i]>mid) return false;
//         else
//         {
//           pages = 0;
//           pages+=arr[i];
//           // pages = arr[i];
//         }
//       }
//    }
//    return true;
// }
// int allocateBooks(vector<int> arr, int n, int m) 
// {
//     int s = 0;
//     int solution = -1;
//     for(int i=0;i<n;i++)
//     {
//       s+=arr[i];
//     }
//     int low = 0;
//     int high = s;
//     int mid = low +(high-low)/2;
//     while(low<=high)
//     {
//         if(isPossible(arr,n,m,mid))
//         {
//           solution = mid;
//           high = mid-1;
//         }
//         else
//         {
//           low = mid+1;
//         }
//         mid = low +(high-low)/2;
//     }
//     return solution;
// }