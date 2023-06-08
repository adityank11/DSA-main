#include<iostream>
using namespace std;


void wave(int arr[][3])
{
    for(int col=0;col<3;col++)
    {
        if(col%2==0)
        {
          for(int row=0;row<3;row++)
          {
            cout<<arr[row][col]<<" ";
          }
        }
        else
        {
          for(int row=2;row>=0;row--)
          {
            cout<<arr[row][col]<<" ";
          }
        }
    }
}
void print(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"The matrix is: "<<endl;
    print(arr);
    cout<<"Wave traversal of matrix is: "<<endl;
    wave(arr);
    return 0;
}