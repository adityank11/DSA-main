#include<iostream>
using namespace std;
int main()
{
    int n=5;                                    
    int arr[5];
    cout<<"Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // int maxi=0;   T.C O(N^3)
    // for (int i = 0; i < n; i++)
    // {
        
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum=0;
    //         for (int k = i; k <=j; k++)
    //         {
    //             // cout<<arr[k]<<" ";
    //             sum+=arr[k];
    //         }
    //         //  cout<<"\n";
    //        if(maxi < sum)
    //        {
    //          maxi = sum;
    //        }
    //     }
    // }
   int maxi = INT16_MIN;
   for (int i = 0; i < n; i++)
   {
      int sum = 0;
      for (int j = 0; j < n; j++)
      {
         sum+=arr[j];
      }
      maxi = max(sum,maxi);
   }
   

    cout<<maxi;
    return 0;
}