#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"Single Inharitance"<<endl;
    }
    
};
class B:public A
{
   public:
    void fun2(){ 
        cout<<"Done"<<endl;
        }
   
};
int main(){
    B obj;
    obj.fun();
    obj.fun2();
}