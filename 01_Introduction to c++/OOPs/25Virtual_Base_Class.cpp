//Virtual base class is make to avoid ambuguity problem
#include<iostream>
using namespace std;
class Student{
    protected:
        int roll_no;
    public:
        void set_roll_number(int roll_no){
            this -> roll_no = roll_no;
        }
        void print_roll_number(){
            cout<<"Your roll number is: "<<roll_no<<endl;
        }
};

class Exam : virtual public Student{
    protected:
        float m1, m2;
    public:
        void set_marks(float m1, float m2){
            this -> m1 = m1;
            this -> m2 = m2;
        }
        void print_exam_marks(){
            cout<<"Your marks are here:-"
                <<" Mathematics: "<<m1
                <<", Physics: "<<m2<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        int pt;
    public:
        void set_sport_marks(int pt){
            this -> pt = pt;
        }
        void print_sport_marks(){
            cout<<"Your PT marks: "<<pt<<endl;
        }
};

class Result : public Exam, public Sports{
    private:
        float total;
    public:
        void display(){
            total = m1 + m2 + pt;
            print_roll_number();
            print_exam_marks();
            print_sport_marks();
            cout<<"Your total marks are: "<<total<<"/210"<<endl;
        }
};

int main()
{
    Result suraj;
    suraj.set_roll_number(7);
    suraj.set_marks(94.5,94.5);
    suraj.set_sport_marks(10);
    suraj.display();
    return 0;
}