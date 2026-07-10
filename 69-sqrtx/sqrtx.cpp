class Solution {
public:
    int mySqrt(int x) {
        int lo=0,hi=x,ans=0;
        while(lo<=hi){
            if(x<=1){
                return x;
            }
            int mid=lo+(hi-lo)/2;
            if(mid==x/mid){
                ans=mid;
                return mid;
            }
            else if(mid>x/mid){
                hi=mid-1;
            }
            else {
                ans=mid;
                lo=mid+1;
            }
        }
        return ans;
    }
};