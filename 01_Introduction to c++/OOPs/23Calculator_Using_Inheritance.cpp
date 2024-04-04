#include<iostream>
#include<math.h>
using namespace std;

class simpleCalculator{
    protected:
        float a;
        float b;
    public:
        void setData1(float a, float b){
            this -> a = a;
            this -> b = b;
        }
        void getData1(){
            cout<<"Addition of a and b is: "<<a + b<<endl;
            cout<<"Substarcton of a and b is: "<<a - b<<endl;
            cout<<"Multiplication of a and b is: "<<a * b<<endl;
            cout<<"Devision of a and b is: "<<a / b<<endl;
        }
};

class scientificCalaculator{
    protected:
        double a;
    public:
        void setData2(double a){
            this -> a = a;
        }
        void getData2(){
            cout<<"squre root of a is : "<<sqrt(a)<<endl;
            cout<<"Log of a is: "<<log(a)<<endl;
            cout<<"Cube of a is: "<<pow(a,3)<<endl;
            cout<<"Sin value of a is(if angle in radian): "<<sin(a)<<endl;
        }
};

class hybridCalculator : public simpleCalculator, public scientificCalaculator{
    public:
        void getData3(){
            int opr;
            cout<<"which operation do you want to perform(simple(1) or scientific(0) or both(10)): ";
            cin>>opr;
            if(opr == 1){
               getData1();
            }
            else if(opr == 0){
                getData2();
            }
            else{
                getData1();
                getData2();
            }
        }
};

int main()
{
    hybridCalculator hybrid;
    hybrid.setData1(16, 4);
    hybrid.setData2(16);
    hybrid.getData3();
    return 0;
}