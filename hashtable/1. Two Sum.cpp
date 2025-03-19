//
// Created by Veritas on 3/10/25.
//
#include <vector>
#include <iostream>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            unordered_map<int, int> hashTable;
            for (int i = 0 ; i < nums.size(); i ++){
                auto it = hashTable.find(target - nums[i]);
                if (it != hashTable.end()){
                    return {it->second, i};
                }
                hashTable[nums[i]] = i;

            }
            return {};
        }

};

int main(){
    Solution sol;
    vector<int>nums = {3,2,7,11,15};
    int target = 9;
    vector<int>result;
    result = sol.twoSum(nums,target);
    cout<<result[0] << " " << result[1] << endl;

}
