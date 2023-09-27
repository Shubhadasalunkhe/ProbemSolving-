//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int n,string s) {
           //code here
                      int count1=0;
           int count2=0;
           for(int i=0; i<n; i++){
             if (s[i]=='G'){
              count1++;   
             } 
             if(s[i]=='R'){
                 count2++;
             }
           }
           return min(count1,count2);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}
// } Driver Code Ends