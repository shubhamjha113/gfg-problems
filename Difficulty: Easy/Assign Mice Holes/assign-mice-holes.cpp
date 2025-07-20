class Solution {
  public:
    int assignMiceHoles(int N, int M[], int H[]) {
        int ans = INT_MIN;
        sort(H, H + N);
        sort(M, M + N);
        for(int i=0;i<N;i++){
            ans=max(ans , abs(H[i]-M[i]));
        }
        return ans;
    }
};