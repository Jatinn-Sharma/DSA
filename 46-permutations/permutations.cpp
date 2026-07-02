class Solution {
    void nop(vector<int>&nums,vector<vector<int>>&ans,int idx){
        if(idx==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            nop(nums,ans,idx+1);
            swap(nums[i],nums[idx]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        nop(nums,ans,0);
        return ans;
    }
};