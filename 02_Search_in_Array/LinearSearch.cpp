#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,6,7,8,4,69,1,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    //int size;
    // cout<<"Enter size:  ";
    // cin>>size;
    // cout<<"Enter array element: ";
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int key;
    cout<<"Enter key to search: ";
    cin>>key;

    int result = linearsearch(arr,n,key);
    if(result == -1){
        cout<<"Element not found,";
    }
    else
    cout<<"element found at index "<<result;

    
    // bool found = linearsearch(arr,8,key);
    // if(found){
    //     cout<<"Element found ";
    // }
    // else{
    //     cout<<"not found.";
    // }

}