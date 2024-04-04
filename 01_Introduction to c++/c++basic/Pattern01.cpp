#include<iostream>
using namespace std;
int main(){
    int n, i= 1;
    int count = 1;
    cout<<"Enter n value: ";
    cin>>n;
    while(i<=n){
        int j = 1;
        
        while (j<=n)
        {
            cout<<i; // print i, j, "*",n - j +1
            j = j +1;
        }
        cout<<endl;
        i = i + 1;
    }
}
// Enter n value: 6
// 111111
// 222222
// 333333
// 444444
// 555555
// 666666

// #include<iostream>
// using namespace std;
// int main(){
//     int n, i= 1;
//     int count = 1;
//     cout<<"Enter n value: ";
//     cin>>n;
//     while(i<=n){
//         int j = 1;
        
//         while (j<=n)
//         {
//             cout<<n - j +1; 
//             j = j +1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }
// Enter n value: 5
// 54321
// 54321
// 54321
// 54321
// 54321


// #include<iostream>
// using namespace std;
// int main(){
//     int n, i= 1;
//     int count = 1;
//     cout<<"Enter n value: ";
//     cin>>n;
//     while(i<=n){
//         int j = 1;
        
//         while (j<=n)
//         {
//             cout<<j; // print i, j, "*",n - j +1
//             j = j +1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }
// Enter n value: 5
// 12345
// 12345
// 12345
// 12345
// 12345

// #include<iostream>
// using namespace std;
// int main(){
//     int n, i= 1;
//     int count = 1;
//     cout<<"Enter n value: ";
//     cin>>n;
//     while(i<=n){
//         int j = 1;
        
//         while (j<=n)
//         {
//             cout<<"*"; // print i, j, "*",n - j +1
//             j = j +1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }
//Enter n value: 5
//*****
//*****
//*****
//*****
//*****


// #include<iostream>
// using namespace std;
// int main(){
//     int n, i= 1;
//     int count = 1;
//     cout<<"Enter n value: ";
//     cin>>n;
//     while(i<=n){
//         int j = 1;
        
//         while (j<=n)
//         {
//             cout<<count; // print i, j, "*",n - j +1
//             j = j +1;
//             count = count +1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

// Enter n value: 3
// 123
// 456
// 789