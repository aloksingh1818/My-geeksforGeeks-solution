//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        int l=0;
        int h=str.size()-1;
        while(l<=h){
            if(isalpha(str[l]) && isalpha(str[h])){
                swap(str[l],str[h]);
                l++,h--;
            }
            else if(!isalpha(str[l])){
                l++;
            }
            else if(!isalpha(str[h])){
                h--;
            }
        }
        return str;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends