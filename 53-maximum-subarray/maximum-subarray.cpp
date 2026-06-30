class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0,mxs=INT_MIN;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            mxs=max(s,mxs);
            if(s<0){
                s=0;
            }
        }
        return mxs;
    }
};