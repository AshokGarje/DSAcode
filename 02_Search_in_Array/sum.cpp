#include<iostream>
using namespace std;

int sumofelment(int arr[]){
    int sum =0;
    for(int i=0;i<5;i++){
        sum = sum + arr[i];
    }
    cout<<"sum: "<<sum;
}

int main(){
    int arr[5] = {3, 4, 5, 6, 8};
    sumofelment(arr);
}