#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertion_sort(int arr[],int n)
{
   int j;
   for (int i = 0; i < n; i++)
   {
      j=i;
      while(j>0 && arr[j]<arr[j-1])
      {
        swap(arr[j],arr[j-1]);
        j--;
      }
   }
}

int main()
{
    int arr[]={64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(int);
    print(arr,size);
    insertion_sort(arr,size);
    print(arr,size);
    return 0;
}