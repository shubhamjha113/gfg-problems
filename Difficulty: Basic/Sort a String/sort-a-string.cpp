//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    
cout << "~" << "\n";
}
return 0;
}




// } Driver Code Ends


string sort(string s){
    //complete the function here
    // vector<int> count(26,0);
    //     for(int i=0;i<s.size() ; i++){
    //         count[s[i] - 'a']++;
    //     }
    //     string ans;
    //     for(int i=0;i<26;i++){
    //         char c = 'a' + i;
    //         while(count[i]){
    //             ans += c;
    //             count[i]--;
    //         }
    //     }
    //     return ans;
    sort(s.begin(),s.end());
    return s;
}