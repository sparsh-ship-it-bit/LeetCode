class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> rem;

        for(int i = 1; rem.size() < 1000; i++) {
            bool found = false;

            for(int j = 0; j < arr.size(); j++) {
                if(arr[j] == i) {
                    found = true;
                    break;
                }
            }

            if(!found) {
                rem.push_back(i);
            }
        }

        return rem[k - 1];
    }
};