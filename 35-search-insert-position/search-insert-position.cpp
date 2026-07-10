class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1,idx=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                idx=mid;
                return idx;
            }
            else if(nums[mid]<target){
                idx=mid+1;
                lo=mid+1;
            }
            else {
                idx=mid;
                hi=mid-1;
            }
        }
        return idx;
    }
};