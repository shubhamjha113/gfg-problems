//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n = a.size() , m=b.size();
        vector<int> ans;
        int i=0,j=0;
        while(i<n && j<m){
            if(i>0 && a[i-1] == a[i]){
                i++;
                continue;
            }
             if(j>0 && b[j-1] == b[j]){
                j++;
                continue;
            }
            if(a[i] == b[j]){
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i] < b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else {
                ans.push_back(b[j]);
                j++;
            }
        }
        
        
        while (i < n) {
      	
      	// Skip duplicate elements in the first array
      	if(i > 0 && a[i - 1] == a[i]) {
            i++;
            continue;
        }
      	ans.push_back(a[i]);
      	i++;
    }
  
  	// Add the remaining elements of b[]
  	while (j < m) {
      
      	// Skip duplicate elements in the second array
      	if(j > 0 && b[j - 1] == b[j]) {
            j++;
            continue;
        }
      	ans.push_back(b[j]);
      	j++;
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends