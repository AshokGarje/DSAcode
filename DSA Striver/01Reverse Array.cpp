#include<iostream>
using namespace std;
void Reverse(int *arr, int start, int end){
    if(start>=end){
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    return Reverse(arr, start+1,end-1);
}
int main()
{
    int arr[5] = {2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size -1;
    Reverse(arr, start, end);
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}