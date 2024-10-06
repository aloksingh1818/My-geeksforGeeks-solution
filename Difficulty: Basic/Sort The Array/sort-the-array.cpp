//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> sortArr(vector<int> arr) {
        sort(arr.begin(),arr.end());
        return arr;
    }
    
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> v = ob.sortArr(nums);
        for (auto i : v)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends