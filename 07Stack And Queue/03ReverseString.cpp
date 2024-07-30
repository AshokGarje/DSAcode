#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str = "Ashok";
    stack<int>s;
    string ans = "";

    for(int i =0;i<str.length();i++){
        char ch = str[i];
        s.push(ch);
    }
    while(!s.empty()){
        int ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"Answer is "<<ans<<endl;
    return 0;
}