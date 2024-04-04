#include <iostream>
#include<string>
using namespace std;

class binary
{

    string s;

public:
void read()
    {
        cout << "Enter String: ";
        cin >> s;
    }
    void chk_bin();
    void one_compliment();
    void display();

    
};
void binary :: chk_bin(){
    bool flag = 0;
    for(int i=0;i<s.length();i++){
        if(s.at(i) == '0' || s.at(i) == '1'){
            flag = 1;           
        }
        else{
             flag = 0;
             
        }
        if(flag == 0){
            break;
        }

    }
    if(flag){
        cout<<"String is binary."<<endl;
    }
    else{
        cout<<"String is not binary."<<endl;
    }    
}
void binary :: one_compliment(){
    for(int i=0;i<s.length();i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else if(s.at(i) == '1'){
            s.at(i) = '0';
        }
        else{
            cout<<"string is not binary, can't convert to ones compliment.";
        }
    }
}
void binary :: display(){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.one_compliment();
    b.display();

    return 0;
}