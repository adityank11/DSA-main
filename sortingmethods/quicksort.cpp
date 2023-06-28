#include<iostream>
#include<vector>
using namespace std;


int partitionIndex(vector<int> &arr,int low, int high)
{
   int pivot = arr[low];
   int i = low;
   int j = high;
   while(i<j)
   {
      while(pivot >= arr[i] && i<high)
      {
        i++;
      }
      while(pivot < arr[j] && j>low)
      {
        j--;
      }
      if(i<j) swap(arr[i],arr[j]);
   }
   swap(arr[low],arr[j]);
   return j;
}

void quickSort(vector<int> &arr,int low, int high)
{
   if(low < high)
   {
     int j = partitionIndex(arr,low,high);
     quickSort(arr,low,j-1);
     quickSort(arr,j+1,high);
   }
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
    quickSort(arr,0,n-1);
    cout<<"\n";
    cout<<"After sorting: "<<"\n";
    print(arr);
    return 0;
}