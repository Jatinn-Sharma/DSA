class Solution {
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mn = nums[0],mx=nums[nums.size()-1];
        return gcd(mn,mx);
    }
};