#include<iostream>
using namespace std;

void row_sum(int arr[][4],int row, int col){
    for(int i =0;i<row;i++){
         int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout<<i<<" Row_sum: "<<sum<<endl;
    }
}
void col_sum(int arr[][4],int row, int col){
    for(int j =0;j<col;j++){
        int sum = 0;
        for(int i=0;i<row;i++){
            sum += arr[i][j];
        }
        cout<<j<<" Col_sum: "<<sum<<endl;
    }
}

void total_sum(int arr[][4],int row, int col){
    int sum =0;
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
    }
    cout<<"Total_sum:"<<sum<<endl;
}

int largestsum(int arr[][4], int row, int col){
    int maxi = INT32_MIN;
    int row_index = -1;
    for(int i =0;i<row;i++){
         int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
    
        if(sum > maxi){
            maxi = sum;
            row_index = i;
        }
    }
    cout<<"\nMaximum sum is: "<<maxi<<endl;
    return row_index;
//    for(int j =0;j<col;j++){
//         int sum = 0;
//         for(int i=0;i<row;i++){
//             sum += arr[i][j];
//         }
    
//         if(sum > maxi){
//             maxi = sum;
//             col_index = j;
//         }
//     }
//     cout<<"\nMaximum sum is: "<<maxi<<endl;
//     return col_index;
}
int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"Matrics:";
    for(int row=0;row<3;row++){
        cout<<endl;
        for(int col =0;col<4;col++){
            cout<<arr[row][col]<<"\t";
        }
    }

    cout<<"\n\n";
    row_sum(arr,3,4);

    cout<<"\n";
    col_sum(arr,3,4);

    cout<<"\n";
    total_sum(arr,3,4);

    cout<<"max row is at index: "<<largestsum(arr,3,4);
}