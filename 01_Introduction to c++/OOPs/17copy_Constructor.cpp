#include<iostream>
using namespace std;

class Number{
    int a;
public:
    Number(){};
    Number(int num){
        a = num;
    }

    // When no copy constructor is found compiler supplies its own copy constructor.
    // copy constructor make a copy of another object.
    
    Number(Number &obj){
        cout<<"Copy constructor called."<<endl;
        a = obj.a;
    }

    void display(){
        cout<<"The Number for this object is "<<a<<endl;
    }
};
int main()
{
    Number n1(5),n4;
    n1.display();

    Number n2(n1);//copy constructor invoked.
    n2.display();

    Number n3 = n1;//copy constructor invoked.
    n3.display();

    n4 = n1;//copy constructor not invoked.
    n4.display();
    return 0;

}