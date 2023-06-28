#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high)
{
   vector<int> temp;
   int left = low;
   int right = mid+1;
   while(left<=mid and right<=high)
   {
     if(arr[left]<=arr[right])
     {
        temp.push_back(arr[left]);
        left++;
     }
     else
     {
        temp.push_back(arr[right]);
        right++;
     }
   }
   while(left<=mid)
   {
     temp.push_back(arr[left]);
     left++;
   }
   while(right<=high)
   {
     temp.push_back(arr[right]);
     right++;
   }
   for (int i = low; i <=high; i++)
   {
      arr[i] = temp[i-low];
   }
}


void mergeSort(vector<int> &arr,int low,int high)
{
    if(high==low) return;
    int mid = low +(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr = {3,4,2,8,6,5};
    cout<<"Before sorting: "<<"\n";
    print(arr);
    int n = arr.size();
    mergeSort(arr,0,n-1);
    cout<<"\n";
    cout<<"After sorting: "<<"\n";
    print(arr);
    return 0;
}