class Solution {
public:
    int reverseDegree(string s) {
        vector<int> value(26);

        // a=26, b=25, ..., z=1
        for(int i = 0; i < 26; i++) {
            value[i] = 26 - i;
        }

        int sum = 0;

        for(int i = 0; i < s.size(); i++) {
            int alphabetValue = value[s[i] - 'a'];
            sum += alphabetValue * (i + 1);
        }

        return sum;
    }
};