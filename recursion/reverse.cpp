#include<iostream>
using namespace std;

void reverse(string &s1,int s, int e)
{
//    int s = 0;
//    int e = s1.size()-1;
//    while(s<=e)
//    {
//     swap(s1[s],s1[e]);
//     s++;
//     e--;
//    }
    if(s>=e) return;
    swap(s1[s],s1[e]);
    s++;
    e--;
    reverse(s1,s,e);
}

int main()
{
    string s1 = "hello";
    cout<<s1<<"\n";
    int s = 0;
    int e = s1.size()-1;
    reverse(s1,s,e);
    cout<<s1;
    return 0;
}