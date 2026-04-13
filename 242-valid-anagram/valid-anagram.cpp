class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqtable[256]={0};
        for(int i=0;i<s.size();i++){
            freqtable[s[i]]++;
        }
        int freqtableT[256]={0};
        for(int i=0;i<t.size();i++){
            freqtableT[t[i]]++;
        }

        if(s.size()!=t.size()){
            return false;
        }
        else{
            for(int i=0;i<256;i++){
                if(freqtable[i]!=freqtableT[i]){
                    return false;
                }
            }
            return true;
        }
    }
};