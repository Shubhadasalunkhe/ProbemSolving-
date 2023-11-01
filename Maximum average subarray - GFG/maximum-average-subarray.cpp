//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int arr[], int n, int k) {
        // code here
         int sum = 0, max_sum = 0, start = 0, result = 0;
        for(int i = 0; i<n; i++){
            if(i>=k){
                sum+=arr[i];
                sum-=arr[start++];
                if(sum>max_sum){
                    max_sum = sum;
                    result = start;
                }
            }else{
                sum+=arr[i];
                if(i==k-1) max_sum = sum;
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends