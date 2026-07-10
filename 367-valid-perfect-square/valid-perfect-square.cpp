class Solution {
public:
    bool isPerfectSquare(int num) {
        if(sqrt(num)==int(sqrt(num))){
            return true;
        }
        else return false;
    }
};