//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        
        int hundreds_digit = n / 100;
        int tens_digit = (n / 10) % 10;
        int units_digit = n % 10;
        
    
    
     int sum_of_cubes = pow(hundreds_digit, 3) + pow(tens_digit, 3) + pow(units_digit, 3);
    
   
    if (sum_of_cubes == n) 
    {
        return "Yes";
    } else {
        return "No";
    }
       
        
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends