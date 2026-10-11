class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> rank(26);
        for(int i=0; i < 26; i++){
            rank[order[i]-'a']=i;
        }

        for(int i=0; i<words.size()-1; i++ ){
            string s1 = words[i];
            string s2 = words[i+1];

            if(s1.size()>s2.size()&&s1.substr(0,s2.size())==s2){
                return false;
            }
       

        for(int j=0; j<min(s1.size(), s2.size()); j++){
            if(rank[s1[j]-'a']<rank[s2[j]-'a']){
                break;
            }

            else if(rank[s1[j]-'a']>rank[s2[j]-'a']){
                return false;
            }
        }

        }

        return true;
    }
};