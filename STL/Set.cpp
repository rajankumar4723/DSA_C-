#include<iostream>
#include<set>

using namespace std;
int main(){
set<int> s;
s.insert(3);
s.insert(1);
s.insert(5);
s.insert(2);
s.insert(5);
for(int i:s){
    cout<<i<<" ";
}cout<<endl;
s.erase(3);//3 remove elements
for(int i:s){
    cout<<i<<" ";
}cout<<endl;

cout<<"Count elements  "<<s.count(5)<<endl;
for(int i:s){
    cout<<i<<" ";
}cout<<endl;

set<int>::iterator itr=s.find(5);
for(auto it=itr;it!=s.end();it++){
    cout<<*it;
}cout<<endl;

}//OLogN