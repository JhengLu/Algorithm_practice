//
// Created by Veritas on 3/9/25.
//
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slowPointer = 1, fastPointer = 1;
        while (fastPointer < nums.size()){
            if (nums[fastPointer]!= nums[fastPointer - 1]){
                nums[slowPointer] = nums[fastPointer];
                slowPointer ++;
            }
            fastPointer ++;
        }

        return slowPointer;
    }

};

