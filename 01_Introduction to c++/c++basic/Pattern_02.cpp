// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n value: ";
//     cin>>n;
//     int i =n;
//     while(i>=0){
//         int j =1;
//         while(j<=i){
//             cout<<"*";
//             j = j +1;
//         }
//         i = i -1;
//         cout<<endl;
//     }
// }

// Enter n value: 5
// *****
// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n value: ";
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j =1;
//         while(j<=i){
//             cout<<"*";
//             j = j +1;
//         }
//         i = i +1;
//         cout<<endl;
//     }
// }  

// Enter n value: 5                                       
// *
// ***
// ****
// *****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int count =1;
//     cout<<"Enter n value: ";
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j =1;
//         while(j<=i){
//             cout<<count;
//             count = count +1;
//             j = j +1;
//         }
//         i = i +1;
//         cout<<endl;
//     }
// }  

// Enter n value: 3
// 1
// 23
// 456

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
    
//     cout<<"Enter n value: ";
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j =1;
//         int count =i;
//         while(j<=i){
//             cout<<count;
//             count = count +1;
//             j = j +1;
//         }
//         i = i +1;
//         cout<<endl;
//     }
// }  

// Enter n value: 5
// 1
// 23
// 345
// 4567
// 56789

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
    
//     cout<<"Enter n value: ";
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j =1;
//         int count =i;
//         while(j<=i){
//             cout<<count;
//             count = count -1;
//             j = j +1;
//         }
//         i = i +1;
//         cout<<endl;
//     }
// }
// Enter n value: 5
// 1
// 21
// 321
// 4321
// 54321

#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter n value: ";
    cin>>n;
    int i =1;
    while(i<=n){
        int j =1;
        while(j<=i){
            char ch = ('A' + i + j -2); //'A' + n -i
            cout<<ch;                   
            j = j +1;
        }
        i = i +1;
        cout<<endl;
    }
}

// Enter n value: 5
// A
// BC
// CDE
// DEFG
// EFGHI