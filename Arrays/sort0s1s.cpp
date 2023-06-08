#include<iostream>
using namespace std;

void sort_0s_1s(int arr[],int size)
{
   int left = 0, right = size-1;
   while(left < right)
   {
      if(arr[left]==0 && left<right)
      {
        left++;
      }
      else if(arr[right]==1 && left<right)
      {
        right--;
      }
      else if(arr[left]==1 && arr[right]==0 && left<right)
      {
        swap(arr[left],arr[right]);
        left++;
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
    int arr[] = {1,0};
    int size = sizeof(arr)/sizeof(int);
    print(arr,size);
    sort_0s_1s(arr,size);
    print(arr,size);
    return 0;
}