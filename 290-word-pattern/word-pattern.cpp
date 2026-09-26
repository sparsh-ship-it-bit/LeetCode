class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> mp;
        unordered_map<string, char> rev;

        int i = 0;
        int j = 0;

        while (j < s.size()) {

            string word = "";

            // Get one word
            while (j < s.size() && s[j] != ' ') {
                word += s[j];
                j++;
            }

            // More words than pattern characters
            if (i >= pattern.size())
                return false;

            char ch = pattern[i];

            // Check character -> word
            if (mp.find(ch) != mp.end()) {
                if (mp[ch] != word)
                    return false;
            }
            else {
                mp[ch] = word;
            }

            // Check word -> character
            if (rev.find(word) != rev.end()) {
                if (rev[word] != ch)
                    return false;
            }
            else {
                rev[word] = ch;
            }

            i++;

            // Skip space
            if (j < s.size())
                j++;
        }

        // Number of words must equal pattern length
        return i == pattern.size();
    }
};