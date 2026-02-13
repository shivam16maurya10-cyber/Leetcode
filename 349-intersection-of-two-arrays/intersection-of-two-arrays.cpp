class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        for(int i = 0; i < nums1.size(); i++) {
            int element = nums1[i];
            
            for(int j = 0; j < nums2.size(); j++) {
                if(element == nums2[j]) {
                    
                    bool alreadyExists = false;
                    for(int k = 0; k < ans.size(); k++) {
                        if(ans[k] == element) {
                            alreadyExists = true;
                            break;
                        }
                    }
                    
                    if(!alreadyExists) {
                        ans.push_back(element);
                    }
                    break; 
                }
            }
        }
        
        return ans;
    }
};