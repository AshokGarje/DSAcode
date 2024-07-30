#include<iostream>
#include<vector>
using namespace std;

vector<int> intersectionOfArray(vector<int>& arr1, vector<int>& arr2){
    int arr1size = arr1.size();
    int arr2size = arr2.size();
    vector<int> ans;

    for(int i=0;i<arr2size;i++){
        for(int j=0;j<arr1size;j++){
            if(arr1[j] == arr2[i]){
                ans.push_back(arr1[j]);
                break;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2 = {9,2,3,5,8};

    vector<int> intersection = intersectionOfArray(arr1,arr2);
    for(int i=0;i<intersection.size();i++){
        cout<<intersection[i]<<" ";
    }
    return 0;
}