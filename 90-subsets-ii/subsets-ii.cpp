class Solution {
    void ss(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int i,int n){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        ss(nums,temp,ans,i+1,nums.size());
        temp.pop_back();
        while(i<n-1 && nums[i]==nums[i+1]){
            i++;
        }
        ss(nums,temp,ans,i+1,n);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<vector<int>>ans;
        ss(nums,temp,ans,0,nums.size());
        return ans;
    }
};