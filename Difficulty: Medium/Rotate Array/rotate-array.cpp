class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
       vector<int> temp(arr.size());
       for(int i=0;i<arr.size();i++){
           temp[i]= arr[(i+d)%arr.size()];
       }
        arr=temp;
    }
};