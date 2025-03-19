//
// Created by Veritas on 3/9/25.
//
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);
        for (int leftPointer = 0, rightPointer = n - 1, ansPointer = n - 1; ansPointer >=0; ansPointer-- ){
            if (nums[leftPointer] + nums[rightPointer] < 0){
                ans[ansPointer] = nums[leftPointer] * nums[leftPointer];
                leftPointer ++;
            }
            else{
                ans[ansPointer] = nums[rightPointer] * nums[rightPointer];
                rightPointer --;
            }
        }
        return ans;
    }
};
