#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};

void Shop ::setPrice()
{
    cout << "\nEnter id of your item no " << counter + 1 << ": ";
    cin >> itemId[counter];
    cout << "Enter price of your item: ";
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "\nThe Price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    // Object memory Allocation
    Shop dukan;
    dukan.initcounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}