#include<iostream>
#include<math.h>
#include<cmath>
#include<cstdlib>
#include<typeinfo>
#include<cstring>
using namespace std;

int main()
{
    const float PI = 3.142;
    cout<<sin(PI/4)<<endl;
    cout<<cos(PI/2)<<endl;
    cout<<tan(PI/4)<<endl;
    cout<<ceil(68.90)<<endl;
    cout<<floor(68.90)<<endl;
    cout<<pow(3,5)<<endl;
    cout<<remainder(4,3)<<endl;
    cout<<abs(-50)<<endl;
    cout<<log2(10)<<endl;
    cout<<sqrt(169)<<endl;
    cout<<exp(2)<<endl;
    cout<<round(68.9)<<endl;
    cout<<truncf(68.9)<<endl;
    
    //cstdlib
    cout<<atof("18.90")<<endl;
    cout<<typeid(atof("18.90")).name()<<endl;

    cout<<strtoull("123abc45", nullptr, 10)<<endl;
    cout<<typeid(strtoull("123abc45", nullptr, 10)).name()<<endl;

    //cstring
    char s1[10] = "Ashok";
    char s2[10] = "Garje";
    memcpy(s2, s1, sizeof(s1));
    cout<<s2<<endl;

    cout<<strlen(s1)<<endl;

    char string1[10] = "Harshal ";
    char string2[10] = "Deore";
    strcat(string1,string2);
    cout<<string1<<endl;

    char s3[10] = "Harshal";
    char s4[10] = "Manav";
    // strcpy(s3, s4);
    // cout<<s3<<endl;

    bool x = strchr(s3,'al');
    cout<<x<<endl;

    bool y = isalpha('A');
    cout<<y<<endl;

    bool z = islower('A');
    cout<<z<<endl;

    char s = toupper('s');
    cout<<s<<endl;

    y = isdigit('2');
    cout<<y<<endl;

    y = ispunct('@');
    cout<<y<<endl;

    
    return 0;
}