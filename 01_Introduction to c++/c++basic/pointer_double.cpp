#include<iostream>
using namespace std;

void update(int **p1){
    //p1 = p1 +1;
    //kuch chane hoga ?-->no

    //*p1 = *p1 +1;
    //kuch chane hoga ?-->yes

    **p1 = **p1 +1;
    //kuch chane hoga ?-->yes
}
int main()
{
    int i =5;
    int* p = &i;
    int** p1 = &p;

    // cout<<"value of i: "<<endl;
    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p1<<endl;

    // cout<<"address of i: "<<endl;
    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p1<<endl;

    // cout<<"address of p: "<<endl;
    // cout<<&p<<endl;
    // cout<<p1<<endl;

    cout<<"Before change: "<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p1<<endl;

    cout<<"After change: "<<endl;
    update(p1);
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p1<<endl;

    return 0;
}