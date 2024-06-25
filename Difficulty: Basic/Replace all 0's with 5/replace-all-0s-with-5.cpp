//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    int sum=0;
    int value=0;
  while(n!=0)
  {
    int s=n%10;
      if(s==0)
      {
          s=5;
      }
      sum=(sum*10)+s;
      n=n/10;
  }
   while(sum!=0)
  {
      int s=sum%10;
      if(s==0)
      {
          s=5;
      }
      value=(value*10)+s;
      sum=sum/10;
  }
  return value;
}