#include<iostream>
using namespace std;
// void selection_sort(int arr[], int n){
//     for(int i =0; i<n-1;i++){
//         int minIndex = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minIndex])
//             minIndex = j;
//         }
//         swap(arr[i],arr[minIndex]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
void selection_sort(int arr[], int n){
    for(int i = 0;i<n-1;i++){
        int minindex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}
int main(){
    int arr[] = {29,72,98,13,87};
    int size = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, size);
} 