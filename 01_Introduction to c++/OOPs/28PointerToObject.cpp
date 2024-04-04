#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
public:
    void setData(int i, int j){
        a = i;
        b = j;
    }
    void getData(){
        cout<<"The value of a: "<<a<<endl;
        cout<<"The value of b: "<<b<<endl;
    }
};
int main()
{
    complex c;
    complex *ptr = &c;
    // (*ptr).setData(4, 6); //instead of we can use also
    ptr -> setData(4,6);
    //(*ptr).getData(); // we can also use
    ptr -> getData();

    complex *ptr1 = new complex;
    ptr1 -> setData(9,3);
    ptr1 -> getData();

    complex *ptr2 = new complex[4];
    ptr2 -> setData(2,5);
    ptr2 -> getData();

    return 0;
}