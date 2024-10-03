//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        int t1=1,t2=1,nextterm=0;
        if(n==1){
            return 1;
        }
        if(n==2){
            return 1;
            
        }
        for(int i=3;i<=n;i++){
            nextterm=(t1+t2)%1000000007;
            t1=t2;
            t2=nextterm;
        }
        return t2;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends