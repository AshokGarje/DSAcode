#include<iostream>
using namespace std;

int fact(int n){
    if(n == 1)
    return 1;
    else
    return (n * fact(n-1));
}

int nCr(int n, int r){
    int num = fact(n);
    int denom = fact(r) * fact(n-r);
    return num/denom;
}

int main(){
    int n, r;
    cout<<"Enter n and r value: ";
    cin>>n>>r;
    cout<<"nCr = "<<nCr(n, r);
}