//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        int n = mat.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        while(st.size()>1){
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            if(mat[first][second] && !mat[second][first]){
                st.push(second);
            }
            else if(!mat[first][second] && mat[second][first]){
                st.push(first);
            }
        }
        if(st.empty()) return -1;
        int num = st.top();
        st.pop();
        int row = 0,col=0;
        for(int i=0;i<n;i++){
            row += mat[num][i];
            col +=mat[i][num];
        }
        return row == 1 && col == n ? num :-1;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends