#include<iostream>
using namespace std;

int main()
{
    int n1;
    cout<<"\n";
    cout<<"Enter number: ";
    cin>>n1;
    int n  = n1;
    int ans = 0;
    int count = 0;
    while(n!=0)
    {
      if(n&1) ans += (n1<<count);
      count++;
      n = n>>1;
    }
    cout<<"Square of "<<n1<<" is: "<<ans;
    cout<<"\n";
    cout<<"  ";
    return 0;
}