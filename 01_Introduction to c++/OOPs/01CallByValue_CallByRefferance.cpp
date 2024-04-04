#include<iostream>
using namespace std;
int swapReferance(int &a, int &b){ // call by referance using c++ referance variable    
    int temp = a;
    a = b;
    b = temp; 
}
int swapPointer(int *x, int *y){ // call by referance using pointer
    int temp =*x;
    *x = *y;
    *y =temp;
}
int main()
{
    int a=4, b=5;
    cout<<"Before Swap: "<<a<<" "<<b<<endl;
    swapReferance(a,b);
    //swapPointer(&a, &b);
    cout<<"After Swap: "<<a<<" "<<b;
    return 0;
}