//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
    
private:
bool isSafe(int x,int y,vector<vector<int>> &mat,vector<vector<int>> visited,int n){
        if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && mat[x][y]==1){
            return true;
        }
        else{
            return false;
        }
}


void solve(vector<vector<int>> &mat,int n,int x,int y,vector<string> &ans,vector<vector<int>> visited,string path){
     //base case
     if(x==n-1 && y==n-1){
         ans.push_back(path);
         return;
     }
     
     visited[x][y]=1;
     
     //4 choices D L R U
     //down
    int newx=x+1;
    int newy=y;
    if(isSafe(newx,newy,mat,visited,n)){
        path.push_back('D');
        solve(mat,n,newx,newy,ans,visited,path);
        path.pop_back();
    }
    
    //left
    newx=x;
    newy=y-1;
    if(isSafe(newx,newy,mat,visited,n)){
        path.push_back('L');
        solve(mat,n,newx,newy,ans,visited,path);
        path.pop_back();
    }
    
    //upper
    newx=x-1;
    newy=y;
    if(isSafe(newx,newy,mat,visited,n)){
        path.push_back('U');
        solve(mat,n,newx,newy,ans,visited,path);
        path.pop_back();
    }
    
    //right
    newx=x;
    newy=y+1;
    if(isSafe(newx,newy,mat,visited,n)){
        path.push_back('R');
        solve(mat,n,newx,newy,ans,visited,path);
        path.pop_back();
    }
    
    
     
     
    visited[x][y]=0;   
}
    


public:
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string> ans;
        int n = mat.size();
        if(mat[0][0]==0) return ans;
        
        int srcx=0,srcy=0;
        vector<vector<int>> visited = mat;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        string path ="";
        solve(mat,n,srcx,srcy,ans,visited,path);
        sort(begin(ans),end(ans));
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends