class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (k>nums.size()){
            k = k%nums.size();
        }

        reverseArray(nums,0,nums.size()-1);
        reverseArray(nums,0,k-1);
        reverseArray(nums,k,nums.size()-1);
    }

        void reverseArray(vector<int>&nums,int left,int right){
         while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
         }
        }
    
};