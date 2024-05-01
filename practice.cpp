#include<iostream>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

// bool CheckPrime(int n){
//     if(n<=1){
//         return 0;
//     }
//     for(int i = 2; i<=sqrt(n);i++){
//         if(n%i == 0){
//             return 0;            
//         }
//     }
//     return 1;
// }


// bool Checkpalindrome(string s){
//     int start = 0;
//     int end = s.length()-1;
//     while(start<=end){
//         if(s[start] == s[end]){
//             start++;
//             end--;
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }

// int ReverseNumber(int n){
//     int ans = 0;
//     int digit;
//     while(n!=0){
//         digit = n%10;
//         ans = ans * 10 + digit;
//         n = n/10;
//     }
//     return ans;
// }


// long long int Factorial(int n){
//     if(n==1 || n==0){
//         return 1;
//     }
//     return n * Factorial(n-1);
// }

// void MergeTwoSortedArray(vector<int>& arr1, vector<int>& arr2){
//     arr1.insert(arr1.end(), arr2.begin(), arr2.end());
//     for(int i =0;i<arr1.size()-1;i++){
//         for(int j = 0;j<arr1.size()-1-i;j++){
//             if(arr1[j]>arr1[j+1]){
//                 swap(arr1[j],arr1[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<arr1.size();i++){
//         cout<<arr1[i]<<" ";
//     }
// }
int main()
{
    // int n;
    // cin>>n;
    // string s;
    // cin>>s;

    //cout<<CheckPrime(n);

    // cout<<Checkpalindrome(s);

    // int ans = ReverseNumber(n);
    // if(n == ans){
    //     cout<<"Number is palindrome."<<endl;
    // }
    // else{
    //     cout<<"Number is not palindrome."<<endl;
    // }

    // cout<<Factorial(n);

    // vector<int> vector1 = {1, 3, 5};
    // vector<int> vector2 = {2, 4, 6};
    // MergeTwoSortedArray(vector1, vector2);
    return 0;
}