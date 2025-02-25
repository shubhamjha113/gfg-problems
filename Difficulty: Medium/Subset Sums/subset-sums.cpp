//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
private:
void solve(vector<int>& arr,vector<int> &ans,int i,int sum){
    //base case 
    if(i==arr.size()){
        ans.push_back(sum);
        return;
    }
    
    //exclude
    
    solve(arr,ans,i+1,sum+arr[i]);
    solve(arr,ans,i+1,sum);
    
    
    //exclude
    
    
}
    
    
    
  public:
    vector<int> subsetSums(vector<int>& arr) 
    {
        vector<int> ans;
        solve(arr,ans,0,0);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input

    while (t--) {
        vector<int> inputArray;
        string inputLine;

        // Input format: first number n followed by the array elements
        getline(cin, inputLine);
        stringstream inputStream(inputLine);
        int num;
        while (inputStream >> num) {
            inputArray.push_back(num); // Read the array elements from input string
        }

        Solution solutionObject;
        vector<int> result = solutionObject.subsetSums(inputArray);
        sort(result.begin(), result.end());

        for (int i = 0; i < result.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << result[i];
        }
        cout
            << endl
            << "~\n"; // Print results in list format with new line after each test case
    }

    return 0;
}

// } Driver Code Ends