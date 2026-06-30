class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int f=1, ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                f++;
            }
            else {
                f=1;
                ans=nums[i];
            }
            if(f>nums.size()/2){
                return ans;
            }
        }
        return ans;
    }
};