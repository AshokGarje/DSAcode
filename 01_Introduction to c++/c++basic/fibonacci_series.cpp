#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"how many numbers of fibonacci series you want to print: ";
    cin>>n;
    int fn =0, sn =1, sum;
    cout<<fn<<" "<<sn<<" ";
    for(i =0; i<n;i++){
        sum = fn + sn;
        cout<<sum<<" ";
        fn = sn;
        sn = sum;
    }
}