#include<iostream>
#include<vector>
using namespace std;

vector<int> merge_2_sorted(vector<int> arr1, vector<int> arr2,int m,int n)
{
    vector<int> arr3;
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j]) {arr3.push_back(arr1[i++]);}
        else if(arr1[i]>arr2[j]) {arr3.push_back(arr2[j++]);}
        else
        {
            arr3.push_back(arr1[i++]);
            arr3.push_back(arr2[j++]);
        }
    }
    while(i<m)
    {
        arr3.push_back(arr1[i++]);
    }
    while(j<n)
    {
        arr3.push_back(arr2[j++]);
    }

    return arr3;
}

vector<int> same_merge(vector<int> nums1,vector<int> nums2, int m, int n) //will work if all elements in array are non-zero
{
    int i=0,j=0;
    while(j<n)
    {
        if(nums2[j]>=nums1[i] && nums1[i]!=0) i++;
        else if(nums2[j]<nums1[i] && nums1[i]!=0) 
        {
            nums1.insert(begin(nums1)+i,nums2[j]);
            j++;
        }
        else if(nums1[i]==0)
        {
            nums1[i] = nums2[j++];
        }
    }
    for(int k=(m+n-1);k>0;k--)
    {
       if(nums1[k]==0) nums1.pop_back();
    }
   return nums1;
}

//best approach

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--; k--;
            }
            else{
                nums1[k] = nums2[j];
                j--; k--;
            }
        }
       while(j>=0){
            nums1[k] = nums2[j];
            j--; k--;
        }
    
    }


void print(vector<int> arr,int size)
{
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
}
// nums1.erase(remove(nums1.begin(), nums1.end(), 0), nums1.end());
int main()
{
    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
    // vector<int> arr3 = merge_2_sorted(arr1,arr2,arr1.size(),arr2.size());
    // print(arr3,arr3.size());
    print(arr1,arr1.size());
    vector<int> arr3 = same_merge(arr1,arr2,arr1.size(),arr2.size());
    print(arr3,arr3.size());
    return 0;
}