//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& nums1, vector<int>& nums2, int k) {
        if(nums1.size() > nums2.size()){
            return kthElement(nums2,nums1,k);
        }
        int m= nums1.size();
        int n = nums2.size();
        
        
        
        int s=max(0,k-n);
        int e=min(k,m);
        while(s <= e){
            int i1=(s+e)/2;
            int i2=k-i1;

            int min1 = (i1==m) ? INT_MAX : nums1[i1];
            int max1 = (i1==0) ? INT_MIN : nums1[i1-1];
            int min2 = (i2==n) ? INT_MAX : nums2[i2];
            int max2 = (i2==0) ? INT_MIN : nums2[i2-1];
            
            if(max1 <= min2 && max2 <= min1){
                
                    return max(max1,max2);
            }
            else if(max1> min2){
                e=i1-1;
            }
            else{
                s=i1+1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends