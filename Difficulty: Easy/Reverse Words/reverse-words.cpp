//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Helper function to reverse a portion of the string between indices 'start' and 'end'.
    void reverse(string &str, int start, int end) {
        while (start < end) {
            swap(str[start], str[end]);
            start++;
            end--;
        }
    }

    // Function to reverse words in a given string.
    string reverseWords(string str) {
        int n = str.size();
        
        // Step 1: Reverse the entire string
        reverse(str, 0, n - 1);
        
        // Step 2: Reverse each word in the string
        int start = 0;
        for (int i = 0; i <= n; i++) {
            // If we find a dot or reach the end of the string, reverse the current word
            if (i == n || str[i] == '.') {
                reverse(str, start, i - 1);
                start = i + 1;  // Move the start to the next word
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
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends