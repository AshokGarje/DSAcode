#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v;
  vector<int>a(5,1); 
  //size of vector is 5 and assign all element with 1
  cout<<"print a: "<<endl;
  for(int i:a){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  cout<<"capacity-> "<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity-> "<<v.capacity()<<endl;
  v.push_back(2);
  cout<<"capacity-> "<<v.capacity()<<endl;
  v.push_back(3);
  cout<<"capacity-> "<<v.capacity()<<endl;

  cout<<"Before pop: "<<endl;
  for(int i:v){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  v.pop_back();

  cout<<"After pop: "<<endl;
  for(int i:v){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  cout<<"Befoer clear size:"<<v.size()<<endl;
  v.clear();
  cout<<"After clear size: "<<v.size()<<endl;
}