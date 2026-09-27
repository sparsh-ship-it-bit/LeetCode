class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
        unordered_map<long long, int> mp;

        for(int i = 0; i < wall.size(); i++) {
            long long sum = 0;

            for(int j = 0; j < wall[i].size() - 1; j++) {
                sum += wall[i][j];
                mp[sum]++;
            }
        }

        int mx = 0;

        for(auto x : mp) {
            mx = max(mx, x.second);
        }

        return wall.size() - mx;
    }
};
