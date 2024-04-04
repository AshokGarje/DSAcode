#include<iostream>
using namespace std;
int main(){
   int i = 0, n;
   int sum = 0;
   cout<<"Enter where up to print sum of even number: ";
   cin>>n;
   while (i<=n){
    sum = sum + i;
    i = i+2;
   }
   cout<<"sum of first "<<n<<" numbers is: "<<sum;
}