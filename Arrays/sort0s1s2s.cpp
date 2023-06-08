#include<iostream>
using namespace std;

void sort_0s_1s_2s(int arr[],int size)
{
  int left = 0,mid = 0, right=size-1;
  while(mid<=right)
  {
    if(arr[mid]==0)
    {
        swap(arr[left],arr[mid]);
        left++;
        mid++;
    }
    else if(arr[mid]==1)
    {
        mid++;
    }
    else
    {
        swap(arr[right],arr[mid]);
        right--;
    }
  }
}

void print(int arr[],int size)
{
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
}

int main()
{
    int arr[] = {2,0,1};
    int size = sizeof(arr)/sizeof(int);
    print(arr,size);
    sort_0s_1s_2s(arr,size);
    print(arr,size);
    return 0;
}