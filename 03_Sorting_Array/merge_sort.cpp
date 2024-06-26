#include<iostream>
using namespace std;

int merge(int *arr, int s, int e){

    int mid = (s + e)/2;

    int len1 = mid - s +1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
       first[i] = arr[mainArrayIndex++]; 
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len1; i++)
    {
       second[i] = arr[mainArrayIndex++]; 
    }

    //merge two sorted arrays
    int index1=0;
    int index2=0;
    mainArrayIndex =s;

    while (index1 < len1 && index2 < len2){
        if (first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }        
    }
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }   
}
void mergesort(int *arr, int s,int e){
    if(s>=e){
        return ;
    }
    int mid = s + (e-s)/2;

    //to sort left array
    mergesort(arr, s, mid);

    //to sort right part
    mergesort(arr, mid +1, e);

    //merge together
    merge(arr, s, e);
}
int main()
{
    int arr[] = {7,5,48,12,3,6};
    int n = 12;
    mergesort(arr, 0, n-1);

    for(int i =0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}