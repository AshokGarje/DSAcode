#include<iostream>
#include<cstring>
using namespace std;
class College{
    protected:
        string collegeName;
    public:
        College(){}
        College(string cn){
            collegeName = cn;
        }
        virtual void display(){}
};

class Department : public College{
    protected:
        string departmentName;
        int RollNumber;
    public:
        Department(){}
        Department(string cn, string dn, int rn) : College(cn){
            departmentName = dn;
            RollNumber = rn;
        }
        virtual void display(){
            cout<<"College Name: "<<collegeName<<endl;
            cout<<"Department Name: "<<departmentName<<endl;
            cout<<"Roll Number: "<<RollNumber<<endl;
        }
};

class YearAndDivision : public Department{
    private:
        string className;
    public:
        YearAndDivision(string cn, string dn, string hn, int sc, string Cn) :  Department(cn,dn,sc){
            className = Cn;
        }
        virtual void display(){
            cout<<"College Name: "<<collegeName<<endl;
            cout<<"Department Name: "<<departmentName<<endl;
            cout<<"Class Name: "<<className<<endl;
            cout<<"Roll Number: "<<RollNumber<<endl;
        }
    
};

int main()
{
    // College clg_name("Jspm Rscoe");
    // College * collge_class_pointer;
    // collge_class_pointer = & clg_name;

    // Department dept_name("Rscoe", "Cs","PBK",80);
    // College * collge_class_pointer;
    // collge_class_pointer = & dept_name;
    // collge_class_pointer->display();

    YearAndDivision year_and_div_name("Rscoe", "Cs","PBK",17,"TY-Div B");
    College * collge_class_pointer;
    collge_class_pointer = & year_and_div_name;
    collge_class_pointer->display();
    return 0;
}