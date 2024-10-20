//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // Map to hold the values of Roman numerals
        unordered_map<char, int> romanValue = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int total = 0; // Total value of the Roman numeral
        int prevValue = 0; // Previous value to check for subtraction

        // Iterate through each character in the string
        for (char c : str) {
            int currentValue = romanValue[c]; // Get the current value

            // If the current value is greater than the previous value, we have a case of subtraction
            if (currentValue > prevValue) {
                total += currentValue - 2 * prevValue; // Adjust for the previous addition
            } else {
                total += currentValue; // Otherwise, just add the current value
            }

            prevValue = currentValue; // Update previous value to current
        }

        return total; // Return the computed total
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends