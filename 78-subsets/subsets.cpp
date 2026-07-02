class Solution {
public:
    void ss(vector<int>& nums,vector<int>& temp,int idx,vector<vector<int>>&ans){
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        ss(nums,temp,idx+1,ans);
        temp.pop_back();
        ss(nums,temp,idx+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> temp;
        ss(nums,temp,0,ans);
        return ans;
    }
};