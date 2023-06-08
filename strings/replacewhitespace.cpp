#include<iostream>
using namespace std;
string replaceSpaces(string &str){
	// Write your code here.
	for(int i = 0; i < str.length(); i++)
	{
        if (str[i] ==' ') {
        str.replace(i, 1, "@40"); //para,eters(position,no of chars to replace, what to replce with)
        }
    }
    return str;
}
int main()
{
    string s = "My name is Anna.";
    string k = replaceSpaces(s);
    cout<<k;
    return 0;
}