#include<iostream>
using namespace std;

int binarysearch(int a[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;//mid = start + (end-start)/2 for mid value >int capacity 
    while(start<=end){
        if(a[mid]==key){
            return mid;
        }

        else if(a[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}   //INT_MAX
//     for(int i=0;i<size;i++){
//         int mid = (start+end)/2;
//         if(a[mid]==key){
//             return mid;
//         }
//         else if(a[mid]>key){
//                 end = mid-1;
//         }
//         else
//         start=mid+1;
//     }
//     return -1;

int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(a)/sizeof(a[0]);
    int result = binarysearch(a,size,9);
    if(result==-1){
        cout<<"element not found.";
    }
    else
    cout<<"Element found at index "<<result;
}