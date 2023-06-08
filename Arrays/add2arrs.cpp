#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



void print(vector<int> arr,int size)
{
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m)
{
    // int size = (m>n)? size=m: size=n;
    vector<int> ans;
	int i = n-1;
	int j = m-1;
    // int k = size-1;
	int cy = 0;
	while(i>=0 || j>=0 || cy==1)
	{
		int s1 = a[i];
		int s2 = b[j];
        if(j<0){s2=0;}
        else if(i<0){s1=0;}
		int sum = s1+s2+cy;
		int fin = sum%10;
		cy = sum/10;
		ans.push_back(fin);
		i--;
		j--;
	}
  reverse(ans.begin(), ans.end());
  return ans;
}


int main()
{
    vector<int> arr1 = {6};
    vector<int> arr2 = {1,2,3,4};
    print(arr1,arr1.size());
    print(arr2,arr2.size());
    vector<int> arr3 = findArraySum(arr1,arr1.size(),arr2,arr2.size());
    print(arr3,arr3.size());
    return 0;
}