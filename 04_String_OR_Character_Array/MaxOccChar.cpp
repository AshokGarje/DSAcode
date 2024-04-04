#include<iostream>
using namespace std;

char maxoccchar(string s){
    int arr[25] = {0};
    for(int i =0 ; i<s.length();i++){//counting character in string
        char ch = s[i];
        int number =0;
        number = ch -'a';
        arr[number]++;
    }

    int ans =0,maxi = -1;
    for(int i =0; i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
}
int main(){
    string s = "ajay";

    cout<<maxoccchar(s);
}