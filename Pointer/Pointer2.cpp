#include<iostream>
using namespace std;

int main(){


int arr[10]={23,122,41,67};

cout<<"Array of first memory block address  "<<arr<<endl;
cout<<"Array of first memory block address  "<<&arr[0]<<endl;

cout<<"4th "<<*arr<<endl;
cout<<"5th "<<*arr+1<<endl;
cout<<"6th "<<*(arr+1)<<endl;
cout<<"7th "<<*(arr)+1<<endl;
cout << " 8th " << arr[2] << endl;

int i = 3;
cout<<i [arr] <<endl;


    return 0;

}