//
// Created by Veritas on 3/19/25.
//
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for (int i = 0; i < strs.size(); i++){
            string current_str = strs[i];
            sort(current_str.begin(), current_str.end());
            mp[current_str].emplace_back(strs[i]);

        }
        for (auto it = mp.begin(); it != mp.end(); it ++){
            ans.emplace_back(it->second);
        }
        return ans;
    }
};