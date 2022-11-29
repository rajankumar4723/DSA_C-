#include<iostream>
#include<queue>
using namespace std;

int main(){           //FiFO

    queue<string>s;
    s.push("Love");
    s.push("Sandeep");
    s.push("Modanwal");
    cout<<"Size Before: "<<s.size()<<endl;
    cout<<"Before "<<s.front()<<endl;
    s.pop();
    cout<<"After pop "<<s.front()<<endl;
    cout<<"Size After :"<<s.size()<<endl;
  //  cout<<s.back()<<endl;


}