class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int maxPop = 0;
        int ans = 1950;

        for (int year = 1950; year <= 2050; year++) {
            int count = 0;

            for (int i = 0; i < logs.size(); i++) {
                if (year >= logs[i][0] && year < logs[i][1]) {
                    count++;
                }
            }

            if (count > maxPop) {
                maxPop = count;
                ans = year;
            }
        }

        return ans;
    }
};