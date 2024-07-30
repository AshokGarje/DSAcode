#include<iostream>
using namespace std;
#include<string>

string reverse(string s, int size){
    string rev ="";
    for(int i = size-1;i>=0;i--){
        rev += s[i]; 
    }
    return rev;
}
int main()
{
    string str = "Ashok Garje";
    int size =  str.length();

    string revstr = reverse(str, size);
    cout<<revstr;
    return 0;
}