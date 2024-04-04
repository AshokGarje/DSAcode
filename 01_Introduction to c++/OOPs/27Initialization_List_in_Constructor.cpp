#include<iostream>
using namespace std;

//Syntax
/*
    constructor(argument list) : initialization section{
        //code
    } 
*/
class Test{
    // int a;
    // int b;
    int b;
    int a;
public:
    // Test(int i, int j) : a(i), b(j){
    //Test(int i, int j) : a(i), b(a + j){
    Test(int i, int j) : b(j), a(b + i){
        cout<<"Constructed Executed."<<endl;
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
};
int main()
{
    Test(4,6);
    return 0;
}