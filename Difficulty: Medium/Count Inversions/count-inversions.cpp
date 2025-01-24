//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int mergeAndCount(vector<int> &arr,int l,int mid,int r){
        int n1 = mid-l+1, n2=r-mid;
        int left[n1],right[n2];
        for(int i=0;i<n1;i++){
            left[i] = arr[l+i];
        }
        for(int i=0;i<n2;i++){
            right[i] = arr[mid +1+i];
        }
        int count =0,i=0,j=0,k=l;
        while(i<n1 && j<n2){
            if(left[i] <= right[j]){
                arr[k] = left[i];
                i++;
            }
            else{
                arr[k] = right[j];
                j++;
                count += n1-i;
            }
            k++;
        }
        while(i<n1){
            arr[k] = left[i];
            i++;k++;
        }
        while(j<n2){
            arr[k] = right[j];
            j++;k++;
        }
        return count;
        
    }
    
    
    int findCount(vector<int> &arr,int l,int r) {
      int count = 0;
       if(l<r){
           int mid = l + (r-l)/2;
           count += findCount(arr,l,mid);
           count += findCount(arr,mid+1 , r);
           count += mergeAndCount(arr, l,mid,r);
           
       }
       return count;
    }
    
    int inversionCount(vector<int> &arr) {
        
        return findCount(arr,0,arr.size()-1);
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends