#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> rotate_matrix (vector<vector<int>> matrix)
{
    //reverse
    for (int i = 0; i < matrix.size(); i++)
    {
       for (int j = 0; j < matrix[0].size(); j++)
       {
         reverse(matrix[i].begin(),matrix[i].end());
       }
    }
    //transpose
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i+1; j < matrix.size(); j++)
        {
           swap(matrix[i][j],matrix[j][i]);
        }
    }
  return matrix;
}

void print(vector<vector<int>> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    for(int j= 0;j<arr[0].size();j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }
}

int main()
{
  vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
  vector<vector<int>> ans = rotate_matrix(matrix);
  cout<<"Before rotating: ";
  cout<<"\n";
  print(matrix);
  cout<<"After rotating: ";
  cout<<"\n";
  print(ans);
  return 0;
}