//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        int maxi=0;
        char ch;
        vector<int> count(26,0);
        for(char c:s){
            count[c-'a']++;
        }
        
        for (int j = 0; j < 26; j++) {
        if (count[j] > maxi) {
            maxi = count[j];
            ch = j + 'a';
        }
    }
        return ch;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends