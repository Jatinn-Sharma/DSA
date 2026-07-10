class Solution {
    int firstocc(vector<int>&nums,int target,int lo,int hi){
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                if(mid>0 && nums[mid]==nums[mid-1]){
                    hi=mid-1;
                }
                else return mid;
            }
            else if(nums[mid]>target){
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return -1;
    }
    int lastocc(vector<int>&nums,int target,int lo,int hi){
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                if(mid<hi && nums[mid]==nums[mid+1]){
                    lo=mid+1;
                }
                else return mid;
            }
            else if(nums[mid]>target){
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return -1;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstocc(nums,target,0,nums.size()-1),lastocc(nums,target,0,nums.size()-1)};
    }
};