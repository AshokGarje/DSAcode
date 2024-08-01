#include<iostream>
#include<vector>
using namespace std;

vector<int> sort(vector<int>& arr,int size){
   
    for(int i=0;i<size-1;i++){
        int minindex =i;
        for(int j = i+1;j<size;j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    return arr;
}

int secondLargest(vector<int>& arr, int size){
    int ans = arr[size -2];
    return ans;
}
int main()
{
    vector<int> arr = {6,5,4,9,8,2};
    int size = arr.size();

    sort(arr, size);
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    cout<<secondLargest(arr, size);

    return 0;
}