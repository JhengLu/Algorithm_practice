//
// Created by Veritas on 3/19/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> test = {1,2,3,4};
    for (auto it = test.begin(); it != test.end(); it ++){
        cout << *it << endl;
    }
    int a;
    cout << a + 10 <<endl;
    return 0;
}