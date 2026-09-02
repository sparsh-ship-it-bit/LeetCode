class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> seen(nums.size() + 1, 0);
        vector<int> ans;

        // Mark numbers that are present
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            seen[x] = 1;
        }

        // Find numbers that are missing
        for (int i = 1; i < seen.size(); i++) {
            if (seen[i] == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};