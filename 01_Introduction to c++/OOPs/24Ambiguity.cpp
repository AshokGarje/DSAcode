#include<iostream>
using namespace std;

class base1{
    public:
        void say(){
            cout<<"This is class base1 function."<<endl;
        }        
};
class base2{
    public:
        void say(){
            cout<<"This is class base2 function"<<endl;
        }
};
class derived : public base1, public base2{
    public:
       void greeting(){
         base1 :: say();
       }
};

//Remove Ambiguity method 2
class B{
    public:
        void call(){
            cout<<"this is class C function."<<endl;
        }
};
class D : public B{
    public:
        void call(){
            cout<<"This is class D function and it is override."<<endl;
        }
};
int main()
{
    base1 b1;
    base2 b2;
    derived d1;
    b1.say();
    b2.say();
    d1.greeting();

    B b;
    D d;
    b.call();
    d.call();
    return 0;
}
