#include<iostream>
using namespace std;

pair<int,int> ls(int arr[3][3],int target)
{
    int row,column;
    pair<int,int> indices = {-1,-1};
    bool found = false;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==target)
            {
                found = true;
                indices.first = i;
                indices.second = j;
                break;
            }
        }
    }
    if(!found) cout<<"Element not found!"<<endl;
    else cout<<"Element found!"<<endl;
    return indices;
}

int main()
{
    int arr[3][3]={{1,2,3},{4,22,6},{7,8,9}};
    pair<int,int> ans = ls(arr,22);
    cout<<"Row index: "<<ans.first<<endl;
    cout<<"Column index: "<<ans.second<<endl;
    return 0;
}