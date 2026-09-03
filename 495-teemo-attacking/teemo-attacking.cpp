class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0;

        for (int i = 1; i < timeSeries.size(); i++) {
            int gap = timeSeries[i] - timeSeries[i - 1];

            if (gap >= duration)
                ans += duration;
            else
                ans += gap;
        }

        ans += duration;

        return ans;
    }
};