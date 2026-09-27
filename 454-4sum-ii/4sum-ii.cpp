class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2,
                     vector<int>& nums3, vector<int>& nums4) {

        unordered_map<int, int> mp;

        // Store frequency of every nums1 + nums2 sum
        for (int a : nums1) {
            for (int b : nums2) {
                mp[a + b]++;
            }
        }

        int ans = 0;

        // Find the required opposite sum
        for (int c : nums3) {
            for (int d : nums4) {
                int sum = c + d;

                auto it = mp.find(-sum);

                if (it != mp.end()) {
                    ans += it->second;
                }
            }
        }

        return ans;
    }
};