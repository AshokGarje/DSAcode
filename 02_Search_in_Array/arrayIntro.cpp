#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //declare 
    int number[20];

    //access array 
    cout<<"Value at 10 index: "<<number[10]<<endl;
    
    //initialization an array
    int second[3] = {5, 7, 11};

    //access an element
    cout<<"value at 2 index: "<<second[2]<<endl;

    int third[15] = {2, 1};
    int n =15;
    printarray(third,n);

    //Initialization all location with 0
    int forth[10] = {0};
    n=10;
    printarray(forth, n);

    //Initialization all location with one value
    int fifth[10];
    n =10;
    for(int i=0;i<n;i++){
        fifth[i]=1;
    }
    printarray(fifth, n);

}