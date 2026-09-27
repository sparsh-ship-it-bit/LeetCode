class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>mp1;
        int sum = 0;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums1.size(); j++){
                sum = nums1[i]+nums2[j];
                mp1[sum]++;
            }
            
        }

        int ans = 0;

        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums1.size(); j++){
                sum = nums3[i]+nums4[j];
                if(mp1.find(-sum)!=mp1.end()){
                   ans+=mp1[-sum];
                }
            }
            
        }

      return ans;

    }
};