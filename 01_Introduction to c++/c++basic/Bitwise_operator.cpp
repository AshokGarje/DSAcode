#include<iostream>
using namespace std;
int main(){
    int a =4;
    int b =8;
    
    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"~a: "<<(~a)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;

    cout<<"Right Shift 17: "<<(17>>2)<<endl; //10001-->100
    cout<<"Left Shift 20: "<<(20<<2)<<endl;  //10100-->1010000

    int i =3;
    cout<<"postIncrement: "<<(i++)<<endl;   //3
    //i=4
    cout<<"preIncrement: "<<(++i)<<endl;    //5
    //i=5
    cout<<"podtDecrement: "<<(i--)<<endl;   //5
    //i=4
    cout<<"podtDecrement: "<<(--i)<<endl;   //3
    //i=3
    cout<<i<<endl;

    int x, y=1;
    x =10;
    if(++a)
        cout<<y<<endl;
    else
        cout<<++y;

    a = 1;
    b =2;
    if(a-- >0 || ++b>2){
        cout<<"Stage 1 - Inside If"<<endl;
    }
    else{
        cout<<"Stage 2 - Inside Else"<<endl;
    }
    cout<<a<<" "<<b<<endl;



    
}