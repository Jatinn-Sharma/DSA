class Solution {
int ans(int a,int b){
    if(b==0){
        return a;
    }
    return ans(b,a%b);
}
public:
    int findGCD(vector<int>& nums) {
        int mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mn=min(nums[i],mn);
            mx=max(nums[i],mx);
        }
        return ans(mn,mx);
    }
};