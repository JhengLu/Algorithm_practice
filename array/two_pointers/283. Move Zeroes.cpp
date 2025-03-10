//
// Created by Veritas on 3/10/25.
//
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slowPointer = 0, fastPointer = 0;
        while (fastPointer < nums.size()){
            if (nums[fastPointer]){
                swap(nums[slowPointer], nums[fastPointer]);
                slowPointer ++;
            }
            fastPointer ++;

        }
        return ;
    }
};