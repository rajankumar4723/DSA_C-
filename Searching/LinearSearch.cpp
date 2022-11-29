#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<" "<<endl;
}
bool Seach(int arr[],int n,int key)
{
    print(arr,n);
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    bool remaingpart=Seach(arr+1,n-1,key);
    return remaingpart;

}
int main(){
    int arr[5]={3,5,6,8,9};
    int n=5;   
    int key=8;

    bool ans=Seach(arr,n,key);
    if(ans){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}