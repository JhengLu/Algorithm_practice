//
// Created by Veritas on 3/18/25.
//
#include <iostream>
using namespace std;

void quick_sort(int start, int end, vector<int> &nums){
    int left = start;
    int right = end;
    int target_value = nums[start];
    if (start >= end){
        return ;
    }
    while (left < right){
        while (nums[right] >= target_value && left < right){
            right --;
        }
        swap(nums[right], nums[left]);
        while (nums[left] <= target_value && left < right){
            left ++;
        }
        swap(nums[right], nums[left]);
    }
    nums[right] = target_value;
    quick_sort(start, right - 1, nums);
    quick_sort(right + 1, end, nums);


}

int main(){
//    vector<int> nums = {6,2,3,9,5,8};
    vector<int> nums = {3, 6, 8, 10, 1, 2, 1};
    quick_sort(0, nums.size()-1, nums);
    for (int i = 0; i < nums.size(); i ++){
        cout << nums[i] << " ";
    }
    return 0;

}