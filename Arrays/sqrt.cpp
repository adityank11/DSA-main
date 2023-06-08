#include<iostream>
using namespace std;

long long int sqrt(int target)
{
  int s = 0;
  long long int e = target;
  long long int mid = s+(e-s)/2;
  long long int sqroot = -1;
  while(s<=e)
  {
    long long int square = mid*mid;
    if(square==target)
    {
        sqroot = mid;
        return sqroot;
    }
    else if(square<target) 
    {
        sqroot = mid;
        s = mid+1;
    }
    else e = mid-1;
    mid = s+(e-s)/2;
  }
  return sqroot;
}


int main()
{
    int k;
    cout<<"Enter the number you wish to find the square root for: ";
    cin>>k;
    long long int ans = sqrt(k);
    cout<<"The square root of "<<k<<" is "<<ans;
    return 0;
}