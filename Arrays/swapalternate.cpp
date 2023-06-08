#include<iostream>
using namespace std;

void swap_nums(int array[],int size)
{
  for (int i = 0; i < size; i+=2)
  {
    if( i+1 < size) swap(array[i],array[i+1]);
  }
}

void print(int array[],int size)
{
  for (int i = 0; i < size; i++)
  {
    cout<<array[i]<<" ";
  }
 cout<<"\n";
}


int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    print(arr,size);
    swap_nums(arr,size);
    print(arr,size);
}