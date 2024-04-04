#include<iostream>
using namespace std;

/*
    free the memory that is dynamically occupied by object of constructor.  
    Destructor never takes argument nor does it return any value.
*/
int count =0;
class num{
public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for object number"<<count<<endl;
    }

    ~num(){
        cout<<"This is the time when my destructor is called for object number"<<count--<<endl;
    }
};
int main()
{
    cout<<"main function start."<<endl;
    num n1;
    {
        cout<<"entering into block,"<<endl;
        num n2, n3;
        cout<<"Exit from block."<<endl;
    }
    cout<<"Main function ended."<<endl;
    return 0;
}