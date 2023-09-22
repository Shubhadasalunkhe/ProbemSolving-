//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
         vector<int> ans;
    int ind = lower_bound(arr,arr+n,x) - arr;
    if(arr[ind]==x && ind!=n)
     ans.push_back(ind);
     else
     ans.push_back(-1);
     
     int ind1 = upper_bound(arr,arr+n,x) - arr;
     ind1--;
     if(arr[ind1]==x && ind1!=n)
     ans.push_back(ind1);
     else
     ans.push_back(-1);
     return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends