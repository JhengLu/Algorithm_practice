//
// Created by Veritas on 3/19/25.
//
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set;
        int longestStreak = 0;

        for (const int& num : nums){
            nums_set.insert(num);
        }

        for (const int& num : nums_set){
            if (!nums_set.count(num -1)){
                int currentStreak = 1;
                int currentNum = num;

                while (nums_set.count(currentNum + 1)){
                    currentStreak ++;
                    currentNum ++;
                }
                longestStreak = max(longestStreak, currentStreak);
            }

        }

        return longestStreak;

    }
};