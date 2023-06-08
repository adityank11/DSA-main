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
int main()
{
    int arr[] = {1,3,2,4,6};
    int size = sizeof(arr)/sizeof(int);
    print(arr,size);
    return 0;
}
