//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int missingNumber(int n, vector<int>& arr) {
        int missing = n;  // Start with n since one number is missing

        for (int i = 0; i < arr.size(); ++i) {
            // XOR the index (starting from 1) and the number at that index
            missing ^= (i + 1) ^ arr[i];
        }
        
        return missing;
    }
};




        


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> arr[i];
        Solution obj;
        cout << obj.missingNumber(n, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends