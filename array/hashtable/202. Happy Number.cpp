//
// Created by Veritas on 3/19/25.
//
class Solution {
public:
    int getSum(int n){
        int sum_value = 0;
        while (n !=0){
            int current_value = n % 10;
            sum_value += (n % 10) * (n % 10);
            n /= 10;

        }
        return sum_value;
    }
    bool isHappy(int n) {
        unordered_set <int> num_set;
        int current_num = n;
        while (true){
            current_num = getSum(current_num);
            if (current_num == 1){
                return true;
            }
            else if (num_set.find(current_num) != num_set.end()){
                return false;
            }
            else{
                num_set.insert(current_num);
            }
        }

    }
};