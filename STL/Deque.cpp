#include<iostream>
#include<deque>
using namespace std;
int main(){
    
    deque<int>a;
    a.push_front(1);
    a.push_back(2);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
//    a.pop_back();//Pop Elements
//      for(int i:a){
//         cout<<i<<" ";
//     }cout<<endl;
//     a.pop_front();//POP FRONT
//      for(int i:a){
//         cout<<i<<" ";
//     }
cout<<"empty is or not  "<<endl<<a.empty()<<endl;


cout<<"Before erse "<<a.size()<<endl;
a.erase(a.begin(),a.begin()+1);
 for(int i:a){
       // cout<<i<<" ";
      cout<<"After erse "<<a.size()<<endl; }
      for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
}