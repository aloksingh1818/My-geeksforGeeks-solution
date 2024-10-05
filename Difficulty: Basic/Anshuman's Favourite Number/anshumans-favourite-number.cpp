//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    string isValid(long long N){
    // If N is divisible by 5 (whether positive or negative), return "Yes"
    if (abs(N) % 5 == 0) {
        return "YES";
    } else {
        return "NO";
    }
}
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.isValid(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends