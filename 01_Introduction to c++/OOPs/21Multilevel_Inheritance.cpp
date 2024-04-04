#include<iostream>
using namespace std;
class Student{
    protected:
        int roll_no;
    public:
        void set_roll_no(int);
        void get_roll_no();
};

void Student ::set_roll_no(int r){
    roll_no = r;
}
void Student ::get_roll_no(){
    cout<<"Your roll_no is: "<<roll_no<<endl;
}

class Exam : public Student{
    protected:
        float math_marks;
        float physics_marks;
    public:
        void set_mark(float, float);
        void get_mark();
};
void Exam ::set_mark(float math, float physics){
    math_marks = math;
    physics_marks = physics;
}
void Exam ::get_mark(){
    cout<<"Your Maths marks are: "<<math_marks<<endl;
    cout<<"Your Physics marks are: "<<physics_marks<<endl;
}

class Result : public Exam{
    public:
        void display(){
            get_roll_no();
            get_mark();
            float percentage = (math_marks + physics_marks)/2;
            cout<<"Your percentage are: "<<percentage<<"%"<<endl;
        }
};

int main()
{
    Result prashat;
    prashat.set_roll_no(10);
    prashat.set_mark(95, 92);
    prashat.display();
    return 0;
}