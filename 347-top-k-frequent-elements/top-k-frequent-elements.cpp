class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        } 

        priority_queue<pair<int,int>>pq;
        for(auto x :count){
            pq.push({x.second,x.first});
        }

        vector<int>ans;

        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};