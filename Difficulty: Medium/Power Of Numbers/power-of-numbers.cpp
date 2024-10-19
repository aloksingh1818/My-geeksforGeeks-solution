//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    const int MOD = 1000000007;
    
    // Function to perform modular exponentiation
    long long power(int N, int R) {
        long long result = 1;
        long long base = N % MOD;
        
        while (R > 0) {
            // If R is odd, multiply the base with the result
            if (R % 2 == 1) {
                result = (result * base) % MOD;
            }
            // Square the base
            base = (base * base) % MOD;
            // Divide R by 2
            R /= 2;
        }
        
        return result;
    }
};

// Helper function to reverse a number
int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends