#include<iostream>
using namespace std;

// void update2(int& n){ //pass by referance
//     n++;
// }
// void update1(int n){ //pass by value 
//     n++;             //create a copy of variable
// }

int sum(int *arr, int n){
    int sum =0;
    for(int i =0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    // int i =5;
    // int &j =i;
    // cout<<i<<endl;
    // cout<<j<<endl;

    // int n = 5;
    // cout<<"Before update: "<<n<<endl;
    // update2(n);
    // cout<<"After update: "<<n<<endl;
    int n ;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter array element: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int ans = sum(arr ,n);
    cout<<"sum is "<<ans<<endl;
    return 0;
}