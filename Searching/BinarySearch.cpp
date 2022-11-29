#include<iostream>
using namespace std;
bool BinearySearch(int arr[],int stat,int end,int key){
    if(stat>end)
        return false;
        int mid=stat+(end-stat)/2;
        if(arr[mid]==key)
        return true;
        // mid=stat+(end-stat)/2;
        if(arr[mid]<key){
            return BinearySearch(arr+1,mid+1,end,key);

        }else{
            return BinearySearch(arr,stat,mid-1,key);
        }
     

}


int main(){
int arr[6]={1,2,3,4,5,7};
    int n=6;
    int key=4;
    int ans=BinearySearch(arr,0,6,key);
    if(ans){
        cout<<"Element present"<<endl;
    }
    else
    {
        cout<<"Element is absent";
      }  
    return 0;
}