#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string>m;
    m[1] = "Ashok";
    m[12] = "Love";
    m[3] = "Garje";

    m.insert({5,"Suraj"});

    cout<<"Before Erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 12->"<<m.count(12)<<endl;

    m.erase(12);
    cout<<"After Erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    auto it = m.find(3);
    for(auto i = it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}

