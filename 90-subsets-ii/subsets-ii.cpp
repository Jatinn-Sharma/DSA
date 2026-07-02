class Solution {
    void uss(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int idx){
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        uss(nums,temp,ans,idx+1);
        temp.pop_back();
        while(idx<nums.size()-1 && nums[idx]==nums[idx+1]){
            idx++;
        }
        uss(nums,temp,ans,idx+1);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<vector<int>> ans;
        uss(nums,temp,ans,0);
        return ans;
    }
};