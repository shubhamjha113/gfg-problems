//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Your code here
    int maxToys(vector<int>& arr, int k) {
       sort(arr.begin(),arr.end());
       int sum=0,count = 0;
       for(int i=0;i<arr.size();i++){
           sum += arr[i];
           if(sum<=k){
               count++;
           }
           if(sum>k){
               break;
           }
       }
       
       return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << ob.maxToys(arr, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends