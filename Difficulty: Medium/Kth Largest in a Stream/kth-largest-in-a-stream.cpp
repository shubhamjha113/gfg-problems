//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        vector<int> ans(n,-1);
        priority_queue<int , vector<int>,greater<int>> p;
        for(int i=0;i<n;i++){
            p.push(arr[i]);
            
            
            if (p.size() > k) {  
                 p.pop(); 
            }
            if(p.size() == k){
                ans[i] = p.top();
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> v = ob.kthLargest(k,arr,n);
        for(int i : v)
            cout<<i<<" ";
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends