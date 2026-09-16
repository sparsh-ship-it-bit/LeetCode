class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int maxNum = nums[nums.size() - 1];
        int maxSum = 0;

        while(k > 0) {
            maxSum += maxNum;
            maxNum++;
            k--;
        }

        return maxSum;
    }
};