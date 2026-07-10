class Solution {
    int lb(vector<int>&nums,int target,int lo,int hi){
        int ans=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                ans=mid;
                return ans;
            }
            else if(nums[mid]<target){
                ans=mid+1;
                lo=mid+1;
            }
            else {
                ans=mid;
                hi=mid-1;
            }
        }
        return ans;
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        return lb(nums,target,0,nums.size()-1);
    }
};