#include<iostream>
#include<vector>
using namespace std;

int rowsum(int arr[][3],int row)
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
      sum+=arr[row][i];
    }
    return sum;
}
int colsum(int arr[][3],int col)
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
      sum+=arr[i][col];
    }
    return sum;
}

pair<int,int> largestrowsum(int arr[][3])
{
    pair<int,int> p= {INT_MIN,INT_MIN};
    int sum = 0;
    int col;
    for(int row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            sum+=arr[row][col];
        }
        if(sum>p.first)
        {
          p.first = sum;
          p.second = col;
        }
        sum = 0;
    }
    return p;
}



int main()
{
    int arr[3][3]={{1,2,5},{7,15,2},{2,7,5}};
    int total1 = rowsum(arr,0);
    cout<<"Sum of given row: "<<total1<<endl;
    int total2 = colsum(arr,0);
    cout<<"Sum of given column: "<<total2<<endl;
    pair<int,int> large = largestrowsum(arr);
    cout<<"Largest row sum: "<<large.first<<endl;
    cout<<"Row containing that sum: "<<large.second;
    return 0;
}