//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minCost(vector<int>& arr) {
       priority_queue<int,vector<int>,greater<int>> p;
       for(auto it:arr){
           p.push(it);
       }
       int sum =0;
       while(p.size()>1){
           int x = p.top();
           p.pop();
           int y = p.top();
           p.pop();
           sum += x+y;
           p.push(x+y);
       }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends