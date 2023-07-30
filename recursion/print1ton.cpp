#include<iostream>
using namespace std;


void print(int n)
{
    if(n==0) return;
    cout<<n<<"\n";
    print(--n);
}


int main()
{
    int n = 9;
    print(9);
    return 0;
}