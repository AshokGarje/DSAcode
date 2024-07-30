#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& arr, int size){
    for(int i=0;i<size-1;i++){
        if(arr[i] + 1 != arr[i+1]){
            return arr[i] + 1;
        }
    }
    return 0;
}
int main()
{
    vector<int> arr = {1,2,3,4,6,7,8,9};
    int size = arr.size();
    int ans = missingNumber(arr, size);
    cout<<ans;
    return 0;
}
