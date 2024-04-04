#include<iostream>
using namespace std;
class complex{ 
    int a, b;
public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    /* 
    1. friend function  not in the scope of class,
       it means friend function is not a member function of class.
    2. It can't call from object of the class.
    3. Can be invoked without the help of the object.
    4. Usualy contain object as argument.
    5. can be declared private or public part of the class.
    6. It can't access the members directed by their names and need object_name.member_name
       to access any member.
    */
    friend complex sumComplex(complex o1, complex o2);
    void printNumber(){
        cout<<"your number is: "<<a<<" + "<<b<<"i"<<endl;
    }
    
};
complex sumComplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1,c2,sum;

    c1.setNumber(1,2);
    c1.printNumber();

    c2.setNumber(3,4);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}