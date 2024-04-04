#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector";
    for(int i =0 ; i <v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    // vector<int>vect1;   //zero length integer vector
    // int element;
    // for(int i=0;i<4;i++){
    //     cout<<"Enter element to add this vector: ";
    //     cin>>element;
    //     vect1.push_back(element);
    // }
    // display(vect1);
    // cout<<endl;
    // vector<int> :: iterator iter = vect1.begin();
    // //vect1.insert(iter, 9);
    // vect1.insert(iter+vect1.size(), 5,10);
    // display(vect1);
  
    vector<char>vect1; //zero length integer vector 
    // display(vect1);

    vector<char>vect2(4); //4 elemnt character vector
    // vect2.push_back('8');
    // display(vect2);

    vector<char>vect3(vect2);
    // display(vect3);

    vector<int> vect4(6, 3); // 6 elment vector of 3s.
    display(vect4);
    cout<<vect4.size();
    return 0;
}