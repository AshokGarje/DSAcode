#include<iostream>
using namespace std;
int main(){
    // float a, b;
    // char op;
    // cout<<"Enter a and b: ";
    // cin>>a>>b;
    // cout<<"\nEnter Operation(+, -, *, /): ";
    // cin>>op;
    // switch(op){
    //     case '+':
    //     cout<<"a + b = "<<(a+b)<<endl;
    //     break;

    //     case '-':
    //     cout<<"a - b = "<<(a-b)<<endl;
    //     break;

    //     case '*':
    //     cout<<"a * b = "<<(a*b)<<endl;
    //     break;

    //     case '/':
    //     cout<<"a / b = "<<(a/b)<<endl;
    //     break;

    //     default:
    //     cout<<"Invalid operation.";
    // }

    int amount = 1330;
    int note, notes;
    cout<<"Enter note(100, 50, 20, 10): ";
    cin>>note;
    switch(note){
        case 100:
        notes = amount/100;
        cout<<"100 Rupees notes: "<<notes<<endl;
        amount = amount%100;

        case 50:
        notes = amount/50;
        cout<<"50 Rupees notes: "<<notes<<endl;
        amount = amount%50;

        case 20:
        notes = amount/20;
        cout<<"20 Rupees notes: "<<notes<<endl;
        amount = amount%20;

        case 10:
        notes = amount/10;
        cout<<"10 Rupees notes: "<<notes<<endl;
        amount = amount%10;
    }
}

