#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> p;
 p.push_back(1);
 p.push_back(4);
 for (int i = 0; i < p.size(); i++)
 {
    cout<<p[i]<< " ";
 }
//  p.pop_back();
//  for (int i = 0; i < p.size(); i++)
//  {
//     cout<<p[i]<< " ";
//  }
 
 return 0;
}