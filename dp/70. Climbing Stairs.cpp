//
// Created by Veritas on 4/3/25.
//

class Solution {
public:
    int climbStairs(int n) {
        vector<int>result(n+1,0);
        result[0] = 1;
        result[1] = 1;
        for(int i = 2; i<=n;i++){
            result[i] = result[i-1] + result[i-2];
        }
        return result[n];
    }
};
