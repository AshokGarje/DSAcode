#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float IntrestRate;
    float returnValue;

public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    IntrestRate = r;
    returnValue = principal;
    for(int i=0;i<y;i++){
        returnValue = returnValue * (1 + IntrestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    IntrestRate = float(r)/100;
    returnValue = principal;
    for(int i=0;i<y;i++){
        returnValue = returnValue * (1 + IntrestRate);
    }
}

void BankDeposit ::show(){
    cout<<"Principal amount was "<<principal<<"."<<endl
        <<"Return value after "<<years
        <<" years is "<<returnValue<<endl;

}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    cout<<"Enter the value of p, y, and r: ";
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y ,r);
    bd1.show();

    cout<<"\nEnter the value of p, y, and R: ";
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    bd3.show();
    return 0;
}