//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        for(int left=0, right=n-2, mid = 0; left<=right; )
        {
            mid = (left + right) / 2;;
            
            if(a[mid] == b[mid])
            {
               if(mid == n-2 || a[mid+1] != b[mid+1]) return mid+1;
               else left = mid+1;
            }
            else
            {
                if(mid == 0 || a[mid-1] == b[mid-1]) return mid;
                else right = mid-1;
            }
        }
        
        return n-1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}
// } Driver Code Ends