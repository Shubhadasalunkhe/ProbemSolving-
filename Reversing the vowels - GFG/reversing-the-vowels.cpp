//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    bool isVowel(char &ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'|| ch=='o'||ch=='u')
        {
            return true;
        }
    }
        string modify (string s)
        {
            //code here.
            int n=s.size();
            int i=0;
            int j=n-1;
            while(i<=j)
            {
              
                 if(!isVowel(s[j]))
                {
                    j--;
                }
                else if(!isVowel(s[i]))
                {
                    i++;
                }
                
                else
                {
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
            }
            return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends