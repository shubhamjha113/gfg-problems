//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
bool comp(pair<int,int> a, pair<int,int> b){
        double r1 = (double)a.first / a.second;
        double r2 = (double)b.first / b.second;
        return r1 > r2;
    }
class Solution {
  public:
    
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        double ans = 0.0;
    vector<pair<int, int>> vec;

    for(int i = 0; i < val.size(); i++){
        vec.push_back({val[i], wt[i]});
    }

    sort(vec.begin(), vec.end(), comp);

    for(int i = 0; i < val.size(); i++){
        if(vec[i].second <= capacity){
            ans += vec[i].first;
            capacity -= vec[i].second;
        }
        else {
            ans += ((double)vec[i].first / vec[i].second) * capacity;
            break;
        }
    }

    return ans;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends