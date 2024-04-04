#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a;
    // double d = 4.1;
    // double *p = &d;
    // cout<<a<<" "<<ptr<<" "<<*ptr<<" "<<&a;
    // cout<<"\n"<<d<<" "<<p<<" "<<*p<<" "<<&d;
    // cout<<"\nsize of integer: "<<sizeof(a);
    // cout<<"\nSize of pointer: "<<sizeof(ptr);
    // cout<<"\nsize of double: "<<sizeof(d);
    // cout<<"\nSize of double: "<<sizeof(p);

    cout<<a<<endl;
   (*ptr)++;
    cout<<a;//6

    //copy pointer
    int *q = ptr;
    cout<<ptr<<"-"<<q<<endl;
    cout<<*ptr<<"-"<<*q;

    return 0;
}