//
// Created by Veritas on 3/9/25.
//
#include <vector>
#include <iostream>
using namespace std;

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

int main(){
    cout << "C++ version: " << __cplusplus << endl;
    vector<int> nums = {1, 2, 3};
    Solution sol;
    sol.removeElement(nums, 2);
    for (int i =0;i < nums.size();i++){
        cout<<nums[i] << endl;
    }

}