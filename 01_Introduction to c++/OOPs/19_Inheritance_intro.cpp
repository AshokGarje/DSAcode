#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    int salary;
    Employee(int enpid){
        id = enpid;
    }
    void show(){
        cout<<"Employee id is:"<<id<<endl;
        cout<<"Employee salary is: "<<salary<<endl;
    }
    Employee(){}
};

class Programmer : public Employee{
    string name;
public:
    Programmer(string pname, int enpid){
        id = enpid;
        name = pname;
        salary = 54000;
    }
    void show(){
        cout<<"Programmer id is:"<<id<<endl;
        cout<<"Programmer name is: "<<name<<endl;
        cout<<"Programmer salary is: "<<salary<<endl;
    }
    //Programmer(){}
};
int main()
{
    Employee e(1);
    e.salary = 50000;
    e.show();
    Programmer p("Ashok",2);
    p.show();
    return 0;
}

/*
    syntax:
        class derived_class_name : visibility mode base_class_name{
            //program
        }
    Note:-
    1. Default visibility mode is private.
    2. Public visibility mode: public members of base class becomes public members of derived class.
    3. Private visibility mode: public members of base class becomes private members of derived class.
    4. private members becomes never inherited.

    Table:
                            public derivation   private derivation  protected derivation 
    1.  private members       Not Inherited        Not Inherited       Not Inherited
    2.  protected members     protected            private             protected
    3.  public members        public               private             protected
*/