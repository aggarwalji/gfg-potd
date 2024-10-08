//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int arrSum=0,subArrSum=0,n=arr.size();
        //poore array ka sum
        for(int i=0;i<n;i++){
            arrSum+=arr[i];
        }
        //sub array ka sum *2== arrSum 
        for(int i=0;i<n;i++){
            subArrSum+=arr[i];
            if(subArrSum*2==arrSum) return true;
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends