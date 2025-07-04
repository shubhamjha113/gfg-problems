class Solution {
  public:
    void dfs(int row,int col,vector<vector<int>>& image,vector<vector<int>>& ans,vector<int> &delRow,vector<int> &delCol,int iniCol,int newCol){
        ans[row][col] = newCol;
        for(int i=0;i<4;i++){
            int nrow = row+delRow[i];
            int ncol = col+delCol[i];
            int n = image.size(),m = image[0].size();
            if(nrow >=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==iniCol && ans[nrow][ncol]!= newCol){
                dfs(nrow,ncol,image,ans,delRow,delCol,iniCol,newCol);
            }
        }

    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        vector<vector<int>> ans = image;
        int iniCol=image[sr][sc];
        vector<int> delRow = {-1,0,1,0};
        vector<int> delCol = {0,1,0,-1};
        dfs(sr,sc,image,ans,delRow,delCol,iniCol,newColor);
        return ans;
        
    }
};