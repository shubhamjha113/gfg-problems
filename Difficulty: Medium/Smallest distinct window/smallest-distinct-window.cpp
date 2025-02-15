//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findSubString(string& s) {
        vector<int> count(256,0);
        int first = 0,second=0,diff=0,len = s.size();
        
        while(first<s.size()){
            if(count[s[first]] == 0){
                diff++;
            }
            count[s[first]]++;
            first++;
        }
        
        for(int i=0;i<256;i++){
            count[i] = 0;
        }
        first = 0;
        
        while(second<s.size()){
            while(diff && second<s.size()){
                if(count[s[second]]==0){
                    diff--;
                }
                count[s[second]]++;
                second++;
            }
            len = min(len,second - first);
            
            while(diff !=1){
                len = min(len,second - first);
                count[s[first]]--;
                if(count[s[first]]==0){
                    diff++;
                }
                first++;
            }
        }
        return len;
    }
};

//{ Driver Code Starts.
//   Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends