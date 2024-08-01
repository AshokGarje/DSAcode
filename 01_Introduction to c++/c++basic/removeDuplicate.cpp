#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) return 0;

    int uniqueIndex = 1; // Start from the second element

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) {
            nums[uniqueIndex] = nums[i];
            uniqueIndex++;
        }
    }

    return uniqueIndex;
}

int main() {
    std::vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    
    int newLength = removeDuplicates(nums);
    
    // Resize the vector to contain only unique elements
    nums.resize(newLength);

    // Print the updated vector
    for (int i = 0; i < newLength; ++i) {
        std::cout << nums[i] << " ";
    }
    
    return 0;
}
