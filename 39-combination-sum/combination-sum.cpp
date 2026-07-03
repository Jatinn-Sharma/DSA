class Solution {
    void cs(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int idx,int target){
        if(idx==nums.size() || target<0){
            return;
        }
        if(target==0){
            if(s.find(temp)==s.end()){
                 ans.push_back(temp);
                 s.insert(temp);
            }
            return;
        }
        temp.push_back(nums[idx]);
        cs(nums,temp,ans,idx+1,target-nums[idx]);
        cs(nums,temp,ans,idx,target-nums[idx]);
        temp.pop_back();
        cs(nums,temp,ans,idx+1,target);
    }
public:
    set<vector<int>> s;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        vector<vector<int>>ans;
        cs(nums,temp,ans,0,target);
        return ans;
    }
};