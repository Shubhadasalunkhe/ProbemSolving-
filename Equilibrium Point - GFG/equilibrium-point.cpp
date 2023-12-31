//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
         int right_sum=0,left_sum=0,sum=0;
     if(n==1)
     {
         return 1;
     }
     for(int i=0;i<n;i++)
     {
         sum+=a[i];
         
     }
     right_sum=sum;
     for(int i=0;i<n;i++)
     {
         right_sum=right_sum-a[i];
         if(left_sum==right_sum)
         {
             return i+1;
         }
         left_sum=left_sum+a[i];
     }
      return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends