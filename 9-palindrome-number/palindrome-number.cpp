// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string s = to_string(x);
//         for(int i=0;i<s.length();i++){
//             if(s[i]!=s[s.length()-1-i]){
//                 return false;
//             }
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};