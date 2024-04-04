#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // static members of class employee.
public:               // by default static/class var initialized by zero.
    void setData()
    {
        cout << "Enter The id: ";
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of employee: " << id << endl;
        //cout << "Employee count: " << count << endl;
    }
    static int getCount(){ // static function only access static members of class.
        cout<<"The Value of count is: "<<count<<endl<<endl;
    }
};
int employee ::count; // default value is zero.
int main()            // static variable share by all object of class                       
{                     // count is static data members of employee.
    employee ashok, more, pravin;

    ashok.setData();
    ashok.getData();
    employee::getCount();

    more.setData();
    more.getData();
    employee::getCount();

    pravin.setData();
    pravin.getData();
    employee::getCount();

    return 0;
}