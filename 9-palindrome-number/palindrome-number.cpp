class Solution {
public:
    bool isPalindrome(int x) {
        int i=0;
        string s=to_string(x);
        int n=s.length();
        int j=n-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};