class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string Digits="123456789";
        for(int len=2;len<=9;len++){
            for(int st=0;st+len<=9;st++){
                int num=stoi(Digits.substr(st,len));
                if(num>=low && num<=high){
                    ans.push_back(num);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};