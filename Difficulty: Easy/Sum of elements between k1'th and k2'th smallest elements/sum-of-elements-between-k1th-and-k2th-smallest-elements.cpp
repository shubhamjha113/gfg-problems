//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long k1, long long k2)
    {
        priority_queue<long long> p1,p2;
        for(long long i=0;i<k1;i++){
            p1.push(A[i]);
        }
        for(long long i=0;i<k2-1;i++){
            p2.push(A[i]);
        }
        for(long long i = k1;i<N;i++){
            if(A[i] < p1.top()){
                p1.pop();
                p1.push(A[i]);
            }
        }
        
        for(long long i = k2-1;i<N;i++){
            if(A[i] < p2.top()){
                p2.pop();
                p2.push(A[i]);
            }
        }
        
        long long sum =0;
        while(!p2.empty()){
            sum += p2.top();
            p2.pop();
        }
        while(!p1.empty()){
            sum -= p1.top();
            p1.pop();
        }
        return sum;
    }
};


//{ Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends