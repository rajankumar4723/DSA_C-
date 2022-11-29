#include<iostream>
#include<list>
using namespace std;
int main(){

list<int>a;//Delare array

list<int>n(5,100);//Copy list

for(int i:n){
    cout<<i <<" ";
}cout<<endl;//new line

a.push_back(1);//back add elemnets
a.push_front(2);//starting add
for(int i:a){
    cout<<i<<" ";//print

}cout<<endl;

a.erase(a.begin());//erease 
cout<<"After Erase"<<endl;
for(int i:a){
    cout<<i<<" ";

}cout<<endl;

cout<<"SIze list  "<<a.size()<<endl;//size

}