#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    //Creating a constructor
    //Constructor is a special member function with same name as of the class.
    //it is used to initialized the objects of its class.
    //It is automatically invoked whenever an object is created.
    //constructor has no return type
    //default constructor has no parameters taken.
    complex (); //constructor(default) declaration.
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex ::complex(){ // ---> This is default constructor as it takes no parameters. 
    a = 10;
    b = 8;
}
int main()
{
    complex c;
    c.printNumber();
    return 0;
}

/*  
            Characterstic of constructor
    1. It should declare in public section of the class.
    2. They are automatically invoked whenever object is created.
    3. Do not have return types, they cannot return any values
    4. It can have default arguments.
    5. We cannot refer to their address.
*/