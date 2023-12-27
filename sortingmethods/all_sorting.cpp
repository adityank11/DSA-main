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

void bubble_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool did_swap = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
                did_swap = true;
        }
        if(!did_swap) break;
    }
    
}

void selection_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if(arr[mini]>arr[j]) mini = j;
        }
        swap(arr[i],arr[mini]);
    }
    
}

void insertion_sort(int arr[],int n)
{
    int j;
    for (int i = 0; i < n; i++)
    {
       j=i;
       while(j>0 && arr[j-1]>arr[j])
       {
        swap(arr[j],arr[j-1]);
        j--;
       }
    }
}


int main()
{
    int arr[]={64, 25, 12, 22, 11};
    int arr2[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    insertion_sort(arr,size);
    print(arr,size);
    return 0;
}