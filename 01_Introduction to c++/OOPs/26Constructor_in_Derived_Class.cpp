#include <iostream>
using namespace std;
class Base1
{
    int data1;
public:
    Base1(int i){
        data1 = i;
        cout<<"Base1 class constructor called."<<endl;
    }
    void printDataBase1(){
        cout<<"The value of data1: "<<data1<<endl;
    }
};

class Base2
{
    int data2;
public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 class constructor called."<<endl;
    }
    void printDataBase2(){
        cout<<"The value of data2: "<<data2<<endl;
    }
};

class Derived : public Base1, public Base2{
    int derived1,derived2;
public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor called."<<endl;
    }
    void printDataDerived(){
        cout<<"The value of derived data 1 is: "<<derived1<<endl;
        cout<<"The value of derived data 2 is: "<<derived2<<endl;
    }
};

int main()
{
    Derived d(2,5,7,8);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataDerived();
    return 0;
}

/*
    1. We can use constructor in derived classes in c++.
    2. If base class constructor does not have any argument,
        there is no need of any constructor in derived class.
    3. But if that one or more argument in the base class constructor,
        derived class need to pass argument to the base class constructor.
    4. If both base and derived class have constructor, base class constructor
        is executed first.
    5. SPECIAL SYNTAX
        Derived-Constructor(a1,a2,a2,---):Base1-Constructor(a1,a2),
        Base2-Constructor(a3,a4){
            ---
        }Base1-Constructor(a1,a2)
    6. The constructor for virtual base classes are invoked before an
        non-virtual base class.
    7.  If ther are multiple virtual base classes, they are invoked in order declared.
    8. Any non-virtual base class are then constructed before the derived class
        constructed is executed.
*/
