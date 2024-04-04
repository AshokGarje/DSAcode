#include<iostream>
#include <math.h>
using namespace std;
int sum(int a, int b){
    return a + b;
}
int sum(int a, int b, int c){
    return a + b + c;
}
//volume of cylinder
float volume(float r, float h){
    cout<<"\nCylinder:"<<endl;
    float a =  (3.14 * r * r * h);
    return a;
}
//volume of cube
float volume(float a){
    cout<<"\nCube:"<<endl;
    return pow(a,3);
}
//volume of rectangular
float volume(float l, float b, float h){
    cout<<"\nRectangle:"<<endl;
    return l * b* h;
}
int main()
{
    cout<<"The sum of 4 and 2 is "<<sum(4,2)<<endl;
    cout<<"The sum of 4, 3 and 2 is "<<sum(4,3,2)<<endl;
    cout<<"The volume of cylinder "<<volume(1.5, 2.3)<<endl;
    cout<<"The volume of cube "<<volume(5)<<endl;
    cout<<"The volume of rectangul "<<volume(1.5, 2.3, 4.6)<<endl;
    return 0;
}