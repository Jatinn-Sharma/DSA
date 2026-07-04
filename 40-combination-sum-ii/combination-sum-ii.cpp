class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>ans;
        res(nums,temp,ans,target,0);
        return ans;
    }
    private:
    void res(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int target,int idx){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0 || idx==nums.size()){
            return;
        }
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1]){
                continue;
            }
            temp.push_back(nums[i]);
            res(nums,temp,ans,target-nums[i],i+1);
            temp.pop_back();
        }
    }
};