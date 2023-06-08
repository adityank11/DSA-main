#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    string name = "aaabbaa";
    unordered_map<char,int> freq;
    for (int i = 0; i < name.size(); i++)
    {
        freq[name[i]]++;
    }
    cout<<"{ ";
    for (auto &ele: freq)
    {
        cout<<ele.first<<":"<<ele.second<<", ";
    }
    cout<<" }";
    
    
    return 0;
}

//Solution
// class Solution
// {
//     public:
//     //Function to find the maximum occurring character in a string.
//     char getMaxOccuringChar(string str)
//     {
//         // Your code here

//        /* using a map will automatically sort our characters in             lexicographical order */


//         map<char,int> freq; 
//         for(int i=0;i<str.length();i++)
//         {
//             freq[str[i]]++;
//         }
//         int count = -1;
//         char max;
//         for(auto i: freq)
//         {
//           if(i.second>count)
//           {
//              count = i.second;
//              max = i.first;
//           }
//         }
//         return max;
//     }

// };