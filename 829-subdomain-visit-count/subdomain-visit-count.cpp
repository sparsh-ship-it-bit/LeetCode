class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> mp;

        for (string s : cpdomains) {
            stringstream ss(s);

            int count;
            string domain;

            ss >> count >> domain;

          
            mp[domain] += count;

           
            for (int i = 0; i < domain.size(); i++) {
                if (domain[i] == '.') {
                    mp[domain.substr(i + 1)] += count;
                }
            }
        }

        vector<string> ans;

        for (auto& it : mp) {
            ans.push_back(to_string(it.second) + " " + it.first);
        }

        return ans;
    }
};