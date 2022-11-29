#include<iostream>
#include<queue>
using namespace std;
int main(){

    //Maxi heap
    Priority_queue<int> max;
    
    //mini heap
    priority_queue<int, vector<int> ,greater<int> > mini;

    max.push(1);
    max.push(2);
    max.push(5);
    max.push(3);
   // cout<<"Size"<<maxi.size()<<endl;
    int n=max.size();
    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
    }
}