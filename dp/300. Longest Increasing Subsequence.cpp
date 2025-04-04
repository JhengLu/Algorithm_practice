//
// Created by Veritas on 4/3/25.
//
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = (int)nums.size();
        if (n==0){
            return 0;
        }
        vector<int>dp (n,0);
        for (int i=0; i<n;i++){
            dp[i] = 1;
            for (int j=0;j<i;j++){
                if (nums[j] < nums[i]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        return *max_element(dp.begin(), dp.end());

    }
};