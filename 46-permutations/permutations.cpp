class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        nop(nums,ans,0,nums.size());
        return ans;
    }
    private:
    void nop(vector<int>&nums,vector<vector<int>>&ans,int idx,int n){
        if(idx==n-1){
            ans.push_back(nums);
        }
        for(int i=idx;i<n;i++){
            swap(nums[i],nums[idx]);
            nop(nums,ans,idx+1,n);
            swap(nums[i],nums[idx]);
        }
    }
};