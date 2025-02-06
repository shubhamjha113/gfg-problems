//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &nums) {
        int n = nums.size();
    if (n == 0) return 0;

    int maxProduct = nums[0];
    int currentMax = nums[0], currentMin = nums[0];

    for (int i = 1; i < n; ++i) {
        if (nums[i] < 0) swap(currentMax, currentMin);

        currentMax = max(nums[i], currentMax * nums[i]);
        currentMin = min(nums[i], currentMin * nums[i]);

        maxProduct = max(maxProduct, currentMax);
    }

    return maxProduct;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // int n, i;
        // cin >> n;
        // vector<int> arr(n);
        // for (i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }

        vector<int> arr;
        string input;

        // Read array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        auto ans = ob.maxProduct(arr);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends