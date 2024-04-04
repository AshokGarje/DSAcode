
#include<iostream>             
using namespace std;
int main(){
    int n;
    cout<<"Enter n value: ";
    cin>>n;
    int i =n;
    while(i>=0){
        int j =1;
        while(j<=i){
            cout<<"*";
            j = j +1;
        }
        int space = n -i;
        while(space){
            cout<<" ";
            space = space -1;
        }
        i = i -1;
        cout<<endl;
    }
}