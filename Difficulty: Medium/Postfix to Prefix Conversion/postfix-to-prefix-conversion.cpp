//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    string postToPre(string post_exp) {
        int n=post_exp.size();
        stack<string> st;
        int i=0;
        while(i<n){
            if((post_exp[i]>='A'&& post_exp[i]<='Z') || (post_exp[i]>='a'&& post_exp[i]<='z') || (post_exp[i]>='0'&& post_exp[i]<='9')){
                st.push(string(1,post_exp[i]));
            }
            else{
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();
                string temp = post_exp[i]+ t2 + t1;
                st.push(temp);
            }
            i++;
        }
        return st.top();
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends