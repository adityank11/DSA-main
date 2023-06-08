#include<iostream>
using namespace std;

void selection_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int key = arr[i];
        int idx = 0;
        for(int j=i+1;j<n;j++)
        {
            if(key>arr[j]) 
            {
                key = arr[j];
                idx = j;
            }
        }
        if(key!=arr[i]) swap(arr[i],arr[idx]);
    }
    
}

void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(int);
    print(arr,size);
    selection_sort(arr,size);
    print(arr,size);
    return 0;
}