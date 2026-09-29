class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {

        unordered_map<char, int> alpha;
        
        for(char ch : licensePlate) {
            if(isalpha(ch)) {
                ch = tolower(ch);
                alpha[ch]++;
            }
        }

        string ans = "";
        int minLen = INT_MAX;

        for(string word : words) {

            unordered_map<char, int> mp;

            for(char ch : word) {
                mp[ch]++;
            }

            bool valid = true;

            for(auto x : alpha) {
                if(mp[x.first] < x.second) {
                    valid = false;
                    break;
                }
            }

            if(valid && word.size() < minLen) {
                minLen = word.size();
                ans = word;
            }
        }

        return ans;
    }
};