#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int evenSecondLargest(vector<int>& even){
    int i = even.size() -2;
    sort(even.begin(), even.end());
    return even[i];
}
int oddSecondLargest(vector<int>& odd){
    int i = odd.size() -2;
    sort(odd.begin(), odd.end());
    return odd[i];
}
int SmallLargeSum(vector<int>& arr, int n){
    if(n<=3){
        return 0;
    }
    vector<int> even;
    vector<int>odd;
    for(int i=0;i<n;i+=2){
        even.push_back(arr[i]);
    }
    for(int i=1;i<n;i+=2){
        odd.push_back(arr[i]);
    }
    int a = evenSecondLargest(even);
    int b = oddSecondLargest(odd);
    return a + b;
}

int main(){
    vector<int> arr = {4, 0, 7, 9, 6, 4, 2};
    int n = arr.size();
    int ans = SmallLargeSum(arr,n);
    cout<<ans;
    return 0;
}