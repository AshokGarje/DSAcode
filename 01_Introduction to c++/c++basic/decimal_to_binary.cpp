#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cout<<"enter decimal number:  ";
    // cin>>n;
    // int ans;
    // while(n!=0){
    //    ans = n%2;
    //    n = n/2;
    //    cout<<ans;
    // }

//decimal to binary
// int A[32];
// int n;
// int i =0;
// int cnt = 0;
// cin>>n;

// while(n>0)
// {
//     A[i] = n%2;
//     n = n/2;
//     i++;
//     cnt++;
// }
// for(int j=cnt-1;j>=0;j--)
// {
//     cout<<A[j];
// }

// int n;
// cin>>n;
// int ans = 0;
// int i=0;
// //int bit = n&1;
// while(n!=0){
//     int bit = n&1;
//     ans = bit * pow(10,i)+ans;
//     n = n>>1;
//     i++;
        
// }

// cout<<"answer is "<<ans<<endl;

//binary to decimal
    int n ;
    cin>>n;
    int i =0, ans =0;
    while(n!=0){
        int digit = n%10;
        if(digit==1){
            ans = ans + pow(2, i);

        }
        n = n/10;
        i++;
    }
    cout<<ans<<endl;
}