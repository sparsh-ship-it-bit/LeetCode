class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxNum = 0;

        for(int i = 0; i < nums.size(); i++) {
            maxNum = max(maxNum, nums[i]);
        }

        int maxSum = 0;

        while(k > 0) {
            maxSum += maxNum;
            maxNum++;
            k--;
        }

        return maxSum;
    }
};