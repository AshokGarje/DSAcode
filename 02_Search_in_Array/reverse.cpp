#include<iostream>
using namespace std;

void reverse(int a[], int n){
    int start =0;
    int end = n-1;

    for(start = 0; start<=end; start++,end--){
        swap(a[start],a[end]);
    }
}
int printarray(int a[], int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
        
int main(){
    int a1[6] = {1,2,3,4,5,6};
    int a2[5] = {9,8,7,6,5};

    reverse(a1,6);
    reverse(a2, 5);

    printarray(a1,6);
    printarray(a2,5);
}