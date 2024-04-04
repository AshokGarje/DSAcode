#include<iostream>
using namespace std;

int FirstOccurance(int a[],int size, int key){
    int s=0,e=size-1;
    int mid = s + (e-s)/2;
    int ans=-1;

    while(s<=e){
        if(a[mid]==key){
            ans = mid;
            e=mid-1;
        }
        else if(a[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s + (e-s)/2;
    }
    return ans;
}

int LastOccurance( int a[],int size,int key){
     int s=0,e=size-1;
    int mid = s + (e-s)/2;
    int ans=-1;

    while(s<=e){
        if(a[mid]==key){
            ans = mid;
            s=mid+1;
       }
        else if(a[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s + (e-s)/2;
    }
    return ans;
}

int main(){
    int a[]= {0,1,1,2,3,4,4,4,4,4,4,4,4,5};
    int size = sizeof(a)/sizeof(a[0]);

    int key;
    cout<<"Enter key: ";
    cin>>key;
    
    int first_occr = FirstOccurance(a,size,key);
    int last_occr = LastOccurance(a,size,key);

    cout<<"First Occurance of "<<key<<": "<<first_occr<<endl;
    cout<<"Last Occurance of "<<key<<": "<<last_occr<<endl;

    int total_occr = last_occr - first_occr +1;
    cout<<"Total Occurance of "<<key<<" is: "<<total_occr;
    return 0;

}