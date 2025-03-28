//
// Created by Veritas on 3/19/25.
//
#include <iostream>

using namespace std;

#include <vector>
#include <unordered_map>
#include <unordered_set>
struct Person {
    string name;
    int age;
};

int main() {
    // Use -> when accessing a member of an object through a pointer
    Person* p = new Person{"Alice", 25};  // Pointer to a Person object

    cout << p->name << endl;  // ✅ Use -> to access members via pointer
    cout << p->age << endl;

    delete p;  // Free allocated memory

    unordered_map<string, int> mp = {{"Alice", 25}, {"Bob", 30}};
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << ": " << it->second << endl;  // ✅ Using -> for key-value pair
    }

    unordered_set<int> nums_set = {10, 20, 30, 40, 50};
    for (auto it = nums_set.begin(); it != nums_set.end(); it ++){
        cout << *it << " ";
    }
    cout << endl;
    for (const auto& num : nums_set){
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums = {10, 20, 30, 40};

    for (auto it = nums.begin(); it != nums.end(); ++it) {
        int index = distance(nums.begin(), it);  // Get index
        cout << "Index: " << index << ", Value: " << *it << std::endl;
    }


    // Use . when accessing a member of an object directly (not through a pointer)
    Person p1 = {"Alice", 25};
    cout << p1.name << endl;  // ✅ Use . when accessing directly
    cout << p1.age << endl;








    return 0;
}

