#include<iostream>
using namespace std;


void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<"\n";
}


int findpivot(int arr[],int n)
{
    int s = 0;
    int e = n-1;
    int m = s + (e-s)/2;
    while(s<e)
    {
        if(arr[m] >= arr[0]) s = m+1;
        else e = m;
        m = s + (e-s)/2;
    }
    return s;
}


// int findpivot2(int arr[],int n)
// {
//     int s = 0;
//     int e = n-1;
//     int m = s + (e-s)/2;
//     while(s<e)
//     {
        
//         m = s + (e-s)/2;
//     }
//     return s;
// }


int main()
{
  int arr[] = {10,17,3,8,9};
  int size = sizeof(arr)/sizeof(int);
  print(arr,size);
  int n = findpivot(arr,size);
  cout<<"Pivot index of array is "<<n<<" and the pivot element is "<<arr[n];
  return 0;
}