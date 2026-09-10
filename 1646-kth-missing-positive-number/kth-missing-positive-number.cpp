class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>rem;
       int i=1;
       while(rem.size()<1000){
        bool found=false;
        
        for(int j=0; j<arr.size(); j++){
            if(arr[j]==i){
                found=true;
                break;
            }
        }

        if(!found){
            rem.push_back(i);
        }

        i++;
       }

       return rem[k-1];


    }
};