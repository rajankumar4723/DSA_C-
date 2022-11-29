#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        bool part=isSorted(arr+1,n-1);
        return part;

    }
}

int main(){
    int arr[]={2,3,4,9,9,9,9};
    int n=5;
    bool ans=isSorted(arr,n);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is not Sorted"<<endl;
    }
}