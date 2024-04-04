#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int>d;
  d.push_back(1);
  d.push_front(2);
  cout<<"print first index element: "<<d.at(1)<<endl;

  cout<<"Front: "<<d.front()<<endl;
  cout<<"Back: "<<d.back()<<endl;

  cout<<"Empty or not: "<<d.empty()<<endl;
  cout<<"Before Erase: "<<d.size()<<endl;
  d.erase(d.begin(), d.begin()+1);
  cout<<"After Erase: ";
  for(int i:d){
    cout<<i;
  }
  cout<<endl;
}