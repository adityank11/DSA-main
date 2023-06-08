#include<iostream>
using namespace std;

void print(int arr[],int size)
{
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
}

void reverse(int arr[],int size)
{
    int s = 0;
    int e = size - 1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[] = {2,0,1,4};
    int size = sizeof(arr)/sizeof(int);
    print(arr,size);
    reverse(arr,size);
    print(arr,size);
    return 0;
}