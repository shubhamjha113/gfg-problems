//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    typedef vector<string> p;
private:

void solve(string output,int index,int n,p &ans){
    //base case
    if(index == n){
        ans.push_back(output);
        return;
    }
    //include 0 in any case 
    solve(output +'0',index +1,n,ans);
    
    //include 1
    if(index ==0 || output.back() =='0'){
        solve(output +'1',index+1,n,ans);
    }
}
    
public:
    vector<string> generateBinaryStrings(int num){
        p ans;
        string output="";
        solve(output,0,num,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends