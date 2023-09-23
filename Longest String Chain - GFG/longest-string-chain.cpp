//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int t[1001][1001];
   bool isPred(string &prev,string &curr)
   {
       int M=prev.length();
       int N=curr.length();
       int i=0;
       int j=0;
       if(M>=N || N-M!=1)
       {
           return false;
       }
       while(i<M && j<N)
       {
           if(prev[i]==curr[j])
           {
               i++;
               
           }
           j++;
       }
       if(i==M)
       {
           return true;
       }
       return false;
   }
    static bool myFunction(string &word1,string &word2)
    {
        return word1.length()< word2.length();
    }
    int lis(vector<string>&words,int prev,int curr)
    {
        int n=words.size();
        if(curr==n)
        {
            return 0;
        }
        if(prev!=-1 && t[prev][curr]!=-1)
        {
            return t[prev][curr];
        }
        int taken=0,not_taken=0;
        if(prev==-1 || isPred(words[prev],words[curr]))
        {
            taken=1+lis(words,curr,curr+1);
        }
          not_taken=lis(words,prev,curr+1);
          if(prev!=-1)
          {
              t[prev][curr]=max(taken,not_taken);
          }
          return max(taken,not_taken);
    }
    int longestChain(int n, vector<string>& words) {
        // Code here
        memset(t,-1,sizeof(t));
     //int   n=words.size();
        sort(words.begin(),words.end(),myFunction);

        return lis(words,-1,0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> words(N);
        for (int i = 0; i < N; i++) {
            cin >> words[i];
        }
        Solution obj;
        cout << obj.longestChain(N, words) << "\n";
    }
    return 0;
}
// } Driver Code Ends