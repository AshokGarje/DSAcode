#include<iostream>
using namespace std;
class solution{
    public:
    int homming(uint32_t n){
        int count =0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n =n>>1;
        }
        return count;
    }
};