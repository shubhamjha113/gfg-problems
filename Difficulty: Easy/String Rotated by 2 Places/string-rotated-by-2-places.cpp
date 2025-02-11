//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    void rotateCW(string &s1){
        char c = s1[s1.size()-1];
        int index = s1.size()-2;
        while(index >= 0){
            s1[index +1] = s1[index];
            index--;
        }
        s1[0] = c;
    }
    void rotateACW(string &s1){
        char c = s1[0];
        int index = 1;
        while(index < s1.size()){
            s1[index -1] = s1[index];
            index++;
        }
        s1[s1.size()-1] = c;
    }
    
    
    bool isRotated(string& s1, string& s2) {
        string clockwise = s1 , anticlockwise =  s1;
        rotateCW(clockwise);
        rotateCW(clockwise);
        if(clockwise == s2) return 1;
        rotateACW(anticlockwise);
        rotateACW(anticlockwise);
        if(anticlockwise == s2) return 1;
        
        return 0;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends