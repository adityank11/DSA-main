#include<iostream>
#include<vector>
using namespace std;

int binary_s(vector<int> &arr,int n,int key)
{
    int s = 0;
    int e= n-1;
    int m = s+(e-s)/2;
    while(s<=e)
    {
        if(key==arr[m]) return m;
        else if(key>arr[m]) s = m+1;
        else e = m-1;
        m = s+(e-s)/2;
    }
   return -1;
}



void print(vector<int> arr,int size)
{
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
}

int main()
{
    vector<int> arr1 = {1,2,2,3,4,5};
    print(arr1,arr1.size());
    int k = binary_s(arr1,arr1.size(),4);
    if(k!=-1) cout<<"ELement found at position "<<k+1;
    else cout<<"Element not found";
    return 0;
}