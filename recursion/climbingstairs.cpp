#include<iostream>
using namespace std;

int count_stairs(int nStairs)
{
  if(nStairs<0) return 0;
  if (nStairs==0) return 1;
  int ans = count_stairs(nStairs-1) + count_stairs(nStairs-2);
  return ans;
}

int main()
{
    int ans = count_stairs(5);
    cout<<ans;
    return 0;
}