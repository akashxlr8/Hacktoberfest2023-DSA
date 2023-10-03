#include <iostream>
#include <vector>
#include <map>

void printFrequency(const std::vector<int>& nums) {
    // Create a map to store the frequency of each element
    std::map<int, int> frequencyMap;

    // Count the frequency of each element in the nums vector
    for (const int& num : nums) {
        frequencyMap[num]++;
    }

    // Iterate through the map and print the results
    for (const auto& entry : frequencyMap) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
}

int main() {
    // Example usage:
    std::vector<int> nums = {4, 2, 2, 8, 3, 3, 1};
    printFrequency(nums);

    return 0;
}