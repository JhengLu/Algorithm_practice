//
// Created by Veritas on 5/14/25.
//

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        unordered_set<char> occ;
        int maxStr = 0;
        int left = 0;
        for (int right = 0; right < s.size(); right ++){
            while (occ.find(s[right]) != occ.end()){
                occ.erase(s[left]);
                left++;
            }
            occ.insert(s[right]);
            maxStr = max(maxStr, right - left + 1);

        }
        return maxStr;
    }
};