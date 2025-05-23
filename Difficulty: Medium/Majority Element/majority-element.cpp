// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int size = arr.size();
        unordered_map<int,int> mp;
        for(int &n:arr){
            mp[n]++;
        }
        for(auto it:mp){
            if(it.second > (size/2) ){
                return it.first;
            }
        }
        return -1;
    }
};