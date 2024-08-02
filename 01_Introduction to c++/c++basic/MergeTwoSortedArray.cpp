#include<iostream>
using namespace std;
#include<vector>

vector<int> MergeTwoSortedArray(vector<int>& arr1, vector<int>& arr2){
    vector<int> arr3;
    int i=0, j =0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i] <= arr2[j]){
            arr3.push_back(arr1[i]);
            i++;
        }
        else{
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1.size()){
        arr3.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size()){
        arr3.push_back(arr2[j]);
        j++;
    }
    return arr3;
}
int main()
{
    vector<int> arr1 = {1,3,5,7};
    vector<int> arr2 = {2,4,6,8};
    vector<int> arr3 = MergeTwoSortedArray(arr1,arr2);

    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}