#include <iostream>
#include <math.h>
using namespace std;

int main() {
    pair <int,int> p = {1,4};
    cout<<p.first<<"\n";
    pair <int,pair<int,int>> p1 = {8,{2,5}};
    cout<< p1.first << " ";
    
    pair<int,int> a[] = {{1,4},{3,6}};
    cout<<a[1].first;
    return 0;
}