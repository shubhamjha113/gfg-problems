//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
void BST(int arr[],int &index, int N,int lower,int upper){
      if(index==N || arr[index]>upper||arr[index]<lower) return;
      int value = arr[index++];
       BST(arr,index,N,lower,value);
      BST(arr,index,N,value,upper);
}
  
  
    int canRepresentBST(int arr[], int N) {
        int index = 0;
         BST(arr,index,N,INT_MIN,INT_MAX);
         return index==N;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        Solution ob;
        cout << ob.canRepresentBST(arr, N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends