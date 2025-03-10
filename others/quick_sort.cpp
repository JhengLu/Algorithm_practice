//
// Created by Veritas on 3/10/25.
//
#include <vector>
#include <iostream>
using namespace std;

void quick_sort(vector<int> &array, int start, int end){
    if (start >= end){
        return ;
    }
    int mid_value = array[start];
    int left = start;
    int right = end;
    while (left < right){
        while (array[right] >= mid_value && left < right){
            right --;
        }

        swap(array[left],array[right]);
        while (array[left] < mid_value && left < right){
            left ++;
        }
        swap(array[left],array[right]);


    }
    array[left] = mid_value;
    quick_sort(array,start, left -1);
    quick_sort(array, left + 1, end);
}

int main(){
//    vector<int>array = {6,10,4,9};
    vector<int> array = {3, 6, 8, 10, 1, 2, 1};
    quick_sort(array,0,array.size()-1);
    for (int i =0; i < array.size();i++){
        cout<<array[i] <<" ";
    }
    return 0;

}
