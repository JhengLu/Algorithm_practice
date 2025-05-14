//
// Created by Veritas on 4/16/25.
//
//1. Given a recursively defined sequence s_n = {s_{n-1}, n+1, s_{n-1}}, s_0 = {1}, tell me:
//(1) How many terms in s_n; (Just a formula)
//(2) Write a piece of code to get the value of s_n[i], where i in [0, |s_n|-1]
//Note: from the definition of s_n, we get s_1={1,2,1}, s_2={1,2,1,3,1,2,1}, etc.

// s_n = 2 ^(n+1) - 1;

#include <iostream>

using namespace std;

int get_sn_value(int n, int i){
    if (n == 0) return 1;

    int length_left = (1 << n) - 1;

    if (i < length_left){
        return get_sn_value(n - 1, i);
    } else if (i == length_left){
        return n + 1;
    } else {
        return get_sn_value(n - 1, i - length_left - 1);
    }

}

// 问一下学生身份，一周内问一下结果，
int main(){
    int n = 1;
    int total_length = (1 << (n + 1)) - 1;


    for (int i = 0; i < total_length; i++){
        cout<< get_sn_value(n, i) << " ";
    }


    return 0;
}

