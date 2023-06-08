#include<iostream>
using namespace std;


int main()
{
    int arr1[3][3],arr2[3][3];
    cout<<"Enter the elements of the array 1: "<<endl;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cin>>arr1[i][j];
      }
    }
    cout<<"Enter the elements of the array 2: "<<endl;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cin>>arr2[i][j];
      }
    }
    cout<<"Sum of elements of the array are: "<<endl;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cout<<arr1[i][j]+arr2[i][j]<<" ";
      }
      cout<<"\n";
    }
    cout<<"Transpose of array 1 is: "<<endl;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cout<<arr1[j][i]<<" ";
      }
      cout<<"\n";
    }

    

    return 0;
}