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
    return 0;
}