// bool isPossible(vector<int> &stalls, int k,int dist)
// {
//     int cow = 1;
//     int lastpos=stalls[0];
//     for(int i=0;i<stalls.size();i++)
//     {
//         if(stalls[i]-lastpos>=dist)
//         {
//             cow++;
//             if(cow>k) return false;
//             else if(cow==k) return true;
//             lastpos=stalls[i];
//         }
//     }
//     return false;
// }


// int aggressiveCows(vector<int> &stalls, int k)
// {
//     //    Write your code here.
//     sort(begin(stalls),end(stalls));
//     int n = stalls.size();
//     int solution = -1;
//     int low = 0;
//     int high = stalls[n-1];
//     int mid = low + (high-low)/2;
//     while(low<=high)
//     {
//         if(isPossible(stalls,k,mid))
//         {
//             solution = mid;
//             low = mid+1;
//         }
//         else
//         {
//            high = mid-1;
//         }
//        mid = low + (high-low)/2;
//     }
//     return solution;
// }