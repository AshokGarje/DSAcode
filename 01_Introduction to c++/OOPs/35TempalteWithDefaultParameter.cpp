#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Ashok{
    T1 a;
    T2 b;
    T3 c;
public:
    Ashok(T1 a, T2 b, T3 c){
        this -> a = a;
        this -> b = b;
        this -> c = c;
    }
    void display(){
        cout<<"The Valu of a is: "<<a<<endl;
        cout<<"The Valu of b is: "<<b<<endl;
        cout<<"The Valu of c is: "<<c<<endl;
    }
};
int main()
{
    Ashok <> A(3,4.5,'s');
    A.display();

    Ashok <int, char, char> S(5, 'A', 'C');
    S.display();
    return 0;
}