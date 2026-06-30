class Solution {
int ans(int a,int b){
    if(b==0){
        return a;
    }
    return ans(b,a%b);
}
public:
    int findGCD(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        return ans(mn,mx);
    }
};