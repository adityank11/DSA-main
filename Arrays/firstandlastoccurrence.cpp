// #include <bits/stdc++.h> 
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//    pair<int,int> ans(-1,-1);
//    int s = 0;
//    int e = n-1;
//    int m = s+(e-s)/2;
//    int index=-1;
//    while(s<=e)
//    {
//        if(k==arr[m]) 
//        {
//         index=m;
//         e=m-1;
//        }
//        else if(k<arr[m])
//        {
//         e=m-1;
//        }
//        else s = m + 1;
//       m =  s+(e-s)/2;
//    }
//    ans.first = index;
//    ans.second = index;
//    for(int i=index+1;i<n;i++)
//    {
//       if(arr[i]==k) ans.second = i;
//    }
//    return ans;
// }