#include<iostream>
using namespace std;

bool ISPresent(int arr[][3], int key, int row, int col){
    for(int i =0;i<row;i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int i,j;
        int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    // cout<<"Enter i and j:  ";
    // cin>>i>>j;
    // int arr[i][j];
    // cout<<"Enter Element of Array (i*j number of element) : ";
    // for(int row=0;row<i;row++){
    //     for(int col =0 ;col<j;col++){
    //         cin>>arr[row][col];
    //     }
    // }
    
    cout<<"Array: "<<endl;
    for(int row=0;row<3;row++){
        cout<<endl;
        for(int col =0 ;col<3;col++){
            cout<<arr[row][col]<<"\t";
        }
    }
    cout<<endl;
    int key;
    cout<<"Enter key to check present or not: ";
    cin>>key;
    if(ISPresent(arr, key, 3 ,3)){
     cout<<"key found";
    }
    else{
        cout<<"key not found";
    }
}