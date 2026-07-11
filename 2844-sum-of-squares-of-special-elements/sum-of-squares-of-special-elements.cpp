class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long long sq=0;
        for(int i=1;i<=nums.size();i++){
            if(nums.size()%i==0){
                sq+=(1LL*nums[i-1]*nums[i-1]);
            }
        }
        return int(sq);
    }
};