class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        long long maxSum = -1;
        long long currSum = 0;
        int start = 0, end = 0, tempStart = 0;
        int s = -1, e = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < 0) {
                currSum = 0;
                tempStart = i + 1;
                continue;
            }

            currSum += arr[i];

            if (currSum > maxSum || (currSum == maxSum && (i - tempStart > e - s))) {
                maxSum = currSum;
                s = tempStart;
                e = i;
            }
        }

        if (s == -1) return {-1};

        vector<int> result;
        for (int i = s; i <= e; i++) {
            result.push_back(arr[i]);
        }
        return result;
    }
};
