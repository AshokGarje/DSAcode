// #include<iostream>
// using namespace std;
// bool palindrome(string &s, int start, int end){
//     if(start>=end){
//         return true;
//     }
//     if(s[start]!=s[end]){
//         return false;
//     }
//     palindrome(s, start+1, end-1);

// }
// int main()
// {
//     string s = "madam";
//     int start = 0;
//     int end = s.length()-1;
//     bool result = palindrome(s, start, end);
//     cout<<result;
//     return 0;
// }
#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.empty())
        return 0;
    
    // Initialize the pointer for non-duplicate elements
    int new_index = 1;
    
    // Iterate through the array
    for(int i = 1; i < nums.size(); ++i) {
        // If the current element is different from the previous one,
        // update the next non-duplicate element
        if(nums[i] != nums[i - 1]) {
            nums[new_index] = nums[i];
            new_index++;
        }
    }
    
    return new_index;
}

int main() {
    // Example usage
    vector<int> nums1 = {1, 1, 2};
    cout << removeDuplicates(nums1) << endl; // Output: 2, nums1 becomes [1, 2, _]
    
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << removeDuplicates(nums2) << endl; // Output: 5, nums2 becomes [0, 1, 2, 3, 4, _, _, _, _, _]
    
    return 0;
}
