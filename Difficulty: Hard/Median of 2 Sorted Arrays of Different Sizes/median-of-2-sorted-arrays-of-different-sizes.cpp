//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    double medianOf2(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
            return medianOf2(nums2,nums1);
        }
        int m= nums1.size();
        int n = nums2.size();
        
        double ans=0.0;
        
        int s=0,e=m;
        while(s <= e){
            int i1=(s+e)/2;
            int i2=(n+m+1)/2-i1;

            int min1 = (i1==m) ? INT_MAX : nums1[i1];
            int max1 = (i1==0) ? INT_MIN : nums1[i1-1];
            int min2 = (i2==n) ? INT_MAX : nums2[i2];
            int max2 = (i2==0) ? INT_MIN : nums2[i2-1];
            
            if(max1 <= min2 && max2 <= min1){
                if((n+m)%2 ==0){
                    ans= (double)(max(max1,max2)+min(min1,min2))/2;
                }
                else{
                    ans= (double)max(max1,max2);
                }
                break;
            }
            else if(max1> min2){
                e=i1-1;
            }
            else{
                s=i1+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after reading `t`

    while (t--) {
        // Read the first array
        string line1;
        getline(cin, line1);
        stringstream ss1(line1);

        vector<int> array1;
        int num;
        while (ss1 >> num) {
            array1.push_back(num);
        }

        // Read the second array
        string line2;
        getline(cin, line2);
        stringstream ss2(line2);

        vector<int> array2;
        while (ss2 >> num) {
            array2.push_back(num);
        }

        // Create a Solution object and calculate the median
        Solution ob;
        if (array2.size() == 1 && array2[0] == 0) {
            array2.pop_back();
        }

        double ans = ob.medianOf2(array1, array2);
        if (ans == (int)ans) {
            cout << (int)ans << endl;
        } else {
            cout << ans << endl;
        }

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends