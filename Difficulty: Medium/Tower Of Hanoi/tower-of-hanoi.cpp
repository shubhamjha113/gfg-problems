//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // You need to complete this function

    int towerOfHanoi(int n, int from, int to, int aux) {
        if(n==0) return 0;
        if(n==1){
            //cout<<"move disk" << n <<"from rod" <<from <<"to rod"<<to<<endl;
            return 1;
        }
        //move n-1 disk from "from" to aux with help of "to"
        int count =towerOfHanoi(n-1,from,aux,to);
        
        //cout<<"move disk" << n <<"from rod" <<from <<"to rod"<<to<<endl;
        count++;
        
        //move n-1 disk from "aux" to "to" with help of "from"
        count+=towerOfHanoi(n-1,aux,to,from);
        
        return count;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T; // testcases
    while (T--) {

        int N;
        cin >> N; // taking input N

        // calling toh() function
        Solution ob;

        cout << ob.towerOfHanoi(N, 1, 3, 2) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends