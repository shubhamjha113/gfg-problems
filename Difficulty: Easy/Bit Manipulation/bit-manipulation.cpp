//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int getIbit(int n,int i){
      return (n &(1<<(i-1)))?1:0;
  }
  
  int setbit(int n,int i){
      return n |(1<<(i-1));
  }
  int clearbit(int n,int i ){
      return n &~(1<<(i-1));
  }
  
    void bitManipulation(int num, int i) {
       cout<<getIbit( num, i)<<" "<<setbit( num, i)<<" "<<clearbit( num, i);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends