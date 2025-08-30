class Solution {
  public:
  bool isValid(vector<vector<int>> &mat,int row, int col , int ch){
      for(int i=0;i<9;i++){
          if(mat[row][i]==ch) return false;
          if(mat[i][col]==ch) return false;
          int subRow = 3*(row/3) + i/3;
          int subCol = 3*(col/3) + i%3;
          if(mat[subRow][subCol]==ch) return false;
      }
      return true;
  }
  
    // Function to find a solved Sudoku.
    bool solve(vector<vector<int>> &mat){
        for(int row= 0;row<9;row++){
            for(int col = 0;col<9;col++){
                if(mat[row][col]==0){
                    for(int ch = 1;ch <= 9;ch++){
                        if(isValid(mat, row, col, ch)){
                            mat[row][col]= ch;
                            if(solve(mat)) return true;
                            mat[row][col]=0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<int>> &mat) {
        solve(mat);
    }
};