//
// Created by Veritas on 3/19/25.
//
class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--){
            swap(s[i], s[j]);
        }
    }
};