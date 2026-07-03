class Solution {
    void comb(vector<int>&temp,vector<vector<int>>&ans,int n,int k){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(n==0){
            return;
        }
        temp.push_back(n);
        comb(temp,ans,n-1,k);
        temp.pop_back();
        comb(temp,ans,n-1,k);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        comb(temp,ans,n,k);
        return ans;
    }
};