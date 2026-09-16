class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        
        int maxAll = 0;
        for(int i = 0; i < candies.size(); i++) {
            maxAll = max(maxAll, candies[i]);
        }

        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] + extraCandies >= maxAll) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }

        return result;
    }
};