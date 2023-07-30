#include<iostream>
using namespace std;

int getlen(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] !='\0'; i++)
    {
       count++;
    }
   return count;  
}

int find_pos(string k)
{
    int num =-1;
    for (int i = 0; i < k.size(); i++)
    {
       num = k.find('a');
    }
    return num;
}

int main()
{
    char name[20];
    // cout<<"Enter name: ";
    // cin>>name;
    // cout<<"Your name is: "<<name<<endl;
    // cout<<"Length: "<<getlen(name);
    string k = "Aditya";
    // k.replace("a","c");
    // cout<<k;
    string s = "di";
    cout<<k.find(s);
    cout<<"\n";
    int n = find_pos(k);
    cout<<n;
    return 0;
}