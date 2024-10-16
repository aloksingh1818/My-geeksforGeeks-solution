//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
        for(int i=0;i<n-1;i=i+2){
            if((arr[i]^arr[i+1])!=0){
                return arr[i];
            }
        }
        return arr[n - 1];
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t, len;
    cin >> t;
    while (t--) {
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.search(len, arr) << '\n';
    }
    return 0;
}

// } Driver Code Ends