#include<iostream>
using namespace std;

class base1{
    protected:
        int base1Int;
    public:
        void setBase1Int(int a){
            base1Int = a;
        }
};

class base2{
    protected:
        int base2Int = 20;
};

class derived : public base1, public base2{
    public:
        void show(){
            cout<<"The Value of base1: "<<base1Int<<endl;
            cout<<"The value of base2: "<<base2Int<<endl;
            cout<<"the sum of two value is: "<<base1Int + base2Int<<endl;
        }
};
int main()
{
    derived ashok;
    ashok.setBase1Int(10);
    //ashok.setBase2Int(20);
    ashok.show();
    return 0;

}
