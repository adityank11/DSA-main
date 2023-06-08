#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int arr[]= {10,5,10,15,10,5};
    unordered_map<int,int> count;
    int n= sizeof(arr)/sizeof(arr[0]);
    for (int  i = 0; i < n ; i++)
    {
        count[arr[i]]++;
    }
    for(auto x:count)
    {
      cout<< x.first << " "<<x.second<<endl;
    }
    return 0;
}