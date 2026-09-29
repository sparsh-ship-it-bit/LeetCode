class Solution {
public:
    string longestWord(vector<string>& words) {
        unordered_set<string> st;

        for(string word : words) {
            st.insert(word);
        }

        string ans = "";

        for(string word : words) {
            bool isWord = true;

            for(int i = 0; i < word.size(); i++) {
                string prefix = word.substr(0, i + 1);

                if(st.find(prefix) == st.end()) {
                    isWord = false;
                    break;
                }
            }

            if(isWord) {
                if(word.size() > ans.size() ||
                   (word.size() == ans.size() && word < ans)) {
                    ans = word;
                }
            }
        }

        return ans;
    }
};