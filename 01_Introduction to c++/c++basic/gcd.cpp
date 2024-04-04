#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>b){
        gcd(a-b,b);
    }
    else{
        gcd(a,b-a);
    }
}

int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    cout<<"GCD: "<<gcd(a,b);

}