#include<iostream>
using namespace std;
class baseClass{
    public:
        int varBase;
        void display(){
            cout<<"Displaying base class variable varBase: "<<varBase<<endl;

        }
};

class derivedClass : public baseClass{
    public:
        int varDerived;
        void display(){
            cout<<"Displaying base class variable varBase: "<<varBase<<endl;
            cout<<"Displaying derived class variable varBase: "<<varDerived<<endl;            
        }
};
int main()
{
    baseClass *base_class_pointer;
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->varBase =30;
    base_class_pointer->display();
    obj_base.varBase =90;
    obj_base.display();

    derivedClass *derived_class_pointer = &obj_derived;
    derived_class_pointer->varDerived = 80;
    obj_derived.display();
    derived_class_pointer->display();

    return 0;
}