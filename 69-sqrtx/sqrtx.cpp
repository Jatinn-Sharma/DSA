class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;
        int lo=0,hi=x,sq=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid==x/mid){
                sq=mid;
                return sq;
            }
            else if(mid>x/mid){
                hi=mid-1;
            }
            else {
                sq=mid;
                lo=mid+1;
            }
        }
        return sq;
    }
};