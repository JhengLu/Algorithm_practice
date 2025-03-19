//
// Created by Veritas on 3/9/25.
//
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);

    }

    string build(string c){
        int slowPointer = 0, fastPointer = 0;
        while (fastPointer < c.size()){
            if (c[fastPointer] != '#'){
                c[slowPointer++] = c[fastPointer++];
            }
            else{
                if (slowPointer > 0) slowPointer --;
                fastPointer ++;
            }
        }
        return c.substr(0,slowPointer);
    }
};

int main(){
    cout << "C++ version: " << __cplusplus << endl;


}