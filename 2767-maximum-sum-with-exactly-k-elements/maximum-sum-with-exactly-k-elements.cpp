class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int maxSum = 0;

        while(k > 0) {
            int n = nums.size();
            int maxNum = 0;

            maxNum = max(maxNum, nums[n-1]);
            maxSum += maxNum;
            nums[n-1] = nums[n-1] + 1;

            k--;
        }

        return maxSum;
    }
};