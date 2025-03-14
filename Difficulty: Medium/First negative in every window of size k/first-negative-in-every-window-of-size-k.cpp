//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<k-1;i++){
            if(arr[i]<0)
              q.push(i);
        }
        for(int i=k-1;i<arr.size();i++){
            if(arr[i]<0)
              q.push(i);
            
            if(q.empty())
                ans.push_back(0);
            
            else{
                //cheak if first ele of queue lies inside window
                if(q.front() <= i-k) q.pop();
                
                if(q.empty()){
                ans.push_back(0);
                }
                else{
                   ans.push_back(arr[q.front()]);
                }
            }
                 
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends