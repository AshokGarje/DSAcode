#include<iostream>
using namespace std;


// class Employee{
//     private:
//         int a, b, c;
//     public:
//         int d, e;
//         void setData(int a1, int b1, int c1);//Declaration
//         void getData(){
//             cout<<"value of a is "<<a<<endl;
//             cout<<"value of b is "<<b<<endl;
//             cout<<"value of c is "<<c<<endl;
//             cout<<"value of d is "<<d<<endl;
//             cout<<"value of e is "<<e<<endl;
//         }
// };
// void Employee :: setData(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }
// int main()
// {
//     //data hiding is not in c++ structure
//     Employee ashok;
//     ashok.setData(1,2,3);
//     ashok.d = 4;
//     ashok.e = 5;
//     ashok.getData();
//     return 0;
// }

class animal{
    private:
        string name;
        int price;
    public:
        string name1;
        int price1;        void petAnimal(string name1, int price1);
        void wildAnimal(){
            cout<<"wildAnimal: "<<name1<<" "<<"price: "<<price1<<endl;
        }
        void showData(){
            cout<<"petanimal: "<<name<<" "<<"price "<<price<<endl;
        //     cout<<"wildAnimal: "<<name<<" "<<"price: "<<price<<endl;
         }
};
void animal :: petAnimal(string name1, int price1){
            name = name1;
            price = price1;
            
}
int main(){

animal a;
a.name1 = "Tigher";
a.price1 = 45000;
a.petAnimal("Cow", 100000);
a.wildAnimal();
a.showData();
return 0;
}