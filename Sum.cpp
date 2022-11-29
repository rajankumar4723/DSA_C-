#include<iostream>
using namespace std;
int  print(int *arr,int n){
    if(n==0){
        return 0;
    }if(n==1){
        return arr[0];

    }
    int ans=print(arr+1,n-1);
    int sum=arr[0]+ans;
    return sum;
}

int main(){
    int arr[9]={1,2,3,5,4,5,7,8};
    int n=9;
   int sum=print(arr,n);
    cout<<"Sum array is"<<sum<<endl;
    return 0;



}