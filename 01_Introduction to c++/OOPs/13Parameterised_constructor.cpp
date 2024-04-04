#include<iostream>
using namespace std;

class complex{
    int a, b;

public:
    complex(int, int);

    void printNumber(){
        cout<<"Your Number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};
complex :: complex(int x, int y){ // parameterised constructor
    a = x;
    b = y;
}
int main()
{
    // complex c(4,6); // Implicit call
    // complex a = complex(5, 7); //Explicit call
    // c.printNumber();
    // a.printNumber();
    Point p(1,1);
    Point q(4,6);
    p.displayPoint();
    q.displayPoint();
    return 0;
}