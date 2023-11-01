//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int arr[], int n, int k)
    {
        // Write Your Code here
        sort(arr,arr+n);
        int maxi=0;
        int mini=0;
        int end=n-1;
        int i=0;
        int j=n-1;
        while(i<=end)
        {
            mini+=arr[i];
            i++;
            end-=k;
            
        }
        int start=0;
        while(start<=j){
            maxi+=arr[j];
            j--;
            start+=k;
        }
        return {mini,maxi};
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends