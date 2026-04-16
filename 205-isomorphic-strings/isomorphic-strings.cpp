class Solution {
public:
        
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};         
        bool isCharsMapped[256] = {0}; 

        
        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i]] == 0 && isCharsMapped[t[i]] == false) {
                hash[s[i]] = t[i];
                isCharsMapped[t[i]] = true;
            }
        }

        
        for (int i = 0; i < s.size(); i++) {
            if (char(hash[s[i]]) != t[i]) {
                return false;
            }
        }

        return true;
    }
};

