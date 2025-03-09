//
// Created by Veritas on 3/9/25.
//
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowPointer = 0;
        for (int fastPointer = 0; fastPointer < nums.size(); fastPointer++){
            if (nums[fastPointer]!=val){
                nums[slowPointer++] = nums[fastPointer];
            }
        }
        return slowPointer;
    }
};
