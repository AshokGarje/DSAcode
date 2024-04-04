#include<iostream>
using namespace std;
// void BubbleSort(int a[], int n){
//         for(int i=0;i<n-1;i++){
//             //for round 1 to n-1 
//             for(int j=0;j<n-1-i;j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);
//             }
//         }
//     }
//     for(int k=0;k<n;k++){
//         cout<<a[k]<<" ";
//     }
// }
void BubbleSort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int k = 0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}
int main(){  
    int arr[] = {29,72,98,13,87,66,52,51,36};
    int size = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, size);
}