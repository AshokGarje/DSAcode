#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
public:
    void setData(int a, float b){
        id = a;
        price = b;
    }
    void getData(){
        cout<<"Id of this item is: "<<id<<endl;
        cout<<"price of this item is: "<<price<<endl;
    }
};

int main()
{
    int size = 3;
    int i, p;
    float q;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    for(i =0;i<size;i++){
        cout<<"Enter Id and price of item "<<i+1<<":"<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }

    for(i =0;i<size;i++){
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}