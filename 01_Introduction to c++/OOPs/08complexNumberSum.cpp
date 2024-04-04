#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }
    void setDataBySum(complex c1, complex c2){
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void printNumbetr(){
        cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    int a,b,c,d;
    cout<<"Enter first complex number a and b: ";
    cin>>a>>b;

    cout<<"Enter second complex number a and b: ";
    cin>>c>>d;
    cout<<endl;
    
    complex o1,o2,o3;
    o1.setData(a,b);
    o1.printNumbetr();
    
    o2.setData(c, d);
    o2.printNumbetr();

    cout<<"\nAfter Sum ";
    o3.setDataBySum(o1, o2);
    o3.printNumbetr();
    return 0;
}