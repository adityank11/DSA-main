#include<iostream>
using namespace std;


void reachHome(int src, int dest)
{
    cout<<"Source: "<<src<<" "<<"Destination: "<<dest;
    cout<<"\n";
    if(src==10) 
    {
        cout<<"pochla";
        return;
    }
    reachHome(src+1,dest);
}


int main()
{
    int dest = 10;
    int src = 0;
    reachHome(0,10);
    return 0;
}