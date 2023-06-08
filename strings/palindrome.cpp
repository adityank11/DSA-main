#include<iostream>
using namespace std;
bool checkPalindrome(string s)
{
   int start = 0;
   int end = s.length()-1;
   string n = s;
   while(start<=end)
   {
     
    swap(s[start],s[end]);
    start++;
    end--;
   }
   return s == n;
}

char to_lower(char ch)
{
  char temp;
  if(ch>='a' && ch<='z')
    return ch;
  else
    temp = ch-'A'+'a';
   
  return temp;
}

int main()
{
    string s = "Hello";
    bool check = checkPalindrome("bob");
    cout<<check<<endl;
    cout<<to_lower('c');
    return 0;
}




//CodeStudio Problem
// bool is_alphanumeric(char ch) 
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//         return true;
//     else
//         return false;
// }

// char lower(char ch)
// {
//   char temp;
//   if(ch>='a' && ch<='z')
//     return ch;
//   else
//     temp = ch-'A'+'a';
   
//   return temp;
// }
// bool checkPalindrome(string s)
// {
//    int start = 0;
//    int end = s.length()-1;
 
//    while(start<=end)
//    {
//     while (start < end && !is_alphanumeric(s[start])) 
//     {
//      start++;
//     }
//     while (start < end && !is_alphanumeric(s[end])) 
//     {
//      end--;
//     }
//     if(lower(s[start])==lower(s[end]))
//     {
//          start++;
//          end--;
//     }
//     else
//     {
//       return false;
//     }
     
//    }
//    return true;
// }