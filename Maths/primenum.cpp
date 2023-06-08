#include<iostream>
using namespace std;


bool isPrime(int n)
{
    int k = n-1;
    while(k>1)
    {
        if(n%k==0) return false;
        else k--;
    }
    return true;
}

int main()
{
    int n = 23;
    bool truth_val = isPrime(n);
    if (truth_val)
    {
        cout<<n<<" is a prime number!";
    }
    else
    {
        cout<<n<<" is not a prime number!";
    }
    return 0;
}