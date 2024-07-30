#include<iostream>
using namespace std;

// bool filter(char ch){
//     if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// string validString(string s){
//     string temp = " ";
//     for(int i = 0; i<s.length();i++){
//         if(filter(s[i])){
//             temp.push_back(s[i]);
//         }
        
//     }
//     return temp;
// }

// char tolowercase(char ch){
//     if((ch>='a' && ch<='z') || (ch >=0 && ch<=9)){
//         return ch;
//     }
//     else{
//         char temp = ch -'A' + 'a';
//         return temp;
//     }
// }

bool checkpalindrome(string s){
    int start = 0, end = s.length()-1;
    while(start<end){
        if(tolower(s[start]) != tolower(s[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string s = "assa";

    // cout<<"Before Filtering String become: "<<s;

    // string valid = validString(s);
    // cout<<"\nValid String: "<<valid;

    cout<<"\nPalindrome or not: "<<checkpalindrome(s);
}