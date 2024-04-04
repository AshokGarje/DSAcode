#include<iostream>
using namespace std;

int finduniquae(int a[], int n){
    int ans=0;
    for(int i= 0;i<n;i++){
        ans = ans^a[i];//xor operation
    }
    return ans;
}
int main(){
    int a[5] = {1,2,1,2,3};
    cout<<finduniquae(a,5);
}