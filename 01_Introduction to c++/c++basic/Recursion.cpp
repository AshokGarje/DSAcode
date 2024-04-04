#include<iostream>
using namespace std;

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n * fact(n-1);
// }

// int power(int n){
//     if(n==0){
//         return 1;
//     }
//     return 2 * power(n-1);
// }

// int counting(int n){
//     if(n==1){
//         return 1;
//     }
//     return n + counting(n-1);
// }

// int fibbonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int ans = fibbonacci(n-1) + fibbonacci(n-2);
//     return ans;
// }
int saydigit(int n, string arr[]){
    if(n==0){
        return  0;
    }
    int digit = n%10;
    n = n/10; 

    saydigit(n,arr);;;;

    cout<<arr[digit]<<" ";
}
int main()
{
   int n =475;
   string arr[10] = {"zero","one", "two","three","four","five","six","seven","eight","nine"};
   cout<<saydigit(n, arr);
}