#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(vector<int> &nums, int target)
{
  int start = 0;
  int end = nums.size() - 1;
  int first = -1;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (nums[mid] == target)
    {
      first = mid;
      end = mid - 1;
    }
    else if (nums[mid] < target)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return first;
}

int lastOccurance(vector<int> &nums, int target)
{
  int start = 0;
  int end = nums.size() - 1;
  int last = -1;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (nums[mid] == target)
    {
      last = mid;
      start = mid + 1;
    }
    else if (nums[mid] < target)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return last;
}
int main()
{
  vector<int> nums = {2, 4 ,10, 10, 10 ,10 ,10 ,10, 11 ,12, 14, 14, 17, 19, 19 };
  int target = 10;
  int count = 0;
  int first = firstOccurance(nums, target);
  int last = lastOccurance(nums, target);
  if(first == -1){
    return 0;
  }
  count = last - first +1;
  cout << count;
  return 0;
}