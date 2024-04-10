#include<iostream>
#include<list>
using namespace std;

void display(list<int>& lst){
    list<int> :: iterator it;
    for(it = lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1;
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(1);
    list1.push_back(21);
    list1.push_back(9);
    display(list1);
    // list1.pop_back();   //remove element from back
    // list1.pop_front(); //remove element from front
    // list1.remove(5);  // remove element
    // display(list1);
    
    list<int> list2(3); //empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 7;
    iter++;
    *iter = 18;
    iter++;
    *iter = 45;
    iter++;
    display(list2);

    //sort and merge two list
    list1.sort();
    list2.sort();
    list1.merge(list2);
    display(list1);

    //Revesing the list
    list1.reverse();
    display(list1);

    return 0;
}