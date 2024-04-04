#include<iostream>
using namespace std;
int getpivot(int a[],int size){
    int s=0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(a[mid]>=a[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int a[] = {5,6, 7,8,9 ,10, 11, 1, 2 ,3,4};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<getpivot(a,size);
}
