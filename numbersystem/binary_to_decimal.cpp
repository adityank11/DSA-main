#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    int n = 0101;
    int i = 0;
    int rem = 0;
    int ans = 0;
    while(n!=0)
    {
      rem = n%10;
      ans = pow(2,i)*rem + ans;
      n = n/10;
      i++;
    }
    cout<<ans;
    return 0;
}
