#include<iostream>
using namespace std;

// int fact(int n){
//     //int n;
//     if(n == 1)
//     return 1;
//     else
//     return (n * fact(n-1));
// }
int power(int a, int b){
    int ans =1;
    for(int i=1;i<=b;i++){
        ans = ans * a;
    }
    return ans;
}

int main(){
     int a, b;
     cin>>a>>b;
     //cout<<ans;
     cout<<"Answer is "<<power(a, b)<<endl;
    //cout<<fact(5);
}