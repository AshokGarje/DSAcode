#include<iostream>
using namespace std;

bool filter(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    else{
        return 0;
    }
}

string validString(string s){
    string temp = " ";
    for(int i = 0; i<s.length();i++){
        if(filter(s[i])){
            temp.push_back(s[i]);
        }
        
    }
    return temp;
}

char tolowercase(char ch){
    if((ch>='a' && ch<='z') || (ch >=0 && ch<=9)){
        return ch;
    }
    else{
        char temp = ch -'A' + 'a';
        return temp;
    }
}

bool checkpalindrome(string valid){
    int st=0,e=valid.length()-1;
    while(st<e){
        if(tolowercase(valid[st++]) == tolowercase(valid[e--])){
           return 1;
        }
        else{
            return 0;
        }
    }
} 
int main(){
    string s = "assa";

    cout<<"Before Filtering String become: "<<s;

    string valid = validString(s);
    cout<<"\nValid String: "<<valid;

    cout<<"\nPalindrome or not: "<<checkpalindrome(valid);
}