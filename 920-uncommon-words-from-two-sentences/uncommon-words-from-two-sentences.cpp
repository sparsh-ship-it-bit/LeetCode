class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
     unordered_map<string, int>mp;
    
     stringstream ss(s1);
     string word1;
     
     while(ss>>word1){
        mp[word1]++;
     } 

     stringstream ss2(s2);
     string word2; 

     while(ss2>>word2){
        mp[word2]++;
     } 

     vector<string>result;

     for(auto x : mp){
         if(x.second==1){
            result.push_back(x.first);
          }
     }

     return result;
    }
};