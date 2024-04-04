#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack<string> s;
    s.push("Ashok");
    s.push("Suraj");
    s.push("Santosh");
    cout<<"First Element: "<<s.top()<<endl;
    s.pop();
    cout<<"First element: "<<s.top()<<endl;

    cout<<s.size()<<endl;
    cout<<s.empty();

    queue<string> q;
    q.push("Ashok");
    q.push("Suraj");
    q.push("Santosh");
    cout<<"First Element: "<<q.front()<<endl;
    q.pop();
    cout<<"First element: "<<q.front()<<endl;

    cout<<q.size()<<endl;
    cout<<q.empty();
}