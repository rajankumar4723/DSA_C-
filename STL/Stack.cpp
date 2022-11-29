#include<iostream>
#include<stack>

using namespace std;
int main(){             //LIFO

stack<string>s;
s.push("DSA");
s.push("Rajan");
s.push("Love");
cout<<"TOP elments"<<endl<<s.top();//Top String
cout<<"Size of Stack"<<endl<<s.size()<<endl;//Size
cout<<"Empty or not"<<endl<<s.empty()<<endl;//EMPTY OR 

}