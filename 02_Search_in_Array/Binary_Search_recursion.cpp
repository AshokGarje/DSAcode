#include<iostream>
using namespace std;
int is_sorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if (arr[0]>arr[1])
    {
        return false;
    }
    else{
        return is_sorted(arr +1, size-1);
    }
    
}
int sum(int arr[], int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
         return arr[0];
    }
    else{
        return arr[0] + sum(arr + 1, size-1);
    }
}
int Linear_search(int arr[], int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]== key){
        return true;
    }
    else{
        return Linear_search(arr + 1, size-1,key);
    }
}
int Binary_search(int arr[],int s, int e,int key){
   if(s>e){
        return false;
   }
   int mid = s + (e-s)/2;
   if(arr[mid] == key){
        return true;
   }
   if(arr[mid]<key){
        Binary_search(arr, mid +1, e,key);
   }
   else{
        Binary_search(arr, s,  mid-1,key);
   }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<Binary_search(arr,0,size-1,9);
    return 0;
}