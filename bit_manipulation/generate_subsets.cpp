#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

vector<vector<int>> subsetsWithDup(vector<int>& v) {
        int n = v.size();
        
        //final ans to return
        vector<vector<int>>ans;
        
        //will need to store only distinct sets
        set<vector<int>>s;
        
        //mask ranges from 0 to (2^n)-1 OR in binary {0000000000} to {111111111}
        for(int mask=0; mask<(1<<n); mask++){
            
            //tmp is a potential subset which might be added to final ans
            vector<int>tmp;
            
            for(int bit=0;bit<n;bit++){
                //get vaue of nth bit in the mask
                bool biton = (1<<bit) & mask;
                
                //if nth bit is set then take the nth element in v and add it to tmp
                if(biton){
                    tmp.push_back(v[bit]);
                }
            }
            
            // since {1,4} and {4,1} are considered same sets
            sort(tmp.begin(),tmp.end()); 
            
            //using c++ set to insert only unique value
            s.insert(tmp); 
        }
        
        //copy all distinct sets to ans
        for(auto vv : s){
            ans.push_back(vv);
        }
        return ans;
    }

int main()
{
    vector<int> sample = {3,4,5};
    vector<vector<int>> ans = subsetsWithDup(sample);
    for (const auto& i : ans) {
        for (int num : i) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}