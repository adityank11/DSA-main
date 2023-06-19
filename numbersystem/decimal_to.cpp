#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> decimal_to_binary(vector<int> ans,int n)
{
    int rem = 0;
    while(n!=0)
    {
        rem = n%2;
        n = n/2;
        ans.push_back(rem);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> decimal_to_octal(vector<int> ans,int n)
{
    int rem = 0;
    while(n!=0)
    {
        rem = n%8;
        n = n/8;
        ans.push_back(rem);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> ans,ans1;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    ans1 = decimal_to_octal(ans,n);
    for (int i = 0; i<ans1.size(); i++)
    {
       cout<<ans1[i];
    }
    
    return 0;
}