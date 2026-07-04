class Solution {
    void res(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int target,int idx){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0 || idx==nums.size()){
            return;
        }
        temp.push_back(nums[idx]);
        res(nums,temp,ans,target-nums[idx],idx+1);
        temp.pop_back();
        while(idx<nums.size()-1 && nums[idx]==nums[idx+1]){
            idx++;
        }
        res(nums,temp,ans,target,idx+1);
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>ans;
        res(nums,temp,ans,target,0);
        return ans;
    }
};