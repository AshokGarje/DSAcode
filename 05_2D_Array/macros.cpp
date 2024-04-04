#include<iostream>
using namespace std;
#define PI 3.14

double Macros(){
        double r=5;
        double area = PI * r * r;
        return area;
    }
inline int getmax(int& a, int& b){ //referance variable don't take new memory
    return (a>b)? a : b;
}
int main()
{
    // #include //preprocessive directive
    //cout<<Macros();

    //Inline Function : are used to reduced to function call overhead.
    int a=1, b=2;
    int ans =0;

    ans = getmax(a, b);
    cout<<ans<<endl;

    a += 3;
    b += 1;
    ans = getmax(a, b);
    cout<<ans<<endl;;

    
}
