
// User function template for C++

class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        int n = mat.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        while(st.size()>1){
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            if(mat[first][second]){
                st.push(second);
            }
            else{
                st.push(first);
            }
        }
        if(st.empty()) return -1;
        int num = st.top();
        st.pop();
        
        for(int i=0;i<n;i++){
            if(i != num && (mat[num][i] || !mat[i][num]) ){
                return -1;
            }
        }
        return num;
        
    }
};