class Solution {
    void res(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int k,int target,int idx){
        if(target==0 && temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(target<0 || idx==nums.size()){
            return;
        }
        temp.push_back(nums[idx]);
        res(nums,temp,ans,k,target-nums[idx],idx+1);
        temp.pop_back();
        res(nums,temp,ans,k,target,idx+1);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        for(int i = 1; i <= 9; i++){
            nums.push_back(i);
        }
        vector<int>temp;
        vector<vector<int>>ans;
        res(nums,temp,ans,k,n,0);
        return ans;
    }
};