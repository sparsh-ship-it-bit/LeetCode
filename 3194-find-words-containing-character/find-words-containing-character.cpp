class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
       unordered_set<int>ans;
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].size(); j++){
                if(words[i][j]==x){
                    
                    ans.insert(i);
                }
            }
        }

        return vector<int>(ans.begin(),ans.end());
    }
};