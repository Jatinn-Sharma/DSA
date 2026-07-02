class Solution {
public:
int firstoc(vector<int>&nums,int target){
    int lo=0,hi=nums.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target){
            if(mid>0 && nums[mid]==nums[mid-1]){
                hi=mid-1;
            }
            else{
                return mid;
            }
        }
        else if(nums[mid]>target){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return -1;
}
int lastoc(vector<int>&nums,int target){
    int lo=0,hi=nums.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target){
            if(mid<nums.size()-1 && nums[mid]==nums[mid+1]){
                lo=mid+1;
            }
            else{
                return mid;
            }
        }
        else if(nums[mid]>target){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return -1;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstoc(nums,target),lastoc(nums,target)};
    }
};