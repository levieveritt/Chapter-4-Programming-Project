#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

// update
int main() {
    std::vector<std::string> names = {"Barb", "Sam", "Tom", "Jackie", "Mary", "Paul", "Bill", "Zev"};
    std::sort(names.begin(), names.end());

    std::cout << "Number of students: " << names.size() << std::endl;
    std::cout << "First student: " << names.front() << std::endl;
    std::cout << "Last student: " << names.back() << std::endl;

    return 0;
}