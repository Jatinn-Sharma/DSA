class Solution {
    void fp(vector<int>&count,vector<int>&nums,int n){
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
                count.push_back(i);
            }
        }
    }
public:
    vector<int> findPeaks(vector<int>& nums) {
        vector<int>count;
        fp(count,nums,nums.size());
        return count;
    }
};