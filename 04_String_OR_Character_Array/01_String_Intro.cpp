#include<iostream>
using namespace std;

int getlength(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count+=1;
    }
    return count;
}

void getreverse(char name[],int n){
    int s=0,e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch -'A' + 'a';
        return temp;
    }
}

// void checkpalindrome(char name[],int n){
//     int s=0,e=n-1;
//     int bit=0;
//     while(s<e){
//         if(tolowercase(name[s++]) == tolowercase(name[e--])){
//            bit =1;
//         }
//         if(bit==0){
//             cout<<"String Not palindrome"<<endl;
//         }
//         else{
//             cout<<"String is Palindrome."<<endl;
//         }
//     }
// }
bool checkpalindrome(char name[],int n){
    int s=0,e=n-1;
    while(s<e){
        if(tolowercase(name[s++]) == tolowercase(name[e--])){
           return 1;
        }
        else{
            return 0;
        }
    }
} 
int main(){
    char name[20];

    cout<<"Enter your name "<<endl;
    cin>>name;

    //name[2] = '\0';
    cout<<"Your name is "<<name<<endl;

    int length = getlength(name);
    cout<<"Length of string "<<length<<endl;

    getreverse(name,length);
    cout<<"Your name is "<<name<<endl;

    cout<<checkpalindrome(name,length)<<endl;
    
}