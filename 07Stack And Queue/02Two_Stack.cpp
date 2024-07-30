#include<iostream>
using namespace std;
class Stack{
    int size;
    int top1;
    int *arr;
    int top2;

    public:
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int element){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = element;
        }
        else{
            cout<<"Stack Overflow "<<endl;
        }
    }
    void push2(int element){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop1(){
        if(top1 >= 0){
            top1--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    void pop2(){
        if(top2 < size){
            top2++;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peak1(){
        if(top1 >=0){
            return arr[top1];
        }
        else{
            return -1;
        }
    }
    int peak2(){
        if(top2 < size){
            return arr[top2];
        }
        else{
            return -1;
        }
    }
};
int main()
{
    Stack s(6);
    s.push1(1);
    s.push1(2);
    s.push1(3);
    s.push2(4);
    s.push2(5);
    s.push2(6);
    cout<<s.peak2()<<endl;

    s.pop2();
    cout<<s.peak2()<<endl;
    return 0;
}