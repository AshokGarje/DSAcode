#include<iostream>
using namespace std;
int getpivot(int arr[], int n){
    int s=0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int binarysearch(int arr[], int s, int e, int key){
    int start = s;
    int end =e;
    int mid = (start+end)/2;//mid = start + (end-start)/2 for mid value >int capacity 
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int search(int arr[], int n, int k)
{
    int pivot = getpivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarysearch(arr, pivot,n-1,k);
    }
    else{
        return binarysearch(arr, 0, pivot-1, k);
    }
}

int main(){
    int a[] = {12,15,18,2,4};
    int size=sizeof(a)/sizeof(a[0]);
    int k = 2;
    cout<<search(a,size,2);
}