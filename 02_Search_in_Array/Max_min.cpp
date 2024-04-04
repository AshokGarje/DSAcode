#include<iostream>
using namespace std;

int getmax(int num[], int size){
int maxi = INT32_MIN;
for(int i=0;i<size;i++){
    maxi = max(maxi, num[i]);
    // if(num[i]>max){
    //     max=num[i];
    // }
}
return maxi;
}

int getmin(int num[], int size){
int min = INT32_MAX;
for(int i=0;i<size;i++){
    if(num[i]<min){
        min=num[i];
    }
}
return min;

}
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
   
    int num[100];
    cout<<"Enter Array Element: ";
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"Maximum Element in array: "<<getmax(num, size)<<endl;
    cout<<"Minimum Element in array: "<<getmin(num, size)<<endl;

}