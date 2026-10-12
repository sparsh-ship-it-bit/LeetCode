class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, unordered_map<int, int>> mp;
        vector<string> result;

        for (int i = 0; i < words.size(); i++) {
            for (auto c : words[i]) {
                mp[c][i]++;
            }
        }

        for (auto x : mp) {
            int mini = INT_MAX;

            for (int i = 0; i < words.size(); i++) {
                int freq = x.second.count(i) ? x.second.at(i) : 0;
                mini = min(mini, freq);
            }

            while (mini--) {
                result.push_back(string(1, x.first));
            }
        }

        return result;
    }
};