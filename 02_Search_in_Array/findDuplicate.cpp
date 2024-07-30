#include<iostream>
using namespace std;
int findduplicate(int a[],int n){
    int ans=0;
    for(int i =0; i<n;i++){
        ans=ans^a[i];
    }
     for(int i =1; i<n;i++){
        ans=ans^i;
    }
    return ans;
}
// int findduplicate(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i] == arr[j]){
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
// }
int main(){
    int a[10] = {4,2,1,3,3,6,8};
    cout<<findduplicate(a,7);
   
}