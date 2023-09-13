//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        stack<char>st;
        string str;
        for(auto ch:s)
        {
            if(ch=='(')
            {
                if(!st.empty())
                {
                    str+=ch;
                }
                st.push(ch);
            }
            else
            {
                st.pop();
                if(!st.empty())
                {
                    str+=ch;
                }
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends