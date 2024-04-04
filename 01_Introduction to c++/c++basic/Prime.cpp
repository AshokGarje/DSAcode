#include<iostream>
using namespace std;

bool prime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int i, n, flag = 0;
    cout<<"Enter number to check whether it is prime or not: ";
    cin>>n;
    if(prime(n)){
        cout<<"number is prime";
    }
    else{
        cout<<"Number is not prime.";
    }
//     if(n<=1){
//         cout<<"not a prime number.";
//     }
//   
//     if(n==2){
//         cout<<" 2 is prime number.";
//     }
//     else{
//        for(i = 2; i<=n/2; i++){
//             if(n%i==0){
//                 cout<<"Number is Not prime.";
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             cout<<"Number is prime.";
//         }
//     }
//     return 0;
}