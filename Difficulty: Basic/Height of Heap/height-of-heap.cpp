//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

// User function Template for C++

class Solution{
public:
    int heapHeight(int N, int arr[]){
        int ans = 0;
        if(N==1) return 1;
        while(N!=1){
            ans++;
            N/=2;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int N;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.heapHeight(N, arr) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 

// } Driver Code Ends