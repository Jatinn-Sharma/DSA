class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int val:nums){
            int freq=0;
            for(int ele : nums){
                if(ele==val){
                    freq++;
                }
            }
            if(freq>nums.size()/2){
                return val;
            }
        }
        return -1;
    }
};