#include<iostream>
using namespace std;

//forward declaration
class complex;

class calculator{
public:
    int add(int a, int b){
        cout<<endl;
        return (a + b);  
    }
    int sumRealComplex(complex o1, complex o2);
    int sumImgComplex(complex o1, complex o2);
};

class complex{
    int a, b;
    //friend int calculator ::sumRealComplex(complex o1, complex o2);
    //friend int calculator ::sumImgComplex(complex o1, complex o2);
    friend class calculator; //declare entire class as fried.

public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }

    void printNumber(){
        cout<<"your number is: "<<a<<" + "<<b<<"i"<<endl;
    }    
};

int calculator ::sumRealComplex(complex o1, complex o2){
    cout<<endl;
    return (o1.a + o2.a);
}

int calculator ::sumImgComplex(complex o1, complex o2){
    cout<<endl;
    return (o1.b + o2.b);
}

int main()
{   
    complex o1, o2;
    calculator c;
    o1.setNumber(3, 4);
    o1.printNumber();
    o2.setNumber(1,4);
    o2.printNumber();
    cout<<c.add(7,8);
    cout<<c.sumRealComplex(o1,o2);
    cout<<c.sumImgComplex(o1,o2);
    return 0;
}