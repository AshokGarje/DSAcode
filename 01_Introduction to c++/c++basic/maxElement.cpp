#include<iostream>
#include<vector>
using namespace std;

int maxElement(vector<int>& arr, int size){
    int max = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    vector<int> arr = {4,6,1,10,8,9,5};
    int size = arr.size();

    int ans = maxElement(arr,size);
    cout<<ans;
    return 0;
}