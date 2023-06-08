#include<iostream>
using namespace std;

int required_houses(int r, int unit, int arr[],int n)
{
    if(n==0) return -1;
    int amt = r * unit;
    int total = 0;
    int i = 0;
    for(i=0;i<n;i++)
    {
        if(total<amt)
        {
         total+=arr[i];
        }
        else
        {
          break;
        }
    }
    if(total<amt) return 0;
    cout<<total<<endl;
    return i;
}

int main()
{
    int houses[8] = {2,8,3,5,7,4,1,2};
    int ans = required_houses(7,4,houses,8);
    cout<<ans;
    return 0;
}