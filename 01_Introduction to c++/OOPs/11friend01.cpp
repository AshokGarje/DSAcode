#include<iostream>
using namespace std;

//class X;
class Y;

class X{
    private:
    int data;
public:
    void setValue(int value){
        data = value;
    }
    friend void add(X , Y);
};

class Y{
    int num;
    friend void add(X, Y );
public:
    void setValue(int value){
        num = value;
    }
    
};

void add(X o1, Y o2){
    cout<<"Summing datas of X and Y objects gives me: "<<o1.data + o2.num;
}
int main()
{
    X a1;
    Y a2;
    a1.setValue(3);
    a2.setValue(5);
    add(a1,a2);
    return 0;
}