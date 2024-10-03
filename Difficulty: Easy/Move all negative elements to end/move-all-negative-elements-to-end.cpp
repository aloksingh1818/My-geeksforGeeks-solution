//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
            vector<int> positive, negative;
            int n=arr.size();
            for(int i=0;i<n;i++){
                if(arr[i]>=0){
                    positive.push_back(arr[i]);
                    
                }
                else{
                    negative.push_back(arr[i]);
                }
            }
            
            int index=0;
            for(int i=0;i<positive.size();i++){
                arr[index++]=positive[i];
            }
            for(int i=0;i<negative.size();i++){
                arr[index++]=negative[i];
            }

        
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
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << endl;
    }
}
// } Driver Code Ends