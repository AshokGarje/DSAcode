#include<iostream>
#include<vector>
using namespace std;

// void selection_sort(vector<int>& nums){
//   for(int i =0;i<nums.size()-1;i++){
//     int min_Index = i;
//     for(int j =i+1;j<nums.size();j++){
//       if(nums[j]<nums[min_Index]){
//         min_Index = j;
//       }
//     }
//     swap(nums[i],nums[min_Index]);
//   }
// }


// void Insertion_sort(vector<int> &nums)
// {
//   int i, key;
//   for (i = 1; i < nums.size(); i++)
//   {
//     int j = i-1;
//     int key = nums[i];
//     while(j>=0 && nums[j]>key){
//       nums[j+1] = nums[j];
//       j = j - 1;
//     }
//     nums[j+1] = key;
//   }
// }


void bubble_sort(vector<int>& nums){
  for(int i=0;i<nums.size()-1;i++){
    for(int j =0;j<nums.size()-i-1;j++){
      if(nums[j]>nums[j+1]){
        swap(nums[j],nums[j+1]);
      }
      
    }
  }
}


void linear_search(vector<int>& nums){

}
int main()
{
  vector<int> nums = {2,34,54,1,78,33};
  // selection_sort(nums);
  // Insertion_sort(nums);
  bubble_sort(nums);
  for (int num : nums)
  {
    cout << num << " ";
  }
  return 0;
}
