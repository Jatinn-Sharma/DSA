class Solution {
    int MOD=1e9+7;
    int t[201][201][201];
    int solve(vector<int>&nums,int idx,int first,int second){
        if(idx==nums.size()){
            bool bothnonempty=(first!=0 && second!=0);
            bool gcdmatch=(first==second);
            return (bothnonempty && gcdmatch) ? 1 : 0;
        }
        if(t[idx][first][second]!=-1){
            return t[idx][first][second];
        }
        int skip=solve(nums,idx+1,first,second);
        int take1=solve(nums,idx+1,__gcd(first,nums[idx]),second);
        int take2=solve(nums,idx+1,first,__gcd(second,nums[idx]));
        return t[idx][first][second] = (0LL+skip+take1+take2)%MOD;
    }
public:
    int subsequencePairCount(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        return solve(nums,0,0,0);  // arr,idx,gcd(1st seq), gcd(2nd seq)
    }
};