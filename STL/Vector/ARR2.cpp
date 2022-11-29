#include<iostream>
using namespace std;


void print(int **arr,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

            cout<<arr[i][j]<<" ";
        }
    }
}
int main(){
    int row=3,col=2;
    int **arr;
    arr=new int *[row];
    for(int i=0;i<row;i++){
        arr[i]=new int [col];
        for(int j=0;j<col;j++){

            arr[i][j]=i;
            cout<<arr[i][j]<<" ";
      //  print(arr,5,5);

        }
    }
}