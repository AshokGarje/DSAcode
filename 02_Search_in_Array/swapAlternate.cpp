#include<iostream>
using namespace std;

void alternateswap(int a[], int n){
    int start =0;
    //int end = 1;
    // for(start=0,end=1;start<n-1,end<n;start+=2,end+=2){
    //     //for(end=1;end<n;end+=2)
    //         swap(a[start],a[end]);
    // }
    for(start=0;start<n-1;start+=2){
        swap(a[start],a[start+1]);
    }

}
int printarray(int a[], int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a1[10] = {0,1,2,3,4,5,6,7,8,9};
    int a2[5] = {11,4,8,6,9};


    alternateswap(a1,10);
    alternateswap(a2,5);


    printarray(a1,10);
    printarray(a2,5);

}