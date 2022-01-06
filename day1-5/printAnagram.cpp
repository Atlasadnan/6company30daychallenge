// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
        vector<vector<string>>ans;
        vector<string>str2;
        str2=str;
        vector<int>mp(str.size(),0);
        for(int i=0;i<str2.size();i++)
        {
            sort(str2[i].begin(),str2[i].end());
        }
        for(int i=0;i<str.size();i++)
        {
            if(mp[i]==1){
                continue;
            }
            vector<string>temp;
            temp.push_back(str[i]);
            mp[i]=1;
            for(int j=i+1;j<str.size();j++)
            {
                if(str2[j]==str2[i])
                {
                    temp.push_back(str[j]);
                    // cout<<j<<' '<<i<<' '<<str2[i]<<' '<<str2[j]<<endl;
                    mp[j]=1;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends