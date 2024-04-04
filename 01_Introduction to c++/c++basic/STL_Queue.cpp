#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int8_t> maxi;
    priority_queue<int, vector<int>, greater<int> >mini;
    maxi.push(4);
    maxi.push(3);
    maxi.push(1);
    maxi.push(0); 
    maxi.push(5);

    cout<<"Size: "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i = 0; i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(5);
    mini.push(4);
    mini.push(1);
    mini.push(0);
    mini.push(3);

int m = mini.size();
    for(int i = 0; i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"Queue is empty or not: "<<mini.empty();

}