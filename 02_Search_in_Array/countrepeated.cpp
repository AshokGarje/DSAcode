#include<iostream>
using namespace std;
int main(){
    int a[10] = { 1,2,3,4,2,3,5,2,7,3};
    //int seen[i]=0;
    int seen[10];
    for(int i = 0; i < 10; i++)
        seen[i] = 0;

    for(int i = 0; i < 10; i++) {
        if(seen[i] == 0) {
            int count = 0;
            for(int j = i; j < 10; j++)
                if(a[j] == a[i]) {
                    count += 1;
                    seen[j] = 1;
                }
            cout << a[i] << " occurs " << count << " times" << endl;
        }
    }

    return 0;
}