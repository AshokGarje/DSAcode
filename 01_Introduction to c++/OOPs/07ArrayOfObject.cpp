#include<iostream>
using namespace std;
class Employee{
    int id;
    static int salary;
public:
    void setData(){
        cout<<"Enter Id: ";
        cin>>id;
        
    }
    void getData(){
        cout<<"Employee Id is: "<<id<<endl;
        cout<<"salary is: "<<salary<<endl;
        salary = salary + 10000;
    }
};

int Employee :: salary = 50000;
int main()
{
    Employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setData();
        fb[i].getData();
    }
    

    return 0;
}