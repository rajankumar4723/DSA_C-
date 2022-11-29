#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a;
    cout<<"capacity is  "<<a.capacity()<<endl;
    a.push_back(1);//add elements

    cout<<"capacity is "<<a.capacity()<<endl;
    a.push_back(2);//add elements

    cout<<"capacity is "<<a.capacity()<<endl;
    a.push_back(3);//add elements

    cout<<"capacity is  "<<a.capacity()<<endl;
    cout<<"Size of  "<<a.size()<<endl;//Check Size

    cout<<"elemnts is 2end index"<<a.at(2)<<endl;//find index elem

    cout<<"Font "<<a.front()<<endl;//Start index
    cout<<"back"<<a.back()<<endl;//End index known

    cout<<"Print the elements"<<endl;
    for(int i:a){//print the all elemnts using loop
        cout<<i<<" "; }
        cout<<endl;

cout<<"Before Pop elments is"<<endl;
for(int i:a){
    cout<<i<<" ";  
}
cout<<endl;

a.pop_back();//end point pop elements
cout<<"after pop"<<endl;
for(int i:a){
    cout<<i<<" "; 
}cout<<endl;

cout<<"SIze "<<endl;
cout<<a.size()<<endl;
a.clear();//after clear size
cout<<a.size();


    return 0;
}