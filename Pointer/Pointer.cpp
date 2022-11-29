#include<iostream>
using namespace std;

int main(){

    int num=5;
    cout<<num<<endl;
    //address of &
    cout<<"Address of "<<&num<<endl;
    
    int *ptr=&num;

    cout<<"Value of "<<ptr<<endl;
    cout<<"Value of "<<*ptr<<endl;

    double d=3.5;
    double *p2=&d;
    int a=6;

    cout<<"value is "<<*p2<<endl;
    cout<<"addres is "<<p2<<endl;

    cout<<"Size of pointer "<<sizeof(d)<<endl;
    cout<<"Size of pointer "<<sizeof(a)<<endl;


    return 0;
}