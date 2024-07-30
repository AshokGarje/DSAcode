#include<iostream>
//#include<stack>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;

    public:
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peak(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    // stack<int>s;

    // //push operation
    // s.push(2);
    // s.push(3);

    // //pop operation
    // s.pop();

    // //print top elemet
    // cout<<s.top()<<endl;

    // //empty oeration
    // if(s.empty()){
    //     cout<<"Stack is empty"<<endl;
    // }
    // else{
    //     cout<<"Stack have data."<<endl;
    // }

    // //size function
    // cout<<s.size()<<endl;
    
    //stack Implementation
    int size;
    cout<<"Enter Stack size: "<<endl;
    cin>>size;
    Stack st(size);
    int n;
    cout<<"Enter how many element you want to push into stack(<=stack size): ";
    cin>>n;
    for(int i = 0; i<n;i++){
        int j;
        cout<<"Enter "<<i+1<<" th element: "<<endl;
        cin>>j;
        st.push(j);
    }

    cout<<st.peak()<<endl;
    
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}