class Solution {
    void ss(vector<int>&nums,vector<int>&temp,int i,vector<vector<int>>&ans){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        ss(nums,temp,i+1,ans);

        temp.pop_back();
        ss(nums,temp,i+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        ss(nums,temp,0,ans);
        return ans;
    }
};
