#include<iostream>
using namespace std;
int findduplicate(int a[],int n){
    int ans=0;
    for(int i =0; i<n;i++){
        ans=ans^a[i];
    }
     for(int i =1; i<n;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int a[6] = {4,2,1,3,4};
    cout<<findduplicate(a,5);
   
}