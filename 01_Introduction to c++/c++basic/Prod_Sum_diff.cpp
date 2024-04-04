#include<iostream>
using namespace std;
int main(){
    int n, diff;
    int product =1;
    int sum = 0;
    cout<<"Enter Number: ";
    cin>>n;
    while(n!=0)
    {
        int digit = n%10;
        product = product * digit;
        sum = sum + digit;
        n = n/10;
    }
    diff = product - sum;
    cout<<"Product of digits: "<<product<<endl;
    cout<<"Sum of digits: "<<sum<<endl;
    cout<<"Diffrance between product and sum: "<<diff<<endl;
}