#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>arr1,vector<int>arr2,vector<int>arr3){
     int i = 0,j =0,k =0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    // while(i<arr1.size()){
    //     arr3[k] = arr1[i];
    //     i++;
    //     k++; 
    // }
    // while(j<arr2.size()){
    //     arr3[k] = arr2[j];
    //     j++;
    //     k++; 
    // }

    for(int k :arr3){
        cout<<arr3[k]<<" ";
    }

}
    
int main(){
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;

    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(7);

    arr2.push_back(2);
    arr2.push_back(4);
    arr2.push_back(6);
    arr2.push_back(8);

    merge(arr1,arr2,arr3);
}
