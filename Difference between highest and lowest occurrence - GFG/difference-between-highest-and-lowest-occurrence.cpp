//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int findDiff(int arr[], int n) {
        map<int,int> mp;
      
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        if(mp.size()==1)
        {
            return 0;
        }
        
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(auto it:mp)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
            }
           if(it.second<mini)
            {
                mini=it.second;
            }
        }
        return maxi-mini;
    //     map<int,int> mp;
    //   sort(a,a+n);
    //   int max=INT_MIN;
    //   int min=INT_MAX;
    //   for(int i=0;i<n;i++)
    //   {
    //       mp[a[i]]++;
    //   }
    //   for(auto x:mp)
    //   {
    //       if(x.second>max)
    //       {
    //           max=x.second;
    //       }
    //       if(x.second<min)
    //       {
    //           min=x.second;
    //       }
    //   }
    //   return max-min;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], i;
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.findDiff(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends